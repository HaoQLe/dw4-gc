#include <unknownGen.h>
#include <meta/igSpriteAttr.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igGamecubeVisualContext_virtualEC(void *,void *);
extern char lbl_8047A2B8[];
extern void *lbl_805625F4;
extern void *lbl_80562B08;
}
class UnknownGenV800C2D54_0 {
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
 virtual void * s68(void *,void *,void *,void *,void *);
};
class UnknownGenV800C2D9C_1 {
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
 virtual void s88(void *);
};
class UnknownGenV800C2D9C_2 {
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
};
class UnknownGenV800C2D9C_3 {
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
 virtual void s80(void *,void *);
};
class UnknownGenV800C2D9C_4 {
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
};
extern "C" {
void *igSpriteAttr_virtual58(){return lbl_805625F4;}
void igSpriteAttr_virtual68(int p0,int p1,int p2,int p3,int p4,int p5){
 void *value0;
 if(!lbl_80562B08){
  value0=reinterpret_cast<UnknownGenV800C2D54_0 *>((void *)p1)->s68(lbl_8047A2B8,(void *)p2,(void *)p3,(void *)p4,(void *)p5);
  lbl_80562B08=value0;
  return;
 } else {
  return;
 }
}
void igSpriteAttr_virtual60(int p0,int p1){
 igGamecubeVisualContext_virtualEC((void *)p1,reinterpret_cast<Meta::igSpriteAttr *>((void *)p0)->_vertexArray);
 reinterpret_cast<UnknownGenV800C2D9C_1 *>(lbl_80562B08)->s88((void *)reinterpret_cast<Meta::igSpriteAttr *>((void *)p0)->_spriteSpace);
 reinterpret_cast<UnknownGenV800C2D9C_2 *>(lbl_80562B08)->s78();
 reinterpret_cast<UnknownGenV800C2D9C_3 *>(lbl_80562B08)->s80((void *)reinterpret_cast<Meta::igSpriteAttr *>((void *)p0)->_numPrims,(void *)reinterpret_cast<Meta::igSpriteAttr *>((void *)p0)->_offset);
 reinterpret_cast<UnknownGenV800C2D9C_4 *>(lbl_80562B08)->s7C();
}
void igPointSpriteExt_virtual88(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+36)=value;}
void *igSpriteAttr_virtual80(int p0,int p1,int p2,int p3){
 reinterpret_cast<Meta::igSpriteAttr *>((void *)p0)->_spriteType=(int)(void *)p1;
 reinterpret_cast<Meta::igSpriteAttr *>((void *)p0)->_numPrims=(unsigned int)(void *)p2;
 reinterpret_cast<Meta::igSpriteAttr *>((void *)p0)->_offset=(unsigned int)(void *)p3;
 return (void *)p0;
}
}
#pragma pop
