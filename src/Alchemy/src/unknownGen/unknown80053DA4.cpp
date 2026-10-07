#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80053A50(void *,void *,void *);
}
extern "C" {
void fn_80053DA4(int p0,int p1,int p2){
 if((unsigned int)p2!=0){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p2)+4)=(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p2)+4))+1);
 }
 fn_80053A50((void *)p0,(void *)p1,(void *)p2);
}
}
#pragma pop
