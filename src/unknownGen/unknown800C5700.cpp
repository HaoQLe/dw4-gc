#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800BCBCC(void *,void *);
void fn_800C56D4(void *);
}
extern "C" {
void fn_800C5700(int p0,int p1){
 fn_800C56D4((void *)p0);
 fn_800BCBCC((void *)p0,(void *)p1);
}
}
#pragma pop
