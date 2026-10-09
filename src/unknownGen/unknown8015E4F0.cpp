#include <unknownGen.h>
#include <meta/igCompileGraph.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80068128(void *,void *);
void fn_8015E38C(void *,void *);
extern void *lbl_80564A14;
}
extern "C" {
void igCompileGraph_virtual70(int p0,int p1){
 fn_8015E38C((void *)p1,(void *)(int)reinterpret_cast<Meta::igCompileGraph *>((void *)p0)->_priorStateUsage);
}
void igCompileGraph_virtual74(int p0,int p1,int p2,int p3,int p4,int p5){
 fn_80068128((void *)p1,lbl_80564A14);
}
}
#pragma pop
