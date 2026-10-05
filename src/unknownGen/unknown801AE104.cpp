#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_801AE20C();
extern void *lbl_805647C0;
}
extern "C" {
void *fn_801AE104(void *object){
 fn_801AE20C();
 return fn_8006546C(lbl_805647C0,object);
}
void *fn_801AE13C(){
 if(!lbl_805647C0 || !(reinterpret_cast<unsigned int *>(lbl_805647C0)[0x24/4]&4)) fn_801AE20C();
 return lbl_805647C0;
}
}
#pragma pop
