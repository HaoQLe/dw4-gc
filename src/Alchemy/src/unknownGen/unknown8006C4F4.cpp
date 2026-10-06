#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006CC88(void *);
void *fn_8006CCE0();
extern char lbl_80476630[];
}
extern "C" {
void *fn_8006C4F4(int p0){
 fn_8006CC88((void *)p0);
 *reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0)=lbl_80476630;
 return (void *)p0;
}
void *fn_8006C530(){return fn_8006CCE0();}
int fn_8006C550(){return 0;}
}
#pragma pop
