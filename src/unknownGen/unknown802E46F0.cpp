#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void beAsTargetModelDataList_arkRegister();
extern void *beAsTargetModelDataList_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beAsTargetModelDataList_metaObject(){
 if(!beAsTargetModelDataList_meta) beAsTargetModelDataList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beAsTargetModelDataList_meta;
}
void *beAsTargetModelDataList_getMeta(){
 if(!beAsTargetModelDataList_meta || !(reinterpret_cast<unsigned int *>(beAsTargetModelDataList_meta)[0x24/4]&4)) beAsTargetModelDataList_arkRegister();
 return beAsTargetModelDataList_meta;
}
}
#pragma pop
