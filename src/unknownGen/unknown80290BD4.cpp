#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80294040(void *);
}
extern "C" {
void fn_80290BD4(int p0){
 fn_80294040(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+4));
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+1)=0;
}
}
#pragma pop
