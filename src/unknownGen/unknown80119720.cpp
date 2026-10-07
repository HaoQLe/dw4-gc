#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80119B10(void *);
}
class UnknownGenV80119720_0 {
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
 virtual void s64(void *,void *);
};
extern "C" {
void fn_80119720(int p0,int p1,int p2){
 reinterpret_cast<UnknownGenV80119720_0 *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12))->s64((void *)p1,(void *)p2);
}
void fn_80119750(int p0){
 fn_80119B10(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16));
}
}
#pragma pop
