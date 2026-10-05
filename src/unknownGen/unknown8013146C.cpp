#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_8013156C();
extern void *lbl_805621F4;
extern void *lbl_80563B08;
}
extern "C" {
void *fn_8013146C(){
 if(!lbl_80563B08) lbl_80563B08=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563B08;
}
void *fn_801314A8(){
 if(!lbl_80563B08 || !(reinterpret_cast<unsigned int *>(lbl_80563B08)[0x24/4]&4)) fn_8013156C();
 return lbl_80563B08;
}
}
#pragma pop
