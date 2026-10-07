#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800537E0(void *);
void fn_80053A50(void *,void *,void *);
void fn_80053DD8(void *,int);
}
extern "C" {
void fn_80053D6C(int p0){
 fn_80053DD8((void *)p0,0);
 fn_800537E0((void *)p0);
}
void fn_80053DA4(int p0,int p1,int p2){
 if((unsigned int)p2!=0){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p2)+4)=(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p2)+4))+1);
 }
 fn_80053A50((void *)p0,(void *)p1,(void *)p2);
}
}
#pragma pop
