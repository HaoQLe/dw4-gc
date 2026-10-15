#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void igObject_construct(void *);
void fn_8028D884(void *,short);
void igCollisionGrid_arkRegister();
extern char igCollisionGrid_vtable[];
extern void *lbl_805621F4;
extern void *igCollisionGrid_meta;
}
struct UnknownGenObject8028D80C {
 void *unknown00;
 char unknown04[4];
 int unknown08;
 int unknown0C;
 char unknown10[20];
 int unknown24;
 int unknown28;
 int unknown2C;
 int unknown30;
 int unknown34;
 int unknown38;
 char unknown3C[20];
};
extern "C" {
void *fn_8028D794(){
 if(!igCollisionGrid_meta) igCollisionGrid_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igCollisionGrid_meta;
}
}
#pragma pop
