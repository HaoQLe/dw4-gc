#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8040B834(void *);
void fn_8040B8C0(void *);
void fn_8040B92C(void *);
void fn_8040B994(void *);
void fn_8040BE6C(void *);
void fn_8040C0A4(void *);
extern char lbl_80462E10[];
}
class UnknownGenV8040ACE4_0 {
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
 virtual void * s68(void *);
};
class UnknownGenV8040ACE4_1 {
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
 virtual void s70(void *);
};
class UnknownGenV8040ACE4_2 {
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
 virtual void s70(void *);
};
extern "C" {
void fn_8040ACE4(int p0){
 void *value3;
 void *value0;
 void *value1;
 void *value2;
 value3=reinterpret_cast<UnknownGenV8040ACE4_0 *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8))->s68(lbl_80462E10);
 if((int)(int)value3!=0){
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>(value3)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+4)=(reinterpret_cast<char *>(value0)+1);
 }
 value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+88);
 if(value1){
  value2=*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value1)+4)=(reinterpret_cast<char *>(value2)+-1);
  if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+4)&0x7FFFFF)){
   fn_80066E1C(value1);
  }
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+88)=value3;
 reinterpret_cast<UnknownGenV8040ACE4_1 *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+72))->s70(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8));
 reinterpret_cast<UnknownGenV8040ACE4_2 *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+80))->s70(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8));
 fn_8040B834((void *)p0);
 fn_8040B8C0((void *)p0);
 fn_8040B92C((void *)p0);
 fn_8040BE6C((void *)p0);
 fn_8040C0A4((void *)p0);
 fn_8040B994((void *)p0);
}
}
#pragma pop
