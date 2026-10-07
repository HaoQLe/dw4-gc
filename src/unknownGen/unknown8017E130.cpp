#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void *fn_8017E130(int p0,int p1){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=(void *)p1;
 if(!*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0)){
  return (void *)p0;
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0))+4)=(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0))+4))+1);
 return (void *)p0;
}
}
#pragma pop
