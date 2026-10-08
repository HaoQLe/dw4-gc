#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024B94();
void *fn_8002E824();
void *fn_800324CC();
void fn_80053650(void *,int);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_802B740C();
void *fn_802CDF04();
void *fn_80403C88();
extern char lbl_804D21E0[];
extern char lbl_804D2210[];
extern char lbl_804D2240[];
extern char lbl_804D2270[];
extern void *lbl_80535398;
}
extern "C" {
void fn_802DA80C(){
 void *value0=lbl_80535398;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D21E0,12);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_802B740C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+60)=0;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_802CDF04();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+60)=0;
 void *value6=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+2));
 void *value7=fn_80403C88();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value6)+60)=0;
 void *value8=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+4));
 fn_80053650(value8,-1);
 void *value9=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+5));
 void *value10=fn_80024B94();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value9)+56)=value10;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value9)+52)=1;
 void *value11=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+6));
 void *value12=fn_8002E824();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value11)+56)=value12;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value11)+52)=1;
 void *value13=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+7));
 void *value14=fn_800324CC();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value13)+56)=value14;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value13)+52)=1;
 void *value15=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+8));
 void *value16=fn_8002E824();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value15)+56)=value16;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value15)+52)=1;
 void *value17=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+9));
 void *value18=fn_8002E824();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value17)+56)=value18;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value17)+52)=1;
 fn_800659C0(value0,lbl_804D2210,lbl_804D2240,lbl_804D2270,value1);
}
}
#pragma pop
