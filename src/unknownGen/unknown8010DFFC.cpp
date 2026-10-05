#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_8010E1CC();
extern void *lbl_805621F4;
extern void *lbl_805635D8;
}
extern "C" {
void *fn_8010DFFC(){
 if(!lbl_805635D8) lbl_805635D8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805635D8;
}
void *fn_8010E038(){
 if(!lbl_805635D8 || !(reinterpret_cast<unsigned int *>(lbl_805635D8)[0x24/4]&4)) fn_8010E1CC();
 return lbl_805635D8;
}
}
#pragma pop
