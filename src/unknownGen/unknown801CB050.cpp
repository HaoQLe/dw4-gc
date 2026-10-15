#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void *fn_801AF130();
void igAnimationCombinerBoneInfo_fieldInit();
void igObjectList_register();
void igObjectPool_register();
void igObject_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igAnimationCombinerBoneInfoPool_className[];
extern char igAnimationCombinerBoneInfoListList_className[];
extern char igAnimationCombinerBoneInfoList_className[];
extern char lbl_804B2208[];
extern char igAnimationCombinerBoneInfo_className[];
extern char igAnimationCombinerBoneInfo_vtable[];
extern char igAnimationCombinerBoneInfoList_vtable[];
extern char lbl_804B6190[];
extern char igAnimationCombinerBoneInfoListList_vtable[];
extern char lbl_804B6258[];
extern char igAnimationCombinerBoneInfoPool_vtable[];
extern char lbl_804B6320[];
extern char igObjectPool_vtable[];
extern char lbl_805609B0[8];
extern char lbl_805609B8[8];
extern char lbl_805609C0[8];
extern void *lbl_805621F4;
extern void *igAnimationCombinerBoneInfoPool_meta;
extern void *igAnimationCombinerBoneInfoListList_meta;
extern void *igAnimationCombinerBoneInfoList_meta;
extern void *igAnimationCombinerBoneInfo_meta;
void *igAnimationCombinerBoneInfoPool_getMeta();
void *igAnimationCombinerBoneInfoPool_vtableRead();
void igAnimationCombinerBoneInfoPool_registerNow();
void igAnimationCombinerBoneInfoPool_register();
void *igAnimationCombinerBoneInfoPool_getMetaCall();
void *igAnimationCombinerBoneInfoListList_getMeta();
void *igAnimationCombinerBoneInfoListList_vtableRead();
void igAnimationCombinerBoneInfoListList_registerNow();
void igAnimationCombinerBoneInfoListList_register();
void *igAnimationCombinerBoneInfoListList_getMetaCall();
void *igAnimationCombinerBoneInfoList_getMeta();
void *igAnimationCombinerBoneInfoList_vtableRead();
void igAnimationCombinerBoneInfoList_registerNow();
void igAnimationCombinerBoneInfoList_register();
void *igAnimationCombinerBoneInfoList_getMetaCall();
void *igAnimationCombinerBoneInfo_getMeta();
void *igAnimationCombinerBoneInfo_vtableRead();
void igAnimationCombinerBoneInfo_registerNow();
void igAnimationCombinerBoneInfo_register();
void *igAnimationCombinerBoneInfo_getMetaCall();
}
struct UnknownGenObject801CB0C4_0 {
 void *unknown00;
 char unknown04[36];
};
struct UnknownGenObject801CB26C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject801CB404_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801CB59C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801CB59C(){fn_8006665C(this);}
};
struct UnknownGenObject801CB59C : UnknownGenRoot801CB59C {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[44];
 inline ~UnknownGenObject801CB59C(){unknown00=igAnimationCombinerBoneInfo_vtable;}
};
extern "C" {
void *igAnimationCombinerBoneInfoPool_create(void *object){
 igAnimationCombinerBoneInfoPool_registerNow();
 return meta_createInstance(igAnimationCombinerBoneInfoPool_meta,object);
}
void *igAnimationCombinerBoneInfoPool_getMeta(){
 if(!igAnimationCombinerBoneInfoPool_meta || !(reinterpret_cast<unsigned int *>(igAnimationCombinerBoneInfoPool_meta)[0x24/4]&4)) igAnimationCombinerBoneInfoPool_registerNow();
 return igAnimationCombinerBoneInfoPool_meta;
}
void *igAnimationCombinerBoneInfoPool_vtableRead(){
 UnknownGenObject801CB0C4_0 object;
 fn_8006665C(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=igObjectPool_vtable;
 object.unknown00=lbl_804B6320;
 object.unknown00=igAnimationCombinerBoneInfoPool_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igAnimationCombinerBoneInfoPool_registerNow(){
 meta_registerNow((int)igAnimationCombinerBoneInfoPool_register);
}
void igAnimationCombinerBoneInfoPool_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igAnimationCombinerBoneInfoPool_meta,(int)igObjectPool_register,(int)fn_801AF130,(int)igAnimationCombinerBoneInfoPool_getMetaCall,(int)igAnimationCombinerBoneInfoPool_className,32,(int)igAnimationCombinerBoneInfoPool_vtableRead,0,0,(int)lbl_805609B0);
}
void *igAnimationCombinerBoneInfoPool_getMetaCall(){return igAnimationCombinerBoneInfoPool_getMeta();}
void *fn_801CB1F4(){
 if(!igAnimationCombinerBoneInfoListList_meta) igAnimationCombinerBoneInfoListList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igAnimationCombinerBoneInfoListList_meta;
}
void *igAnimationCombinerBoneInfoListList_getMeta(){
 if(!igAnimationCombinerBoneInfoListList_meta || !(reinterpret_cast<unsigned int *>(igAnimationCombinerBoneInfoListList_meta)[0x24/4]&4)) igAnimationCombinerBoneInfoListList_registerNow();
 return igAnimationCombinerBoneInfoListList_meta;
}
void *igAnimationCombinerBoneInfoListList_vtableRead(){
 UnknownGenObject801CB26C_0 object;
 fn_8006665C(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804B6258;
 object.unknown00=igAnimationCombinerBoneInfoListList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igAnimationCombinerBoneInfoListList_registerNow(){
 meta_registerNow((int)igAnimationCombinerBoneInfoListList_register);
}
void igAnimationCombinerBoneInfoListList_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igAnimationCombinerBoneInfoListList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igAnimationCombinerBoneInfoListList_getMetaCall,(int)igAnimationCombinerBoneInfoListList_className,20,(int)igAnimationCombinerBoneInfoListList_vtableRead,0,0,(int)lbl_805609B8);
}
void *igAnimationCombinerBoneInfoListList_getMetaCall(){return igAnimationCombinerBoneInfoListList_getMeta();}
void *igAnimationCombinerBoneInfoList_create(void *object){
 igAnimationCombinerBoneInfoList_registerNow();
 return meta_createInstance(igAnimationCombinerBoneInfoList_meta,object);
}
void *igAnimationCombinerBoneInfoList_getMeta(){
 if(!igAnimationCombinerBoneInfoList_meta || !(reinterpret_cast<unsigned int *>(igAnimationCombinerBoneInfoList_meta)[0x24/4]&4)) igAnimationCombinerBoneInfoList_registerNow();
 return igAnimationCombinerBoneInfoList_meta;
}
void *igAnimationCombinerBoneInfoList_vtableRead(){
 UnknownGenObject801CB404_0 object;
 fn_8006665C(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804B6190;
 object.unknown00=igAnimationCombinerBoneInfoList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igAnimationCombinerBoneInfoList_registerNow(){
 meta_registerNow((int)igAnimationCombinerBoneInfoList_register);
}
void igAnimationCombinerBoneInfoList_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igAnimationCombinerBoneInfoList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igAnimationCombinerBoneInfoList_getMetaCall,(int)igAnimationCombinerBoneInfoList_className,20,(int)igAnimationCombinerBoneInfoList_vtableRead,0,0,(int)lbl_805609C0);
}
void *igAnimationCombinerBoneInfoList_getMetaCall(){return igAnimationCombinerBoneInfoList_getMeta();}
void *igAnimationCombinerBoneInfo_create(void *object){
 igAnimationCombinerBoneInfo_registerNow();
 return meta_createInstance(igAnimationCombinerBoneInfo_meta,object);
}
void *igAnimationCombinerBoneInfo_getMeta(){
 if(!igAnimationCombinerBoneInfo_meta || !(reinterpret_cast<unsigned int *>(igAnimationCombinerBoneInfo_meta)[0x24/4]&4)) igAnimationCombinerBoneInfo_registerNow();
 return igAnimationCombinerBoneInfo_meta;
}
void *igAnimationCombinerBoneInfo_vtableRead(){
 UnknownGenObject801CB59C object;
 object.unknown00=igAnimationCombinerBoneInfo_vtable;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igAnimationCombinerBoneInfo_registerNow(){
 meta_registerNow((int)igAnimationCombinerBoneInfo_register);
}
void igAnimationCombinerBoneInfo_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igAnimationCombinerBoneInfo_meta,(int)igObject_register,(int)fn_800237D0,(int)igAnimationCombinerBoneInfo_getMetaCall,(int)igAnimationCombinerBoneInfo_className,60,(int)igAnimationCombinerBoneInfo_vtableRead,(int)igAnimationCombinerBoneInfo_fieldInit,0,(int)lbl_804B2208);
}
void *igAnimationCombinerBoneInfo_getMetaCall(){return igAnimationCombinerBoneInfo_getMeta();}
}
#pragma pop
