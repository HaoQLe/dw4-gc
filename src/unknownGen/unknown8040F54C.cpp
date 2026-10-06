#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8028A87C(void *);
void fn_8040E308(void *);
}
extern "C" {
void fn_8040F54C(int p0){
 fn_8040E308(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+4));
}
void fn_8040F570(int p0){
 fn_8028A87C(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0));
}
}
#pragma pop
