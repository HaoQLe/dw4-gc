#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80072384(void *,...);
}
extern "C" {
void fn_800722E0(int p0,int p1,int p2){
 fn_80072384((void *)p0,(void *)p2,(void *)p1);
}
}
#pragma pop
