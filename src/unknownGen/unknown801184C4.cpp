#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80041E40(void *,void *,int);
}
extern "C" {
void fn_801184C4(int p0,int p1){
 fn_80041E40(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),(void *)p1,0);
}
}
#pragma pop
