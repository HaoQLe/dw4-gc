#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8036B864(void *);
void fn_8036BD14(void *);
void *fn_8036BDF0(void *);
void fn_8036C06C(void *);
}
class UnknownGenV8039108C_0 {
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
};
extern "C" {
void fn_8039108C(int p0){
 void *value0;
 switch((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+28)){
 case 0:
  reinterpret_cast<UnknownGenV8039108C_0 *>((void *)p0)->s60();
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+28)=(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+28))+1);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+40)=(void *)0;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+36)=(void *)0;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+32)=(void *)0;
  break;
 case 2:
  fn_8036BD14((void *)p0);
  fn_8036B864((void *)p0);
  fn_8036C06C((void *)p0);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+28)=(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+28))+1);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+40)=(void *)0;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+36)=(void *)0;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+32)=(void *)0;
  break;
 case 3:
  value0=fn_8036BDF0((void *)p0);
  if(!(unsigned char)(int)value0){
   break;
  }
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+24)=0;
 }
}
}
#pragma pop
