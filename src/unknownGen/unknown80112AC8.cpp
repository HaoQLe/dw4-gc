#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80112C98();
extern void *lbl_805621F4;
extern void *lbl_805637B4;
}
extern "C" {
void *fn_80112AC8(){
 if(!lbl_805637B4) lbl_805637B4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805637B4;
}
void *fn_80112B04(){
 if(!lbl_805637B4 || !(reinterpret_cast<unsigned int *>(lbl_805637B4)[0x24/4]&4)) fn_80112C98();
 return lbl_805637B4;
}
}
#pragma pop
