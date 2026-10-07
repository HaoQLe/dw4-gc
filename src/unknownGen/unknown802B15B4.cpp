#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8028A2D0(void *,void *);
}
extern "C" {
void fn_802B15B4(int p0,int p1){
 fn_8028A2D0((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8));
}
}
#pragma pop
