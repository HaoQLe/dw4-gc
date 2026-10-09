#include <unknownGen.h>
#include <meta/igAttrList.h>
#include <meta/igGeometry.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *lbl_805657D4;
}
class UnknownGenV801EA384_0 {
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
};
class UnknownGenV801EA384_1 {
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
 virtual void * s70();
};
extern "C" {
void *igGeometry_virtual7C(int p0){
 void *value0;
 void *value1;
 void *value2;
 void *value4;
 void *value3;
 value0=reinterpret_cast<Meta::igGeometry *>((void *)p0)->_attributes;
 value1=(void *)reinterpret_cast<Meta::igAttrList *>(value0)->_count;
 value3=(void *)0;
 while((unsigned int)(int)value3<(unsigned int)(int)value1){
  reinterpret_cast<UnknownGenV801EA384_0 *>((void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(reinterpret_cast<Meta::igAttrList *>(reinterpret_cast<Meta::igGeometry *>((void *)p0)->_attributes)->_data)+((int)value3<<2)))->s70();
  value3=(reinterpret_cast<char *>(value3)+1);
 }
 value2=*reinterpret_cast<void **>(reinterpret_cast<char *>(lbl_805657D4)+8);
 if((void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>((void *)p0)+(int)value2)){
  value4=reinterpret_cast<UnknownGenV801EA384_1 *>((void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>((void *)p0)+(int)value2))->s70();
  return value4;
 } else {
  return (void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>((void *)p0)+(int)value2);
 }
}
}
#pragma pop
