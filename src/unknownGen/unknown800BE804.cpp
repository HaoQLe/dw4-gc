#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *lbl_80562AEC;
}
extern "C" {
void igFloatConstantAttr_virtual90(){
 void *value1;
 void *value0=lbl_80562AEC;
 if(value0){
  if(value0){
   value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+4)=(reinterpret_cast<char *>(value1)+-1);
   if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4)&0x7FFFFF)){
    fn_80066E1C(value0);
   }
  }
  lbl_80562AEC=(void *)0;
  return;
 } else {
  return;
 }
}
}
#pragma pop
