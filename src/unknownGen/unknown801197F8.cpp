#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80119C50(void *);
}
extern "C" {
void fn_801197F8(int p0,int p1){
 fn_80119C50(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16));
}
}
#pragma pop
