#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802761E4(void *);
void fn_80276F5C(void *,void *,void *);
}
extern "C" {
void fn_80276A50(int p0,int p1,int p2){
 fn_802761E4((void *)p0);
 fn_80276F5C((void *)p0,(void *)p1,(void *)p2);
}
}
#pragma pop
