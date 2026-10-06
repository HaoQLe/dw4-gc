#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_802CD1F0();
extern void *lbl_80534F5C;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802CCF98(){
 if(!lbl_80534F5C) lbl_80534F5C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80534F5C;
}
void *fn_802CCFEC(){
 if(!lbl_80534F5C || !(reinterpret_cast<unsigned int *>(lbl_80534F5C)[0x24/4]&4)) fn_802CD1F0();
 return lbl_80534F5C;
}
}
#pragma pop
