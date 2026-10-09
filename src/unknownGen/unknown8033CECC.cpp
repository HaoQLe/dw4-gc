#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_8033D008();
extern void *lbl_805363A0;
}
extern "C" {
void *fn_8033CECC(void *object){
 fn_8033D008();
 return fn_8006546C(lbl_805363A0,object);
}
void *beNDMWLoadIntf2Diffselect_getMeta(){
 if(!lbl_805363A0 || !(reinterpret_cast<unsigned int *>(lbl_805363A0)[0x24/4]&4)) fn_8033D008();
 return lbl_805363A0;
}
}
#pragma pop
