#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80068060(void *,void *,int);
}
class UnknownGenV801EA720_0 {
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
 virtual void s48(void *);
};
extern "C" {
void fn_801EA720(int p0,int p1){
 reinterpret_cast<UnknownGenV801EA720_0 *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+8))->s48((void *)p1);
 fn_80068060(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+8),0);
}
}
#pragma pop
