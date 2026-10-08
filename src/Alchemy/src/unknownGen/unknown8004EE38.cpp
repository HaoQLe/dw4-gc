#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80042B1C(void *,void *);
extern void *kSuccess__3Gap;
}
class UnknownGenV8004EE38_0 {
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
 virtual void * sDC(void *,void *);
};
class UnknownGenV8004EE38_1 {
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
 virtual void sA0(void *);
};
extern "C" {
void fn_8004EE38(int p0,int p1){
 void *value1;
 void *value2;
 void *value0;
 void *value3;
 value2=reinterpret_cast<UnknownGenV8004EE38_0 *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+280))->sDC(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+148),(void *)16);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+180)=value2;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+252)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+180);
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+8);
 value1=(void *)0;
 while((int)(int)value1<(int)(int)value0){
  value3=fn_80042B1C((void *)p1,value1);
  reinterpret_cast<UnknownGenV8004EE38_1 *>(value3)->sA0((void *)p1);
  value1=(reinterpret_cast<char *>(value1)+1);
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kSuccess__3Gap;
}
}
#pragma pop
