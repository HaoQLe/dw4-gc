#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_801ADB98();
void *fn_801CAC30();
void *fn_802E6D28();
extern char lbl_804D30D8[];
extern char lbl_804D30E4[];
extern char lbl_804D30F0[];
extern char lbl_804D30FC[];
extern void *lbl_805357D4;
}
extern "C" {
void beAction2Info_fieldInit(){
 void *value0=lbl_805357D4;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D30D8,3);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_801ADB98();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_801CAC30();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 void *value6=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+2));
 void *value7=fn_802E6D28();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value6)+52)=1;
 fn_800659C0(value0,lbl_804D30E4,lbl_804D30F0,lbl_804D30FC,value1);
}
}
#pragma pop
