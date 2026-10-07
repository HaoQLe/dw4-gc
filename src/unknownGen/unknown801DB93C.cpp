#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_801D40B0(void *,void *,void *,void *);
extern void *lbl_80562A68;
}
extern "C" {
void fn_801DB93C(int p0,int p1,int p2){
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 void *value4;
 void *value5;
 if((int)p2!=0){
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p2)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p2)+4)=(reinterpret_cast<char *>(value0)+1);
 }
 value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32);
 if(value1){
  value2=*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value1)+4)=(reinterpret_cast<char *>(value2)+-1);
  if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+4)&0x7FFFFF)){
   fn_80066E1C(value1);
  }
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+32)=(void *)p2;
 if((unsigned int)p1!=0){
  value3=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+4)=(reinterpret_cast<char *>(value3)+1);
 }
 value4=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+36);
 if(value4){
  value5=*reinterpret_cast<void **>(reinterpret_cast<char *>(value4)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+4)=(reinterpret_cast<char *>(value5)+-1);
  if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value4)+4)&0x7FFFFF)){
   fn_80066E1C(value4);
  }
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+36)=(void *)p1;
 fn_801D40B0(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+52),lbl_80562A68,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+36),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32));
}
}
#pragma pop
