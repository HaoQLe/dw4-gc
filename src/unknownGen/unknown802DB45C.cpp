#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void beDemoManagerWorkList_arkRegister();
extern void *beDemoManagerWorkList_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beDemoManagerWorkList_metaObject(){
 if(!beDemoManagerWorkList_meta) beDemoManagerWorkList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beDemoManagerWorkList_meta;
}
void *beDemoManagerWorkList_getMeta(){
 if(!beDemoManagerWorkList_meta || !(reinterpret_cast<unsigned int *>(beDemoManagerWorkList_meta)[0x24/4]&4)) beDemoManagerWorkList_arkRegister();
 return beDemoManagerWorkList_meta;
}
}
#pragma pop
