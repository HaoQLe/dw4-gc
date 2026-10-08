#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800638E0(void *);
extern char lbl_80476E6C[];
}
extern "C" {
void *fn_80075A2C(int p0){
 fn_800638E0((void *)p0);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=lbl_80476E6C;
 return (void *)p0;
}
}
#pragma pop
