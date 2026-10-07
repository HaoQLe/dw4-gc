#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800692E0(void *,void *,void *,int);
}
extern "C" {
void fn_80060A00(int p0,int p1){
 void *local0;
 fn_800692E0(&local0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20),(void *)p1,0);
}
}
#pragma pop
