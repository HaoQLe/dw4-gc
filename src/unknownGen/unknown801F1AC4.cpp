#include <unknownGen.h>
#include <meta/igIniShaderFactory.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800667E0();
}
class UnknownGenV801F1AC4_0 {
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
};
class UnknownGenV801F1B10_1 {
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
};
extern "C" {
void igIniShaderFactory_virtual44(int p0){
 fn_800667E0();
 if((int)(int)(void *)reinterpret_cast<Meta::igIniShaderFactory *>((void *)p0)->_fileCachingMode!=2){
  reinterpret_cast<UnknownGenV801F1AC4_0 *>((void *)p0)->s68();
  return;
 } else {
  return;
 }
}
void igIniShaderFactory_virtual48(int p0){
 if((int)(int)(void *)reinterpret_cast<Meta::igIniShaderFactory *>((void *)p0)->_fileCachingMode!=2){
  reinterpret_cast<UnknownGenV801F1B10_1 *>((void *)p0)->s68();
  return;
 } else {
  return;
 }
}
}
#pragma pop
