#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802799FC(void *,void *,void *);
}
extern "C" {
void fn_80276058(int p0,int p1){
 fn_802799FC((void *)p0,(void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8));
}
}
#pragma pop
