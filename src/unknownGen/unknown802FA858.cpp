#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80071FF4(void *);
void fn_803050A8(void *,void *,void *,int,int);
extern char lbl_80425730[];
}
extern "C" {
void fn_802FA858(int p0,int p1,int p2,int p3,int p4,int p5){
 fn_803050A8(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20),(void *)p1,lbl_80425730,0,-1);
}
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
}
#pragma pop
