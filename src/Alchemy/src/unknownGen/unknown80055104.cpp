#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80068390(void *,void *);
}
class UnknownGenV80055104_0 {
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
 virtual void s7C();
 virtual void s80();
};
class UnknownGenV80055104_1 {
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
 virtual void s68(void *);
};
class UnknownGenV80055104_2 {
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
 virtual void s60(void *);
};
extern "C" {
void fn_80055104(int p0){
 void *value0;
 void *value1;
 if(*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+45)){
  reinterpret_cast<UnknownGenV80055104_0 *>((void *)p0)->s80();
  reinterpret_cast<UnknownGenV80055104_1 *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+64))->s68(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24));
  reinterpret_cast<UnknownGenV80055104_2 *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+64))->s60(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24));
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+64);
  if(value0){
   value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+4)=(reinterpret_cast<char *>(value1)+-1);
   if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4)&0x7FFFFF)){
    fn_80066E1C(value0);
   }
  }
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+64)=(void *)0;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+24)=(void *)-1;
  fn_80068390((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+60));
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+60)=(void *)0;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+48)=(void *)0;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+56)=(void *)0;
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+45)=0;
  return;
 } else {
  return;
 }
}
}
#pragma pop
