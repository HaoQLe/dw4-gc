#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8002213C();
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804D2030[];
extern char lbl_804D2034[];
extern char lbl_804D2038[];
extern char lbl_804D203C[];
extern void *lbl_8053533C;
}
extern "C" {
void fn_802D93C8(){
 void *value0=lbl_8053533C;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D2030,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_8002213C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+60)=value3;
 fn_800659C0(value0,lbl_804D2034,lbl_804D2038,lbl_804D203C,value1);
}
}
#pragma pop
