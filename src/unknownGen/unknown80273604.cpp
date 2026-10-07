#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80282A90(void *,void *);
}
extern "C" {
void fn_80273604(int p0,int p1){
 void *value4;
 void *value0;
 void *value1;
 void *value2;
 void *value5;
 double value3;
 if((int)p1>=0){
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16);
  value4=(void *)(int)((int)value0+((p1+-1)<<4));
 } else {
  value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0);
  value4=(void *)(int)((int)value1+(p1<<4));
 }
 value2=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0);
 value5=fn_80282A90((void *)p0,value4);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+-16)=*reinterpret_cast<void **>(reinterpret_cast<char *>(value5)+0);
 value3=*reinterpret_cast<double *>(reinterpret_cast<char *>(value5)+8);
 *reinterpret_cast<double *>(reinterpret_cast<char *>(value2)+-8)=value3;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=value2;
}
}
#pragma pop
