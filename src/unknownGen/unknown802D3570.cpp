#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void beLayerGroupList_arkRegister();
extern void *beLayerGroupList_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beLayerGroupList_metaObject(){
 if(!beLayerGroupList_meta) beLayerGroupList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beLayerGroupList_meta;
}
void *beLayerGroupList_getMeta(){
 if(!beLayerGroupList_meta || !(reinterpret_cast<unsigned int *>(beLayerGroupList_meta)[0x24/4]&4)) beLayerGroupList_arkRegister();
 return beLayerGroupList_meta;
}
}
#pragma pop
