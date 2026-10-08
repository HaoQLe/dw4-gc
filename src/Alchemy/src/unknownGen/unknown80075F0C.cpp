#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800638E0(void *);
extern char lbl_80477054[];
}
extern "C" {
void *fn_80075F0C(int p0){
 fn_800638E0((void *)p0);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=lbl_80477054;
 return (void *)p0;
}
}
#pragma pop
