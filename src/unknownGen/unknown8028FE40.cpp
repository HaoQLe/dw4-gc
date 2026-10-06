#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
int fn_802941E0(void *);
int fn_802941E8(void *);
}
extern "C" {
void fn_8028FE40(int p0){
 fn_802941E0(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+4));
}
void fn_8028FE64(int p0){
 fn_802941E8(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+4));
}
}
#pragma pop
