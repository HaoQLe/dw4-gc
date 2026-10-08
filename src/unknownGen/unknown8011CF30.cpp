#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80119750(void *,int);
}
extern "C" {
void fn_8011CF30(int p0,int p1,int p2,int p3,int p4,int p5){
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+40);
 if(value0){
  if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+52)==0){
   fn_80119750(value0,0);
  } else {
   fn_80119750(value0,1);
  }
 }
 value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+44);
 if(value1){
  value2=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+52);
  value3=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+56);
  if((int)((int)value2+(int)value3)>=(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+48))+8)){
   fn_80119750(value1,0);
   return;
  } else {
   fn_80119750(value1,1);
   return;
  }
 }
}
}
#pragma pop
