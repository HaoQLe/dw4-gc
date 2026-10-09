#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80100094(void *,void *,void *);
void *fn_801000D0(void *,void *);
}
class UnknownGenV800C5C74_0 {
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
void igTextureStageConstantAlphaSelectAttr_virtual60(int p0,int p1){
 fn_80100094((void *)p1,(void *)(int)*reinterpret_cast<short *>(reinterpret_cast<char *>((void *)p0)+16),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12));
}
void igTextureStageConstantAlphaSelectAttr_virtual68(int p0,int p1){
 void *value0=fn_801000D0((void *)p1,(void *)(int)*reinterpret_cast<short *>(reinterpret_cast<char *>((void *)p0)+16));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+12)=value0;
}
void igTextureStageConstantAlphaSelectAttr_virtual7C(int p0,int p1,int p2,int p3,int p4,int p5,int p6){
 reinterpret_cast<UnknownGenV800C5C74_0 *>((void *)p1)->s5C((void *)8,(void *)p2,(void *)p3,(void *)p4,(void *)p5,(void *)p6);
}
void *fn_800C5CA8(int p0){
 *reinterpret_cast<short *>(reinterpret_cast<char *>((void *)p0)+10)=(short)(int)(void *)(int)*reinterpret_cast<short *>(reinterpret_cast<char *>((void *)p0)+16);
 return (void *)p0;
}
}
#pragma pop
