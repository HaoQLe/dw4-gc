#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void beTimer_registerNow();
extern void *beTimer_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beTimer_create(void *object){
 beTimer_registerNow();
 return meta_createInstance(beTimer_meta,object);
}
void *beTimer_metaObject(){
 if(!beTimer_meta) beTimer_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beTimer_meta;
}
void *beTimer_getMeta(){
 if(!beTimer_meta || !(reinterpret_cast<unsigned int *>(beTimer_meta)[0x24/4]&4)) beTimer_registerNow();
 return beTimer_meta;
}
}
#pragma pop
