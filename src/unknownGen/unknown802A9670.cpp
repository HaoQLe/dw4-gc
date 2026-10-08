#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *lbl_80534348;
}
extern "C" {
void fn_802A9670(int p0){
 void *value0;
 void *value2;
 if((int)p0!=0){
  if((int)p0!=0){
   value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+4)=(reinterpret_cast<char *>(value0)+1);
  }
  void *value1=lbl_80534348;
  if(value1){
   value2=*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value1)+4)=(reinterpret_cast<char *>(value2)+-1);
   if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+4)&0x7FFFFF)){
    fn_80066E1C(value1);
   }
  }
  lbl_80534348=(void *)p0;
 }
}
}
#pragma pop
