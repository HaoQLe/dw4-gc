#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80291EB4(void *);
void fn_80291F18(void *,void *);
void fn_80291F88(void *);
}
extern "C" {
void fn_80290C54(int p0){
 fn_80291EB4(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+4));
}
void fn_80290C78(int p0,int p1){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+56)=(void *)p1;
 fn_80291F18(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+4),(void *)p1);
}
void fn_80290CA0(int p0,int p1){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+8)=(void *)p1;
 fn_80291F88(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+4));
}
}
#pragma pop
