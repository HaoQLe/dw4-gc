#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
int fn_80378234(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+260);}
int fn_8037823C(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+0);}
void *fn_80378244(int p0,int p1){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+0);
 if(!*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0)){
  return (void *)p0;
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0))+4)=(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0))+4))+1);
 return (void *)p0;
}
unsigned char fn_80378268(void *object){return *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+8);}
}
#pragma pop
