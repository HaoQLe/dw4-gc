#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80041F84(void *);
}
extern "C" {
void fn_80118518(int p0){
 fn_80041F84(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12));
}
}
#pragma pop
