#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800FCA60(void *,void *,void *,void *);
}
extern "C" {
void fn_800C5DAC(int p0,int p1){
 fn_800FCA60((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16),(void *)(int)*reinterpret_cast<signed char *>(reinterpret_cast<char *>((void *)p0)+12),(void *)(int)*reinterpret_cast<signed char *>(reinterpret_cast<char *>((void *)p0)+13));
}
}
#pragma pop
