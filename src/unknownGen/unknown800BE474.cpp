#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800F98A4(void *,void *);
}
class UnknownGenV800BE474_0 {
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
};
class UnknownGenV800BE4CC_0 {
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
 virtual void s80(void *);
};
extern "C" {
void fn_800BE474(int p0){
 reinterpret_cast<UnknownGenV800BE474_0 *>((void *)p0)->s60();
}
void fn_800BE4A0(int p0,int p1){
 fn_800F98A4((void *)p1,(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+12));
}
void fn_800BE4CC(int p0,int p1){
 reinterpret_cast<UnknownGenV800BE4CC_0 *>((void *)p0)->s80((void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+312));
}
void fn_800BE4FC(void *object,unsigned char value){*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+12)=value;}
}
#pragma pop
