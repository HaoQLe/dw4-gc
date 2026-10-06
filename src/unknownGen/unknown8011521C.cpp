#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80115248(void *);
}
extern "C" {
int fn_8011521C(){return 40;}
void fn_80115224(int p0){
 fn_80115248(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+52));
}
}
#pragma pop
