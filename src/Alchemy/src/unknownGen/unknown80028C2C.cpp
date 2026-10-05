#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80028D74();
void *fn_8006546C(void *,void *);
extern void *lbl_805616FC;
}
extern "C" {
void *fn_80028C2C(void *object){
 fn_80028D74();
 return fn_8006546C(lbl_805616FC,object);
}
void *fn_80028C64(){
 if(!lbl_805616FC || !(reinterpret_cast<unsigned int *>(lbl_805616FC)[0x24/4]&4)) fn_80028D74();
 return lbl_805616FC;
}
}
#pragma pop
