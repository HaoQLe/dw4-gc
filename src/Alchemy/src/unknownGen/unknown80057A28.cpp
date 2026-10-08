#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80063B5C();
}
class UnknownGenV80057A28_0 {
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
class UnknownGenV80057A28_1 {
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
void fn_80057A28(int p0,int p1){
 void *value1;
 void *value2;
 void *value0;
 void *value3;
 void *value4;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+36)=(void *)p1;
 if((int)p1!=0){
  value2=fn_80063B5C();
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+12);
  value1=(void *)0;
  while((int)(int)value1<(int)(int)value0){
   value3=reinterpret_cast<UnknownGenV80057A28_0 *>((void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+8))+((int)value1<<2)))->s58();
   value4=reinterpret_cast<UnknownGenV80057A28_1 *>((void *)p1)->s58();
   if((unsigned int)(int)value3==(unsigned int)(int)value4){
    *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+40)=value1;
    return;
   }
   value1=(reinterpret_cast<char *>(value1)+1);
  }
  return;
 } else {
  return;
 }
}
}
#pragma pop
