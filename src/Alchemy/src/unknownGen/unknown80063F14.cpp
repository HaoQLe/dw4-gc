#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
class UnknownGenV80063F14_0 {
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
class UnknownGenV80063F14_1 {
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
 virtual void * s64();
};
class UnknownGenV80063F14_2 {
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
 virtual void s8C(void *);
};
extern "C" {
void *fn_80063F14(int p0){
 void *value2;
 void *value0;
 void *value3;
 void *value1;
 value2=reinterpret_cast<UnknownGenV80063F14_0 *>((void *)p0)->s5C();
 if(value2){
  value0=(void *)(int)*reinterpret_cast<short *>(reinterpret_cast<char *>(value2)+18);
  *reinterpret_cast<short *>(reinterpret_cast<char *>((void *)p0)+16)=(short)(int)value0;
 } else {
  *reinterpret_cast<short *>(reinterpret_cast<char *>((void *)p0)+16)=-1;
 }
 value3=reinterpret_cast<UnknownGenV80063F14_1 *>((void *)p0)->s64();
 *reinterpret_cast<short *>(reinterpret_cast<char *>((void *)p0)+20)=(short)(int)value3;
 reinterpret_cast<UnknownGenV80063F14_2 *>((void *)p0)->s8C((void *)0);
 value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+28);
 if(value1){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value1)+0)=(void *)p0;
 }
 return value1;
}
}
#pragma pop
