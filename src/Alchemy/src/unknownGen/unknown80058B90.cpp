#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void malloc(void *);
}
extern "C" {
void fn_80058B90(int p0,int p1,int p2){
 malloc((void *)(int)(p1+p0));
}
}
#pragma pop
