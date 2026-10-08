#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800EAA78(void *,void *);
}
extern "C" {
void fn_800C1F8C(int p0,int p1){
 fn_800EAA78((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12));
}
}
#pragma pop
