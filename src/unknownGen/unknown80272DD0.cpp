#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80272CF4(void *,void *);
}
extern "C" {
void *fn_80272DD0(int p0,int p1){
 void *value1;
 void *value2;
 double value0;
 value2=fn_80272CF4((void *)p0,(void *)p1);
 value1=value2;
 while((unsigned int)(value1=(reinterpret_cast<char *>(value1)+16))<(unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0)){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value1)+-16)=*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+0);
  value0=*reinterpret_cast<double *>(reinterpret_cast<char *>(value1)+8);
  *reinterpret_cast<double *>(reinterpret_cast<char *>(value1)+-8)=value0;
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0))+-16);
 return value1;
}
}
#pragma pop
