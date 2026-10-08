#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800667D4(void *);
void fn_80068390(void *,void *);
}
extern "C" {
void fn_800C5598(int p0){
 fn_80068390((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16));
 fn_800667D4((void *)p0);
}
}
#pragma pop
