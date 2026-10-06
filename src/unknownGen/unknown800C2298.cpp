#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800F9504(void *,int);
}
extern "C" {
void fn_800C2298(int p0,int p1){
 fn_800F9504((void *)p1,(int)(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12)));
}
}
#pragma pop
