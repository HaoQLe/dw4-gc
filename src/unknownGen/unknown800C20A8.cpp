#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800BCBCC(void *,void *);
void fn_800C201C(void *,int,int);
void igPixelShaderAttr_virtual70(void *);
}
extern "C" {
void igPixelShaderAttr_virtual34(int p0,int p1){
 igPixelShaderAttr_virtual70((void *)p0);
 fn_800C201C((void *)p0,0,0);
 fn_800BCBCC((void *)p0,(void *)p1);
}
}
#pragma pop
