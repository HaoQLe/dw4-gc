#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void beNumVerInsideDataList_arkRegister();
extern void *beNumVerInsideDataList_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beNumVerInsideDataList_metaObject(){
 if(!beNumVerInsideDataList_meta) beNumVerInsideDataList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beNumVerInsideDataList_meta;
}
void *beNumVerInsideDataList_getMeta(){
 if(!beNumVerInsideDataList_meta || !(reinterpret_cast<unsigned int *>(beNumVerInsideDataList_meta)[0x24/4]&4)) beNumVerInsideDataList_arkRegister();
 return beNumVerInsideDataList_meta;
}
}
#pragma pop
