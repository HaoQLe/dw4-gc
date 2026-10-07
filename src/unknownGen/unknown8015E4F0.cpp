#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80068128(void *,void *);
void fn_8015E38C(void *,void *);
extern void *lbl_80564A14;
}
extern "C" {
void fn_8015E4F0(int p0,int p1){
 fn_8015E38C((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+40));
}
void fn_8015E51C(int p0,int p1,int p2,int p3,int p4,int p5){
 fn_80068128((void *)p1,lbl_80564A14);
}
}
#pragma pop
