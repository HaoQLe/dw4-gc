#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800365B4();
void *fn_80036C40();
void fn_8003EC68(void *,int);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
extern char beNDMWStatusCtrlD0_fieldTypes[];
extern char beNDMWStatusCtrlD0_fieldNames[];
extern char beNDMWStatusCtrlD0_fieldStorage[];
extern char beNDMWStatusCtrlD0_fieldOffsets[];
extern void *beNDMWStatusCtrlD0_meta;
}
extern "C" {
void beNDMWStatusCtrlD0_fieldInit(){
 void *value0=beNDMWStatusCtrlD0_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beNDMWStatusCtrlD0_fieldTypes,8);
 void *value2=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value3=fn_800365B4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+6));
 fn_8003EC68(value4,1);
 void *value5=meta_field(value0,(reinterpret_cast<char *>(value1)+7));
 void *value6=fn_80036C40();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value5)+56)=value6;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value5)+52)=1;
 meta_setupFields(value0,beNDMWStatusCtrlD0_fieldNames,beNDMWStatusCtrlD0_fieldStorage,beNDMWStatusCtrlD0_fieldOffsets,value1);
}
}
#pragma pop
