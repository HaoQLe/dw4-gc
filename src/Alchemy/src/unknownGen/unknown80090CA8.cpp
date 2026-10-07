#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *lbl_8055DDBC;
}
class UnknownGenV80090CA8_0 {
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
 virtual void * sA8(void *);
};
extern "C" {
void *fn_80090CA8(int p0){
 void *value0;
 void *value1;
 value1=reinterpret_cast<UnknownGenV80090CA8_0 *>((void *)p0)->sA8((void *)0);
 value0=value1;
 if(!value1){
  value0=(void *)-1;
 }
 return value0;
}
void *fn_80090CE4(){
 void *value0=lbl_8055DDBC;
 if((unsigned int)((int)value0+65536)!=65535){
  return value0;
 }
 return (void *)0;
}
int fn_80090CFC(){return 4096;}
}
#pragma pop
