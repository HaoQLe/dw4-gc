#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80276A9C(void *,void *,int);
void fn_8027D9F4(void *,void *);
}
extern "C" {
void fn_8027D748(int p0){
 void *local0;
 fn_8027D9F4((void *)p0,&local0);
 fn_80276A9C((void *)p0,&local0,1);
}
}
#pragma pop
