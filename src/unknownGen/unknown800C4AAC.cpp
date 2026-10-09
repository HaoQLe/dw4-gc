#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
class UnknownGenV800C4AB4_0 {
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
 virtual void s5C(void *,void *,void *,void *,void *,void *);
};
extern "C" {
void igTextureStateAttr_virtual80(void *object,unsigned char value){*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+12)=value;}
void igTextureStateAttr_virtual7C(int p0,int p1,int p2,int p3,int p4,int p5,int p6){
 reinterpret_cast<UnknownGenV800C4AB4_0 *>((void *)p1)->s5C((void *)8,(void *)p2,(void *)p3,(void *)p4,(void *)p5,(void *)p6);
}
}
#pragma pop
