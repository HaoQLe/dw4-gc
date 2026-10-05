#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_801B79DC();
extern void *lbl_805621F4;
extern void *lbl_80564BD4;
}
extern "C" {
void *fn_801B7824(){
 if(!lbl_80564BD4) lbl_80564BD4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564BD4;
}
void *fn_801B7860(){
 if(!lbl_80564BD4 || !(reinterpret_cast<unsigned int *>(lbl_80564BD4)[0x24/4]&4)) fn_801B79DC();
 return lbl_80564BD4;
}
}
#pragma pop
