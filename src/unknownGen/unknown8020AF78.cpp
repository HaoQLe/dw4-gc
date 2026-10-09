#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800667B0();
extern void *lbl_80565978;
}
extern "C" {
void igTraversal_virtual24(int p0,int p1){
 void *value1;
 void *value2;
 void *value3;
 fn_800667B0();
 if(!(unsigned char)p1){
  void *value0=lbl_80565978;
  if(value0){
   value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+4)=(reinterpret_cast<char *>(value1)+1);
  }
  value2=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+28);
  if(value2){
   value3=*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+4)=(reinterpret_cast<char *>(value3)+-1);
   if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+4)&0x7FFFFF)){
    fn_80066E1C(value2);
   }
  }
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+28)=value0;
  return;
 } else {
  return;
 }
}
}
#pragma pop
