#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023FDC();
void *meta_newMetaObject(void *);
void *fn_80037594();
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800CE2F8();
void igCapabilityManager_register();
void igContext_register();
void igNonRefCountedObjectList_register();
void igVisualContext_fieldInit();
extern char igDataList_vtable[];
extern char igNonRefCountedObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igVisualContextCapabilityManager_className[];
extern char igVisualContextList_className[];
extern char lbl_80487FD8[];
extern char igVisualContext_className[];
extern char igVisualContextCapabilityManager_vtable[];
extern char lbl_80492AD0[];
extern char igVisualContextList_vtable[];
extern char lbl_804943FC[];
extern char lbl_8055EA40[8];
extern char lbl_8055EA48[4];
extern char lbl_8055EA4C[4];
extern char lbl_8055EA50[4];
extern char lbl_8055EA54[4];
extern char lbl_8055EA58[8];
extern void *lbl_805621F4;
extern void *igVisualContextCapabilityManager_meta;
extern void *igVisualContextList_meta;
extern void *igVisualContext_meta;
extern void *igCapabilityManager_meta;
void *igVisualContextCapabilityManager_getMeta();
void *igVisualContextCapabilityManager_vtableRead();
void igVisualContextCapabilityManager_registerNow();
void igVisualContextCapabilityManager_register();
void *igVisualContextCapabilityManager_getMetaCall();
void *fn_800CE528();
void igVisualContextCapabilityManager_fieldInit();
void *igVisualContextList_getMeta();
void *igVisualContextList_vtableRead();
void igVisualContextList_registerNow();
void igVisualContextList_register();
void *igVisualContextList_getMetaCall();
void *fn_800CE788();
void *igVisualContext_getMeta();
void igVisualContext_registerNow();
void igVisualContext_register();
void *igVisualContext_getMetaCall();
}
struct UnknownGenRoot800CE3D8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800CE3D8(){fn_8006665C(this);}
};
struct UnknownGenObject800CE3D8 : UnknownGenRoot800CE3D8 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject800CE3D8(){unknown00=igVisualContextCapabilityManager_vtable;}
};
struct UnknownGenObject800CE62C_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *igVisualContextCapabilityManager_create(void *object){
 igVisualContextCapabilityManager_registerNow();
 return meta_createInstance(igVisualContextCapabilityManager_meta,object);
}
void *igVisualContextCapabilityManager_getMeta(){
 if(!igVisualContextCapabilityManager_meta || !(reinterpret_cast<unsigned int *>(igVisualContextCapabilityManager_meta)[0x24/4]&4)) igVisualContextCapabilityManager_registerNow();
 return igVisualContextCapabilityManager_meta;
}
void *igVisualContextCapabilityManager_vtableRead(){
 UnknownGenObject800CE3D8 object;
 object.unknown00=lbl_80492AD0;
 object.unknown00=igVisualContextCapabilityManager_vtable;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igVisualContextCapabilityManager_registerNow(){
 meta_registerNow((int)igVisualContextCapabilityManager_register);
}
void igVisualContextCapabilityManager_register(){
 fn_800CE2F8();
 meta_registerClass(0,(int)&igVisualContextCapabilityManager_meta,(int)igCapabilityManager_register,(int)fn_800CE528,(int)igVisualContextCapabilityManager_getMetaCall,(int)igVisualContextCapabilityManager_className,12,(int)igVisualContextCapabilityManager_vtableRead,(int)igVisualContextCapabilityManager_fieldInit,0,(int)lbl_8055EA40);
}
void *igVisualContextCapabilityManager_getMetaCall(){return igVisualContextCapabilityManager_getMeta();}
void *fn_800CE528(){return igCapabilityManager_meta;}
void igVisualContextCapabilityManager_fieldInit(){
 void *value0=igVisualContextCapabilityManager_meta;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055EA48,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_800CE788();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+38)=0;
 fn_800659C0(value0,lbl_8055EA4C,lbl_8055EA50,lbl_8055EA54,value1);
}
void *igVisualContextList_create(void *object){
 igVisualContextList_registerNow();
 return meta_createInstance(igVisualContextList_meta,object);
}
void *igVisualContextList_getMeta(){
 if(!igVisualContextList_meta || !(reinterpret_cast<unsigned int *>(igVisualContextList_meta)[0x24/4]&4)) igVisualContextList_registerNow();
 return igVisualContextList_meta;
}
void *igVisualContextList_vtableRead(){
 UnknownGenObject800CE62C_0 object;
 fn_8006665C(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igNonRefCountedObjectList_vtable;
 object.unknown00=lbl_804943FC;
 object.unknown00=igVisualContextList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igVisualContextList_registerNow(){
 meta_registerNow((int)igVisualContextList_register);
}
void igVisualContextList_register(){
 fn_800CE2F8();
 meta_registerClass(0,(int)&igVisualContextList_meta,(int)igNonRefCountedObjectList_register,(int)fn_80023FDC,(int)igVisualContextList_getMetaCall,(int)igVisualContextList_className,20,(int)igVisualContextList_vtableRead,0,0,(int)lbl_8055EA58);
}
void *igVisualContextList_getMetaCall(){return igVisualContextList_getMeta();}
void *igVisualContext_create(void *object){
 igVisualContext_registerNow();
 return meta_createInstance(igVisualContext_meta,object);
}
void *fn_800CE788(){
 if(!igVisualContext_meta) igVisualContext_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igVisualContext_meta;
}
void *igVisualContext_getMeta(){
 if(!igVisualContext_meta || !(reinterpret_cast<unsigned int *>(igVisualContext_meta)[0x24/4]&4)) igVisualContext_registerNow();
 return igVisualContext_meta;
}
void igVisualContext_registerNow(){
 meta_registerNow((int)igVisualContext_register);
}
void igVisualContext_register(){
 fn_800CE2F8();
 meta_registerClass(1,(int)&igVisualContext_meta,(int)igContext_register,(int)fn_80037594,(int)igVisualContext_getMetaCall,(int)igVisualContext_className,320,0,(int)igVisualContext_fieldInit,0,(int)lbl_80487FD8);
}
void *igVisualContext_getMetaCall(){return igVisualContext_getMeta();}
}
#pragma pop
