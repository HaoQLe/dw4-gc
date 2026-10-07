#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void fn_80277434(int p0,int p1){
 void *value0;
 double value1;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+0);
 if((int)(int)value0==6){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+8)=*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+8))+0);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=(void *)5;
  return;
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=value0;
 value1=*reinterpret_cast<double *>(reinterpret_cast<char *>((void *)p1)+8);
 *reinterpret_cast<double *>(reinterpret_cast<char *>((void *)p0)+8)=value1;
}
}
#pragma pop
