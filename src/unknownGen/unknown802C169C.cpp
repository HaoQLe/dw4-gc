#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_801AC644();
void *fn_802C17AC();
void *fn_802E7CAC();
extern char lbl_804D0068[];
extern char lbl_804D0074[];
extern char lbl_804D0080[];
extern char lbl_804D008C[];
extern void *lbl_80534A74;
}
extern "C" {
void beParticleCtrl2InfoRam_fieldInit(){
 void *value0=lbl_80534A74;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D0068,3);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_801AC644();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_802E7CAC();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 void *value6=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+2));
 void *value7=fn_802C17AC();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 fn_800659C0(value0,lbl_804D0074,lbl_804D0080,lbl_804D008C,value1);
}
}
#pragma pop
