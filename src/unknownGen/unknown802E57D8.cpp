#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_800ADC34();
void *fn_800B51FC();
void *fn_800B9348();
void *fn_800B9DD0();
void *fn_802E6EF8();
extern char lbl_804D2F1C[];
extern char lbl_804D2F70[];
extern char lbl_804D2FC4[];
extern char lbl_804D3018[];
extern void *lbl_80535764;
}
extern "C" {
void fn_802E57D8(){
 void *value0=lbl_80535764;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D2F1C,21);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_802E6EF8();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+17));
 void *value5=fn_800B9348();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 void *value6=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+18));
 void *value7=fn_800B9DD0();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 void *value8=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+19));
 void *value9=fn_800ADC34();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value8)+56)=value9;
 void *value10=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+20));
 void *value11=fn_800B51FC();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value10)+56)=value11;
 fn_800659C0(value0,lbl_804D2F70,lbl_804D2FC4,lbl_804D3018,value1);
}
}
#pragma pop
