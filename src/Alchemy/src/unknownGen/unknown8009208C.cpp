#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *kSuccess__3Gap;
}
class UnknownGenV8009208C_0 {
public:
 virtual void s08();
 virtual void s0C();
 virtual void s10();
};
class UnknownGenV800920B8_1 {
public:
 virtual void s08();
 virtual void s0C();
 virtual void s10();
 virtual void s14();
 virtual void s18();
 virtual void s1C();
 virtual void s20();
 virtual void s24();
};
extern "C" {
void fn_8009208C(int p0){
 reinterpret_cast<UnknownGenV8009208C_0 *>((void *)p0)->s10();
}
void fn_800920B8(int p0){
 reinterpret_cast<UnknownGenV800920B8_1 *>((void *)p0)->s24();
}
void *fn_800920E4(int p0){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kSuccess__3Gap;
 return (void *)p0;
}
}
#pragma pop
