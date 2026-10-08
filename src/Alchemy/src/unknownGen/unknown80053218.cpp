#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80042B1C(void *,void *);
extern void *kSuccess__3Gap;
}
class UnknownGenV80053218_0 {
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
void fn_80053218(int p0,int p1){
 void *value1;
 void *value0;
 void *value2;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+256)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+268)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+272)=(void *)0;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+8);
 value1=(void *)0;
 while((int)(int)value1<(int)(int)value0){
  value2=fn_80042B1C((void *)p1,value1);
  reinterpret_cast<UnknownGenV80053218_0 *>(value2)->s8C((void *)p1);
  value1=(reinterpret_cast<char *>(value1)+1);
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kSuccess__3Gap;
}
}
#pragma pop
