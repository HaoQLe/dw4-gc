#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80069128(void *);
}
extern "C" {
void fn_800609DC(int p0){
 fn_80069128(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20));
}
}
#pragma pop
