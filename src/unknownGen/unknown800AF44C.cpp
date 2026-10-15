#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void *fn_800AC294();
void *fn_800C3A2C(int);
void fn_800C3A9C();
void igTextureAttr_fieldInit();
void igVisualAttribute_register();
extern char igTextureBindAttr_className[];
extern char igTextureAttr_dependencies[];
extern char igTextureAttr_className[];
extern char igTextureBindAttr_vtable[];
extern char igTextureAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char igTextureBindAttr_dependencies[8];
extern char igTextureBindAttr_fieldTypes[8];
extern char igTextureBindAttr_fieldNames[8];
extern char igTextureBindAttr_fieldStorage[8];
extern char igTextureBindAttr_fieldOffsets[8];
extern void *lbl_805621F4;
extern void *igTextureBindAttr_meta;
extern void *igTextureAttr_meta;
void *igTextureBindAttr_getMeta();
void *igTextureBindAttr_vtableRead();
void igTextureBindAttr_arkRegister();
void igTextureBindAttr_register();
void *igTextureBindAttr_getMetaCall();
void igTextureBindAttr_fieldInit();
void fn_800AF44C();
void *fn_800AF4A4();
void *igTextureAttr_getMeta();
void *igTextureAttr_vtableRead();
void igTextureAttr_arkRegister();
void igTextureAttr_register();
void *igTextureAttr_getMetaCall();
}
struct UnknownGenRoot800AF1E0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800AF1E0(){igObject_construct(this);}
};
struct UnknownGenObject800AF1E0 : UnknownGenRoot800AF1E0 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 char unknown10[16];
 inline ~UnknownGenObject800AF1E0(){unknown00=igTextureBindAttr_vtable;}
};
struct UnknownGenRoot800AF51C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800AF51C(){igObject_construct(this);}
};
struct UnknownGenObject800AF51C : UnknownGenRoot800AF51C {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 char unknown10[32];
 UnknownGenRefMember unknown30;
 char unknown34[4];
 UnknownGenRefMember unknown38;
 char unknown3C[4];
 UnknownGenRefMember unknown40;
 char unknown44[4];
 inline ~UnknownGenObject800AF51C(){unknown00=igTextureAttr_vtable;}
};
extern "C" {
void fn_800AF44C(){return fn_800C3A9C();}
}
#pragma pop
