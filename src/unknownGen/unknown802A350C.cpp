#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802A25A0(void *);
void fn_802A25EC(void *,void *,void *);
void *fn_802A3344(void *,void *,void *);
}
extern "C" {
void fn_802A350C(int p0,int p1,int p2){
 fn_802A25EC((void *)p0,(void *)p1,(void *)p2);
 void *value0=fn_802A3344((void *)p0,(void *)p1,(void *)p2);
 fn_802A25A0(value0);
}
}
#pragma pop
