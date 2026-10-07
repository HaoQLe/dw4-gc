#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065704(void *,int);
void fn_800667B0();
extern void *lbl_80534350;
}
class UnknownGenV802A8E30_0 {
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
extern "C" {
void fn_802A8E30(int p0){
 fn_800667B0();
 void *value0=reinterpret_cast<UnknownGenV802A8E30_0 *>((void *)p0)->s58();
 fn_80065704(value0,1);
}
void *fn_802A8E78(){return lbl_80534350;}
void fn_802A8E88(){}
}
#pragma pop
