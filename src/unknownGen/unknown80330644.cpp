#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800365B4();
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beNDMWWindowCtrl_metaObject();
extern char beNDMWStatusSubMenu_fieldTypes[];
extern char beNDMWStatusSubMenu_fieldNames[];
extern char beNDMWStatusSubMenu_fieldStorage[];
extern char beNDMWStatusSubMenu_fieldOffsets[];
extern void *beNDMWStatusSubMenu_meta;
}
extern "C" {
void beNDMWStatusSubMenu_fieldInit(){
 void *value0=beNDMWStatusSubMenu_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beNDMWStatusSubMenu_fieldTypes,5);
 void *value2=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value3=beNDMWWindowCtrl_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+3));
 void *value5=fn_800365B4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 void *value6=meta_field(value0,(reinterpret_cast<char *>(value1)+4));
 void *value7=fn_800365B4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value6)+52)=1;
 meta_setupFields(value0,beNDMWStatusSubMenu_fieldNames,beNDMWStatusSubMenu_fieldStorage,beNDMWStatusSubMenu_fieldOffsets,value1);
}
}
#pragma pop
