#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800F2294(void *);
}
class UnknownGenV800F222C_0 {
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
};
extern "C" {
void fn_800F222C(int p0){
 void *value0;
 fn_800F2294((void *)p0);
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24);
 if(((unsigned int)(int)value0==100||!value0)){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+24)=(void *)100;
 }
 if((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24)!=103){
  reinterpret_cast<UnknownGenV800F222C_0 *>((void *)p0)->s88();
  return;
 } else {
  return;
 }
}
}
#pragma pop
