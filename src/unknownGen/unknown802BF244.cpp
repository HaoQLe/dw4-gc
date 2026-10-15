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
extern char lbl_804CFC8C[];
extern char lbl_804CFC94[];
extern char lbl_804CFC9C[];
extern char lbl_804CFCA4[];
extern void *beSvFileMakeApi_meta;
}
extern "C" {
void beSvFileMakeApi_fieldInit(){
 void *value0=beSvFileMakeApi_meta;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804CFC8C,2);
 void *value2=fn_800658E4(value0,value1);
 void *value3=beSvPlatBaseData_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=beSaveMemoryObj_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 fn_800659C0(value0,lbl_804CFC94,lbl_804CFC9C,lbl_804CFCA4,value1);
}
}
#pragma pop
