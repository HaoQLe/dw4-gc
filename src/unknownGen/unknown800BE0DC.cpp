#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern char lbl_8047A2A0[];
extern void *lbl_8056292C;
extern void *lbl_80562AE8;
}
class UnknownGenV800BE0E4_0 {
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
 virtual void s78(void *);
};
class UnknownGenV800BE128_1 {
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
 virtual void * s68(void *);
};
extern "C" {
void *fn_800BE0DC(){return lbl_8056292C;}
void fn_800BE0E4(int p0){
 void *value0=lbl_80562AE8;
 if(value0){
  reinterpret_cast<UnknownGenV800BE0E4_0 *>(value0)->s78(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12));
  return;
 } else {
  return;
 }
}
void *fn_800BE128(int p0,int p1){
 void *value1;
 if(!lbl_80562AE8){
  value1=reinterpret_cast<UnknownGenV800BE128_1 *>((void *)p1)->s68(lbl_8047A2A0);
  lbl_80562AE8=value1;
 }
 void *value0=lbl_80562AE8;
 if(value0){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+12)=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+20);
 }
 return value0;
}
}
#pragma pop
