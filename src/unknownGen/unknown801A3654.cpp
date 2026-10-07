#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8003657C(void *);
void *fn_80130CE4(void *);
void fn_801845B4();
extern void *lbl_8056464C;
extern void *lbl_80564650;
}
extern "C" {
void fn_801A3654(){
 void *value1;
 void *value4;
 void *value3;
 void *value5;
 fn_801845B4();
 void *value0=lbl_8056464C;
 if(value0){
  value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+4)=(reinterpret_cast<char *>(value1)+-1);
  if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4)&0x7FFFFF)){
   fn_80066E1C(value0);
  }
 }
 value4=fn_80130CE4((void *)0);
 lbl_8056464C=value4;
 void *value2=lbl_80564650;
 if(value2){
  value3=*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+4)=(reinterpret_cast<char *>(value3)+-1);
  if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+4)&0x7FFFFF)){
   fn_80066E1C(value2);
  }
 }
 value5=fn_8003657C((void *)0);
 lbl_80564650=value5;
}
}
#pragma pop
