#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
class UnknownGenV801CFB08_0 {
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
extern "C" {
void *fn_801CFB08(int p0,int p1){
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 value3=reinterpret_cast<UnknownGenV801CFB08_0 *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8))->s60((void *)p1);
 value1=value3;
 value0=(void *)0;
 value2=(void *)0;
 while((int)(int)value2<(int)(int)value1){
  if((int)p1==(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12))+((int)value0<<2))){
   return value0;
  }
  value0=(reinterpret_cast<char *>(value0)+1);
  value2=(reinterpret_cast<char *>(value2)+1);
 }
 return (void *)-1;
}
}
#pragma pop
