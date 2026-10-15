#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void beLoadIntf2ComMdlDataList_arkRegister();
extern void *beLoadIntf2ComMdlDataList_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beLoadIntf2ComMdlDataList_metaObject(){
 if(!beLoadIntf2ComMdlDataList_meta) beLoadIntf2ComMdlDataList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beLoadIntf2ComMdlDataList_meta;
}
void *beLoadIntf2ComMdlDataList_getMeta(){
 if(!beLoadIntf2ComMdlDataList_meta || !(reinterpret_cast<unsigned int *>(beLoadIntf2ComMdlDataList_meta)[0x24/4]&4)) beLoadIntf2ComMdlDataList_arkRegister();
 return beLoadIntf2ComMdlDataList_meta;
}
}
#pragma pop
