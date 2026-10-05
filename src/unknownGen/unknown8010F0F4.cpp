#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_8010F1F4();
extern void *lbl_805621F4;
extern void *lbl_80563638;
}
extern "C" {
void *fn_8010F0F4(){
 if(!lbl_80563638) lbl_80563638=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563638;
}
void *fn_8010F130(){
 if(!lbl_80563638 || !(reinterpret_cast<unsigned int *>(lbl_80563638)[0x24/4]&4)) fn_8010F1F4();
 return lbl_80563638;
}
}
#pragma pop
