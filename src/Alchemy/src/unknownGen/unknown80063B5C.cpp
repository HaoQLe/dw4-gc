#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8002DB4C(void *);
void *fn_800607F4(void *);
extern void *lbl_805621F4;
extern void *lbl_8056229C;
}
extern "C" {
void *fn_80063B5C(){
 if(!lbl_8056229C) lbl_8056229C=fn_8002DB4C(fn_800607F4(lbl_805621F4));
 return lbl_8056229C;
}
int fn_80063B98(){return -1;}
int fn_80063BA0(){return 0;}
}
#pragma pop
