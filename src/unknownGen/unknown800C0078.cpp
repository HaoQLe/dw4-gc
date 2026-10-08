#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800BCB6C(void *,void *);
void fn_800BCB74(void *);
}
extern "C" {
void fn_800C0078(int p0){
 fn_800BCB74((void *)p0);
 fn_800BCB6C((void *)p0,(void *)(int)(short)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+36));
}
}
#pragma pop
