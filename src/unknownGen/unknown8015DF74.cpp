#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80067DB0(void *,void *);
}
class UnknownGenV8015DF74_0 {
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
 virtual void * s6C(void *,void *);
};
class UnknownGenV8015DF74_1 {
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
 virtual void * s6C(void *);
};
extern "C" {
void *fn_8015DF74(int p0,int p1,int p2){
 void *value0;
 void *value1;
 void *value2;
 value0=reinterpret_cast<UnknownGenV8015DF74_0 *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24))->s6C((void *)p1,(void *)p2);
 if(((unsigned char)(int)value0||(value1=reinterpret_cast<UnknownGenV8015DF74_1 *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24))->s6C((void *)p2),(unsigned char)(int)value1))){
  return (void *)0;
 } else {
  value2=fn_80067DB0((void *)p1,(void *)p2);
  return value2;
 }
}
}
#pragma pop
