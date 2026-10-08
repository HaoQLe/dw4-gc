#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80058ABC(void *);
extern char lbl_80473AE8[];
}
extern "C" {
void *fn_8008CE04(int p0){
 fn_80058ABC((void *)p0);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=lbl_80473AE8;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+116)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+128)=(void *)0;
 return (void *)p0;
}
}
#pragma pop
