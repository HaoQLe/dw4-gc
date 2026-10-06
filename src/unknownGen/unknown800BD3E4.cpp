#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800694EC(void *);
}
extern "C" {
void fn_800BD3E4(){}
void fn_800BD3E8(int p0){
 fn_800694EC(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12));
}
}
#pragma pop
