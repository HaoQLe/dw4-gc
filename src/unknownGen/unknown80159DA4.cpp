#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
class UnknownGenV80159DA4_0 {
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
class UnknownGenV80159DA4_1 {
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
 virtual void * s60(void *);
};
class UnknownGenV80159DA4_2 {
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
 virtual void * s90();
};
extern "C" {
void *fn_80159DA4(int p0,int p1,int p2){
 void *value8;
 void *value0;
 void *value1;
 void *value9;
 void *value10;
 void *value11;
 void *value2;
 void *value3;
 void *value4;
 void *value5;
 void *value6;
 void *value7;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p2)+0);
 if((value0&&(value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4),*reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+4)=(reinterpret_cast<char *>(value1)+-1),!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4)&0x7FFFFF)))){
  fn_80066E1C(value0);
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p2)+0)=(void *)0;
 value9=reinterpret_cast<UnknownGenV80159DA4_0 *>((void *)p1)->s5C();
 if(((int)(int)value9==1&&(value10=reinterpret_cast<UnknownGenV80159DA4_1 *>((void *)p1)->s60((void *)0),value11=reinterpret_cast<UnknownGenV80159DA4_2 *>(value10)->s90(),!(unsigned char)(int)value11))){
  return (void *)3;
 } else {
  value2=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+28);
  if(value2){
   value8=*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+8);
  } else {
   value8=(void *)0;
  }
  switch((int)(int)value8){
  case 0:
   return (void *)4;
  case 1:
   value3=*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+16);
   value4=*reinterpret_cast<void **>(reinterpret_cast<char *>(value3)+0);
   if(value4){
    value5=*reinterpret_cast<void **>(reinterpret_cast<char *>(value4)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+4)=(reinterpret_cast<char *>(value5)+1);
   }
   value6=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p2)+0);
   if((value6&&(value7=*reinterpret_cast<void **>(reinterpret_cast<char *>(value6)+4),*reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+4)=(reinterpret_cast<char *>(value7)+-1),!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value6)+4)&0x7FFFFF)))){
    fn_80066E1C(value6);
   }
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p2)+0)=value4;
   return (void *)2;
  default:
   return (void *)1;
  }
 }
}
}
#pragma pop
