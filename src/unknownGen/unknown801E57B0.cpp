#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_801E5620(int);
extern void *lbl_80564F94;
extern char lbl_805657B4[1];
}
class UnknownGenV801E5800_0 {
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
};
extern "C" {
void *fn_801E57B0(){return lbl_80564F94;}
void fn_801E57B8(){
 fn_801E5620(1);
}
void fn_801E57DC(){
 fn_801E5620(0);
}
void fn_801E5800(int p0){
 if((void *)(int)*reinterpret_cast<unsigned char *>((lbl_805657B4+0))){
  reinterpret_cast<UnknownGenV801E5800_0 *>((void *)p0)->s5C();
  return;
 } else {
  return;
 }
}
}
#pragma pop
