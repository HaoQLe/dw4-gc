#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8016C330(void *,void *);
void *fn_80188264(void *);
void fn_80188BA4(void *);
void fn_80188C0C(void *,int);
void fn_80188CAC(void *,void *);
void fn_80188CD0(void *);
void fn_801A5D50(void *,void *,void *,void *,void *);
extern void *kSuccess__3Gap;
}
class UnknownGenV8016C3AC_0 {
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
};
extern "C" {
void fn_8016C3AC(int p0,int p1,int p2){
 void *value0;
 void *value1;
 void *value2;
 void *local1;
 void *local0;
 fn_80188BA4(&local1);
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+44);
 if((!value0||(value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+48),!value1))){
  fn_80188CAC((void *)p0,&local1);
  fn_80188C0C(&local1,-1);
  return;
 } else {
  value2=fn_80188264((void *)p2);
  fn_801A5D50(&local0,value0,value2,value1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+40));
  if((int)(int)local0==(int)(int)kSuccess__3Gap){
   fn_8016C330(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+40),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+48));
   reinterpret_cast<UnknownGenV8016C3AC_0 *>((void *)p1)->s90();
   fn_80188CD0(&local1);
  }
  fn_80188CAC((void *)p0,&local1);
  fn_80188C0C(&local1,-1);
  return;
 }
}
}
#pragma pop
