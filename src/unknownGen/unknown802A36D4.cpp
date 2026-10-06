#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802A25A0();
void fn_802A25EC();
void *fn_802A3564(void *,void *,void *);
}
extern "C" {
void fn_802A36D4(int p0,int p1,int p2){
 fn_802A25EC();
 void *value0=fn_802A3564((void *)p0,(void *)p1,(void *)p2);
 fn_802A25A0();
}
}
#pragma pop
