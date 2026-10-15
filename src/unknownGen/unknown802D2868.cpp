#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void igLightSetList_arkRegister();
extern void *igLightSetList_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *igLightSetList_metaObject(){
 if(!igLightSetList_meta) igLightSetList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igLightSetList_meta;
}
void *igLightSetList_getMeta(){
 if(!igLightSetList_meta || !(reinterpret_cast<unsigned int *>(igLightSetList_meta)[0x24/4]&4)) igLightSetList_arkRegister();
 return igLightSetList_meta;
}
}
#pragma pop
