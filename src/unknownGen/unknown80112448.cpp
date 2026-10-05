#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80112580();
extern void *lbl_805621F4;
extern void *lbl_80563798;
}
extern "C" {
void *fn_80112448(void *object){
 fn_80112580();
 return fn_8006546C(lbl_80563798,object);
}
void *fn_80112480(){
 if(!lbl_80563798) lbl_80563798=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563798;
}
void *fn_801124BC(){
 if(!lbl_80563798 || !(reinterpret_cast<unsigned int *>(lbl_80563798)[0x24/4]&4)) fn_80112580();
 return lbl_80563798;
}
}
#pragma pop
