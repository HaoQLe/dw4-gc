#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80056378(void *);
}
extern "C" {
void fn_8007390C(int p0){
 fn_80056378(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16));
}
}
#pragma pop
