#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80276F5C(void *,int,void *);
}
extern "C" {
void fn_802762A0(int p0,int p1){
 fn_80276F5C(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+40),7,(void *)p1);
}
}
#pragma pop
