#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80041F84(void *);
}
extern "C" {
void fn_8028A7B8(int p0){
 fn_80041F84(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+28));
}
}
#pragma pop
