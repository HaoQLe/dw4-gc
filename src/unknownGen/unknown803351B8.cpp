#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_803352CC();
extern void *lbl_80535FF8;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_803351B8(){
 if(!lbl_80535FF8) lbl_80535FF8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80535FF8;
}
void *fn_8033520C(){
 if(!lbl_80535FF8 || !(reinterpret_cast<unsigned int *>(lbl_80535FF8)[0x24/4]&4)) fn_803352CC();
 return lbl_80535FF8;
}
}
#pragma pop
