#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80272110(void *,void *,void *);
extern void *lbl_805622F8;
}
class UnknownGenV802720BC_0 {
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
 virtual void * s5C(void *);
};
extern "C" {
void fn_802720BC(int p0,int p1){
 void *value0=reinterpret_cast<UnknownGenV802720BC_0 *>(lbl_805622F8)->s5C((void *)p1);
 fn_80272110(value0,(void *)p0,(void *)p1);
}
}
#pragma pop
