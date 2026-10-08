#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006426C(void *,void *,void *);
void *fn_80065D88(void *);
extern void *lbl_805622A4;
}
class UnknownGenV80067C28_0 {
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
 virtual void * s58(void *);
};
class UnknownGenV80067C28_1 {
public:
 virtual void s08();
 virtual void s0C();
 virtual void s10();
 virtual void s14();
 virtual void s18(void *);
};
extern "C" {
void fn_80067C28(int p0,int p1){
 void *value3;
 void *value0;
 void *value1;
 void *value4;
 void *value2;
 value3=reinterpret_cast<UnknownGenV80067C28_0 *>((void *)p0)->s58((void *)p1);
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>(value3)+40);
 value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+12);
 value4=fn_80065D88(lbl_805622A4);
 value2=value4;
 while((int)(int)value2<(int)(int)value1){
  fn_8006426C((void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+8))+((int)value2<<2)),(void *)p0,(void *)p1);
  value2=(reinterpret_cast<char *>(value2)+1);
 }
 reinterpret_cast<UnknownGenV80067C28_1 *>((void *)p0)->s18((void *)p1);
}
}
#pragma pop
