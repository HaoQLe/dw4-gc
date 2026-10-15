#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *bePadManager_metaObject();
void beNDMWMdlPlayer2InfoWork_arkRegister();
extern char beNDMWMdlPlayer2_fieldTypes[];
extern char beNDMWMdlPlayer2_fieldNames[];
extern char beNDMWMdlPlayer2_fieldStorage[];
extern char beNDMWMdlPlayer2_fieldOffsets[];
extern void *beNDMWMdlPlayer2_meta;
extern void *beNDMWMdlPlayer2InfoWork_meta;
}
extern "C" {
void beNDMWMdlPlayer2_fieldInit(){
 void *value0=beNDMWMdlPlayer2_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beNDMWMdlPlayer2_fieldTypes,1);
 void *value2=meta_field(value0,value1);
 void *value3=bePadManager_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+60)=0;
 meta_setupFields(value0,beNDMWMdlPlayer2_fieldNames,beNDMWMdlPlayer2_fieldStorage,beNDMWMdlPlayer2_fieldOffsets,value1);
}
void *beNDMWMdlPlayer2InfoWork_create(void *object){
 beNDMWMdlPlayer2InfoWork_arkRegister();
 return meta_createInstance(beNDMWMdlPlayer2InfoWork_meta,object);
}
void *beNDMWMdlPlayer2InfoWork_getMeta(){
 if(!beNDMWMdlPlayer2InfoWork_meta || !(reinterpret_cast<unsigned int *>(beNDMWMdlPlayer2InfoWork_meta)[0x24/4]&4)) beNDMWMdlPlayer2InfoWork_arkRegister();
 return beNDMWMdlPlayer2InfoWork_meta;
}
}
#pragma pop
