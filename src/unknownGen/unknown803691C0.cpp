#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8028A730(void *,void *);
extern char lbl_80534AAC[];
}
extern "C" {
void fn_803691C0(int p0){
 void *value5;
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 void *value4;
 if(!*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32)){
  value5=fn_8028A730(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),*reinterpret_cast<void **>((lbl_80534AAC+0)));
  if((int)(int)value5!=0){
   value0=*reinterpret_cast<void **>(reinterpret_cast<char *>(value5)+4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value5)+4)=(reinterpret_cast<char *>(value0)+1);
  }
  value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32);
  if(value1){
   value2=*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value1)+4)=(reinterpret_cast<char *>(value2)+-1);
   if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+4)&0x7FFFFF)){
    fn_80066E1C(value1);
   }
  }
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+32)=value5;
 }
 value3=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+36);
 if(value3){
  if(value3){
   value4=*reinterpret_cast<void **>(reinterpret_cast<char *>(value3)+4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+4)=(reinterpret_cast<char *>(value4)+-1);
   if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value3)+4)&0x7FFFFF)){
    fn_80066E1C(value3);
   }
  }
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+36)=(void *)0;
  return;
 } else {
  return;
 }
}
}
#pragma pop
