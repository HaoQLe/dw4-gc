#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_800B0D08();
extern void *lbl_805621F4;
extern void *lbl_80562614;
}
extern "C" {
void *fn_800B0BB8(void *object){
 fn_800B0D08();
 return fn_8006546C(lbl_80562614,object);
}
void *fn_800B0BF0(){
 if(!lbl_80562614) lbl_80562614=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562614;
}
void *fn_800B0C2C(){
 if(!lbl_80562614 || !(reinterpret_cast<unsigned int *>(lbl_80562614)[0x24/4]&4)) fn_800B0D08();
 return lbl_80562614;
}
}
#pragma pop
