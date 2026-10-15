#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void igAppearanceListList_arkRegister();
extern void *igAppearanceListList_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *igAppearanceListList_metaObject(){
 if(!igAppearanceListList_meta) igAppearanceListList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igAppearanceListList_meta;
}
void *igAppearanceListList_getMeta(){
 if(!igAppearanceListList_meta || !(reinterpret_cast<unsigned int *>(igAppearanceListList_meta)[0x24/4]&4)) igAppearanceListList_arkRegister();
 return igAppearanceListList_meta;
}
}
#pragma pop
