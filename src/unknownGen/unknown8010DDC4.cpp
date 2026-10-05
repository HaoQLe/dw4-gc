#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_8010DED4();
extern void *lbl_805621F4;
extern void *lbl_805635D0;
}
extern "C" {
void *fn_8010DDC4(){
 if(!lbl_805635D0) lbl_805635D0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805635D0;
}
void *fn_8010DE00(){
 if(!lbl_805635D0 || !(reinterpret_cast<unsigned int *>(lbl_805635D0)[0x24/4]&4)) fn_8010DED4();
 return lbl_805635D0;
}
}
#pragma pop
