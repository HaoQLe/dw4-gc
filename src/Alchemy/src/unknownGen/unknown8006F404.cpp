#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80069128(void *);
}
extern "C" {
void fn_8006F404(int p0){
 fn_80069128(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16));
}
}
#pragma pop
