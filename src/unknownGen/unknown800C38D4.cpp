#include <unknownGen.h>
#include <meta/igTextureAttr.h>
#include <meta/igTextureBindAttr.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igGamecubeVisualContext_virtual1FC(void *,void *,void *);
}
class UnknownGenV800C38D4_0 {
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
 virtual void s5C(void *,void *,void *,void *,void *,void *);
};
class UnknownGenV800C390C_1 {
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
 virtual void * s70();
};
class UnknownGenV800C3944_2 {
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
 virtual void * s74();
};
class UnknownGenV800C39C0_3 {
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
 virtual void s60(void *);
};
extern "C" {
void igTextureBindAttr_virtual7C(int p0,int p1,int p2,int p3,int p4,int p5,int p6){
 reinterpret_cast<UnknownGenV800C38D4_0 *>((void *)p1)->s5C((void *)8,(void *)p2,(void *)p3,(void *)p4,(void *)p5,(void *)p6);
}
void igTextureBindAttr_virtual68(){}
void *igTextureBindAttr_virtual70(int p0){
 void *value0;
 void *value1;
 value0=reinterpret_cast<Meta::igTextureBindAttr *>((void *)p0)->_texture;
 if(value0){
  value1=reinterpret_cast<UnknownGenV800C390C_1 *>(value0)->s70();
  return value1;
 } else {
  return value0;
 }
}
void *igTextureBindAttr_virtual74(int p0){
 void *value0;
 void *value1;
 value0=reinterpret_cast<Meta::igTextureBindAttr *>((void *)p0)->_texture;
 if(value0){
  value1=reinterpret_cast<UnknownGenV800C3944_2 *>(value0)->s74();
  return value1;
 } else {
  return value0;
 }
}
void igTextureBindAttr_virtual80(int p0,int p1){
 void *value0;
 if(reinterpret_cast<Meta::igTextureBindAttr *>((void *)p0)->_texture){
  value0=(void *)reinterpret_cast<Meta::igTextureAttr *>(reinterpret_cast<Meta::igTextureBindAttr *>((void *)p0)->_texture)->_texId;
 } else {
  value0=(void *)-1;
 }
 igGamecubeVisualContext_virtual1FC((void *)p1,value0,(void *)reinterpret_cast<Meta::igTextureBindAttr *>((void *)p0)->_unitID);
}
void igTextureBindAttr_virtual60(int p0,int p1){
 void *value0;
 void *value1;
 value0=reinterpret_cast<Meta::igTextureBindAttr *>((void *)p0)->_texture;
 if(value0){
  reinterpret_cast<UnknownGenV800C39C0_3 *>(value0)->s60((void *)p1);
  value1=reinterpret_cast<Meta::igTextureBindAttr *>((void *)p0)->_texture;
  if((int)(int)(void *)reinterpret_cast<Meta::igTextureAttr *>(value1)->_texId>=0){
   igGamecubeVisualContext_virtual1FC((void *)p1,(void *)reinterpret_cast<Meta::igTextureAttr *>(value1)->_texId,(void *)reinterpret_cast<Meta::igTextureBindAttr *>((void *)p0)->_unitID);
   return;
  } else {
   return;
  }
 }
}
void *fn_800C3A2C(int p0){
 *reinterpret_cast<short *>(reinterpret_cast<char *>((void *)p0)+10)=(short)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16);
 return (void *)p0;
}
}
#pragma pop
