#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024B94();
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804D2454[];
extern char lbl_804D2458[];
extern char lbl_804D245C[];
extern char lbl_804D2460[];
extern void *lbl_80535450;
}
extern "C" {
void fn_802DC9F8(){
 void *value0=lbl_80535450;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D2454,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_80024B94();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 fn_800659C0(value0,lbl_804D2458,lbl_804D245C,lbl_804D2460,value1);
}
}
#pragma pop
