#include <unknownGen.h>
#include <meta/beCameraMode.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
class UnknownGenV802F4114_0 {
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
 virtual void s8C();
 virtual void * s90();
};
extern "C" {
void *beCameraMode_virtual80(int p0){
 void *value0;
 void *value1;
 value0=reinterpret_cast<Meta::beCameraMode *>((void *)p0)->_camera;
 if(value0){
  value1=reinterpret_cast<UnknownGenV802F4114_0 *>(value0)->s90();
  return value1;
 } else {
  return value0;
 }
}
}
#pragma pop
