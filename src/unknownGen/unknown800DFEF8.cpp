#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
class UnknownGenV800DFEF8_0 {
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
 virtual void s78(void *,void *);
};
class UnknownGenV800DFEF8_1 {
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
 virtual void s74(void *,void *);
};
extern "C" {
void igGamecubeIndexArray_virtual7C(int p0,int p1,int p2){
 void *value0;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20);
 switch((int)(int)value0){
 case 1:
  reinterpret_cast<UnknownGenV800DFEF8_0 *>((void *)p0)->s78((void *)p1,(void *)p2);
  return;
 case 0:
  reinterpret_cast<UnknownGenV800DFEF8_1 *>((void *)p0)->s74((void *)(int)(unsigned short)p1,(void *)(int)(unsigned short)p2);
  return;
 }
}
}
#pragma pop
