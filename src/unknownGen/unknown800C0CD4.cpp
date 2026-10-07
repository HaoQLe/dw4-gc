#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800F67A0(void *,void *,void *);
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
void *fn_800C0CD4(int p0,int p1){
 void *value0;
 void *value1;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16);
 if(value0){
  if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+16)==-1){
   reinterpret_cast<UnknownGenV800C0CD4_0 *>(value0)->s60((void *)p1);
  }
  value1=fn_800F67A0((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16))+16),(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+20));
  return value1;
 } else {
  return value0;
 }
}
}
#pragma pop
