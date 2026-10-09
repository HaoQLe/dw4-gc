#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_801FE05C(void *,void *,void *);
void fn_801FE190(void *,void *,void *);
}
class UnknownGenV801FE2C0_0 {
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
 virtual void * s5C(void *,void *);
};
extern "C" {
void fn_801FE2C0(int p0,int p1,int p2){
 void *value0;
 value0=reinterpret_cast<UnknownGenV801FE2C0_0 *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+32))->s5C((void *)8,(void *)p2);
 if((*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+148)&&(int)(int)value0>1)){
  fn_801FE05C((void *)p0,(void *)p1,(void *)p2);
  return;
 } else {
  fn_801FE190((void *)p0,(void *)p1,(void *)p2);
  return;
 }
}
}
#pragma pop
