#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igPointSpriteExt_virtual80(void *,void *,void *);
}
class UnknownGenV800F9D58_0 {
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
 virtual void s100();
 virtual void s104();
 virtual void s108();
 virtual void s10C();
 virtual void s110();
 virtual void s114();
 virtual void s118();
 virtual void s11C(void *,void *,void *,void *,void *);
};
class UnknownGenV800F9D58_1 {
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
 virtual void s100();
 virtual void s104();
 virtual void s108();
 virtual void s10C();
 virtual void s110();
 virtual void s114();
 virtual void s118();
 virtual void s11C(void *,void *,void *,void *,void *);
};
extern "C" {
void igGamecubePointSpriteExt_virtual80(int p0,int p1,int p2,int p3,int p4,int p5){
 void *value0;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24);
 if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+20)&0x10)){
  igPointSpriteExt_virtual80((void *)p0,(void *)p1,(void *)p2);
 } else {
  if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+36)==1){
   reinterpret_cast<UnknownGenV800F9D58_0 *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+392))->s11C((void *)0,(void *)p1,(void *)p2,value0,(void *)p5);
   return;
  } else {
   reinterpret_cast<UnknownGenV800F9D58_1 *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+392))->s11C((void *)4096,(void *)p1,(void *)p2,value0,(void *)p5);
   return;
  }
 }
}
}
#pragma pop
