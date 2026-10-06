#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *lbl_80562B24;
extern void *lbl_80562B2C;
extern void *lbl_80562B40;
extern void *lbl_80562B60;
}
extern "C" {
void *fn_800CAE04(){return lbl_80562B40;}
void fn_800CAE0C(void *object,UnknownGenValue *value){
 if(value) ++value->unknown04;
 UnknownGenValue *old=*reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+0xC);
 if(old) unknownGenDrop(old);
 *reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+0xC)=value;
}
int fn_800CAE7C(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+12);}
int fn_800CAE84(){return 32;}
void *fn_800CAE8C(){return lbl_80562B24;}
void *fn_800CAE94(){return lbl_80562B60;}
void *fn_800CAE9C(){return lbl_80562B2C;}
int fn_800CAEA4(){return 60;}
}
#pragma pop
