#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80028F84();
void fn_80053650(void *,int);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_802BF52C();
void *fn_802C0288();
extern char lbl_804CFC30[];
extern char lbl_804CFC44[];
extern char lbl_804CFC58[];
extern char lbl_804CFC6C[];
extern void *lbl_8053493C;
}
extern "C" {
void fn_802BE750(){
 void *value0=lbl_8053493C;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804CFC30,5);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_802BF52C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_802C0288();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+60)=0;
 void *value6=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+2));
 fn_80053650(value6,16);
 void *value7=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+3));
 void *value8=fn_802C0288();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value7)+56)=value8;
 void *value9=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+4));
 void *value10=fn_80028F84();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value9)+56)=value10;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value9)+52)=1;
 fn_800659C0(value0,lbl_804CFC44,lbl_804CFC58,lbl_804CFC6C,value1);
}
}
#pragma pop
