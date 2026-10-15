#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void beNumVerDataList_arkRegister();
extern void *beNumVerDataList_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beNumVerDataList_metaObject(){
 if(!beNumVerDataList_meta) beNumVerDataList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beNumVerDataList_meta;
}
void *beNumVerDataList_getMeta(){
 if(!beNumVerDataList_meta || !(reinterpret_cast<unsigned int *>(beNumVerDataList_meta)[0x24/4]&4)) beNumVerDataList_arkRegister();
 return beNumVerDataList_meta;
}
}
#pragma pop
