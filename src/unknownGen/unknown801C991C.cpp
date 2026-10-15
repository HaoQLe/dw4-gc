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
