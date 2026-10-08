#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802734A8(void *,void *,int);
void fn_802734C8(void *,void *,int);
void fn_80281A40(void *,void *,void *);
}
extern "C" {
void fn_8026E590(int p0,int p1,int p2,int p3,int p4){
 fn_802734C8((void *)p0,(void *)p1,0);
 fn_802734A8((void *)p0,(void *)p3,1);
 fn_80281A40((void *)p0,(void *)p2,(void *)p4);
}
}
#pragma pop
