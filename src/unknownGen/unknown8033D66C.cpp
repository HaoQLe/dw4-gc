#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_8033D84C();
extern void *lbl_8053644C;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_8033D66C(void *object){
 fn_8033D84C();
 return fn_8006546C(lbl_8053644C,object);
}
void *fn_8033D6AC(){
 if(!lbl_8053644C) lbl_8053644C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8053644C;
}
void *beNDMWLoadIntf2DegiStateCtrl_getMeta(){
 if(!lbl_8053644C || !(reinterpret_cast<unsigned int *>(lbl_8053644C)[0x24/4]&4)) fn_8033D84C();
 return lbl_8053644C;
}
}
#pragma pop
