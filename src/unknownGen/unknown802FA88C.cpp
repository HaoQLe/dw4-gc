#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80071FF4(void *);
extern void *lbl_80535310;
}
extern "C" {
void fn_802FA88C(int p0){
 void *value0;
 void *value1;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32);
 if(value0){
  value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+4)=(reinterpret_cast<char *>(value1)+-1);
  if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4)&0x7FFFFF)){
   fn_80066E1C(value0);
  }
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+32)=(void *)0;
 fn_80071FF4(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+56));
}
void *fn_802FA8EC(){return lbl_80535310;}
void fn_802FA8FC(){}
}
#pragma pop
