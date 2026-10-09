#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_801ADB98();
extern char lbl_804D1984[];
extern char lbl_804D198C[];
extern char lbl_804D1994[];
extern char lbl_804D199C[];
extern void *lbl_80535168;
}
extern "C" {
void beLayerCtl_fieldInit(){
 void *value0=lbl_80535168;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D1984,2);
 void *value2=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value3=fn_801ADB98();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 fn_800659C0(value0,lbl_804D198C,lbl_804D1994,lbl_804D199C,value1);
}
}
#pragma pop
