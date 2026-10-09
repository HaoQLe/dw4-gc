#include <unknownGen.h>
#include <meta/igDisplayListAttr.h>
#include <meta/igGuiSystemRenderer.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
class UnknownGenV8011A9AC_0 {
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
};
class UnknownGenV8011A9AC_1 {
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
 virtual void s64(void *);
};
class UnknownGenV8011A9AC_2 {
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
 virtual void * s78();
};
extern "C" {
void igGuiSystemRenderer_virtual64(int p0){
 void *value3;
 void *value0;
 void *value1;
 void *value2;
 reinterpret_cast<UnknownGenV8011A9AC_0 *>(reinterpret_cast<Meta::igGuiSystemRenderer *>((void *)p0)->_commonTraversal)->s7C();
 reinterpret_cast<UnknownGenV8011A9AC_1 *>(reinterpret_cast<Meta::igGuiSystemRenderer *>((void *)p0)->_commonTraversal)->s64(reinterpret_cast<Meta::igGuiSystemRenderer *>((void *)p0)->_root);
 value3=reinterpret_cast<UnknownGenV8011A9AC_2 *>(reinterpret_cast<Meta::igGuiSystemRenderer *>((void *)p0)->_commonTraversal)->s78();
 if((int)(int)value3!=0){
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>(value3)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+4)=(reinterpret_cast<char *>(value0)+1);
 }
 value1=reinterpret_cast<Meta::igGuiSystemRenderer *>((void *)p0)->_displayListAttr;
 if(value1){
  value2=(void *)reinterpret_cast<Meta::igDisplayListAttr *>(value1)->_refCount;
  reinterpret_cast<Meta::igDisplayListAttr *>(value1)->_refCount=(unsigned int)(reinterpret_cast<char *>(value2)+-1);
  if(!((unsigned int)(int)(void *)reinterpret_cast<Meta::igDisplayListAttr *>(value1)->_refCount&0x7FFFFF)){
   fn_80066E1C(value1);
  }
 }
 reinterpret_cast<Meta::igGuiSystemRenderer *>((void *)p0)->_displayListAttr=(Meta::igDisplayListAttr *)value3;
}
}
#pragma pop
