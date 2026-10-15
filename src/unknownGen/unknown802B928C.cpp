#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void bePlaySEList_registerNow();
extern void *bePlaySEList_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *bePlaySEList_metaObject(){
 if(!bePlaySEList_meta) bePlaySEList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return bePlaySEList_meta;
}
void *bePlaySEList_getMeta(){
 if(!bePlaySEList_meta || !(reinterpret_cast<unsigned int *>(bePlaySEList_meta)[0x24/4]&4)) bePlaySEList_registerNow();
 return bePlaySEList_meta;
}
}
#pragma pop
