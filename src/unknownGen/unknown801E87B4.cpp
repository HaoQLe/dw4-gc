#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_801DB82C(void *);
}
extern "C" {
void fn_801E87B4(int p0){
 fn_801DB82C((void *)p0);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+540)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+544)=(void *)0;
}
}
#pragma pop
