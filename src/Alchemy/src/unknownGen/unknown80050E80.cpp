#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800346F0(void *);
void fn_80041660(void *,void *,int);
void *fn_80042B1C(void *,void *);
extern void *kSuccess__3Gap;
}
class UnknownGenV80050E80_0 {
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
 virtual void s58();
 virtual void s5C();
 virtual void s60();
 virtual void s64();
 virtual void s68();
 virtual void s6C();
 virtual void s70();
 virtual void s74();
 virtual void s78();
 virtual void s7C(void *);
};
extern "C" {
void fn_80050E80(int p0,int p1){
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 void *value6;
 void *value4;
 void *value7;
 void *value5;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+44);
 value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+8);
 value2=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+280);
 if(value0){
  value3=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+4)=(reinterpret_cast<char *>(value3)+-1);
  if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4)&0x7FFFFF)){
   fn_80066E1C(value0);
  }
 }
 value6=fn_800346F0(value2);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+44)=value6;
 value4=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+44);
 if((int)(int)value1>=0){
  if((int)(int)value1<=(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value4)+12)){
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+8)=value1;
  } else {
   fn_80041660(value4,value1,4);
  }
 }
 value5=(void *)0;
 while((int)(int)value5<(int)(int)value1){
  value7=fn_80042B1C((void *)p1,value5);
  reinterpret_cast<UnknownGenV80050E80_0 *>(value7)->s7C((void *)p1);
  value5=(reinterpret_cast<char *>(value5)+1);
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kSuccess__3Gap;
}
}
#pragma pop
