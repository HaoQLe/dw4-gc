#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80337364();
extern void *lbl_805360D4;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_80337108(){
 if(!lbl_805360D4) lbl_805360D4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805360D4;
}
void *fn_8033715C(){
 if(!lbl_805360D4 || !(reinterpret_cast<unsigned int *>(lbl_805360D4)[0x24/4]&4)) fn_80337364();
 return lbl_805360D4;
}
}
#pragma pop
