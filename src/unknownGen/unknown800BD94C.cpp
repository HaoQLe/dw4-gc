#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800F9044(void *,void *);
}
extern "C" {
void fn_800BD94C(int p0,int p1){
 fn_800F9044((void *)p1,(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+12));
}
}
#pragma pop
