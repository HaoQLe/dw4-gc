#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80037B18(void *);
}
extern "C" {
void fn_80037AF4(int p0){
 fn_80037B18(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+52));
}
}
#pragma pop
