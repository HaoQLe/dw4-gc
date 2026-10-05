#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_800AFDEC();
extern void *lbl_805621F4;
extern void *lbl_805625A4;
}
extern "C" {
void *fn_800AFD14(){
 if(!lbl_805625A4) lbl_805625A4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805625A4;
}
void *fn_800AFD50(){
 if(!lbl_805625A4 || !(reinterpret_cast<unsigned int *>(lbl_805625A4)[0x24/4]&4)) fn_800AFDEC();
 return lbl_805625A4;
}
}
#pragma pop
