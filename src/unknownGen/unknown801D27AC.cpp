#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800667B4(void *);
void fn_801D215C(void *);
}
class UnknownGenV801D27AC_0 {
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
 virtual void * s5C();
};
extern "C" {
void fn_801D27AC(int p0){
 void *value0;
 value0=reinterpret_cast<UnknownGenV801D27AC_0 *>((void *)p0)->s5C();
 if((unsigned char)(int)value0){
  fn_801D215C((void *)p0);
  fn_800667B4((void *)p0);
  return;
 } else {
  return;
 }
}
}
#pragma pop
