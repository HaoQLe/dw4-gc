#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80053BC0(void *,void *);
}
extern "C" {
void fn_80053E6C(int p0,int p1){
 if((unsigned int)p1!=0){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+4)=(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+4))+1);
 }
 fn_80053BC0((void *)p0,(void *)p1);
}
}
#pragma pop
