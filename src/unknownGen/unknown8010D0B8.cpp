#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_8010D32C();
extern void *lbl_805621F4;
extern void *lbl_80563584;
}
extern "C" {
void *fn_8010D0B8(){
 if(!lbl_80563584) lbl_80563584=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563584;
}
void *fn_8010D0F4(){
 if(!lbl_80563584 || !(reinterpret_cast<unsigned int *>(lbl_80563584)[0x24/4]&4)) fn_8010D32C();
 return lbl_80563584;
}
}
#pragma pop
