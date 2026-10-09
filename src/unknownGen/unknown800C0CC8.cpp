#include <unknownGen.h>
#include <meta/igLightAttr.h>
#include <meta/igLightStateAttr.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *igGamecubeVisualContext_virtual13C(void *,void *,void *);
}
class UnknownGenV800C0CD4_0 {
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
 virtual void s60(void *);
};
extern "C" {
void *fn_800C0CC8(int p0){
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+144)=1;
 return (void *)p0;
}
void *igLightStateAttr_virtual60(int p0,int p1){
 void *value0;
 void *value1;
 value0=reinterpret_cast<Meta::igLightStateAttr *>((void *)p0)->_light;
 if(value0){
  if((int)(int)(void *)reinterpret_cast<Meta::igLightAttr *>(value0)->_lightId==-1){
   reinterpret_cast<UnknownGenV800C0CD4_0 *>(value0)->s60((void *)p1);
  }
  value1=igGamecubeVisualContext_virtual13C((void *)p1,(void *)reinterpret_cast<Meta::igLightAttr *>(reinterpret_cast<Meta::igLightStateAttr *>((void *)p0)->_light)->_lightId,(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+20));
  return value1;
 } else {
  return value0;
 }
}
}
#pragma pop
