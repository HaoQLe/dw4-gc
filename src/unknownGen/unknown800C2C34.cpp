#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igGamecubeVisualContext_virtual38C(void *,int);
}
class UnknownGenV800C2C34_0 {
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
 virtual void * s70();
};
extern "C" {
void *igSetRenderDestinationAttr_virtual70(int p0){
 void *value0;
 void *value1;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12);
 if(value0){
  value1=reinterpret_cast<UnknownGenV800C2C34_0 *>(value0)->s70();
  return value1;
 } else {
  return value0;
 }
}
void igShadeModelAttr_virtual60(int p0,int p1){
 igGamecubeVisualContext_virtual38C((void *)p1,(int)(int)(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12)));
}
}
#pragma pop
