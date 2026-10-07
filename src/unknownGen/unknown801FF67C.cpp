#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80065704(void *,int);
void fn_800667A4();
void fn_801FAE18(void *);
void fn_801FF70C(void *);
void fn_802004A4(void *);
extern void *lbl_80564968;
}
class UnknownGenV801FF67C_0 {
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
void fn_801FF67C(int p0){
 void *value0;
 void *value1;
 fn_801FAE18((void *)p0);
 value0=reinterpret_cast<UnknownGenV801FF67C_0 *>((void *)p0)->s58();
 value1=fn_80065704(value0,1);
 if((int)(int)value1==0){
  fn_802004A4(value1);
  return;
 } else {
  return;
 }
}
void *fn_801FF6D0(){return lbl_80564968;}
void fn_801FF6D8(int p0){
 fn_800667A4();
 fn_801FF70C((void *)p0);
}
}
#pragma pop
