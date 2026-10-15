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
}
#pragma pop
