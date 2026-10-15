#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void beHitLandModelOrder_arkRegister();
extern char beHitLandModelTraversal_fieldTypes[];
extern char beHitLandModelTraversal_fieldNames[];
extern char beHitLandModelTraversal_fieldStorage[];
extern char beHitLandModelTraversal_fieldOffsets[];
extern void *beHitLandModelTraversal_meta;
extern void *beHitLandModelOrder_meta;
extern void *lbl_805621F4;
void *beHitLandModelOrder_metaObject();
}
extern "C" {
void *beHitLandModelOrder_create(void *object){
 beHitLandModelOrder_arkRegister();
 return meta_createInstance(beHitLandModelOrder_meta,object);
}
void *beHitLandModelOrder_metaObject(){
 if(!beHitLandModelOrder_meta) beHitLandModelOrder_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beHitLandModelOrder_meta;
}
void *beHitLandModelOrder_getMeta(){
 if(!beHitLandModelOrder_meta || !(reinterpret_cast<unsigned int *>(beHitLandModelOrder_meta)[0x24/4]&4)) beHitLandModelOrder_arkRegister();
 return beHitLandModelOrder_meta;
}
}
#pragma pop
