#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
class UnknownGenV80115BB8_0 {
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
 virtual void * s5C(void *);
};
extern "C" {
void *fn_80115BB8(int p0){
 void *value0;
 void *value1;
 if(*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8))+13)){
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12);
  if(value0){
   value1=reinterpret_cast<UnknownGenV80115BB8_0 *>(value0)->s5C(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8));
   return value1;
  } else {
   return value0;
  }
 }
 return (void *)p0;
}
}
#pragma pop
