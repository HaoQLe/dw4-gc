#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_80122790();
extern char lbl_804D173C[];
extern char lbl_804D1740[];
extern char lbl_804D1744[];
extern char lbl_804D1748[];
extern void *lbl_805350C4;
}
extern "C" {
void fn_802D1084(){
 void *value0=lbl_805350C4;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D173C,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_80122790();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 fn_800659C0(value0,lbl_804D1740,lbl_804D1744,lbl_804D1748,value1);
}
}
#pragma pop
