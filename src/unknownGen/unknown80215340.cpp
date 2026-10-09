#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *lbl_805646D0;
}
class UnknownGenV80215340_0 {
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
};
extern "C" {
void igTransformSequence1_5_virtual60(int p0){
 reinterpret_cast<UnknownGenV80215340_0 *>((void *)p0)->s5C();
}
void igTransformSequence1_5_virtualD0(void *object,unsigned char value){*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+32)=value;}
void *igTransformSequence1_5_virtual84(int p0){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+40)=(void *)1;
 return (void *)p0;
}
void *fn_80215380(){return lbl_805646D0;}
}
#pragma pop
