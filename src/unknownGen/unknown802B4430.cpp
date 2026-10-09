#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80034BB0();
void *fn_80034D84();
void *fn_800365B4();
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_800D0068();
void *fn_802B4548();
extern char lbl_804CEE74[];
extern char lbl_804CEEE0[];
extern char lbl_804CEF4C[];
extern char lbl_804CEFB8[];
extern void *lbl_8053457C;
}
extern "C" {
void beWaterPlainInfoRam_fieldInit(){
 void *value0=lbl_8053457C;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804CEE74,27);
 void *value2=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+10));
 void *value3=fn_800D0068();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+11));
 void *value5=fn_80034D84();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 void *value6=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+12));
 void *value7=fn_800365B4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value6)+52)=1;
 void *value8=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+21));
 void *value9=fn_80034BB0();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value8)+56)=value9;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value8)+52)=1;
 void *value10=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+26));
 void *value11=fn_802B4548();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value10)+56)=value11;
 fn_800659C0(value0,lbl_804CEEE0,lbl_804CEF4C,lbl_804CEFB8,value1);
}
}
#pragma pop
