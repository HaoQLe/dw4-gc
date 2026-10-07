#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800F654C(void *,void *);
}
extern "C" {
void fn_800C0DE8(int p0,int p1){
 fn_800F654C((void *)p1,(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+12));
}
}
#pragma pop
