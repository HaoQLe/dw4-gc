#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8003EC68(void *,int);
void fn_8004D4BC(void *,float);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_802E14B8();
void *fn_80403C88();
void *fn_80405CBC();
extern char lbl_8041D5B0[];
extern char lbl_804D2BC8[];
extern char lbl_804D2BFC[];
extern char lbl_804D2C30[];
extern char lbl_804D2C64[];
extern void *lbl_80535660;
}
extern "C" {
void fn_802E2850(){
 void *value0=lbl_80535660;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D2BC8,13);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_80403C88();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+60)=0;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_80405CBC();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+60)=0;
 void *value6=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+2));
 void *value7=fn_802E14B8();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 void *value8=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+11));
 fn_8004D4BC(value8,*reinterpret_cast<float *>((lbl_8041D5B0+0)));
 void *value9=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+12));
 fn_8003EC68(value9,1);
 fn_800659C0(value0,lbl_804D2BFC,lbl_804D2C30,lbl_804D2C64,value1);
}
}
#pragma pop
