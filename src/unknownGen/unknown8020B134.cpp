#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8020B06C(void *,void *);
}
class UnknownGenV8020B13C_0 {
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
 virtual void s5C(void *);
};
class UnknownGenV8020B13C_1 {
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
void igTraversal_virtual5C(){}
void igTraversal_virtual60(){}
void igTraversal_virtual64(int p0,int p1){
 reinterpret_cast<UnknownGenV8020B13C_0 *>((void *)p0)->s5C((void *)p1);
 fn_8020B06C((void *)p0,(void *)p1);
 reinterpret_cast<UnknownGenV8020B13C_1 *>((void *)p0)->s60((void *)p1);
}
}
#pragma pop
