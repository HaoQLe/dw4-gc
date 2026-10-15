#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80023CF4();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_801AA6DC();
void *fn_801AF130();
void *fn_801CA478();
void igAnimationState_fieldInit();
void igNamedObject_register();
void igObjectList_register();
void igObjectPool_register();
void igObject_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char lbl_804AAFB8[];
extern char igAnimationSystem_className[];
extern char igAnimationStatePool_className[];
extern char igAnimationStateList_className[];
extern char lbl_804B1B14[];
extern char lbl_804B1B24[];
extern char igAnimationState_className[];
extern char igAnimationState_vtable[];
extern char igAnimationStateList_vtable[];
extern char lbl_804B66F8[];
extern char igAnimationStatePool_vtable[];
extern char lbl_804B67C0[];
extern char igObjectPool_vtable[];
extern char igAnimationSystem_dependencies[8];
extern char igAnimationSystem_fieldTypes[4];
extern char igAnimationSystem_fieldNames[4];
extern char igAnimationSystem_fieldStorage[4];
extern char igAnimationSystem_fieldOffsets[4];
extern char igAnimationStatePool_dependencies[8];
extern char igAnimationStateList_dependencies[8];
extern char lbl_805608D8[7];
extern char igAnimationState_dependencies[8];
extern void *lbl_805621F4;
extern void *igAnimationSystem_meta;
extern void *igAnimationStatePool_meta;
extern void *igAnimationStateList_meta;
extern void *lbl_805653B0;
extern void *lbl_805653B4;
extern void *lbl_805653B8;
extern void *igAnimationState_meta;
void *igAnimationSystem_getMeta();
void igAnimationSystem_arkRegister();
void igAnimationSystem_register();
void *igAnimationSystem_getMetaCall();
void igAnimationSystem_fieldInit();
void *igAnimationStatePool_getMeta();
void *igAnimationStatePool_vtableRead();
void igAnimationStatePool_arkRegister();
void igAnimationStatePool_register();
void *igAnimationStatePool_getMetaCall();
void *igAnimationStateList_getMeta();
void *igAnimationStateList_vtableRead();
void igAnimationStateList_arkRegister();
void igAnimationStateList_register();
void *igAnimationStateList_getMetaCall();
void *igAnimationState_getMeta();
void *igAnimationState_vtableRead();
void igAnimationState_arkRegister();
void igAnimationState_register();
void *igAnimationState_getMetaCall();
}
struct UnknownGenObject801C9534_0 {
 void *unknown00;
 char unknown04[36];
};
struct UnknownGenObject801C96DC_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801C9994 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801C9994(){igObject_construct(this);}
};
struct UnknownGenObject801C9994 : UnknownGenRoot801C9994 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[12];
 UnknownGenRefMember unknown18;
 char unknown1C[92];
 UnknownGenRefMember unknown78;
 char unknown7C[44];
 inline ~UnknownGenObject801C9994(){unknown00=igAnimationState_vtable;}
};
extern "C" {
void *fn_801C9310(){
 if(!igAnimationSystem_meta) igAnimationSystem_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igAnimationSystem_meta;
}
void *igAnimationSystem_getMeta(){
 if(!igAnimationSystem_meta || !(reinterpret_cast<unsigned int *>(igAnimationSystem_meta)[0x24/4]&4)) igAnimationSystem_arkRegister();
 return igAnimationSystem_meta;
}
void igAnimationSystem_arkRegister(){
 meta_registerNow((int)igAnimationSystem_register);
}
void igAnimationSystem_register(){
 fn_801AA6DC();
 meta_registerClass(1,(int)&igAnimationSystem_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)igAnimationSystem_getMetaCall,(int)igAnimationSystem_className,16,0,(int)igAnimationSystem_fieldInit,0,(int)igAnimationSystem_dependencies);
}
void *igAnimationSystem_getMetaCall(){return igAnimationSystem_getMeta();}
void igAnimationSystem_fieldInit(){
 void *value0=igAnimationSystem_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,igAnimationSystem_fieldTypes,1);
 void *value2=meta_field(value0,value1);
 void *value3=fn_801CA478();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 meta_setupFields(value0,igAnimationSystem_fieldNames,igAnimationSystem_fieldStorage,igAnimationSystem_fieldOffsets,value1);
}
void *igAnimationStatePool_create(void *object){
 igAnimationStatePool_arkRegister();
 return meta_createInstance(igAnimationStatePool_meta,object);
}
void *igAnimationStatePool_getMeta(){
 if(!igAnimationStatePool_meta || !(reinterpret_cast<unsigned int *>(igAnimationStatePool_meta)[0x24/4]&4)) igAnimationStatePool_arkRegister();
 return igAnimationStatePool_meta;
}
void *igAnimationStatePool_vtableRead(){
 UnknownGenObject801C9534_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=igObjectPool_vtable;
 object.unknown00=lbl_804B67C0;
 object.unknown00=igAnimationStatePool_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igAnimationStatePool_arkRegister(){
 meta_registerNow((int)igAnimationStatePool_register);
}
void igAnimationStatePool_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igAnimationStatePool_meta,(int)igObjectPool_register,(int)fn_801AF130,(int)igAnimationStatePool_getMetaCall,(int)igAnimationStatePool_className,32,(int)igAnimationStatePool_vtableRead,0,0,(int)igAnimationStatePool_dependencies);
}
void *igAnimationStatePool_getMetaCall(){return igAnimationStatePool_getMeta();}
void *fn_801C9664(){
 if(!igAnimationStateList_meta) igAnimationStateList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igAnimationStateList_meta;
}
void *igAnimationStateList_getMeta(){
 if(!igAnimationStateList_meta || !(reinterpret_cast<unsigned int *>(igAnimationStateList_meta)[0x24/4]&4)) igAnimationStateList_arkRegister();
 return igAnimationStateList_meta;
}
void *igAnimationStateList_vtableRead(){
 UnknownGenObject801C96DC_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804B66F8;
 object.unknown00=igAnimationStateList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igAnimationStateList_arkRegister(){
 meta_registerNow((int)igAnimationStateList_register);
}
void igAnimationStateList_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igAnimationStateList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igAnimationStateList_getMetaCall,(int)igAnimationStateList_className,20,(int)igAnimationStateList_vtableRead,0,0,(int)igAnimationStateList_dependencies);
}
void *igAnimationStateList_getMetaCall(){return igAnimationStateList_getMeta();}
void *fn_801C9800(){
 void *value0;
 if(!lbl_805653B0){
  value0=fn_800635C8(lbl_805608D8,lbl_804B1B14,lbl_804B1B24,4);
  lbl_805653B0=value0;
 }
 return lbl_805653B0;
}
void *fn_801C984C(){
 char *data=lbl_804AAFB8;
 if(!lbl_805653B4) lbl_805653B4=fn_800635C8(data+0x6BDC,data+0x6BAC,data+0x6BC4,0x6);
 return lbl_805653B4;
}
void *fn_801C9898(){
 char *data=lbl_804AAFB8;
 if(!lbl_805653B8) lbl_805653B8=fn_800635C8(data+0x6C10,data+0x6BF8,data+0x6C04,0x3);
 return lbl_805653B8;
}
void *igAnimationState_create(void *object){
 igAnimationState_arkRegister();
 return meta_createInstance(igAnimationState_meta,object);
}
void *fn_801C991C(){
 if(!igAnimationState_meta) igAnimationState_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igAnimationState_meta;
}
void *igAnimationState_getMeta(){
 if(!igAnimationState_meta || !(reinterpret_cast<unsigned int *>(igAnimationState_meta)[0x24/4]&4)) igAnimationState_arkRegister();
 return igAnimationState_meta;
}
void *igAnimationState_vtableRead(){
 UnknownGenObject801C9994 object;
 object.unknown00=igAnimationState_vtable;
 object.unknown08.value=0;
 object.unknown18.value=0;
 object.unknown78.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igAnimationState_arkRegister(){
 meta_registerNow((int)igAnimationState_register);
}
void igAnimationState_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igAnimationState_meta,(int)igObject_register,(int)fn_800237D0,(int)igAnimationState_getMetaCall,(int)igAnimationState_className,160,(int)igAnimationState_vtableRead,(int)igAnimationState_fieldInit,0,(int)igAnimationState_dependencies);
}
void *igAnimationState_getMetaCall(){return igAnimationState_getMeta();}
}
#pragma pop
