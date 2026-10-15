#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void beWaterMove_arkRegister();
extern void *beWaterMove_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beWaterMove_metaObject(){
 if(!beWaterMove_meta) beWaterMove_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beWaterMove_meta;
}
void *beWaterMove_getMeta(){
 if(!beWaterMove_meta || !(reinterpret_cast<unsigned int *>(beWaterMove_meta)[0x24/4]&4)) beWaterMove_arkRegister();
 return beWaterMove_meta;
}
}
#pragma pop
