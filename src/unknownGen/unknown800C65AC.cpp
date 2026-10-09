#include <unknownGen.h>
#include <meta/igParticleAttr.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *lbl_805626B8;
extern void *lbl_805626C0;
extern void *lbl_805626EC;
extern void *lbl_805626F8;
extern void *lbl_80562718;
extern void *lbl_80562720;
extern void *lbl_80562734;
}
class UnknownGenV800C65CC_0 {
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
 virtual void * s98();
};
extern "C" {
void *igPixelShaderBindAttr_virtual58(){return lbl_805626B8;}
void *igPixelShaderAttr_virtual58(){return lbl_805626C0;}
void *igPixelPipelineModeAttr_virtual58(){return lbl_805626EC;}
void *igParticleAttr_virtual58(){return lbl_805626F8;}
void *igParticleAttr_virtual70(int p0){
 void *value0;
 void *value1;
 value0=reinterpret_cast<Meta::igParticleAttr *>((void *)p0)->_particleArray;
 if(value0){
  value1=reinterpret_cast<UnknownGenV800C65CC_0 *>(value0)->s98();
  return value1;
 } else {
  return value0;
 }
}
void *igNormalizeNormalsStateAttr_virtual58(){return lbl_80562718;}
void *igMultiPassStateAttr_virtual58(){return lbl_80562720;}
void igMultiPassStateAttr_virtual80(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+12)=value;}
void *igVector3MorphData_virtual58(){return lbl_80562734;}
int igVector3MorphData_virtual64(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+32);}
}
#pragma pop
