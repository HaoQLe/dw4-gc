#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void igSubTextureBindAttr_fieldInit();
void igTextureBindAttr_register();
extern char igSubTextureBindAttr_className[];
extern char igTextureBindAttr_vtable[];
extern char igSubTextureBindAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *igTextureBindAttr_meta;
extern void *igSubTextureBindAttr_meta;
void *igSubTextureBindAttr_getMeta();
void *igSubTextureBindAttr_vtableRead();
void igSubTextureBindAttr_arkRegister();
void igSubTextureBindAttr_register();
void *igSubTextureBindAttr_getMetaCall();
void *igSubTextureBindAttr_parentMeta();
}
struct UnknownGenRoot800AFFCC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800AFFCC(){igObject_construct(this);}
};
struct UnknownGenObject800AFFCC_0 : UnknownGenRoot800AFFCC {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject800AFFCC_0(){unknown00=igTextureBindAttr_vtable;}
};
struct UnknownGenObject800AFFCC : UnknownGenObject800AFFCC_0 {
 char unknown10[32];
 inline ~UnknownGenObject800AFFCC(){unknown00=igSubTextureBindAttr_vtable;}
};
extern "C" {
void *igSubTextureBindAttr_parentMeta(){return igTextureBindAttr_meta;}
}
#pragma pop
