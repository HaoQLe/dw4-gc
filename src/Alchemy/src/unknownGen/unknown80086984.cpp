#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *kFailure__3Gap;
extern void *kSuccess__3Gap;
}
class UnknownGenV80086984_0 {
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
 virtual void * sD8(void *);
};
class UnknownGenV80086984_1 {
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
 virtual void sDC();
 virtual void sE0();
 virtual void sE4();
 virtual void sE8();
 virtual void sEC();
 virtual void sF0();
 virtual void sF4();
 virtual void sF8();
 virtual void sFC();
 virtual void s100(void *,void *);
};
extern "C" {
void igElfFile_virtual17C(int p0,int p1,int p2,int p3,int p4){
 void *value0;
 void *value1;
 value0=(void *)0;
 while((int)(int)value0<(int)(unsigned short)p2){
  value1=reinterpret_cast<UnknownGenV80086984_0 *>((void *)p1)->sD8((void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>((void *)p3)+((int)value0<<2)));
  if(!value1){
   break;
  }
  *reinterpret_cast<int *>(reinterpret_cast<char *>((void *)p4)+((int)value0<<2))=(int)(int)value1;
  value0=(reinterpret_cast<char *>(value0)+1);
 }
 if((int)(int)value0<(int)(unsigned short)p2){
  reinterpret_cast<UnknownGenV80086984_1 *>((void *)p1)->s100(value0,(void *)p4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kFailure__3Gap;
  return;
 } else {
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kSuccess__3Gap;
  return;
 }
}
}
#pragma pop
