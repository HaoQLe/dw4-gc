#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800694EC(void *,void *);
void *fn_8028B274(void *,void *);
}
class UnknownGenV8028B5D8_0 {
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
 virtual void s6C(void *,void *);
};
extern "C" {
void fn_8028B590(int p0,int p1,int p2,int p3,int p4,int p5){
 fn_800694EC(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p2)+12),(void *)p1);
 fn_800694EC(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),(void *)p2);
}
void fn_8028B5D8(int p0,int p1,int p2){
 void *value0;
 value0=fn_8028B274((void *)p0,(void *)p2);
 if((int)(int)value0!=0){
  reinterpret_cast<UnknownGenV8028B5D8_0 *>((void *)p0)->s6C((void *)p1,value0);
  return;
 } else {
  return;
 }
}
}
#pragma pop
