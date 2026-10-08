#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8004D4BC(void *,float);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_801C010C();
void *fn_802C2C90();
void *fn_802C32C8();
extern char lbl_8041E768[];
extern char lbl_804D0390[];
extern char lbl_804D03A8[];
extern char lbl_804D03C0[];
extern char lbl_804D03D8[];
extern void *lbl_80534B48;
}
extern "C" {
void fn_802C31D8(){
 void *value0=lbl_80534B48;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D0390,6);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_801C010C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 fn_8004D4BC(value4,*reinterpret_cast<float *>((lbl_8041E768+0)));
 void *value5=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+4));
 void *value6=fn_802C32C8();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value5)+56)=value6;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value5)+52)=1;
 void *value7=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+5));
 void *value8=fn_802C2C90();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value7)+56)=value8;
 fn_800659C0(value0,lbl_804D03A8,lbl_804D03C0,lbl_804D03D8,value1);
}
}
#pragma pop
