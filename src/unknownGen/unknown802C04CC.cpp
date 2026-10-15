#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void beSvDeliver_arkRegister();
extern void *beSvDeliver_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beSvDeliver_metaObject(){
 if(!beSvDeliver_meta) beSvDeliver_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beSvDeliver_meta;
}
void *beSvDeliver_getMeta(){
 if(!beSvDeliver_meta || !(reinterpret_cast<unsigned int *>(beSvDeliver_meta)[0x24/4]&4)) beSvDeliver_arkRegister();
 return beSvDeliver_meta;
}
}
#pragma pop
