#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_802CEFAC();
extern void *lbl_80535014;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802CEE98(){
 if(!lbl_80535014) lbl_80535014=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80535014;
}
void *fn_802CEEEC(){
 if(!lbl_80535014 || !(reinterpret_cast<unsigned int *>(lbl_80535014)[0x24/4]&4)) fn_802CEFAC();
 return lbl_80535014;
}
}
#pragma pop
