#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8003EC68(void *,int);
void fn_80053650(void *,int);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_802B740C();
void *fn_802C2174();
void *fn_8033F20C();
extern char lbl_804E2B1C[];
extern char lbl_804E2B48[];
extern char lbl_804E2B74[];
extern char lbl_804E2BA0[];
extern void *lbl_80536258;
}
extern "C" {
void fn_8033C0A0(){
 void *value0=lbl_80536258;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804E2B1C,11);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_802C2174();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+60)=0;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_802B740C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+60)=0;
 void *value6=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+2));
 void *value7=fn_8033F20C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 void *value8=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+6));
 fn_8003EC68(value8,1);
 void *value9=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+9));
 fn_80053650(value9,-1);
 fn_800659C0(value0,lbl_804E2B48,lbl_804E2B74,lbl_804E2BA0,value1);
}
}
#pragma pop
