#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80065704(void *,int);
void fn_801EAD50(void *);
void fn_801FD80C();
}
class UnknownGenV801FDC78_0 {
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
void fn_801FDC78(int p0){
 void *value0;
 void *value1;
 value0=reinterpret_cast<UnknownGenV801FDC78_0 *>((void *)p0)->s58();
 value1=fn_80065704(value0,1);
 if((int)(int)value1==0){
  fn_801FD80C();
 }
 fn_801EAD50((void *)p0);
}
}
#pragma pop
