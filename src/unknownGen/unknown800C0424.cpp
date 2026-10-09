#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
class UnknownGenV800C0424_0 {
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
class UnknownGenV800C0458_1 {
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
};
class UnknownGenV800C0458_2 {
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
 virtual void * s8C();
};
extern "C" {
void igGeometryAttr2_virtual7C(int p0,int p1,int p2,int p3,int p4,int p5,int p6){
 reinterpret_cast<UnknownGenV800C0424_0 *>((void *)p1)->s5C((void *)23,(void *)p2,(void *)p3,(void *)p4,(void *)p5,(void *)p6);
}
void *igGeometryAttr2_virtual70(int p0){
 void *value0;
 void *value1;
 void *value2;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12);
 if(value0){
  reinterpret_cast<UnknownGenV800C0458_1 *>(value0)->s60();
 }
 value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16);
 if(value1){
  value2=reinterpret_cast<UnknownGenV800C0458_2 *>(value1)->s8C();
  return value2;
 } else {
  return value1;
 }
}
void igVertexArray2_virtual60(){}
}
#pragma pop
