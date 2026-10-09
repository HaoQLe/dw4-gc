#include <unknownGen.h>
#include <meta/igUnsignedShortArrayMetaField.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8002213C();
void *fn_80063B1C();
}
class UnknownGenV80075D1C_0 {
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
struct UnknownGenL80075D1C_8 {
 int m08;
 int m0C;
};
class UnknownGenV80075D5C_2 {
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
 virtual void sD0(void *,void *);
};
extern "C" {
void *igUnsignedLongArrayMetaField_virtual08(){return fn_80063B1C();}
void fn_80075D1C(int p0,int p1,int p2,int p3,int p4,int p5,int p6){
 UnknownGenL80075D1C_8 local0;
 local0.m08=(int)p2;
 local0.m0C=(int)p3;
 reinterpret_cast<UnknownGenV80075D1C_0 *>((void *)p0)->s8C(&local0,(void *)p2,(void *)p3,(void *)p4,(void *)p5,(void *)p6);
}
int igUnsignedLongArrayMetaField_virtual6C(){return 8;}
void igUnsignedShortArrayMetaField_virtualD0(int p0,int p1,int p2){
 void *value0=fn_8002213C();
 reinterpret_cast<UnknownGenV80075D5C_2 *>(value0)->sD0((void *)p1,(void *)(int)(p2*(int)(void *)reinterpret_cast<Meta::igUnsignedShortArrayMetaField *>((void *)p0)->_num));
}
}
#pragma pop
