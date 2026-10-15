#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void beTimerDataList_arkRegister();
extern void *beTimerDataList_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beTimerDataList_metaObject(){
 if(!beTimerDataList_meta) beTimerDataList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beTimerDataList_meta;
}
void *beTimerDataList_getMeta(){
 if(!beTimerDataList_meta || !(reinterpret_cast<unsigned int *>(beTimerDataList_meta)[0x24/4]&4)) beTimerDataList_arkRegister();
 return beTimerDataList_meta;
}
}
#pragma pop
