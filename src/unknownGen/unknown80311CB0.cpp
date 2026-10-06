#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8028A398(void *,void *);
extern void *lbl_80534AC8;
}
extern "C" {
void *fn_80311CB0(){return lbl_80534AC8;}
void fn_80311CC0(int p0){
 fn_8028A398(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),(void *)p0);
}
}
#pragma pop
