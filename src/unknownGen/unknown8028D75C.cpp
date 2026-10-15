#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void igObject_construct(void *);
void fn_8028D884(void *,short);
void igCollisionGrid_registerNow();
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
void *igCollisionGrid_create(void *object){
 igCollisionGrid_registerNow();
 return meta_createInstance(igCollisionGrid_meta,object);
}
void *fn_8028D794(){
 if(!igCollisionGrid_meta) igCollisionGrid_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igCollisionGrid_meta;
}
void *igCollisionGrid_getMeta(){
 if(!igCollisionGrid_meta || !(reinterpret_cast<unsigned int *>(igCollisionGrid_meta)[0x24/4]&4)) igCollisionGrid_registerNow();
 return igCollisionGrid_meta;
}
void *igCollisionGrid_vtableRead(){
 UnknownGenObject8028D80C object;
 igObject_construct(&object);
 object.unknown00=igCollisionGrid_vtable;
 object.unknown08=0;
 object.unknown0C=0;
 object.unknown24=0;
 object.unknown28=0;
 object.unknown2C=0;
 object.unknown30=0;
 object.unknown34=0;
 object.unknown38=0;
 void *result=*reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
 fn_8028D884(&object,-1);
 return result;
}
}
#pragma pop
