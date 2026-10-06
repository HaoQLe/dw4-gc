#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_8033F37C();
extern void *lbl_80536560;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_8033F1CC(void *object){
 fn_8033F37C();
 return fn_8006546C(lbl_80536560,object);
}
void *fn_8033F20C(){
 if(!lbl_80536560) lbl_80536560=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80536560;
}
void *fn_8033F260(){
 if(!lbl_80536560 || !(reinterpret_cast<unsigned int *>(lbl_80536560)[0x24/4]&4)) fn_8033F37C();
 return lbl_80536560;
}
}
#pragma pop
