#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8003040C();
void *fn_8003BA04();
void *fn_8006546C(void *,void *);
extern void *lbl_80561B60;
}
extern "C" {
void *fn_80030248(){return fn_8003BA04();}
void *fn_80030268(void *object){
 fn_8003040C();
 return fn_8006546C(lbl_80561B60,object);
}
void *fn_800302A0(){
 if(!lbl_80561B60 || !(reinterpret_cast<unsigned int *>(lbl_80561B60)[0x24/4]&4)) fn_8003040C();
 return lbl_80561B60;
}
}
#pragma pop
