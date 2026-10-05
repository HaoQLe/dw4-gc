#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_801C5874();
extern void *lbl_805621F4;
extern void *lbl_805651C0;
}
extern "C" {
void *fn_801C5404(){
 if(!lbl_805651C0) lbl_805651C0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805651C0;
}
void *fn_801C5440(){
 if(!lbl_805651C0 || !(reinterpret_cast<unsigned int *>(lbl_805651C0)[0x24/4]&4)) fn_801C5874();
 return lbl_805651C0;
}
}
#pragma pop
