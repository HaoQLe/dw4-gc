#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80280E20(void *,void *,void *);
}
extern "C" {
void fn_8027367C(int p0,int p1){
 void *value2;
 void *value3;
 void *value0;
 double value1;
 if((int)p1>=0){
  value2=(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16)+((p1+-1)<<4));
 } else {
  value2=(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0)+(p1<<4));
 }
 value3=fn_80280E20((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+8),(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0))+-16));
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+-16)=*reinterpret_cast<void **>(reinterpret_cast<char *>(value3)+0);
 value1=*reinterpret_cast<double *>(reinterpret_cast<char *>(value3)+8);
 *reinterpret_cast<double *>(reinterpret_cast<char *>(value0)+-8)=value1;
}
}
#pragma pop
