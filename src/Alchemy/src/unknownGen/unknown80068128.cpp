#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
class UnknownGenV80068128_0 {
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
extern "C" {
void *fn_80068128(int p0,int p1){
 void *value0;
 void *value1;
 value1=reinterpret_cast<UnknownGenV80068128_0 *>((void *)p0)->s58((void *)p1);
 value0=value1;
 while(value0){
  if((unsigned int)(int)value0==(unsigned int)p1){
   return (void *)1;
  }
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+56);
 }
 return (void *)0;
}
}
#pragma pop
