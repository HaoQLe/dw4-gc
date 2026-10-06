#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80119B10(void *);
}
extern "C" {
void fn_80119750(int p0){
 fn_80119B10(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16));
}
}
#pragma pop
