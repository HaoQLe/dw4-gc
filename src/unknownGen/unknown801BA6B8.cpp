#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void igObject_construct(void *);
void fn_801BA7A8(void *,short);
void igMorphBase_arkRegister();
extern char igMorphBase_vtable[];
extern void *lbl_805621F4;
extern void *igMorphBase_meta;
}
struct UnknownGenObject801BA730 {
 void *unknown00;
 char unknown04[4];
 int unknown08;
 int unknown0C;
 char unknown10[8];
 int unknown18;
 int unknown1C;
 int unknown20;
 int unknown24;
 char unknown28[12];
 int unknown34;
 int unknown38;
 char unknown3C[4];
};
extern "C" {
void *fn_801BA6B8(){
 if(!igMorphBase_meta) igMorphBase_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igMorphBase_meta;
}
}
#pragma pop
