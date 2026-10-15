#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void beNDMWAfsSetupDataList_arkRegister();
extern void *beNDMWAfsSetupDataList_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beNDMWAfsSetupDataList_metaObject(){
 if(!beNDMWAfsSetupDataList_meta) beNDMWAfsSetupDataList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beNDMWAfsSetupDataList_meta;
}
void *beNDMWAfsSetupDataList_getMeta(){
 if(!beNDMWAfsSetupDataList_meta || !(reinterpret_cast<unsigned int *>(beNDMWAfsSetupDataList_meta)[0x24/4]&4)) beNDMWAfsSetupDataList_arkRegister();
 return beNDMWAfsSetupDataList_meta;
}
}
#pragma pop
