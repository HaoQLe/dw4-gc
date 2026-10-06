#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80305A28(void *,void *);
void fn_80305E80();
}
extern "C" {
void fn_80305F14(int p0,int p1,int p2,int p3){
 fn_80305E80();
 fn_80305A28((void *)p0,(void *)p3);
}
}
#pragma pop
