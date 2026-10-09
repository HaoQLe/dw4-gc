#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *lbl_805645FC;
}
class UnknownGenV8016E0C4_0 {
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
class UnknownGenV8016E0C4_1 {
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
 virtual void * s6C(void *);
};
extern "C" {
void *fn_8016E0C4(int p0,int p1,int p2){
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 if((unsigned int)p1==(unsigned int)(int)lbl_805645FC){
  return (void *)1;
 } else {
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p2)+0);
  if((value0&&(value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4),*reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+4)=(reinterpret_cast<char *>(value1)+-1),!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4)&0x7FFFFF)))){
   fn_80066E1C(value0);
  }
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p2)+0)=(void *)0;
  value2=reinterpret_cast<UnknownGenV8016E0C4_0 *>((void *)p1)->s5C();
  if((int)(int)value2==0){
   return (void *)1;
  } else {
   value3=reinterpret_cast<UnknownGenV8016E0C4_1 *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24))->s6C((void *)p1);
   if((unsigned char)(int)value3){
    return (void *)1;
   } else {
    return (void *)3;
   }
  }
 }
}
}
#pragma pop
