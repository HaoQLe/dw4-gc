#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065040(void *,void *);
void fn_80065BDC(void *,void *);
extern void *lbl_80562A68;
}
extern "C" {
void fn_800BEA34(int p0,int p1,int p2,int p3,int p4,int p5){
 void *value0;
 void *value1;
 void *local0;
 fn_80065BDC((void *)p2,lbl_80562A68);
 fn_80065040(&local0,(void *)p2);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=local0;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0);
 if(value0){
  value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+4)=(reinterpret_cast<char *>(value1)+1);
 }
 if(local0){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(local0)+4)=(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(local0)+4))+-1);
  if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(local0)+4)&0x7FFFFF)){
   fn_80066E1C(local0);
   return;
  } else {
   return;
  }
 }
}
}
#pragma pop
