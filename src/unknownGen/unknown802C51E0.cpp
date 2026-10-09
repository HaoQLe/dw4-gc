#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80071694(void *,int);
void *fn_802AD288();
extern char lbl_804D0590[];
extern char lbl_804D0598[];
extern char lbl_804D05A0[];
extern char lbl_804D05A8[];
extern void *lbl_80534BE4;
}
extern "C" {
void beMovie_fieldInit(){
 void *value0=lbl_80534BE4;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D0590,2);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_802AD288();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 fn_80071694(value4,0);
 fn_800659C0(value0,lbl_804D0598,lbl_804D05A0,lbl_804D05A8,value1);
}
}
#pragma pop
