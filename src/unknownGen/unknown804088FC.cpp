#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80408AEC();
extern void *lbl_8055CAD8;
}
extern "C" {
void *fn_804088FC(void *object){
 fn_80408AEC();
 return fn_8006546C(lbl_8055CAD8,object);
}
void *fn_8040893C(){
 if(!lbl_8055CAD8 || !(reinterpret_cast<unsigned int *>(lbl_8055CAD8)[0x24/4]&4)) fn_80408AEC();
 return lbl_8055CAD8;
}
}
#pragma pop
