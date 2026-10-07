#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800607F4(void *);
void *fn_800BAE34(void *);
extern void *lbl_805621E8;
extern void *lbl_80562250;
extern char lbl_80562298[1];
extern void *lbl_80562AE0;
}
extern "C" {
void *fn_800BD308(){
 void *value2;
 void *value3;
 void *value4;
 void *value1;
 void *value5;
 if(!lbl_80562AE0){
  if((void *)(int)*reinterpret_cast<unsigned char *>((lbl_80562298+0))){
   value3=fn_800607F4(lbl_805621E8);
   value2=value3;
  } else {
   value4=fn_800607F4(lbl_80562250);
   value2=value4;
  }
  void *value0=lbl_80562AE0;
  if(value0){
   value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+4)=(reinterpret_cast<char *>(value1)+-1);
   if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4)&0x7FFFFF)){
    fn_80066E1C(value0);
   }
  }
  value5=fn_800BAE34(value2);
  lbl_80562AE0=value5;
 }
 return lbl_80562AE0;
}
}
#pragma pop
