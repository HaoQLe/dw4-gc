#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *lbl_805622A0;
}
class UnknownGenV80063EBC_0 {
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
 virtual void * s5C();
};
extern "C" {
void fn_80063EB8(){}
void *fn_80063EBC(int p0){
 void *value0;
 void *value2;
 void *value1;
 value0=(void *)(int)*reinterpret_cast<short *>(reinterpret_cast<char *>((void *)p0)+16);
 if((int)(int)value0==-1){
  value2=reinterpret_cast<UnknownGenV80063EBC_0 *>((void *)p0)->s5C();
  value1=(void *)(int)*reinterpret_cast<short *>(reinterpret_cast<char *>(value2)+18);
  *reinterpret_cast<short *>(reinterpret_cast<char *>((void *)p0)+16)=(short)(int)value1;
 }
 return (void *)(int)*reinterpret_cast<short *>(reinterpret_cast<char *>((void *)p0)+16);
}
void *fn_80063F0C(){return lbl_805622A0;}
}
#pragma pop
