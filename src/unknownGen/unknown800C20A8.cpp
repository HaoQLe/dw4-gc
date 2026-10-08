#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800BCBCC(void *,void *);
void fn_800C1FF8(void *);
void fn_800C201C(void *,int,int);
}
extern "C" {
void fn_800C20A8(int p0,int p1){
 fn_800C1FF8((void *)p0);
 fn_800C201C((void *)p0,0,0);
 fn_800BCBCC((void *)p0,(void *)p1);
}
}
#pragma pop
