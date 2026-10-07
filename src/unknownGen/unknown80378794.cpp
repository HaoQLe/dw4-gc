#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void fn_80378794(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+0)=value;}
int fn_8037879C(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+12);}
int fn_803787A4(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+12);}
int fn_803787AC(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+12);}
void *fn_803787B4(int p0,int p1){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+0);
 if(!*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0)){
  return (void *)p0;
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0))+4)=(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0))+4))+1);
 return (void *)p0;
}
}
#pragma pop
