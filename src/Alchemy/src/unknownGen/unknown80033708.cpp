#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80033734(void *);
}
extern "C" {
int fn_80033708(){return 8;}
void fn_80033710(int p0){
 fn_80033734(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+52));
}
}
#pragma pop
