#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80294128(void *);
void fn_80294174(void *);
}
extern "C" {
void fn_8028FD20(int p0){
 fn_80294128(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+4));
}
void fn_8028FD44(int p0){
 fn_80294174(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+4));
}
void *fn_8028FD68(void *object){return reinterpret_cast<char *>(object)+88;}
}
#pragma pop
