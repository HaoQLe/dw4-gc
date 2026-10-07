#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
class UnknownGenV80064B3C_0 {
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
 virtual void s60(void *,void *,void *);
};
extern "C" {
void fn_80064B3C(int p0,int p1,int p2,int p3){
 reinterpret_cast<UnknownGenV80064B3C_0 *>((void *)p0)->s60((void *)p1,(void *)(int)(p3+(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p2)+8)),(void *)p3);
}
}
#pragma pop
