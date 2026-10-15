#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void beNDMWItemImportant_arkRegister();
extern char beNDMWItemWaza_fieldTypes[];
extern char beNDMWItemWaza_fieldNames[];
extern char beNDMWItemWaza_fieldStorage[];
extern char beNDMWItemWaza_fieldOffsets[];
extern void *beNDMWItemWaza_meta;
extern void *beNDMWItemImportant_meta;
}
extern "C" {
void beNDMWItemWaza_fieldInit(){
 void *meta=beNDMWItemWaza_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,beNDMWItemWaza_fieldTypes,0x1);
 meta_setupFields(meta,beNDMWItemWaza_fieldNames,beNDMWItemWaza_fieldStorage,beNDMWItemWaza_fieldOffsets,field);
}
void *beNDMWItemImportant_create(void *object){
 beNDMWItemImportant_arkRegister();
 return meta_createInstance(beNDMWItemImportant_meta,object);
}
void *beNDMWItemImportant_getMeta(){
 if(!beNDMWItemImportant_meta || !(reinterpret_cast<unsigned int *>(beNDMWItemImportant_meta)[0x24/4]&4)) beNDMWItemImportant_arkRegister();
 return beNDMWItemImportant_meta;
}
}
#pragma pop
