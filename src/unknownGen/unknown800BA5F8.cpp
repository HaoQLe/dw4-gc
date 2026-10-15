#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void *fn_800AC294();
void igBlendFunctionAttr_fieldInit();
void igVisualAttribute_register();
extern char igVisualContextAttrDefaultManager_className[];
extern char igBlendFunctionAttr_className[];
extern char igBlendFunctionAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char igBlendFunctionAttr_dependencies[8];
extern void *lbl_805621F4;
extern void *lbl_80562A08;
extern void *lbl_80562A0C;
extern void *igBlendFunctionAttr_meta;
void *igBlendFunctionAttr_getMeta();
void *igBlendFunctionAttr_vtableRead();
void igBlendFunctionAttr_arkRegister();
void igBlendFunctionAttr_register();
void *igBlendFunctionAttr_getMetaCall();
}
struct UnknownGenRoot800BA740 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800BA740(){igObject_construct(this);}
};
struct UnknownGenObject800BA740 : UnknownGenRoot800BA740 {
 char unknown04[20];
 UnknownGenRefMember unknown18;
 char unknown1C[36];
 inline ~UnknownGenObject800BA740(){unknown00=igBlendFunctionAttr_vtable;}
};
extern "C" {
void *fn_800BA5F8(){
 char *data=igVisualContextAttrDefaultManager_className;
 if(!lbl_80562A08) lbl_80562A08=fn_800635C8(data+0x211C,data+0x2104,data+0x2110,0x3);
 return lbl_80562A08;
}
void *fn_800BA644(){
 char *data=igVisualContextAttrDefaultManager_className;
 if(!lbl_80562A0C) lbl_80562A0C=fn_800635C8(data+0x21A8,data+0x2190,data+0x219C,0x3);
 return lbl_80562A0C;
}
}
#pragma pop
