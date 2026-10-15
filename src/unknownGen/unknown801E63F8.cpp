#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800607F4(void *);
void *igTextureStateAttr_create(void *);
void *igBlendStateAttr_create(void *);
void *igAlphaStateAttr_create(void *);
extern void *lbl_805621F0;
extern void *igEnvironmentMapShader2_meta;
extern void *lbl_805657C0;
extern void *lbl_805657C4;
extern void *lbl_805657C8;
extern void *lbl_805657CC;
}
class UnknownGenV801E6400_0 {
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
 virtual void s78();
 virtual void s7C();
 virtual void s80(void *);
};
class UnknownGenV801E6400_1 {
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
 virtual void s64(void *);
};
class UnknownGenV801E6400_2 {
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
 virtual void s78();
 virtual void s7C();
 virtual void s80(void *);
};
class UnknownGenV801E6400_3 {
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
 virtual void s78();
 virtual void s7C();
 virtual void s80(void *);
};
class UnknownGenV801E6400_4 {
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
 virtual void s78();
 virtual void s7C();
 virtual void s80(void *);
};
extern "C" {
void *fn_801E63F8(){return igEnvironmentMapShader2_meta;}
void fn_801E6400(int p0,int p1,int p2,int p3,int p4,int p5){
 void *value2;
 void *value3;
 void *value4;
 void *value5;
 void *value6;
 void *value7;
 void *value8;
 void *value1;
 void *value9;
 if(!lbl_805657C0){
  value2=fn_800607F4(lbl_805621F0);
  value3=igTextureStateAttr_create(value2);
  lbl_805657C0=value3;
  reinterpret_cast<UnknownGenV801E6400_0 *>(value3)->s80((void *)1);
  reinterpret_cast<UnknownGenV801E6400_1 *>(lbl_805657C0)->s64((void *)0);
 }
 if(!lbl_805657C4){
  value4=fn_800607F4(lbl_805621F0);
  value5=igBlendStateAttr_create(value4);
  lbl_805657C4=value5;
  reinterpret_cast<UnknownGenV801E6400_2 *>(value5)->s80((void *)1);
 }
 if(!lbl_805657C8){
  value6=fn_800607F4(lbl_805621F0);
  value7=igBlendStateAttr_create(value6);
  lbl_805657C8=value7;
  reinterpret_cast<UnknownGenV801E6400_3 *>(value7)->s80((void *)0);
 }
 if(!lbl_805657CC){
  value8=fn_800607F4(lbl_805621F0);
  void *value0=lbl_805657CC;
  if(value0){
   value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+4)=(reinterpret_cast<char *>(value1)+-1);
   if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4)&0x7FFFFF)){
    fn_80066E1C(value0);
   }
  }
  value9=igAlphaStateAttr_create(value8);
  lbl_805657CC=value9;
  reinterpret_cast<UnknownGenV801E6400_4 *>(value9)->s80((void *)0);
  return;
 } else {
  return;
 }
}
}
#pragma pop
