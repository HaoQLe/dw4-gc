#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_801B11CC();
extern void *lbl_805621F4;
extern void *lbl_805648E8;
}
extern "C" {
void *fn_801B103C(){
 if(!lbl_805648E8) lbl_805648E8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805648E8;
}
void *fn_801B1078(){
 if(!lbl_805648E8 || !(reinterpret_cast<unsigned int *>(lbl_805648E8)[0x24/4]&4)) fn_801B11CC();
 return lbl_805648E8;
}
}
#pragma pop
