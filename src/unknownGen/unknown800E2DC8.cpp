#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800E2D20(void *,void *);
}
class UnknownGenV800E2DC8_0 {
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
 virtual void s60(void *,void *,void *,void *);
};
extern "C" {
void fn_800E2DC8(int p0,int p1,int p2,int p3,int p4,int p5){
 void *local1;
 void *local0;
 fn_800E2D20(&local0,(void *)p1);
 local1=local0;
 reinterpret_cast<UnknownGenV800E2DC8_0 *>((void *)p0)->s60(&local1,(void *)p2,(void *)p3,(void *)p4);
}
}
#pragma pop
