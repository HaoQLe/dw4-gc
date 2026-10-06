#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8029E6A4(void *);
}
extern "C" {
void *fn_802AA6AC(int p0){
 fn_8029E6A4(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+96));
 return *reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+72);
}
int fn_802AA6E0(){return -1;}
}
#pragma pop
