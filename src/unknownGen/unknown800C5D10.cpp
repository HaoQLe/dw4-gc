#include <unknownGen.h>
#include <meta/igTextureStageConstantColorSelectAttr.h>
#include <meta/igTextureSwapAttr.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800FCA60(void *,void *,void *,void *);
void fn_801000E0(void *,void *,void *);
void *fn_8010011C(void *,void *);
}
class UnknownGenV800C5D78_0 {
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
class UnknownGenV800C5DE8_1 {
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
extern "C" {
void igTextureStageConstantColorSelectAttr_virtual60(int p0,int p1){
 fn_801000E0((void *)p1,(void *)(int)reinterpret_cast<Meta::igTextureStageConstantColorSelectAttr *>((void *)p0)->_unitID,(void *)(int)reinterpret_cast<Meta::igTextureStageConstantColorSelectAttr *>((void *)p0)->_constantSelect);
}
void igTextureStageConstantColorSelectAttr_virtual68(int p0,int p1){
 void *value0=fn_8010011C((void *)p1,(void *)(int)reinterpret_cast<Meta::igTextureStageConstantColorSelectAttr *>((void *)p0)->_unitID);
 reinterpret_cast<Meta::igTextureStageConstantColorSelectAttr *>((void *)p0)->_constantSelect=(Meta::IG_GFX_TEXTURE_CONSTANT_COLOR_SELECTION::Value)(int)value0;
}
void igTextureStageConstantColorSelectAttr_virtual7C(int p0,int p1,int p2,int p3,int p4,int p5,int p6){
 reinterpret_cast<UnknownGenV800C5D78_0 *>((void *)p1)->s5C((void *)8,(void *)p2,(void *)p3,(void *)p4,(void *)p5,(void *)p6);
}
void igTextureSwapAttr_virtual60(int p0,int p1){
 fn_800FCA60((void *)p1,(void *)reinterpret_cast<Meta::igTextureSwapAttr *>((void *)p0)->_unitID,(void *)(int)reinterpret_cast<Meta::igTextureSwapAttr *>((void *)p0)->_rasterSelect,(void *)(int)reinterpret_cast<Meta::igTextureSwapAttr *>((void *)p0)->_textureSelect);
}
void igTextureSwapAttr_virtual7C(int p0,int p1,int p2,int p3,int p4,int p5,int p6){
 reinterpret_cast<UnknownGenV800C5DE8_1 *>((void *)p1)->s5C((void *)8,(void *)p2,(void *)p3,(void *)p4,(void *)p5,(void *)p6);
}
}
#pragma pop
