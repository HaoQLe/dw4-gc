#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800667D0();
void fn_800DA440(void *,void *,void *);
void *fn_800DDE54();
extern void *lbl_80562F78;
}
class UnknownGenV800F2418_0 {
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
};
extern "C" {
void igGamecubeImage_virtual2C(){return fn_800667D0();}
void *igGamecubeImage_virtual30(){return fn_800DDE54();}
void igGamecubeImage_virtual5C(int p0,int p1,int p2,int p3,int p4,int p5){
 fn_800DA440((void *)p0,(void *)p1,(void *)p2);
 reinterpret_cast<UnknownGenV800F2418_0 *>((void *)p1)->s58();
}
void *fn_800F2458(){return lbl_80562F78;}
}
#pragma pop
