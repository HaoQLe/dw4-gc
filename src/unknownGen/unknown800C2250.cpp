#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800F9504(void *,int);
extern char lbl_8047A2B8[];
extern void *lbl_80562B04;
}
class UnknownGenV800C2250_0 {
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
 virtual void * s68(void *,void *,void *,void *,void *);
};
extern "C" {
void fn_800C2250(int p0,int p1,int p2,int p3,int p4,int p5){
 void *value0;
 if(!lbl_80562B04){
  value0=reinterpret_cast<UnknownGenV800C2250_0 *>((void *)p1)->s68(lbl_8047A2B8,(void *)p2,(void *)p3,(void *)p4,(void *)p5);
  lbl_80562B04=value0;
  return;
 } else {
  return;
 }
}
void fn_800C2298(int p0,int p1){
 fn_800F9504((void *)p1,(int)(int)(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12)));
}
}
#pragma pop
