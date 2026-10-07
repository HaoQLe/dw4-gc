#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void *fn_8011D014(int p0,int p1){
 void *value0;
 void *value1;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8);
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+0)!=0){
  return (void *)p0;
 }
 value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+36);
 if(!value1){
  return value1;
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value1)+24)=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+32);
 return value1;
}
}
#pragma pop
