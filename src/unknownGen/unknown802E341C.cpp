#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802E3558();
extern void *lbl_805356D4;
}
extern "C" {
void *fn_802E341C(void *object){
 fn_802E3558();
 return fn_8006546C(lbl_805356D4,object);
}
void *fn_802E345C(){
 if(!lbl_805356D4 || !(reinterpret_cast<unsigned int *>(lbl_805356D4)[0x24/4]&4)) fn_802E3558();
 return lbl_805356D4;
}
}
#pragma pop
