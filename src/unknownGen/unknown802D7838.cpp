#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80034D84();
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80071694(void *,int);
void *fn_80122100();
void *fn_802D7948();
extern char lbl_804D1DC8[];
extern char lbl_804D1DF8[];
extern char lbl_804D1E28[];
extern char lbl_804D1E58[];
extern void *lbl_80535294;
}
extern "C" {
void fn_802D7838(){
 void *value0=lbl_80535294;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D1DC8,12);
 void *value2=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+2));
 void *value3=fn_80122100();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+3));
 void *value5=fn_80034D84();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 void *value6=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+5));
 fn_80071694(value6,0);
 void *value7=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+10));
 fn_80071694(value7,0);
 void *value8=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+11));
 void *value9=fn_802D7948();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value8)+56)=value9;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value8)+52)=1;
 fn_800659C0(value0,lbl_804D1DF8,lbl_804D1E28,lbl_804D1E58,value1);
}
}
#pragma pop
