#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_801D8FE4(void *,void *);
void *fn_801D94D4(void *);
void fn_801D95C0(void *,void *);
void fn_801D9654(void *,void *);
void fn_8020B274(void *,void *);
}
class UnknownGenV801D92BC_0 {
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
 virtual void s84(void *);
};
class UnknownGenV801D92BC_1 {
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
 virtual void s84(void *);
};
extern "C" {
void fn_801D92BC(int p0,int p1){
 void *value0;
 value0=fn_801D94D4((void *)p0);
 if(!(unsigned char)(int)value0){
  fn_8020B274((void *)p1,(void *)p0);
  return;
 } else {
  fn_801D95C0((void *)p0,(void *)p1);
  fn_801D9654((void *)p0,(void *)p1);
  reinterpret_cast<UnknownGenV801D92BC_0 *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+176))->s84(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+48));
  reinterpret_cast<UnknownGenV801D92BC_1 *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+180))->s84(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+52));
  fn_801D8FE4((void *)p0,(void *)p1);
  return;
 }
}
void fn_801D9360(int p0,int p1,int p2){
 if((int)p1>=8){
  return;
 }
 if((unsigned char)p2){
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+64)=(unsigned char)(int)(void *)(int)(*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+64)|(1<<p1));
  return;
 }
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+64)=(unsigned char)(int)(void *)(int)(*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+64)&~(1<<p1));
}
unsigned char fn_801D93A0(void *object){return *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+64);}
}
#pragma pop
