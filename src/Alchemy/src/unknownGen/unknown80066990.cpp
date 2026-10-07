#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80053BC0(void *,void *);
}
class UnknownGenV80066990_0 {
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
 virtual void s50(void *);
};
class UnknownGenV80066990_1 {
public:
 virtual void s08();
 virtual void s0C(void *);
};
class UnknownGenV80066990_2 {
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
 virtual void s34(void *);
};
class UnknownGenV80066990_3 {
public:
 virtual void s08();
 virtual void s0C();
 virtual void s10();
 virtual void s14();
 virtual void s18();
 virtual void s1C();
 virtual void s20();
 virtual void s24(void *);
};
class UnknownGenV80066990_4 {
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
 virtual void * s58();
};
extern "C" {
void *fn_80066990(int p0,int p1){
 void *value1;
 void *value0;
 void *value2;
 if((unsigned int)p1!=0){
  if(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+60)){
   reinterpret_cast<UnknownGenV80066990_0 *>((void *)p0)->s50((void *)p1);
  }
 }
 reinterpret_cast<UnknownGenV80066990_1 *>((void *)p0)->s0C((void *)0);
 reinterpret_cast<UnknownGenV80066990_2 *>((void *)p0)->s34((void *)0);
 reinterpret_cast<UnknownGenV80066990_3 *>((void *)p0)->s24((void *)1);
 value1=reinterpret_cast<UnknownGenV80066990_4 *>((void *)p0)->s58();
 if(value1){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value1)+44)=(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+44))+1);
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+48);
  if(value0){
   value2=fn_80053BC0(value0,(void *)p0);
   return value2;
  } else {
   return value0;
  }
 }
 return value1;
}
}
#pragma pop
