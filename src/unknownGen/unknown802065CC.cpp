#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
class UnknownGenV802065CC_0 {
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
 virtual void * s58(void *);
};
class UnknownGenV802065CC_1 {
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
 virtual void * s58();
};
extern "C" {
void *fn_802065CC(int p0,int p1){
 void *value0;
 void *value1;
 void *value2;
 value0=(void *)0;
 if(((int)p1!=0&&(value1=reinterpret_cast<UnknownGenV802065CC_0 *>((void *)p0)->s58((void *)p1),value2=reinterpret_cast<UnknownGenV802065CC_1 *>((void *)p1)->s58(),(unsigned int)(int)value1==(unsigned int)(int)value2))){
  value0=(void *)1;
 }
 return value0;
}
}
#pragma pop
