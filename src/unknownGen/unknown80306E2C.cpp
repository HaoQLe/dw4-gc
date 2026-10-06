#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80069128(void *,void *);
}
extern "C" {
void fn_80306E2C(int p0,int p1){
 fn_80069128(*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16))+40),(void *)p1);
}
}
#pragma pop
