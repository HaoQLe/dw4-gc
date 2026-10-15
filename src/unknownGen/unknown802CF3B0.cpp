#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void beMessengerArgDataList_arkRegister();
extern void *beMessengerArgDataList_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beMessengerArgDataList_metaObject(){
 if(!beMessengerArgDataList_meta) beMessengerArgDataList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beMessengerArgDataList_meta;
}
void *beMessengerArgDataList_getMeta(){
 if(!beMessengerArgDataList_meta || !(reinterpret_cast<unsigned int *>(beMessengerArgDataList_meta)[0x24/4]&4)) beMessengerArgDataList_arkRegister();
 return beMessengerArgDataList_meta;
}
}
#pragma pop
