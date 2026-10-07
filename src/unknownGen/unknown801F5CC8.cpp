#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800607F4(void *);
void fn_800667B4();
void *fn_801B2DA4(void *);
extern void *lbl_805621F0;
extern void *lbl_805657E4;
}
extern "C" {
void fn_801F5CC8(){return fn_800667B4();}
void fn_801F5CE8(){
 void *value0=fn_800607F4(lbl_805621F0);
 void *value1=fn_801B2DA4(value0);
 lbl_805657E4=value1;
}
}
#pragma pop
