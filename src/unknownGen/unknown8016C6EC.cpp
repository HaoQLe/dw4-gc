#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658F8(void *,void *);
void *fn_8018810C(void *,void *);
}
class UnknownGenV8016C6EC_0 {
public:
 virtual void s08();
 virtual void s0C();
 virtual void s10();
 virtual void s14();
 virtual void s18();
 virtual void s1C();
 virtual void s20();
 virtual void s24();
 virtual void s28();
 virtual void s2C();
 virtual void s30();
 virtual void s34();
 virtual void s38();
 virtual void s3C();
 virtual void s40();
 virtual void s44();
 virtual void s48();
 virtual void s4C();
 virtual void s50();
 virtual void s54();
 virtual void * s58();
};
extern "C" {
void igFieldUpdate_virtual6C(int p0,int p1){
 void *value7;
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 void *value8;
 void *value9;
 void *value4;
 void *value5;
 void *value6;
 value7=fn_8018810C((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+36));
 if((int)(int)value7!=0){
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>(value7)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value7)+4)=(reinterpret_cast<char *>(value0)+1);
 }
 value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+44);
 if(value1){
  value2=*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value1)+4)=(reinterpret_cast<char *>(value2)+-1);
  if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+4)&0x7FFFFF)){
   fn_80066E1C(value1);
  }
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+44)=value7;
 value3=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+40);
 if(value3){
  value8=reinterpret_cast<UnknownGenV8016C6EC_0 *>(value3)->s58();
  value9=fn_800658F8(value8,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32));
  if((int)(int)value9!=0){
   value4=*reinterpret_cast<void **>(reinterpret_cast<char *>(value9)+4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value9)+4)=(reinterpret_cast<char *>(value4)+1);
  }
  value5=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+48);
  if(value5){
   value6=*reinterpret_cast<void **>(reinterpret_cast<char *>(value5)+4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value5)+4)=(reinterpret_cast<char *>(value6)+-1);
   if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value5)+4)&0x7FFFFF)){
    fn_80066E1C(value5);
   }
  }
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+48)=value9;
  return;
 } else {
  return;
 }
}
}
#pragma pop
