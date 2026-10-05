#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_800CF0BC();
extern void *lbl_805621F4;
extern void *lbl_80562D84;
}
extern "C" {
void *fn_800CEEBC(void *object){
 fn_800CF0BC();
 return fn_8006546C(lbl_80562D84,object);
}
void *fn_800CEEF4(){
 if(!lbl_80562D84) lbl_80562D84=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562D84;
}
void *fn_800CEF30(){
 if(!lbl_80562D84 || !(reinterpret_cast<unsigned int *>(lbl_80562D84)[0x24/4]&4)) fn_800CF0BC();
 return lbl_80562D84;
}
}
#pragma pop
