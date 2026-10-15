#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void beDemoKeepMesList_registerNow();
extern void *beDemoKeepMesList_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beDemoKeepMesList_metaObject(){
 if(!beDemoKeepMesList_meta) beDemoKeepMesList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beDemoKeepMesList_meta;
}
void *beDemoKeepMesList_getMeta(){
 if(!beDemoKeepMesList_meta || !(reinterpret_cast<unsigned int *>(beDemoKeepMesList_meta)[0x24/4]&4)) beDemoKeepMesList_registerNow();
 return beDemoKeepMesList_meta;
}
}
#pragma pop
