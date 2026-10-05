#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_801BBB34();
extern void *lbl_805621F4;
extern void *lbl_80564DB4;
}
extern "C" {
void *fn_801BB954(){
 if(!lbl_80564DB4) lbl_80564DB4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564DB4;
}
void *fn_801BB990(){
 if(!lbl_80564DB4 || !(reinterpret_cast<unsigned int *>(lbl_80564DB4)[0x24/4]&4)) fn_801BBB34();
 return lbl_80564DB4;
}
}
#pragma pop
