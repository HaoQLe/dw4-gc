#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_8010EAEC();
extern void *lbl_805621F4;
extern void *lbl_805635FC;
}
extern "C" {
void *fn_8010E974(){
 if(!lbl_805635FC) lbl_805635FC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805635FC;
}
void *fn_8010E9B0(){
 if(!lbl_805635FC || !(reinterpret_cast<unsigned int *>(lbl_805635FC)[0x24/4]&4)) fn_8010EAEC();
 return lbl_805635FC;
}
}
#pragma pop
