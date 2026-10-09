#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_802B5AA4();
void *fn_802B740C();
void *fn_802C2174();
void *fn_802D2484();
extern char lbl_804CF0F0[];
extern char lbl_804CF104[];
extern char lbl_804CF118[];
extern char lbl_804CF12C[];
extern void *lbl_80534630;
}
extern "C" {
void beTimer_fieldInit(){
 void *value0=lbl_80534630;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804CF0F0,5);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_802B740C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+60)=0;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_802C2174();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+60)=0;
 void *value6=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+2));
 void *value7=fn_802D2484();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value6)+60)=0;
 void *value8=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+3));
 void *value9=fn_802B5AA4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value8)+56)=value9;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value8)+52)=1;
 fn_800659C0(value0,lbl_804CF104,lbl_804CF118,lbl_804CF12C,value1);
}
}
#pragma pop
