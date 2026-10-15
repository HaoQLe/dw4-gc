#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void beSeDataList_arkRegister();
extern void *beSeDataList_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beSeDataList_metaObject(){
 if(!beSeDataList_meta) beSeDataList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beSeDataList_meta;
}
void *beSeDataList_getMeta(){
 if(!beSeDataList_meta || !(reinterpret_cast<unsigned int *>(beSeDataList_meta)[0x24/4]&4)) beSeDataList_arkRegister();
 return beSeDataList_meta;
}
}
#pragma pop
