#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void beSaveDataDeliver_arkRegister();
extern void *beSaveDataDeliver_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beSaveDataDeliver_metaObject(){
 if(!beSaveDataDeliver_meta) beSaveDataDeliver_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beSaveDataDeliver_meta;
}
void *beSaveDataDeliver_getMeta(){
 if(!beSaveDataDeliver_meta || !(reinterpret_cast<unsigned int *>(beSaveDataDeliver_meta)[0x24/4]&4)) beSaveDataDeliver_arkRegister();
 return beSaveDataDeliver_meta;
}
}
#pragma pop
