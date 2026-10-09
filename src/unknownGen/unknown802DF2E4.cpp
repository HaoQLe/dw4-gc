#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80053650(void *,int);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80071694(void *,int);
void *fn_802DF3C0();
extern char lbl_804D26D4[];
extern char lbl_804D26E4[];
extern char lbl_804D26F4[];
extern char lbl_804D2704[];
extern void *lbl_80535514;
}
extern "C" {
void beCriFxInfo_fieldInit(){
 void *value0=lbl_80535514;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D26D4,4);
 void *value2=fn_800658E4(value0,value1);
 fn_80071694(value2,0);
 void *value3=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 fn_80053650(value3,-1);
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+2));
 fn_80053650(value4,-1);
 void *value5=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+3));
 void *value6=fn_802DF3C0();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value5)+56)=value6;
 fn_800659C0(value0,lbl_804D26E4,lbl_804D26F4,lbl_804D2704,value1);
}
}
#pragma pop
