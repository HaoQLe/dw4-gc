#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_802CDF04();
void *fn_802D2484();
void *fn_802DB45C();
void *fn_802DB66C();
extern char lbl_804D22F4[];
extern char lbl_804D2310[];
extern char lbl_804D232C[];
extern char lbl_804D2348[];
extern void *lbl_805353E4;
}
extern "C" {
void beDemoManager_fieldInit(){
 void *value0=lbl_805353E4;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D22F4,7);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_802CDF04();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+60)=0;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_802D2484();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+60)=0;
 void *value6=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+2));
 void *value7=fn_802DB66C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 void *value8=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+3));
 void *value9=fn_802DB45C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value8)+56)=value9;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value8)+52)=1;
 fn_800659C0(value0,lbl_804D2310,lbl_804D232C,lbl_804D2348,value1);
}
}
#pragma pop
