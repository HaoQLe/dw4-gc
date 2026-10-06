#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800667CC();
void fn_80069128(void *,void *);
}
extern "C" {
void fn_8017EA3C(int p0,int p1){
 fn_80069128(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32),(void *)p1);
}
void fn_8017EA60(int p0){
 fn_800667CC();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+20)=(void *)p0;
}
}
#pragma pop
