#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80068430(int,int);
void *fn_800D23DC(void *);
void *fn_800D93C0(void *,void *);
}
class UnknownGenV800D9308_0 {
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
 virtual void s5C(void *);
};
extern "C" {
void *fn_800D9308(int p0,int p1,int p2,int p3,int p4,int p5){
 void *value2;
 void *value3;
 void *value4;
 void *value0;
 void *value1;
 value2=fn_80068430((int)(int)((void *)p0),(int)(int)((void *)p1));
 value3=fn_800D23DC(value2);
 value4=fn_800D93C0((void *)p0,value3);
 if(!(unsigned char)(int)value4){
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>(value3)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+4)=(reinterpret_cast<char *>(value0)+-1);
  if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value3)+4)&0x7FFFFF)){
   fn_80066E1C(value3);
  }
  return (void *)0;
 } else {
  reinterpret_cast<UnknownGenV800D9308_0 *>((void *)p0)->s5C(value3);
  value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value3)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+4)=(reinterpret_cast<char *>(value1)+-1);
  if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value3)+4)&0x7FFFFF)){
   fn_80066E1C(value3);
  }
  return (void *)1;
 }
}
}
#pragma pop
