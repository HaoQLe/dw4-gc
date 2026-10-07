#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800607F4(void *);
void *fn_801B2DA4(void *);
void fn_801DF5E8(void *,void *);
extern void *lbl_805621F0;
extern void *lbl_805656E8;
}
extern "C" {
void fn_801DF2D4(int p0){
 fn_801DF5E8(lbl_805656E8,(void *)p0);
}
void fn_801DF2FC(){
 void *value0=fn_800607F4(lbl_805621F0);
 void *value1=fn_801B2DA4(value0);
 lbl_805656E8=value1;
}
}
#pragma pop
