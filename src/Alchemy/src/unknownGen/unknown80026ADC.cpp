#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void arkRegister__Q33Gap4Core10igRegistryFv();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
extern void *lbl_80561658;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_80026ADC(void *object){
 arkRegister__Q33Gap4Core10igRegistryFv();
 return fn_8006546C(lbl_80561658,object);
}
void *fn_80026B14(){
 if(!lbl_80561658) lbl_80561658=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80561658;
}
void *fn_80026B50(){
 if(!lbl_80561658 || !(reinterpret_cast<unsigned int *>(lbl_80561658)[0x24/4]&4)) arkRegister__Q33Gap4Core10igRegistryFv();
 return lbl_80561658;
}
}
#pragma pop
