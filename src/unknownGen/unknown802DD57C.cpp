#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void beDataObjInt_registerNow();
extern void *beDataObjInt_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beDataObjInt_create(void *object){
 beDataObjInt_registerNow();
 return meta_createInstance(beDataObjInt_meta,object);
}
void *beDataObjInt_metaObject(){
 if(!beDataObjInt_meta) beDataObjInt_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beDataObjInt_meta;
}
void *beDataObjInt_getMeta(){
 if(!beDataObjInt_meta || !(reinterpret_cast<unsigned int *>(beDataObjInt_meta)[0x24/4]&4)) beDataObjInt_registerNow();
 return beDataObjInt_meta;
}
}
#pragma pop
