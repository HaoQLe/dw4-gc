#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void beLuaDataList_arkRegister();
extern void *beLuaDataList_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beLuaDataList_metaObject(){
 if(!beLuaDataList_meta) beLuaDataList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beLuaDataList_meta;
}
void *beLuaDataList_getMeta(){
 if(!beLuaDataList_meta || !(reinterpret_cast<unsigned int *>(beLuaDataList_meta)[0x24/4]&4)) beLuaDataList_arkRegister();
 return beLuaDataList_meta;
}
}
#pragma pop
