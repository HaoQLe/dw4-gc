#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_802AB618();
void *fn_802DF910();
extern char lbl_804D27E0[];
extern char lbl_804D27F0[];
extern char lbl_804D2800[];
extern char lbl_804D2810[];
extern void *lbl_8053555C;
}
extern "C" {
void beCriAudio_fieldInit(){
 void *value0=lbl_8053555C;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D27E0,4);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_802AB618();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_802DF910();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 fn_800659C0(value0,lbl_804D27F0,lbl_804D2800,lbl_804D2810,value1);
}
}
#pragma pop
