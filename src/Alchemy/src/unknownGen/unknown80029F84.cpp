#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void igMetaObject_arkRegister();
void *fn_800607F4(void *);
extern void *igMetaObject_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_80029F84(){
 if(!igMetaObject_meta) igMetaObject_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igMetaObject_meta;
}
void *igMetaObject_getMeta(){
 if(!igMetaObject_meta || !(reinterpret_cast<unsigned int *>(igMetaObject_meta)[0x24/4]&4)) igMetaObject_arkRegister();
 return igMetaObject_meta;
}
}
#pragma pop
