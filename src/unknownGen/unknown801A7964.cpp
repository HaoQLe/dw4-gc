#include <unknownGen.h>
#include <meta/igGaussianFilterFun.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80056378(void *);
void fn_800667D4(void *);
}
extern "C" {
void igGaussianFilterFun_virtual30(int p0){
 fn_80056378(reinterpret_cast<Meta::igGaussianFilterFun *>((void *)p0)->_constants);
 fn_800667D4((void *)p0);
}
}
#pragma pop
