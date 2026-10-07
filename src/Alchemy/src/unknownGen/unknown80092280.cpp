#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8007798C(int,int,int,int,int,int);
void fn_800779D4();
extern void *lbl_80562394;
}
class UnknownGenV800922D8_0 {
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
 virtual void * s54();
};
class UnknownGenV80092328_1 {
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
 virtual void * s40(void *);
};
extern "C" {
void fn_80092280(int p0,int p1,int p2,int p3,int p4,int p5){
 if(!lbl_80562394){
  fn_8007798C((int)(int)((void *)p0),(int)(int)((void *)p1),(int)(int)((void *)p2),(int)(int)((void *)p3),(int)(int)((void *)p4),(int)(int)((void *)p5));
  return;
 } else {
  return;
 }
}
void fn_800922AC(){
 if(lbl_80562394){
  fn_800779D4();
  return;
 } else {
  return;
 }
}
void *fn_800922D8(int p0,int p1,int p2,int p3,int p4,int p5){
 void *value1;
 if(!lbl_80562394){
  fn_8007798C((int)(int)((void *)p0),(int)(int)((void *)p1),(int)(int)((void *)p2),(int)(int)((void *)p3),(int)(int)((void *)p4),(int)(int)((void *)p5));
 }
 void *value0=lbl_80562394;
 if(value0){
  value1=reinterpret_cast<UnknownGenV800922D8_0 *>(value0)->s54();
  return value1;
 } else {
  return (void *)4096;
 }
}
void *fn_80092328(int p0,int p1,int p2,int p3,int p4,int p5){
 void *value1;
 if(!lbl_80562394){
  fn_8007798C((int)(int)((void *)p0),(int)(int)((void *)p1),(int)(int)((void *)p2),(int)(int)((void *)p3),(int)(int)((void *)p4),(int)(int)((void *)p5));
 }
 void *value0=lbl_80562394;
 if(value0){
  value1=reinterpret_cast<UnknownGenV80092328_1 *>(value0)->s40((void *)p0);
  return value1;
 } else {
  return (void *)-1;
 }
}
}
#pragma pop
