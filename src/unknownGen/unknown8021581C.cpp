#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_801F3BC8();
extern void *lbl_80564DAC;
extern void *lbl_80564DB4;
extern void *lbl_80564DC8;
extern void *lbl_80564DD8;
extern void *lbl_80564DE4;
extern void *lbl_80564E0C;
extern void *lbl_80564E3C;
extern void *lbl_80564E6C;
extern void *lbl_80564E7C;
extern void *lbl_80564E88;
extern void *lbl_80564EB0;
extern void *lbl_80564EC8;
extern void *lbl_80564ED0;
extern void *lbl_80564EFC;
extern void *lbl_80564F78;
extern void *lbl_80564F84;
extern void *lbl_80564F94;
extern void *lbl_80564FA4;
extern void *lbl_80565020;
}
extern "C" {
void *fn_8021581C(){return lbl_80564DAC;}
void *fn_80215824(){return lbl_80564DB4;}
void *fn_8021582C(){return lbl_80564E3C;}
void *fn_80215834(){return lbl_80564DC8;}
void *fn_8021583C(){return lbl_80564DD8;}
void *fn_80215844(){return lbl_80564DE4;}
void *fn_8021584C(){return lbl_80564E0C;}
void *fn_80215854(){return fn_801F3BC8();}
void *fn_80215874(){return lbl_80564E6C;}
void *fn_8021587C(){return lbl_80564E7C;}
void *fn_80215884(){return lbl_80564E88;}
void *fn_8021588C(){return lbl_80564EB0;}
void *fn_80215894(){return lbl_80564EC8;}
void *fn_8021589C(){return lbl_80564ED0;}
void *fn_802158A4(){return lbl_80564EFC;}
void fn_802158AC(void *object,UnknownGenValue *value){
 if(value) ++value->unknown04;
 UnknownGenValue *old=*reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+0x44);
 if(old) unknownGenDrop(old);
 *reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+0x44)=value;
}
int fn_8021591C(){return 0;}
void *fn_80215924(){return lbl_80564F78;}
void *fn_8021592C(){return lbl_80564F84;}
void *fn_80215934(){return lbl_80564F94;}
void *fn_8021593C(){return lbl_80564FA4;}
void fn_80215944(){}
void *fn_80215948(){return lbl_80565020;}
unsigned char fn_80215950(void *object){return *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+56);}
}
#pragma pop
