#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void beTargetObj_registerNow();
extern void *beTargetObj_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beTargetObj_create(void *object){
 beTargetObj_registerNow();
 return meta_createInstance(beTargetObj_meta,object);
}
void *beTargetObj_metaObject(){
 if(!beTargetObj_meta) beTargetObj_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beTargetObj_meta;
}
void *beTargetObj_getMeta(){
 if(!beTargetObj_meta || !(reinterpret_cast<unsigned int *>(beTargetObj_meta)[0x24/4]&4)) beTargetObj_registerNow();
 return beTargetObj_meta;
}
}
#pragma pop
