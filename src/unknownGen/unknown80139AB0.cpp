#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80139C74();
extern void *lbl_80563E08;
}
extern "C" {
void *fn_80139AB0(void *object){
 fn_80139C74();
 return fn_8006546C(lbl_80563E08,object);
}
void *fn_80139AE8(){
 if(!lbl_80563E08 || !(reinterpret_cast<unsigned int *>(lbl_80563E08)[0x24/4]&4)) fn_80139C74();
 return lbl_80563E08;
}
}
#pragma pop
