#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_8026960C();
void *fn_802B740C();
void *fn_802D15EC();
void *fn_802E3A88();
extern char lbl_804D189C[];
extern char lbl_804D18AC[];
extern char lbl_804D18BC[];
extern char lbl_804D18CC[];
extern void *lbl_80535124;
}
extern "C" {
void beLua_fieldInit(){
 void *value0=lbl_80535124;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D189C,4);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_802B740C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+60)=0;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_802E3A88();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 void *value6=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+2));
 void *value7=fn_802D15EC();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 void *value8=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+3));
 void *value9=fn_8026960C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value8)+56)=value9;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value8)+52)=1;
 fn_800659C0(value0,lbl_804D18AC,lbl_804D18BC,lbl_804D18CC,value1);
}
}
#pragma pop
