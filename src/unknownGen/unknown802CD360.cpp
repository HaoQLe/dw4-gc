#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beMeterCtrlInfoList_registerNow();
void *fn_80307E6C();
extern void *beMeterCtrlInfoList_meta;
}
extern "C" {
void *fn_802CD360(){return fn_80307E6C();}
void *beMeterCtrlInfoList_getMeta(){
 if(!beMeterCtrlInfoList_meta || !(reinterpret_cast<unsigned int *>(beMeterCtrlInfoList_meta)[0x24/4]&4)) beMeterCtrlInfoList_registerNow();
 return beMeterCtrlInfoList_meta;
}
}
#pragma pop
