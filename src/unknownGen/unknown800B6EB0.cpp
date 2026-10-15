#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800ABC8C();
void *fn_800ABEF8();
void *fn_800AC294();
void igAttrDefaultManager_register();
void igFogAttr_fieldInit();
void igVisualAttribute_register();
extern char igGenericAttrDefaultManager_className[];
extern char igFogStateAttr_className[];
extern char igFogAttr_className[];
extern char igGenericAttrDefaultManager_vtable[];
extern char igFogStateAttr_vtable[];
extern char igFogAttr_vtable[];
extern char lbl_8047D514[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055E474[4];
extern char lbl_8055E478[4];
extern char lbl_8055E47C[4];
extern char lbl_8055E480[4];
extern void *igGenericAttrDefaultManager_meta;
extern void *igFogStateAttr_meta;
extern void *igFogAttr_meta;
void *igGenericAttrDefaultManager_getMeta();
void *igGenericAttrDefaultManager_vtableRead();
void igGenericAttrDefaultManager_registerNow();
void igGenericAttrDefaultManager_register();
void *igGenericAttrDefaultManager_getMetaCall();
void *igFogStateAttr_getMeta();
void *igFogStateAttr_vtableRead();
void igFogStateAttr_registerNow();
void igFogStateAttr_register();
void *igFogStateAttr_getMetaCall();
void igFogStateAttr_fieldInit();
void *igFogAttr_getMeta();
void *igFogAttr_vtableRead();
void igFogAttr_registerNow();
void igFogAttr_register();
void *igFogAttr_getMetaCall();
}
struct UnknownGenObject800B6F24_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenObject800B705C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B7210_0 {
 void *unknown00;
 char unknown04[52];
};
extern "C" {
void *igGenericAttrDefaultManager_create(void *object){
 igGenericAttrDefaultManager_registerNow();
 return meta_createInstance(igGenericAttrDefaultManager_meta,object);
}
void *igGenericAttrDefaultManager_getMeta(){
 if(!igGenericAttrDefaultManager_meta || !(reinterpret_cast<unsigned int *>(igGenericAttrDefaultManager_meta)[0x24/4]&4)) igGenericAttrDefaultManager_registerNow();
 return igGenericAttrDefaultManager_meta;
}
void *igGenericAttrDefaultManager_vtableRead(){
 UnknownGenObject800B6F24_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D514;
 object.unknown00=igGenericAttrDefaultManager_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igGenericAttrDefaultManager_registerNow(){
 meta_registerNow((int)igGenericAttrDefaultManager_register);
}
void igGenericAttrDefaultManager_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igGenericAttrDefaultManager_meta,(int)igAttrDefaultManager_register,(int)fn_800ABEF8,(int)igGenericAttrDefaultManager_getMetaCall,(int)igGenericAttrDefaultManager_className,8,(int)igGenericAttrDefaultManager_vtableRead,0,0,0);
}
void *igGenericAttrDefaultManager_getMetaCall(){return igGenericAttrDefaultManager_getMeta();}
void *igFogStateAttr_getMeta(){
 if(!igFogStateAttr_meta || !(reinterpret_cast<unsigned int *>(igFogStateAttr_meta)[0x24/4]&4)) igFogStateAttr_registerNow();
 return igFogStateAttr_meta;
}
void *igFogStateAttr_vtableRead(){
 UnknownGenObject800B705C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igFogStateAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igFogStateAttr_registerNow(){
 meta_registerNow((int)igFogStateAttr_register);
}
void igFogStateAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igFogStateAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igFogStateAttr_getMetaCall,(int)igFogStateAttr_className,16,(int)igFogStateAttr_vtableRead,(int)igFogStateAttr_fieldInit,0,0);
}
void *igFogStateAttr_getMetaCall(){return igFogStateAttr_getMeta();}
void igFogStateAttr_fieldInit(){
 void *value0=igFogStateAttr_meta;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055E474,1);
 fn_800659C0(value0,lbl_8055E478,lbl_8055E47C,lbl_8055E480,value1);
}
void *igFogAttr_getMeta(){
 if(!igFogAttr_meta || !(reinterpret_cast<unsigned int *>(igFogAttr_meta)[0x24/4]&4)) igFogAttr_registerNow();
 return igFogAttr_meta;
}
void *igFogAttr_vtableRead(){
 UnknownGenObject800B7210_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igFogAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igFogAttr_registerNow(){
 meta_registerNow((int)igFogAttr_register);
}
void igFogAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igFogAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igFogAttr_getMetaCall,(int)igFogAttr_className,44,(int)igFogAttr_vtableRead,(int)igFogAttr_fieldInit,0,0);
}
void *igFogAttr_getMetaCall(){return igFogAttr_getMeta();}
}
#pragma pop
