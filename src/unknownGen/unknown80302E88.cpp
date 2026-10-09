#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8028A730(void *,void *);
extern char lbl_80535124[];
}
extern "C" {
void beMatCtrl_virtual88(int p0){
 void *value6;
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 void *value4;
 void *value5;
 value6=fn_8028A730(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),*reinterpret_cast<void **>((lbl_80535124+0)));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+36)=value6;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+56);
 if(value0){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+8)=(void *)0;
  value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+56);
  if(value1){
   value2=*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value1)+4)=(reinterpret_cast<char *>(value2)+-1);
   if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+4)&0x7FFFFF)){
    fn_80066E1C(value1);
   }
  }
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+56)=(void *)0;
 }
 value3=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+60);
 if(value3){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+8)=(void *)0;
  value4=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+60);
  if(value4){
   value5=*reinterpret_cast<void **>(reinterpret_cast<char *>(value4)+4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+4)=(reinterpret_cast<char *>(value5)+-1);
   if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value4)+4)&0x7FFFFF)){
    fn_80066E1C(value4);
   }
  }
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+60)=(void *)0;
  return;
 } else {
  return;
 }
}
}
#pragma pop
