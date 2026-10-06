#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80116EE4(void *,void *);
}
extern "C" {
void fn_80117C74(int p0,int p1){
 fn_80116EE4(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16),(void *)p1);
}
}
#pragma pop
