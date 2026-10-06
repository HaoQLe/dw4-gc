#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800425BC(void *);
extern void *lbl_80515C70;
}
extern "C" {
void fn_8028B9D0(int p0){
 fn_800425BC(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8));
}
void *fn_8028B9F4(){return lbl_80515C70;}
}
#pragma pop
