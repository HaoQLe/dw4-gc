#include <unknownGen.h>
#include <meta/igVisualContextCapabilityManager.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800D8B90(void *,void *,int);
extern char lbl_804F5B10[];
}
class UnknownGenV800EACBC_0 {
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
 virtual void s90();
 virtual void * s94();
};
extern "C" {
void *igVisualContextCapabilityManager_virtual5C(int p0){
 void *value0;
 if(reinterpret_cast<Meta::igVisualContextCapabilityManager *>((void *)p0)->_visualContext){
  value0=reinterpret_cast<UnknownGenV800EACBC_0 *>(reinterpret_cast<Meta::igVisualContextCapabilityManager *>((void *)p0)->_visualContext)->s94();
  return value0;
 } else {
  return (void *)0;
 }
}
void fn_800EACFC(int p0,int p1,int p2,int p3,int p4,int p5){
 fn_800D8B90((void *)p1,lbl_804F5B10,28);
}
}
#pragma pop
