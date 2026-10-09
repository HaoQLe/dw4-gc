#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_8033DFFC();
extern void *lbl_805364A0;
}
extern "C" {
void *fn_8033DEC0(void *object){
 fn_8033DFFC();
 return fn_8006546C(lbl_805364A0,object);
}
void *beNDMWLoadIntf2MakeChr_getMeta(){
 if(!lbl_805364A0 || !(reinterpret_cast<unsigned int *>(lbl_805364A0)[0x24/4]&4)) fn_8033DFFC();
 return lbl_805364A0;
}
}
#pragma pop
