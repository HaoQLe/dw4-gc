#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_803C6058(void *,int);
void fn_803C6060(void *,int);
}
extern "C" {
void fn_803FAC00(int p0,int p1){
 fn_803C6058(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+172),(int)(int)((void *)p1));
}
void fn_803FAC24(int p0,int p1){
 fn_803C6060(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+172),(int)(int)((void *)p1));
}
}
#pragma pop
