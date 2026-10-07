#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8012CB74(void *,void *,void *);
}
class UnknownGenV8020F6EC_0 {
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
 virtual void s78(void *,void *,void *,void *);
};
class UnknownGenV8020F6EC_1 {
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
 virtual void s78(void *,void *);
};
class UnknownGenV8020F6EC_2 {
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
 virtual void s78(void *,void *);
};
struct UnknownGenL8020F6EC_38 {
 float m38;
 float m3C;
 float m40;
};
struct UnknownGenL8020F6EC_2C {
 float m2C;
 float m30;
 float m34;
};
struct UnknownGenL8020F6EC_20 {
 float m20;
 float m24;
 float m28;
};
struct UnknownGenL8020F6EC_14 {
 float m14;
 float m18;
 float m1C;
};
struct UnknownGenL8020F6EC_8 {
 float m08;
 float m0C;
 float m10;
};
extern "C" {
void fn_8020F6EC(int p0,int p1,int p2,int p3,int p4){
 UnknownGenL8020F6EC_38 local4;
 UnknownGenL8020F6EC_2C local3;
 UnknownGenL8020F6EC_20 local2;
 UnknownGenL8020F6EC_14 local1;
 UnknownGenL8020F6EC_8 local0;
 reinterpret_cast<UnknownGenV8020F6EC_0 *>((void *)p1)->s78((void *)p2,&local4,(void *)p3,(void *)p4);
 reinterpret_cast<UnknownGenV8020F6EC_1 *>((void *)p1)->s78((void *)p3,&local3);
 reinterpret_cast<UnknownGenV8020F6EC_2 *>((void *)p1)->s78((void *)p4,&local2);
 local1.m14=(local3.m2C-local4.m38);
 local1.m18=(local3.m30-local4.m3C);
 local1.m1C=(local3.m34-local4.m40);
 local0.m08=(local2.m20-local4.m38);
 local0.m0C=(local2.m24-local4.m3C);
 local0.m10=(local2.m28-local4.m40);
 fn_8012CB74((void *)p0,&local1,&local0);
}
}
#pragma pop
