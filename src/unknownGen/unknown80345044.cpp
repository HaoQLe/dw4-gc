#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_802AA97C();
void *fn_803450FC();
extern char lbl_804E4164[];
extern char lbl_804E416C[];
extern char lbl_804E4174[];
extern char lbl_804E417C[];
extern void *lbl_80536828;
}
extern "C" {
void beNDMWAfsSetupInfo_fieldInit(){
 void *value0=lbl_80536828;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804E4164,2);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_802AA97C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_803450FC();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 fn_800659C0(value0,lbl_804E416C,lbl_804E4174,lbl_804E417C,value1);
}
}
#pragma pop
