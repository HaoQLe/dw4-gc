#include <unknownGen.h>
#include <meta/igTransform.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_801285A0(void *);
void fn_80128690(void *,void *,void *);
void fn_801FAE18(void *,void *);
}
class UnknownGenV80207288_0 {
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
 virtual void s70(void *,void *);
};
class UnknownGenV802072E4_1 {
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
class UnknownGenV802072E4_2 {
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
 virtual void * s74();
};
class UnknownGenV80207358_3 {
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
 virtual void s78(void *);
};
class UnknownGenV802073B4_4 {
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
};
extern "C" {
void igTransform_virtual24(int p0,int p1){
 fn_801FAE18((void *)p0,(void *)p1);
 if(!(unsigned char)p1){
  reinterpret_cast<UnknownGenV80207288_0 *>((void *)p0)->s70((void *)2,(void *)1);
  return;
 } else {
  return;
 }
}
void *igTransform_virtual68(int p0){
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 value2=reinterpret_cast<UnknownGenV802072E4_1 *>((void *)p0)->s5C();
 if((int)(int)value2>1){
  value1=(void *)0;
 } else {
  if(!reinterpret_cast<Meta::igTransform *>((void *)p0)->_transformInput){
   value0=(void *)1;
  } else {
   value3=reinterpret_cast<UnknownGenV802072E4_2 *>(reinterpret_cast<Meta::igTransform *>((void *)p0)->_transformInput)->s74();
   value0=value3;
  }
  value1=value0;
 }
 return value1;
}
int fn_80207350(){return 0;}
void igTransform_virtual6C(int p0,int p1){
 void *value0;
 value0=reinterpret_cast<Meta::igTransform *>((void *)p0)->_transformInput;
 if(!value0){
  fn_80128690((reinterpret_cast<char *>((void *)p0)+32),(reinterpret_cast<char *>((void *)p0)+32),(void *)p1);
  return;
 } else {
  reinterpret_cast<UnknownGenV80207358_3 *>(value0)->s78((void *)p1);
  return;
 }
}
void fn_802073A8(){}
int igTransform_virtual78(){return 2;}
void *igTransform_virtual7C(int p0){
 void *value0;
 void *value1;
 value0=reinterpret_cast<Meta::igTransform *>((void *)p0)->_transformInput;
 if(value0){
  reinterpret_cast<UnknownGenV802073B4_4 *>(value0)->s84();
  value1=fn_801285A0((reinterpret_cast<char *>((void *)p0)+32));
  return value1;
 } else {
  return value0;
 }
}
void fn_80207400(){}
}
#pragma pop
