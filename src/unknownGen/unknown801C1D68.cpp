#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *meta_newMetaObject(void *);
void fn_8003EC68(void *,int);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void fn_80065D94(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_801AA6DC();
void *fn_801C20FC();
void *fn_801E57B8();
void *fn_801E57DC();
void igAnimationState_register();
void igEnbayaAnimationSource_fieldInit();
void igObject_register();
extern char lbl_804AAFB8[];
extern char igEnbayaAnimationState_className[];
extern char igEnbayaAnimationSource_className[];
extern char igEnbayaAnimationState_vtable[];
extern char igEnbayaAnimationSource_vtable[];
extern char igAnimationState_vtable[];
extern char igEnbayaAnimationState_fieldTypes[8];
extern char igEnbayaAnimationState_fieldNames[8];
extern char igEnbayaAnimationState_fieldStorage[8];
extern char igEnbayaAnimationState_fieldOffsets[8];
extern void *lbl_805621F4;
extern void *igEnbayaAnimationState_meta;
extern void *lbl_80564FA0;
extern void *igEnbayaAnimationSource_meta;
extern void *igAnimationState_meta;
void *igEnbayaAnimationState_getMeta();
void *igEnbayaAnimationState_vtableRead();
void igEnbayaAnimationState_arkRegister();
void igEnbayaAnimationState_register();
void *igEnbayaAnimationState_getMetaCall();
void *igEnbayaAnimationState_parentMeta();
void igEnbayaAnimationState_fieldInit();
void *fn_801C1D68();
void *fn_801C1D88();
void *igEnbayaAnimationSource_getMeta();
void *igEnbayaAnimationSource_vtableRead();
void igEnbayaAnimationSource_arkRegister();
void igEnbayaAnimationSource_register();
void *igEnbayaAnimationSource_getMetaCall();
}
struct UnknownGenRoot801C1AF4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801C1AF4(){igObject_construct(this);}
};
struct UnknownGenObject801C1AF4_0 : UnknownGenRoot801C1AF4 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[12];
 UnknownGenRefMember unknown18;
 char unknown1C[92];
 UnknownGenRefMember unknown78;
 inline ~UnknownGenObject801C1AF4_0(){unknown00=igAnimationState_vtable;}
};
struct UnknownGenObject801C1AF4 : UnknownGenObject801C1AF4_0 {
 char unknown7C[44];
 inline ~UnknownGenObject801C1AF4(){unknown00=igEnbayaAnimationState_vtable;}
};
struct UnknownGenObject801C1EA4_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *fn_801C1D68(){return fn_801E57B8();}
void *fn_801C1D88(){return fn_801E57DC();}
void *fn_801C1DA8(){
 char *data=lbl_804AAFB8;
 if(!lbl_80564FA0) lbl_80564FA0=fn_800635C8(data+0x7A0,data+0x4B9C,data+0x4BB0,0x5);
 return lbl_80564FA0;
}
}
#pragma pop
