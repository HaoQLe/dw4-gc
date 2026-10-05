#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80114BDC();
extern void *lbl_805621F4;
extern void *lbl_80563838;
}
extern "C" {
void *fn_80114988(){
 if(!lbl_80563838) lbl_80563838=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563838;
}
void *fn_801149C4(){
 if(!lbl_80563838 || !(reinterpret_cast<unsigned int *>(lbl_80563838)[0x24/4]&4)) fn_80114BDC();
 return lbl_80563838;
}
}
#pragma pop
