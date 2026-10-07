#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
class UnknownGenV801EAC44_0 {
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
 virtual void s80();
 virtual void s84();
 virtual void s88();
 virtual void * s8C(void *,void *);
};
extern "C" {
void *fn_801EAC44(void *p0,void *p1){
 void *value0;
 void *value1;
 void *value2;
 if(*reinterpret_cast<void **>(reinterpret_cast<char *>(p0)+28)){
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(p0)+28))+8);
 } else {
  value0=(void *)0;
 }
 value2=reinterpret_cast<UnknownGenV801EAC44_0 *>(p0)->s8C(value0,p1);
 value1=(void *)-1;
 if((unsigned char)(int)value2){
  value1=(reinterpret_cast<char *>(value0)+1);
 }
 return value1;
}
}
#pragma pop
