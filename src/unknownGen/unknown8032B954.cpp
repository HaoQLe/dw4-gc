#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void beNDMWShopDevice_arkRegister();
void *beNDMWItemBaseList_metaObject();
extern char beNDMWShopJunk_fieldTypes[];
extern char beNDMWShopJunk_fieldNames[];
extern char beNDMWShopJunk_fieldStorage[];
extern char beNDMWShopJunk_fieldOffsets[];
extern void *beNDMWShopJunk_meta;
extern void *beNDMWShopDevice_meta;
}
extern "C" {
void *beNDMWShopDevice_create(void *object){
 beNDMWShopDevice_arkRegister();
 return meta_createInstance(beNDMWShopDevice_meta,object);
}
void *beNDMWShopDevice_getMeta(){
 if(!beNDMWShopDevice_meta || !(reinterpret_cast<unsigned int *>(beNDMWShopDevice_meta)[0x24/4]&4)) beNDMWShopDevice_arkRegister();
 return beNDMWShopDevice_meta;
}
}
#pragma pop
