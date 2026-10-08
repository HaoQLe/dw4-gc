#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80068430(void *);
void fn_80069128(void *,void *);
void *fn_800BB5E4(void *);
void *fn_800C37E4(void *,int);
void fn_800C3CFC(void *,int);
void fn_801E754C(void *);
extern void *lbl_805657C0;
}
class UnknownGenV801E7404_0 {
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
 virtual void sD0(void *);
};
class UnknownGenV801E7404_1 {
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
 virtual void sC4(void *);
};
class UnknownGenV801E7404_2 {
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
 virtual void sCC(void *);
};
extern "C" {
void fn_801E7404(int p0,int p1){
 void *value1;
 void *value2;
 void *value0;
 void *value3;
 reinterpret_cast<UnknownGenV801E7404_0 *>((void *)p0)->sD0((void *)p1);
 reinterpret_cast<UnknownGenV801E7404_1 *>((void *)p0)->sC4((void *)p1);
 reinterpret_cast<UnknownGenV801E7404_2 *>((void *)p0)->sCC((void *)p1);
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+60)=1;
 if(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32)){
  value1=fn_80068430((void *)p0);
  value2=fn_800BB5E4(value1);
  fn_80069128(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+64),value2);
  fn_80069128(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+68),value2);
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+4)=(reinterpret_cast<char *>(value0)+-1);
  if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+4)&0x7FFFFF)){
   fn_80066E1C(value2);
  }
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32))+96)=(void *)2;
  value3=fn_800C37E4(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32),0);
  if(!value3){
   fn_801E754C(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32));
   if(*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+73)){
    fn_800C3CFC(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32),1);
   }
  }
  fn_80069128(value2,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+80));
  fn_80069128(value2,lbl_805657C0);
  fn_80069128(value2,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+76));
  fn_80069128(value2,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+84));
  return;
 } else {
  return;
 }
}
}
#pragma pop
