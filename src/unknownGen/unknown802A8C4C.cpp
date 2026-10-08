#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024FB4(void *);
void *fn_80060834(void *);
extern char lbl_8041B9A0[];
extern void *lbl_80534320;
}
extern "C" {
void fn_802A8C4C(){
 void *value2;
 void *value1;
 void *value3;
 value2=fn_80060834(lbl_8041B9A0);
 void *value0=lbl_80534320;
 if(value0){
  value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+4)=(reinterpret_cast<char *>(value1)+-1);
  if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4)&0x7FFFFF)){
   fn_80066E1C(value0);
  }
 }
 value3=fn_80024FB4(value2);
 lbl_80534320=value3;
}
}
#pragma pop
