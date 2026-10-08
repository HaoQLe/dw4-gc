#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80035F2C();
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804D11D0[];
extern char lbl_804D11DC[];
extern char lbl_804D11E8[];
extern char lbl_804D11F4[];
extern void *lbl_80534F5C;
}
extern "C" {
void fn_802CD2B8(){
 void *value0=lbl_80534F5C;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D11D0,3);
 void *value2=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value3=fn_80035F2C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 fn_800659C0(value0,lbl_804D11DC,lbl_804D11E8,lbl_804D11F4,value1);
}
}
#pragma pop
