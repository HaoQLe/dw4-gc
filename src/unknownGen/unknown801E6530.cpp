#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *lbl_805657C0;
extern void *lbl_805657C4;
extern void *lbl_805657C8;
extern void *lbl_805657CC;
}
extern "C" {
void fn_801E6530(int p0){
 void *value1;
 void *value3;
 void *value5;
 void *value7;
 void *value0=lbl_805657C0;
 if(value0){
  value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+4)=(reinterpret_cast<char *>(value1)+-1);
  if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4)&0x7FFFFF)){
   fn_80066E1C(value0);
  }
  lbl_805657C0=(void *)0;
 }
 void *value2=lbl_805657C4;
 if(value2){
  value3=*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+4)=(reinterpret_cast<char *>(value3)+-1);
  if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+4)&0x7FFFFF)){
   fn_80066E1C(value2);
  }
  lbl_805657C4=(void *)0;
 }
 void *value4=lbl_805657C8;
 if(value4){
  value5=*reinterpret_cast<void **>(reinterpret_cast<char *>(value4)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+4)=(reinterpret_cast<char *>(value5)+-1);
  if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value4)+4)&0x7FFFFF)){
   fn_80066E1C(value4);
  }
  lbl_805657C8=(void *)0;
 }
 void *value6=lbl_805657CC;
 if(value6){
  value7=*reinterpret_cast<void **>(reinterpret_cast<char *>(value6)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+4)=(reinterpret_cast<char *>(value7)+-1);
  if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value6)+4)&0x7FFFFF)){
   fn_80066E1C(value6);
  }
 }
 lbl_805657CC=(void *)0;
}
}
#pragma pop
