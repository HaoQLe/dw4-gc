#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80128690(void *,void *,void *);
void fn_80128774(void *,void *);
}
extern "C" {
void fn_8021B230(int p0,int p1){
 fn_80128774((void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16)+(((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8)+-1)<<6)),(void *)p1);
}
void fn_8021B264(int p0,int p1){
 fn_80128690((void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16)+(((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8)+-1)<<6)),(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16)+(((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8)+-1)<<6)),(void *)p1);
}
}
#pragma pop
