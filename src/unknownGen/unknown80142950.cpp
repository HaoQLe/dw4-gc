#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80142B54();
extern void *lbl_805621F4;
extern void *lbl_80564090;
}
extern "C" {
void *fn_80142950(){
 if(!lbl_80564090) lbl_80564090=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564090;
}
void *fn_8014298C(){
 if(!lbl_80564090 || !(reinterpret_cast<unsigned int *>(lbl_80564090)[0x24/4]&4)) fn_80142B54();
 return lbl_80564090;
}
}
#pragma pop
