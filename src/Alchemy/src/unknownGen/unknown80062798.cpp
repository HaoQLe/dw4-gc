#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8005647C(void *);
void fn_80056508(void *);
void fn_80062638(void *,void *,void *);
void fn_800626DC(void *,void *);
}
extern "C" {
void fn_80062798(int p0,int p1){
 void *value3;
 void *value0;
 void *value1;
 void *value2;
 void *value4;
 fn_800626DC((void *)p0,(void *)p1);
 if(*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+65)){
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8);
  if((void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>((void *)p1)+(int)value0)){
   fn_80056508((void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>((void *)p1)+(int)value0));
  }
 }
 value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32);
 value2=*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+0);
 if(value2){
  value4=fn_8005647C(value2);
  value3=value4;
 } else {
  value3=(void *)0;
 }
 *reinterpret_cast<int *>(reinterpret_cast<char *>((void *)p1)+(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8))=(int)(int)value3;
 fn_80062638((void *)p0,(void *)p1,value3);
}
}
#pragma pop
