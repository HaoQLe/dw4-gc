#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8005641C(void *);
void *fn_80068254(void *,void *,int);
void fn_8006834C(void *,void *);
}
class UnknownGenV80063C74_0 {
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
 virtual void * s64();
};
extern "C" {
void fn_80063C74(int p0){
 void *value1;
 void *value0;
 void *value2;
 void *value3;
 void *value4;
 value1=reinterpret_cast<UnknownGenV80063C74_0 *>((void *)p0)->s64();
 *reinterpret_cast<short *>(reinterpret_cast<char *>((void *)p0)+20)=(short)(int)value1;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32);
 if(!value0){
  value2=fn_80068254((void *)p0,(void *)(int)*reinterpret_cast<unsigned short *>(reinterpret_cast<char *>((void *)p0)+20),1);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+32)=value2;
 } else {
  value3=fn_8005641C(value0);
  if((int)*reinterpret_cast<unsigned short *>(reinterpret_cast<char *>((void *)p0)+20)>(int)(int)value3){
   fn_8006834C((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32));
   value4=fn_80068254((void *)p0,(void *)(int)*reinterpret_cast<unsigned short *>(reinterpret_cast<char *>((void *)p0)+20),1);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+32)=value4;
   return;
  } else {
   return;
  }
 }
}
}
#pragma pop
