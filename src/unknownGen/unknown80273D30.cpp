#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80272CF4(void *,void *);
void fn_80278088(void *,int);
void *fn_80280E84(void *,void *,void *);
}
extern "C" {
void *fn_80273D30(int p0,int p1){
 void *value5;
 void *value6;
 void *value7;
 void *value0;
 double value1;
 void *value2;
 double value3;
 void *value4;
 value5=fn_80272CF4((void *)p0,(void *)p1);
 value6=fn_80272CF4((void *)p0,(void *)-1);
 value7=fn_80280E84((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>(value5)+8),value6);
 if(value7){
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+-16)=*reinterpret_cast<void **>(reinterpret_cast<char *>(value7)+0);
  value1=*reinterpret_cast<double *>(reinterpret_cast<char *>(value7)+8);
  *reinterpret_cast<double *>(reinterpret_cast<char *>(value0)+-8)=value1;
  value2=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+0)=*reinterpret_cast<void **>(reinterpret_cast<char *>(value7)+16);
  value3=*reinterpret_cast<double *>(reinterpret_cast<char *>(value7)+24);
  *reinterpret_cast<double *>(reinterpret_cast<char *>(value2)+8)=value3;
  value4=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0);
  if((unsigned int)(int)value4==(unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8)){
   fn_80278088((void *)p0,1);
  }
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0))+16);
  return (void *)1;
 } else {
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0))+-16);
  return (void *)0;
 }
}
}
#pragma pop
