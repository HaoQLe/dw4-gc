#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *lbl_805625B0;
extern void *lbl_805625CC;
extern void *lbl_805625D4;
extern void *lbl_8056260C;
extern void *lbl_80562614;
extern void *lbl_8056261C;
extern void *lbl_80562624;
extern void *lbl_8056263C;
extern void *lbl_80562B08;
}
class UnknownGenV800C63F0_0 {
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
 virtual void sCC();
 virtual void sD0();
 virtual void sD4();
 virtual void sD8();
 virtual void sDC();
 virtual void sE0();
 virtual void sE4();
 virtual void sE8();
 virtual void * sEC();
};
extern "C" {
void *igSubTextureBindAttr_virtual58(){return lbl_805625B0;}
void *igStencilStateAttr_virtual58(){return lbl_805625CC;}
void *igStencilFunctionAttr_virtual58(){return lbl_805625D4;}
int igStencilFunctionAttr_virtual84(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+12);}
void *igStencilFunctionAttr_virtual8C(int p0,int p1,int p2,int p3){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+28)=(void *)p1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+32)=(void *)p2;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+36)=(void *)p3;
 return (void *)p0;
}
void *igStencilFunctionAttr_virtual90(int p0,int p1,int p2,int p3){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+0)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+28);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p2)+0)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p3)+0)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+36);
 return (void *)p0;
}
void igStencilFunctionAttr_virtual94(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+24)=value;}
void igStencilFunctionAttr_virtual98(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+20)=value;}
void *igSpriteAttr_virtual70(int p0){
 void *value0;
 void *value1;
 if(lbl_80562B08){
  lbl_80562B08=(void *)0;
 }
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24);
 if(value0){
  value1=reinterpret_cast<UnknownGenV800C63F0_0 *>(value0)->sEC();
  return value1;
 } else {
  return value0;
 }
}
void *igShadeModelAttr_virtual58(){return lbl_8056260C;}
void *igSetRenderDestinationAttr_virtual58(){return lbl_80562614;}
void *igScissorTypeAttr_virtual58(){return lbl_8056261C;}
void *igScissorAttr_virtual58(){return lbl_80562624;}
void *igScissorAttr_virtual80(int p0,int p1,int p2,int p3,int p4){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+16)=(void *)p1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+20)=(void *)p2;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+24)=(void *)p3;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+28)=(void *)p4;
 return (void *)p0;
}
void *igSceneAmbientColorAttr_virtual58(){return lbl_8056263C;}
}
#pragma pop
