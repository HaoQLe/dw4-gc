#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80027ED4();
void *fn_8003AAE8();
void *fn_8006546C(void *,void *);
extern void *lbl_805616B0;
}
extern "C" {
void *fn_80027D08(){return fn_8003AAE8();}
void *fn_80027D28(void *object){
 fn_80027ED4();
 return fn_8006546C(lbl_805616B0,object);
}
void *fn_80027D60(){
 if(!lbl_805616B0 || !(reinterpret_cast<unsigned int *>(lbl_805616B0)[0x24/4]&4)) fn_80027ED4();
 return lbl_805616B0;
}
}
#pragma pop
