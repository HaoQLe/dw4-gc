#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void fn_8006665C(void *);
void fn_801BA7A8(void *,short);
void igMorphBase_registerNow();
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
void *igMorphBase_create(void *object){
 igMorphBase_registerNow();
 return meta_createInstance(igMorphBase_meta,object);
}
void *fn_801BA6B8(){
 if(!igMorphBase_meta) igMorphBase_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igMorphBase_meta;
}
void *igMorphBase_getMeta(){
 if(!igMorphBase_meta || !(reinterpret_cast<unsigned int *>(igMorphBase_meta)[0x24/4]&4)) igMorphBase_registerNow();
 return igMorphBase_meta;
}
void *igMorphBase_vtableRead(){
 UnknownGenObject801BA730 object;
 fn_8006665C(&object);
 object.unknown00=igMorphBase_vtable;
 object.unknown08=0;
 object.unknown0C=0;
 object.unknown18=0;
 object.unknown1C=0;
 object.unknown20=0;
 object.unknown24=0;
 object.unknown34=0;
 object.unknown38=0;
 void *result=*reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
 fn_801BA7A8(&object,-1);
 return result;
}
}
#pragma pop
