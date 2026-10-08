#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800667CC(void *,void *);
}
class UnknownGenV801FAFB8_0 {
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
 virtual void * s58();
};
extern "C" {
void fn_801FAFB8(int p0,int p1,int p2,int p3,int p4,int p5){
 fn_800667CC((void *)p0,(void *)p1);
 void *value0=reinterpret_cast<UnknownGenV801FAFB8_0 *>((void *)p0)->s58();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+24)=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+8);
}
}
#pragma pop
