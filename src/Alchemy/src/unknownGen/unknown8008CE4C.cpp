#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80058B34(void *);
void fn_80058B70();
void fn_800667A4();
extern char lbl_80473AE8[];
}
extern "C" {
void *fn_8008CE4C(int p0){
 fn_80058B34((void *)p0);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=lbl_80473AE8;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+116)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+128)=(void *)0;
 return (void *)p0;
}
void fn_8008CE94(){return fn_80058B70();}
void fn_8008CEB4(){return fn_800667A4();}
}
#pragma pop
