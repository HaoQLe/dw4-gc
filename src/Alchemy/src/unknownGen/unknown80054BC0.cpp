#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
class UnknownGenV80054BC8_0 {
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
 virtual void s8C(void *,void *,void *,void *,void *,void *);
};
struct UnknownGenL80054BC8_8 {
 int m08;
 int m0C;
};
extern "C" {
int igLongMetaField_virtual64(){return 8;}
void fn_80054BC8(int p0,int p1,int p2,int p3,int p4,int p5,int p6){
 UnknownGenL80054BC8_8 local0;
 local0.m08=(int)p2;
 local0.m0C=(int)p3;
 reinterpret_cast<UnknownGenV80054BC8_0 *>((void *)p0)->s8C(&local0,(void *)p2,(void *)p3,(void *)p4,(void *)p5,(void *)p6);
}
int igLongMetaField_virtual6C(){return 8;}
}
#pragma pop
