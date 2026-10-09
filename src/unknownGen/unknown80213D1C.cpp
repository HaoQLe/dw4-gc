#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80213E10(void *,void *);
void fn_80213FE4(void *,void *);
void fn_8021425C(void *,void *);
void fn_80214590(void *,void *);
}
class UnknownGenV80213D1C_0 {
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
class UnknownGenV80213D1C_1 {
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
class UnknownGenV80213D1C_2 {
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
void fn_80213D1C(int p0,int p1){
 reinterpret_cast<UnknownGenV80213D1C_0 *>((void *)p0)->sD0((void *)p1);
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+60)=1;
 if(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32)){
  reinterpret_cast<UnknownGenV80213D1C_1 *>((void *)p0)->sC4((void *)p1);
  reinterpret_cast<UnknownGenV80213D1C_2 *>((void *)p0)->sCC((void *)p1);
  if(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+52)){
   fn_80214590((void *)p0,(void *)p1);
   return;
  } else {
   if((unsigned int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+116)!=255){
    fn_8021425C((void *)p0,(void *)p1);
    return;
   } else {
    if((*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+48)||!*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+36))){
     fn_80213FE4((void *)p0,(void *)p1);
     return;
    } else {
     fn_80213E10((void *)p0,(void *)p1);
     return;
    }
   }
  }
 }
}
}
#pragma pop
