#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *GXEndDisplayList(void *);
}
extern "C" {
void fn_80103EA8(int p0){
 void *value0=GXEndDisplayList((void *)p0);
 *reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+64)=value0;
}
}
#pragma pop
