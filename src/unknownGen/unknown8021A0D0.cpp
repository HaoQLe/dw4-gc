#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80069128(void *);
}
extern "C" {
int fn_8021A0D0(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+20);}
void *fn_8021A0D8(int p0){
 fn_80069128(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20));
 return (void *)1;
}
}
#pragma pop
