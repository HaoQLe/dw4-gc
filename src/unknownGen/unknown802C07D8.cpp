#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800365B4();
void fn_80040030(void *,int);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_802BF52C();
void *fn_802C0288();
extern char lbl_804CFEA4[];
extern char lbl_804CFEEC[];
extern char lbl_804CFF34[];
extern char lbl_804CFF7C[];
extern void *lbl_80534A04;
}
extern "C" {
void beSvDeliver_fieldInit(){
 void *value0=lbl_80534A04;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804CFEA4,18);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_800365B4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+7));
 fn_80040030(value4,-1);
 void *value5=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+8));
 fn_80040030(value5,0);
 void *value6=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+12));
 void *value7=fn_800365B4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value6)+52)=1;
 void *value8=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+13));
 void *value9=fn_800365B4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value8)+56)=value9;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value8)+52)=1;
 void *value10=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+14));
 void *value11=fn_800365B4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value10)+56)=value11;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value10)+52)=1;
 void *value12=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+15));
 void *value13=fn_800365B4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value12)+56)=value13;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value12)+52)=1;
 void *value14=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+16));
 void *value15=fn_802C0288();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value14)+56)=value15;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value14)+60)=0;
 void *value16=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+17));
 void *value17=fn_802BF52C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value16)+56)=value17;
 fn_800659C0(value0,lbl_804CFEEC,lbl_804CFF34,lbl_804CFF7C,value1);
}
}
#pragma pop
