#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void igOverrideAttrSet_arkRegister();
extern void *lbl_805621F4;
extern void *igOverrideAttrSet_meta;
}
extern "C" {
void *fn_801B67B0(){
 if(!igOverrideAttrSet_meta) igOverrideAttrSet_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igOverrideAttrSet_meta;
}
void *igOverrideAttrSet_getMeta(){
 if(!igOverrideAttrSet_meta || !(reinterpret_cast<unsigned int *>(igOverrideAttrSet_meta)[0x24/4]&4)) igOverrideAttrSet_arkRegister();
 return igOverrideAttrSet_meta;
}
}
#pragma pop
