#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800365B4();
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
extern char beNDMWStatusCtrlSendBit_fieldTypes[];
extern char beNDMWStatusCtrlSendBit_fieldNames[];
extern char beNDMWStatusCtrlSendBit_fieldStorage[];
extern char beNDMWStatusCtrlSendBit_fieldOffsets[];
extern void *beNDMWStatusCtrlSendBit_meta;
}
extern "C" {
void beNDMWStatusCtrlSendBit_fieldInit(){
 void *value0=beNDMWStatusCtrlSendBit_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beNDMWStatusCtrlSendBit_fieldTypes,4);
 void *value2=meta_field(value0,(reinterpret_cast<char *>(value1)+2));
 void *value3=fn_800365B4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 meta_setupFields(value0,beNDMWStatusCtrlSendBit_fieldNames,beNDMWStatusCtrlSendBit_fieldStorage,beNDMWStatusCtrlSendBit_fieldOffsets,value1);
}
}
#pragma pop
