#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_801FAE18(void *,void *);
}
class UnknownGenV801F7638_0 {
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
 virtual void s70(void *,void *);
};
extern "C" {
int igLightSet_virtual78(){return 1;}
void igLightSet_virtual24(int p0,int p1){
 fn_801FAE18((void *)p0,(void *)p1);
 if(!(unsigned char)p1){
  reinterpret_cast<UnknownGenV801F7638_0 *>((void *)p0)->s70((void *)1,(void *)1);
  return;
 } else {
  return;
 }
}
}
#pragma pop
