#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80042B1C(void *,void *);
void *fn_80068128(void *,void *);
extern void *lbl_80561710;
}
class UnknownGenV80184BCC_0 {
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
 virtual void s94(void *);
};
class UnknownGenV80184BCC_1 {
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
class UnknownGenV80184BCC_2 {
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
 virtual void s88(void *);
};
class UnknownGenV80184BCC_3 {
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
};
extern "C" {
void *fn_80184BCC(int p0,int p1){
 void *value2;
 void *value0;
 void *value3;
 void *value4;
 void *value5;
 void *value1;
 void *value6;
 if(!*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+40)){
  return (void *)0;
 } else {
  reinterpret_cast<UnknownGenV80184BCC_0 *>((void *)p0)->s94((void *)p1);
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+8);
  value2=(void *)0;
  while((unsigned int)(int)value2<(unsigned int)(int)value0){
   value3=reinterpret_cast<UnknownGenV80184BCC_1 *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8))->s74();
   if((unsigned char)(int)value3){
    return (void *)0;
   }
   value4=fn_80042B1C((void *)p1,value2);
   if((int)(int)value4!=0){
    value5=fn_80068128(value4,lbl_80561710);
    if((unsigned char)(int)value5){
     value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value4)+24);
     if(value1){
      value6=fn_80068128(value1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+40));
      if((unsigned char)(int)value6){
       reinterpret_cast<UnknownGenV80184BCC_2 *>((void *)p0)->s88(value1);
      }
     }
    }
   }
   value2=(reinterpret_cast<char *>(value2)+1);
  }
  reinterpret_cast<UnknownGenV80184BCC_3 *>((void *)p0)->s90();
  return (void *)1;
 }
}
}
#pragma pop
