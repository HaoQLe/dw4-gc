#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *lbl_805622B0;
}
extern "C" {
void fn_8006B35C(int p0){
 void *value1;
 void *value2;
 void *value0=lbl_805622B0;
 if(value0){
  value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+4)=(reinterpret_cast<char *>(value1)+-1);
  if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4)&0x7FFFFF)){
   fn_80066E1C(value0);
  }
 }
 if((unsigned int)p0!=0){
  value2=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+4)=(reinterpret_cast<char *>(value2)+1);
 }
 lbl_805622B0=(void *)p0;
}
}
#pragma pop
