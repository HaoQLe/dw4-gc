#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80069128(void *,void *);
}
extern "C" {
void *fn_8021A0D8(int p0,int p1){
 fn_80069128(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20),(void *)p1);
 return (void *)1;
}
}
#pragma pop
