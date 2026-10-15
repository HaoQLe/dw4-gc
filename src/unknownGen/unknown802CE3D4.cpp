#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void beMessengerWorkList_arkRegister();
extern void *beMessengerWorkList_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beMessengerWorkList_metaObject(){
 if(!beMessengerWorkList_meta) beMessengerWorkList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beMessengerWorkList_meta;
}
void *beMessengerWorkList_getMeta(){
 if(!beMessengerWorkList_meta || !(reinterpret_cast<unsigned int *>(beMessengerWorkList_meta)[0x24/4]&4)) beMessengerWorkList_arkRegister();
 return beMessengerWorkList_meta;
}
}
#pragma pop
