#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800607F4(void *);
void *fn_801B2DA4(void *);
void fn_801E8894(void *,void *);
extern void *lbl_805621F0;
extern void *lbl_805657D0;
}
extern "C" {
void fn_801E871C(int p0){
 fn_801E8894(lbl_805657D0,(void *)p0);
}
void fn_801E8744(){
 void *value0=fn_800607F4(lbl_805621F0);
 void *value1=fn_801B2DA4(value0);
 lbl_805657D0=value1;
}
}
#pragma pop
