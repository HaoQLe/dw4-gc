#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800365B4();
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_802E2F60();
extern char lbl_804D13F8[];
extern char lbl_804D1410[];
extern char lbl_804D1428[];
extern char lbl_804D1440[];
extern void *lbl_80534FE4;
}
extern "C" {
void beMessengerWork_fieldInit(){
 void *value0=lbl_80534FE4;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D13F8,6);
 void *value2=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+4));
 void *value3=fn_800365B4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+5));
 void *value5=fn_802E2F60();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 fn_800659C0(value0,lbl_804D1410,lbl_804D1428,lbl_804D1440,value1);
}
}
#pragma pop
