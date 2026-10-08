#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800560F8(void *);
void *fn_800590A0(void *);
}
class UnknownGenV8005624C_0 {
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
 virtual void sA4();
 virtual void sA8();
 virtual void sAC();
 virtual void sB0();
 virtual void sB4();
 virtual void sB8();
 virtual void sBC();
 virtual void sC0();
 virtual void sC4();
 virtual void sC8();
 virtual void sCC();
 virtual void sD0();
 virtual void sD4();
 virtual void sD8();
 virtual void sDC();
 virtual void sE0();
 virtual void sE4();
 virtual void * sE8(void *,void *);
};
extern "C" {
void *fn_8005624C(int p0,int p1){
 void *value0;
 void *value1;
 void *value2;
 if((int)p0==0){
  value0=fn_800560F8((void *)p1);
 } else {
  value1=fn_800590A0((void *)p0);
  if(value1){
   value2=reinterpret_cast<UnknownGenV8005624C_0 *>(value1)->sE8((void *)p0,(void *)p1);
   return value2;
  } else {
   return (void *)0;
  }
 }
 return value0;
}
}
#pragma pop
