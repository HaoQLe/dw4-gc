#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_801B69F8();
extern void *lbl_805621F4;
extern void *lbl_80564B94;
}
extern "C" {
void *fn_801B67B0(){
 if(!lbl_80564B94) lbl_80564B94=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564B94;
}
void *fn_801B67EC(){
 if(!lbl_80564B94 || !(reinterpret_cast<unsigned int *>(lbl_80564B94)[0x24/4]&4)) fn_801B69F8();
 return lbl_80564B94;
}
}
#pragma pop
