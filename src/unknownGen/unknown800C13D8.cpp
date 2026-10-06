#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800F7DCC(void *,int);
}
extern "C" {
void fn_800C13D8(int p0,int p1){
 fn_800F7DCC((void *)p1,(int)(int)(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12)));
}
}
#pragma pop
