#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800DD018(void *);
void fn_800DD024(void *);
void memcpy(void *,void *,void *);
}
class UnknownGenV800DF134_0 {
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
 virtual void s70(void *,void *,void *,void *);
};
class UnknownGenV800DF134_1 {
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
 virtual void s74(void *);
};
class UnknownGenV800DF134_2 {
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
 virtual void s78(void *);
};
class UnknownGenV800DF134_3 {
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
};
extern "C" {
void fn_800DF134(int p0,int p1,int p2,int p3,int p4){
 reinterpret_cast<UnknownGenV800DF134_0 *>((void *)p0)->s70((void *)p3,(void *)p2,(void *)p3,(void *)p4);
 reinterpret_cast<UnknownGenV800DF134_1 *>((void *)p0)->s74((void *)p4);
 fn_800DD018((void *)p0);
 reinterpret_cast<UnknownGenV800DF134_2 *>((void *)p0)->s78((void *)p2);
 if((unsigned int)p1!=(unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+52)){
  reinterpret_cast<UnknownGenV800DF134_3 *>((void *)p0)->s7C();
  memcpy(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+52),(void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+48));
  return;
 } else {
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+60)=1;
  fn_800DD024((void *)p0);
  return;
 }
}
}
#pragma pop
