#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void free(void *);
}
extern "C" {
void fn_800906CC(int p0,int p1,int p2,int p3,int p4,int p5){
 free((void *)p1);
}
}
#pragma pop
