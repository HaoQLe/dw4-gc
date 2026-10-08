#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800667B4(void *);
void fn_800C1FF8(void *);
void fn_800C201C(void *,int,int);
}
extern "C" {
void fn_800C20FC(int p0){
 fn_800C1FF8((void *)p0);
 fn_800C201C((void *)p0,0,0);
 fn_800667B4((void *)p0);
}
}
#pragma pop
