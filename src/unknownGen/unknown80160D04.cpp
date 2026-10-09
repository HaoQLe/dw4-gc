#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *lbl_80564714;
}
extern "C" {
void *igConvertTransform_virtual8C(int p0){
 void *value1;
 void *value2;
 void *value3;
 void *value0=lbl_80564714;
 if(value0){
  value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+4)=(reinterpret_cast<char *>(value1)+1);
 }
 value2=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+40);
 if(value2){
  value3=*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+4)=(reinterpret_cast<char *>(value3)+-1);
  if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+4)&0x7FFFFF)){
   fn_80066E1C(value2);
  }
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+40)=value0;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+48)=0;
 return (void *)1;
}
int igConvertTransform_virtual84(){return 1;}
}
#pragma pop
