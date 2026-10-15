#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8003EC68(void *,int);
void fn_80053650(void *,int);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beSystem_metaObject();
void *bePadManager_metaObject();
void *beNDMWMcUtilCtrl_metaObject();
extern char beNDMWLogo_fieldTypes[];
extern char beNDMWLogo_fieldNames[];
extern char beNDMWLogo_fieldStorage[];
extern char beNDMWLogo_fieldOffsets[];
extern void *beNDMWLogo_meta;
}
extern "C" {
void beNDMWLogo_fieldInit(){
 void *value0=beNDMWLogo_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beNDMWLogo_fieldTypes,11);
 void *value2=meta_field(value0,value1);
 void *value3=bePadManager_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+60)=0;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=beSystem_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+60)=0;
 void *value6=meta_field(value0,(reinterpret_cast<char *>(value1)+2));
 void *value7=beNDMWMcUtilCtrl_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 void *value8=meta_field(value0,(reinterpret_cast<char *>(value1)+6));
 fn_8003EC68(value8,1);
 void *value9=meta_field(value0,(reinterpret_cast<char *>(value1)+9));
 fn_80053650(value9,-1);
 meta_setupFields(value0,beNDMWLogo_fieldNames,beNDMWLogo_fieldStorage,beNDMWLogo_fieldOffsets,value1);
}
}
#pragma pop
