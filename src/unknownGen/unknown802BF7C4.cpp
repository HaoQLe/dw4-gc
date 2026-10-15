#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void beSvSlotDataList_arkRegister();
extern void *beSvSlotDataList_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beSvSlotDataList_metaObject(){
 if(!beSvSlotDataList_meta) beSvSlotDataList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beSvSlotDataList_meta;
}
void *beSvSlotDataList_getMeta(){
 if(!beSvSlotDataList_meta || !(reinterpret_cast<unsigned int *>(beSvSlotDataList_meta)[0x24/4]&4)) beSvSlotDataList_arkRegister();
 return beSvSlotDataList_meta;
}
}
#pragma pop
