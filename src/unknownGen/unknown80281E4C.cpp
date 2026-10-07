#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80281CB8(void *,void *,int,void *,void *);
}
struct UnknownGenL80281E4C_8 {
 double m08;
};
extern "C" {
double fn_80281E4C(int p0,int p1,int p2){
 UnknownGenL80281E4C_8 local0;
 fn_80281CB8((void *)p0,&local0,8,(void *)p1,(void *)p2);
 return local0.m08;
}
}
#pragma pop
