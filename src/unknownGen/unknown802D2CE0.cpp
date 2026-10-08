#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_802D2868();
extern char lbl_804D18EC[];
extern char lbl_804D18F0[];
extern char lbl_804D18F4[];
extern char lbl_804D18F8[];
extern void *lbl_8053513C;
}
extern "C" {
void fn_802D2CE0(){
 void *value0=lbl_8053513C;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D18EC,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_802D2868();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 fn_800659C0(value0,lbl_804D18F0,lbl_804D18F4,lbl_804D18F8,value1);
}
}
#pragma pop
