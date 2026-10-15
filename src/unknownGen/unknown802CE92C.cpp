#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void beMessengerGroupList_arkRegister();
extern void *beMessengerGroupList_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beMessengerGroupList_metaObject(){
 if(!beMessengerGroupList_meta) beMessengerGroupList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beMessengerGroupList_meta;
}
void *beMessengerGroupList_getMeta(){
 if(!beMessengerGroupList_meta || !(reinterpret_cast<unsigned int *>(beMessengerGroupList_meta)[0x24/4]&4)) beMessengerGroupList_arkRegister();
 return beMessengerGroupList_meta;
}
}
#pragma pop
