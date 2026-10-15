#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *beSvPlatBaseData_metaObject();
void *beSaveMemoryObj_metaObject();
extern char lbl_804CFC00[];
extern char lbl_804CFC08[];
extern char lbl_804CFC10[];
extern char lbl_804CFC18[];
extern void *beSvWriteMediaApi_meta;
}
extern "C" {
void beSvWriteMediaApi_fieldInit(){
 void *value0=beSvWriteMediaApi_meta;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804CFC00,2);
 void *value2=fn_800658E4(value0,value1);
 void *value3=beSvPlatBaseData_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=beSaveMemoryObj_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 fn_800659C0(value0,lbl_804CFC08,lbl_804CFC10,lbl_804CFC18,value1);
}
}
#pragma pop
