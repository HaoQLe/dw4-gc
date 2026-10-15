#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void beMessengerDelayList_registerNow();
extern void *beMessengerDelayList_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beMessengerDelayList_metaObject(){
 if(!beMessengerDelayList_meta) beMessengerDelayList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beMessengerDelayList_meta;
}
void *beMessengerDelayList_getMeta(){
 if(!beMessengerDelayList_meta || !(reinterpret_cast<unsigned int *>(beMessengerDelayList_meta)[0x24/4]&4)) beMessengerDelayList_registerNow();
 return beMessengerDelayList_meta;
}
}
#pragma pop
