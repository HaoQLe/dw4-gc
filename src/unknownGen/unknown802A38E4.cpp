#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802A25A0();
void fn_802A25EC();
void *fn_802A372C(void *,void *,void *,void *);
}
extern "C" {
void fn_802A38E4(int p0,int p1,int p2,int p3){
 fn_802A25EC();
 void *value0=fn_802A372C((void *)p0,(void *)p1,(void *)p2,(void *)p3);
 fn_802A25A0();
}
}
#pragma pop
