#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80068204(void *,void *,void *);
void fn_80068390(void *,void *);
extern void *kFailure__3Gap;
extern void *kSuccess__3Gap;
}
class UnknownGenV8006BF2C_0 {
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
 virtual void * s80(void *,void *);
};
class UnknownGenV8006BF2C_1 {
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
 virtual void * sA8();
};
extern "C" {
void igGamecubeThread_virtual9C(int p0,int p1,int p2){
 void *value0;
 void *value1;
 void *value2;
 value0=reinterpret_cast<UnknownGenV8006BF2C_0 *>((void *)p1)->s80((void *)p1,(void *)p2);
 if(!(unsigned char)(int)value0){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+36)=(void *)p2;
  if(!*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+45)){
   if(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+32)){
    fn_80068390((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+32));
   }
  }
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+45)=0;
  value1=reinterpret_cast<UnknownGenV8006BF2C_1 *>((void *)p1)->sA8();
  value2=fn_80068204((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+36),(void *)(int)(unsigned short)(int)value1);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+32)=value2;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kSuccess__3Gap;
  return;
 } else {
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kFailure__3Gap;
  return;
 }
}
}
#pragma pop
