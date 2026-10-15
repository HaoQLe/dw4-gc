#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void beNDMWShinkaObjectList_arkRegister();
extern void *beNDMWShinkaObjectList_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beNDMWShinkaObjectList_metaObject(){
 if(!beNDMWShinkaObjectList_meta) beNDMWShinkaObjectList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beNDMWShinkaObjectList_meta;
}
void *beNDMWShinkaObjectList_getMeta(){
 if(!beNDMWShinkaObjectList_meta || !(reinterpret_cast<unsigned int *>(beNDMWShinkaObjectList_meta)[0x24/4]&4)) beNDMWShinkaObjectList_arkRegister();
 return beNDMWShinkaObjectList_meta;
}
}
#pragma pop
