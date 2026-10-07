#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800C37E4(void *,int,void *);
void fn_800DF134(void *,void *,int,int,int);
}
class UnknownGenV80214980_0 {
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
};
struct UnknownGenL80214980_8 {
 unsigned char m08;
};
extern "C" {
void fn_80214980(int p0,int p1,int p2,int p3,int p4,int p5){
 UnknownGenL80214980_8 local0;
 void *value0=fn_800C37E4(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+120),0,(void *)p2);
 local0.m08=(unsigned char)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+116);
 fn_800DF134(value0,&local0,0,1,1);
 reinterpret_cast<UnknownGenV80214980_0 *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+120))->s70();
}
}
#pragma pop
