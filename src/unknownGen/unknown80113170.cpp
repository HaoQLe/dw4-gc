#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80113288();
extern void *lbl_805621F4;
extern void *lbl_805637C8;
}
extern "C" {
void *fn_80113170(){
 if(!lbl_805637C8) lbl_805637C8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805637C8;
}
void *fn_801131AC(){
 if(!lbl_805637C8 || !(reinterpret_cast<unsigned int *>(lbl_805637C8)[0x24/4]&4)) fn_80113288();
 return lbl_805637C8;
}
}
#pragma pop
