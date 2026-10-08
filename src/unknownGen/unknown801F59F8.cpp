#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80128CF4(void *,void *);
}
class UnknownGenV801F59F8_0 {
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
 virtual void s68(void *);
};
extern "C" {
void *fn_801F59F8(int p0,int p1){
 void *value2;
 void *value0;
 void *value1;
 if(*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+16)){
  if(!*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12)){
   reinterpret_cast<UnknownGenV801F59F8_0 *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8))->s68((void *)p1);
  }
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8))+140);
  value2=(void *)(int)((int)value0+((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12)<<6));
 } else {
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+16)=1;
  value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8))+132);
  value2=(void *)(int)((int)value1+((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12)<<6));
 }
 fn_80128CF4((void *)p1,value2);
 return (void *)1;
}
}
#pragma pop
