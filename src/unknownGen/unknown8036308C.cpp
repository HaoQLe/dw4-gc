#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8036317C(void *);
}
extern "C" {
void fn_8036308C(int p0){
 fn_8036317C((void *)p0);
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+29)=1;
}
}
#pragma pop
