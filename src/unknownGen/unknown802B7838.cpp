#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024B94();
void *fn_80024FEC();
void *fn_8002E824();
void *fn_800326A0();
void fn_8003EC68(void *,int);
void fn_8004D4BC(void *,float);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80071694(void *,int);
void *fn_801BF730();
void *fn_80216AA0();
extern char lbl_8041D5B0[];
extern char lbl_804CF290[];
extern char lbl_804CF2F8[];
extern char lbl_804CF360[];
extern char lbl_804CF3C8[];
extern void *lbl_805346A8;
}
extern "C" {
void fn_802B7838(){
 void *value0=lbl_805346A8;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804CF290,26);
 void *value2=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+3));
 fn_8004D4BC(value2,*reinterpret_cast<float *>((lbl_8041D5B0+0)));
 void *value3=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+7));
 void *value4=fn_80216AA0();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+56)=value4;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value3)+52)=1;
 void *value5=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+8));
 void *value6=fn_80024B94();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value5)+56)=value6;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value5)+52)=1;
 void *value7=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+10));
 fn_80071694(value7,0);
 void *value8=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+11));
 fn_8003EC68(value8,1);
 void *value9=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+12));
 void *value10=fn_800326A0();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value9)+56)=value10;
 void *value11=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+13));
 void *value12=fn_80024FEC();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value11)+56)=value12;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value11)+52)=1;
 void *value13=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+14));
 void *value14=fn_8002E824();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value13)+56)=value14;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value13)+52)=1;
 void *value15=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+15));
 void *value16=fn_801BF730();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value15)+56)=value16;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value15)+52)=1;
 void *value17=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+21));
 fn_8003EC68(value17,1);
 fn_800659C0(value0,lbl_804CF2F8,lbl_804CF360,lbl_804CF3C8,value1);
}
}
#pragma pop
