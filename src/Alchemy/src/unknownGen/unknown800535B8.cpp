#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800638E0(void *);
extern char lbl_80475B60[];
}
extern "C" {
void *fn_800535B8(int p0){
 fn_800638E0((void *)p0);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=lbl_80475B60;
 return (void *)p0;
}
}
#pragma pop
