#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80132180();
extern void *lbl_805621F4;
extern void *lbl_80563B44;
}
extern "C" {
void *fn_80131FA0(){
 if(!lbl_80563B44) lbl_80563B44=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563B44;
}
void *fn_80131FDC(){
 if(!lbl_80563B44 || !(reinterpret_cast<unsigned int *>(lbl_80563B44)[0x24/4]&4)) fn_80132180();
 return lbl_80563B44;
}
}
#pragma pop
