#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800694EC(void *,void *);
}
extern "C" {
void fn_800BD3E4(){}
void fn_800BD3E8(int p0,int p1){
 fn_800694EC(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),(void *)p1);
}
}
#pragma pop
