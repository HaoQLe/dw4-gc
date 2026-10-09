#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80381D20(void *,void *,void *,void *);
void fn_80382858(void *,void *,void *,void *);
}
class UnknownGenV80386148_0 {
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
 virtual void s84();
 virtual void s88();
 virtual void s8C();
 virtual void s90();
 virtual void s94();
 virtual void s98();
 virtual void s9C();
 virtual void sA0();
};
extern "C" {
void beNDMWStatusMainSlot_virtual84(int p0){
 fn_80381D20((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+104),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+84),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+48));
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+84)==0){
  reinterpret_cast<UnknownGenV80386148_0 *>((void *)p0)->sA0();
  return;
 } else {
  return;
 }
}
void beNDMWStatusMainSlot_virtualA4(int p0,int p1){
 fn_80382858((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+116),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+92),(void *)p1);
}
}
#pragma pop
