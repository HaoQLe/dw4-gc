#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8004155C(void *,void *,int);
void fn_80041660(void *,void *,int);
void fn_8007798C();
extern void *lbl_80562394;
void malloc(void *);
}
class UnknownGenV80057304_0 {
public:
 virtual void s08();
 virtual void s0C();
 virtual void s10(void *);
};
class UnknownGenV80057378_1 {
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
};
extern "C" {
void fn_80057304(int p0){
 if(!lbl_80562394){
  fn_8007798C();
 }
 void *value0=lbl_80562394;
 if(value0){
  reinterpret_cast<UnknownGenV80057304_0 *>(value0)->s10((void *)p0);
  return;
 } else {
  malloc((void *)p0);
  return;
 }
}
int fn_80057368(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+8);}
void fn_80057370(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+8)=value;}
void fn_80057378(int p0){
 void *value0;
 void *value1;
 void *value2;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16);
 if((int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8)<<1)>=(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+8)){
  fn_8004155C(value0,(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8)<<1),4);
 }
 value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8);
 value2=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16);
 if((int)((int)value1<<1)>=0){
  if((int)((int)value1<<1)<=(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+12)){
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+8)=(void *)(int)((int)value1<<1);
  } else {
   fn_80041660(value2,(void *)(int)((int)value1<<1),4);
  }
 }
 reinterpret_cast<UnknownGenV80057378_1 *>((void *)p0)->s6C();
}
}
#pragma pop
