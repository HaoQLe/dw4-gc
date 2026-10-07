#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80041E40(void *,void *,int);
void fn_800424B4(void *,void *,void *);
void *fn_8028A33C(void *,void *);
}
class UnknownGenV8028A268_0 {
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
};
class UnknownGenV8028A2D0_1 {
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
void fn_8028A268(int p0,int p1){
 void *value0;
 value0=fn_8028A33C((void *)p0,(void *)p1);
 if(!(unsigned char)(int)value0){
  fn_80041E40(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8),(void *)p1,0);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+12)=(void *)p0;
  reinterpret_cast<UnknownGenV8028A268_0 *>((void *)p1)->s5C();
  return;
 } else {
  return;
 }
}
void fn_8028A2D0(int p0,int p1){
 void *value0;
 void *local0;
 value0=fn_8028A33C((void *)p0,(void *)p1);
 if((unsigned char)(int)value0){
  reinterpret_cast<UnknownGenV8028A2D0_1 *>((void *)p1)->s60();
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+12)=(void *)0;
  fn_800424B4(&local0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8),(void *)p1);
  return;
 } else {
  return;
 }
}
}
#pragma pop
