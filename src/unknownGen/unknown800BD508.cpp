#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800F8E90(void *,void *,void *);
extern void *lbl_80562A10;
extern void *lbl_80562AE4;
}
class UnknownGenV800BD510_0 {
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
 virtual void s70();
 virtual void s74();
 virtual void * s78();
};
extern "C" {
void *fn_800BD508(){return lbl_80562A10;}
void *fn_800BD510(int p0,int p1){
 void *value1;
 fn_800F8E90((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16));
 void *value0=lbl_80562AE4;
 if(value0){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+20)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20);
  value1=reinterpret_cast<UnknownGenV800BD510_0 *>(lbl_80562AE4)->s78();
  return value1;
 } else {
  return value0;
 }
}
}
#pragma pop
