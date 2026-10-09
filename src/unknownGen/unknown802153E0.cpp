#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *lbl_80564728;
}
class UnknownGenV802153E0_0 {
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
};
class UnknownGenV8021540C_1 {
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
};
extern "C" {
void fn_802153E0(int p0){
 reinterpret_cast<UnknownGenV802153E0_0 *>((void *)p0)->s64();
}
void fn_8021540C(int p0){
 reinterpret_cast<UnknownGenV8021540C_1 *>((void *)p0)->s6C();
}
void igTransform_virtual98(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+96)=value;}
void *igTimeTransform1_5_virtual58(){return lbl_80564728;}
void *igTimeTransform1_5_virtual9C(int p0,int p1,int p2,int p3){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+60)=(void *)p3;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+56)=(void *)p2;
 return (void *)p0;
}
}
#pragma pop
