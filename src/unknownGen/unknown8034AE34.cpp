#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void fn_8034AE34(int p0,int p1,int p2,int p3){
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 void *value4;
 void *value5;
 void *value6;
 void *value7;
 void *value8;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+44);
 if(*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+20)){
  value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+24);
  if((int)(int)value1==3){
   *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+20)=1;
   *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value0)+12)=1;
   *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value0)+13)=0;
  }
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+24)=(void *)0;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+36)=(void *)0;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+32)=(void *)0;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+28)=(void *)0;
 } else {
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+20)=1;
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value0)+12)=1;
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value0)+13)=0;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+24)=(void *)0;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+36)=(void *)0;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+32)=(void *)0;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+28)=(void *)0;
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+8)=(void *)p2;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value0)+28)=0;
 if((unsigned int)p3!=0){
  value2=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p3)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p3)+4)=(reinterpret_cast<char *>(value2)+1);
 }
 value3=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+36);
 if(value3){
  value4=*reinterpret_cast<void **>(reinterpret_cast<char *>(value3)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+4)=(reinterpret_cast<char *>(value4)+-1);
  if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value3)+4)&0x7FFFFF)){
   fn_80066E1C(value3);
  }
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+36)=(void *)p3;
 value5=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+24);
 if((unsigned int)p3!=0){
  value6=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p3)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p3)+4)=(reinterpret_cast<char *>(value6)+1);
 }
 value7=*reinterpret_cast<void **>(reinterpret_cast<char *>(value5)+68);
 if(value7){
  value8=*reinterpret_cast<void **>(reinterpret_cast<char *>(value7)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value7)+4)=(reinterpret_cast<char *>(value8)+-1);
  if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value7)+4)&0x7FFFFF)){
   fn_80066E1C(value7);
  }
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value5)+68)=(void *)p3;
}
}
#pragma pop
