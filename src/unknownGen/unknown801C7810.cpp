#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_801C7A40();
extern void *lbl_805621F4;
extern void *lbl_805652EC;
}
extern "C" {
void *fn_801C7810(){
 if(!lbl_805652EC) lbl_805652EC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805652EC;
}
void *fn_801C784C(){
 if(!lbl_805652EC || !(reinterpret_cast<unsigned int *>(lbl_805652EC)[0x24/4]&4)) fn_801C7A40();
 return lbl_805652EC;
}
}
#pragma pop
