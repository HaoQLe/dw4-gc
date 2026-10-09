#include <unknownGen.h>
#include <meta/igEndianSwappedEnbayaAnimationSource.h>
#include <meta/igGamecubeEnvironmentMapShader.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80065704(void *,int);
void *fn_800C37E4(void *,int,void *);
void *fn_801E626C();
void fn_801E628C(void *);
void *fn_801E754C(void *);
void *fn_803B5B70(void *);
extern void *lbl_805655D8;
}
class UnknownGenV80213268_0 {
public:
 virtual void s08();
 virtual void s0C();
 virtual void s10();
 virtual void s14();
 virtual void s18();
 virtual void s1C();
};
class UnknownGenV802132BC_1 {
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
class UnknownGenV802132BC_2 {
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
 virtual void s80();
 virtual void s84();
 virtual void s88();
 virtual void s8C();
 virtual void s90();
 virtual void s94();
 virtual void s98();
 virtual void s9C();
 virtual void sA0();
 virtual void sA4();
 virtual void sA8();
 virtual void sAC();
 virtual void sB0();
 virtual void sB4();
 virtual void sB8();
 virtual void sBC();
 virtual void sC0();
 virtual void sC4();
 virtual void sC8();
};
extern "C" {
void igEndianSwappedEnbayaAnimationSource_virtual50(int p0){
 void *value0=fn_803B5B70(reinterpret_cast<Meta::igEndianSwappedEnbayaAnimationSource *>((void *)p0)->_enbayaAnimationStream);
 reinterpret_cast<UnknownGenV80213268_0 *>(value0)->s1C();
}
void *igGamecubeEnvironmentMapShader_virtual24(){return fn_801E626C();}
void igGamecubeEnvironmentMapShader_virtual28(int p0){
 void *value0;
 void *value1;
 value0=reinterpret_cast<UnknownGenV802132BC_1 *>((void *)p0)->s58();
 value1=fn_80065704(value0,1);
 if((int)(int)value1==0){
  reinterpret_cast<UnknownGenV802132BC_2 *>((void *)p0)->sC8();
 }
 fn_801E628C((void *)p0);
}
void *igGamecubeEnvironmentMapShader_virtual58(){return lbl_805655D8;}
void *igGamecubeEnvironmentMapShader_virtual44(int p0,int p1,int p2,int p3,int p4,int p5){
 void *value0;
 void *value1;
 void *value2;
 value0=reinterpret_cast<Meta::igGamecubeEnvironmentMapShader *>((void *)p0)->_envMapTexture;
 if(value0){
  value1=fn_800C37E4(value0,0,(void *)p2);
  if(!value1){
   value2=fn_801E754C(reinterpret_cast<Meta::igGamecubeEnvironmentMapShader *>((void *)p0)->_envMapTexture);
   return value2;
  } else {
   return value1;
  }
 }
 return value0;
}
}
#pragma pop
