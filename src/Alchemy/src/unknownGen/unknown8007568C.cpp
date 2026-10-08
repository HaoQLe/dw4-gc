#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *lbl_805622F8;
}
class UnknownGenV8007568C_0 {
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
class UnknownGenV8007568C_1 {
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
 virtual void s64(void *);
};
extern "C" {
void fn_8007568C(){
 void *value3;
 void *value0;
 void *value2;
 value3=reinterpret_cast<UnknownGenV8007568C_0 *>(lbl_805622F8)->s5C();
 reinterpret_cast<UnknownGenV8007568C_1 *>(lbl_805622F8)->s64(value3);
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>(value3)+4);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+4)=(reinterpret_cast<char *>(value0)+-1);
 if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value3)+4)&0x7FFFFF)){
  fn_80066E1C(value3);
 }
 void *value1=lbl_805622F8;
 value2=*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+4);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value1)+4)=(reinterpret_cast<char *>(value2)+-1);
 if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+4)&0x7FFFFF)){
  fn_80066E1C(value1);
 }
 lbl_805622F8=(void *)0;
}
}
#pragma pop
