#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_802C0288();
void *fn_802CDF04();
void *fn_8033F960();
extern char lbl_804E36CC[];
extern char lbl_804E3710[];
extern char lbl_804E3754[];
extern char lbl_804E3798[];
extern void *lbl_80536560;
}
extern "C" {
void beNDMWMcUtilCtrl_fieldInit(){
 void *value0=lbl_80536560;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804E36CC,17);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_802CDF04();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+60)=0;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+11));
 void *value5=fn_802C0288();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 void *value6=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+12));
 void *value7=fn_8033F960();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value6)+52)=1;
 fn_800659C0(value0,lbl_804E3710,lbl_804E3754,lbl_804E3798,value1);
}
}
#pragma pop
