#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_801B9434();
extern void *lbl_805621F4;
extern void *lbl_80564CBC;
}
extern "C" {
void *fn_801B92F4(){
 if(!lbl_80564CBC) lbl_80564CBC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564CBC;
}
void *fn_801B9330(){
 if(!lbl_80564CBC || !(reinterpret_cast<unsigned int *>(lbl_80564CBC)[0x24/4]&4)) fn_801B9434();
 return lbl_80564CBC;
}
}
#pragma pop
