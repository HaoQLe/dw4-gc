#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80122D04(void *,void *);
}
class UnknownGenV801D7344_0 {
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
 virtual void s9C(void *,void *,void *);
};
extern "C" {
void *fn_801D7344(int p0,int p1,int p2,int p3){
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+96)==0){
  reinterpret_cast<UnknownGenV801D7344_0 *>((void *)p1)->s9C((void *)p1,(void *)p2,(void *)p3);
  fn_80122D04((void *)p0,(reinterpret_cast<char *>((void *)p1)+32));
 }
 return (void *)1;
}
}
#pragma pop
