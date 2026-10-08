#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80030000();
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804D22D0[];
extern char lbl_804D22D4[];
extern char lbl_804D22D8[];
extern char lbl_804D22DC[];
extern void *lbl_805353DC;
}
extern "C" {
void fn_802DAFD0(){
 void *value0=lbl_805353DC;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D22D0,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_80030000();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 fn_800659C0(value0,lbl_804D22D4,lbl_804D22D8,lbl_804D22DC,value1);
}
}
#pragma pop
