#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80041F84(void *,void *,void *);
}
extern "C" {
void fn_80118518(int p0,int p1,int p2){
 fn_80041F84(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),(void *)p1,(void *)p2);
}
}
#pragma pop
