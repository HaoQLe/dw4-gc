#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80036C40();
void fn_8003EC68(void *,int);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804CF718[];
extern char lbl_804CF72C[];
extern char lbl_804CF740[];
extern char lbl_804CF754[];
extern void *lbl_805347D0;
}
extern "C" {
void beSelectCtrlInfoWork_fieldInit(){
 void *value0=lbl_805347D0;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804CF718,5);
 void *value2=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+2));
 fn_8003EC68(value2,1);
 void *value3=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+4));
 void *value4=fn_80036C40();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+56)=value4;
 fn_800659C0(value0,lbl_804CF72C,lbl_804CF740,lbl_804CF754,value1);
}
}
#pragma pop
