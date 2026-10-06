#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_803459E0();
extern void *lbl_8053684C;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_80345760(void *object){
 fn_803459E0();
 return fn_8006546C(lbl_8053684C,object);
}
void *fn_803457A0(){
 if(!lbl_8053684C) lbl_8053684C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8053684C;
}
void *fn_803457F4(){
 if(!lbl_8053684C || !(reinterpret_cast<unsigned int *>(lbl_8053684C)[0x24/4]&4)) fn_803459E0();
 return lbl_8053684C;
}
}
#pragma pop
