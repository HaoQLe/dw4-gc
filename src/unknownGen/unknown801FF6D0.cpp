#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800667A4();
void fn_801FF70C(void *);
extern void *lbl_80564968;
}
extern "C" {
void *fn_801FF6D0(){return lbl_80564968;}
void fn_801FF6D8(int p0){
 fn_800667A4();
 fn_801FF70C((void *)p0);
}
}
#pragma pop
