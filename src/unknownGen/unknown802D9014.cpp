#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_802D9128();
extern void *lbl_80535338;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802D9014(){
 if(!lbl_80535338) lbl_80535338=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80535338;
}
void *fn_802D9068(){
 if(!lbl_80535338 || !(reinterpret_cast<unsigned int *>(lbl_80535338)[0x24/4]&4)) fn_802D9128();
 return lbl_80535338;
}
}
#pragma pop
