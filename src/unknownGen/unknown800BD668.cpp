#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800BCB6C(void *,void *);
void fn_800BCB74(void *);
}
extern "C" {
void fn_800BD668(int p0){
 fn_800BCB74((void *)p0);
 fn_800BCB6C((void *)p0,(void *)(int)*reinterpret_cast<short *>(reinterpret_cast<char *>((void *)p0)+30));
}
}
#pragma pop
