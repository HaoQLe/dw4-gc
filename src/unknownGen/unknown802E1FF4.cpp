#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_801AC2D4();
void *fn_801ADB98();
void *fn_801BFF38();
extern char lbl_804D2A70[];
extern char lbl_804D2A84[];
extern char lbl_804D2A98[];
extern char lbl_804D2AAC[];
extern void *lbl_8053561C;
}
extern "C" {
void beCameraBoxData_fieldInit(){
 void *value0=lbl_8053561C;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D2A70,5);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_801ADB98();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_801BFF38();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 void *value6=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+2));
 void *value7=fn_801AC2D4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value6)+52)=1;
 void *value8=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+3));
 void *value9=fn_801AC2D4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value8)+56)=value9;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value8)+52)=1;
 void *value10=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+4));
 void *value11=fn_801AC2D4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value10)+56)=value11;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value10)+52)=1;
 fn_800659C0(value0,lbl_804D2A84,lbl_804D2A98,lbl_804D2AAC,value1);
}
}
#pragma pop
