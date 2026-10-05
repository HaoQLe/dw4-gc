#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_800BA7E0();
extern void *lbl_805621F4;
extern void *lbl_80562A10;
}
extern "C" {
void *fn_800BA690(void *object){
 fn_800BA7E0();
 return fn_8006546C(lbl_80562A10,object);
}
void *fn_800BA6C8(){
 if(!lbl_80562A10) lbl_80562A10=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562A10;
}
void *fn_800BA704(){
 if(!lbl_80562A10 || !(reinterpret_cast<unsigned int *>(lbl_80562A10)[0x24/4]&4)) fn_800BA7E0();
 return lbl_80562A10;
}
}
#pragma pop
