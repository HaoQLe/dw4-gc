#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *lbl_80562394;
}
class UnknownGenV8008623C_0 {
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
};
extern "C" {
void fn_8008623C(){
 reinterpret_cast<UnknownGenV8008623C_0 *>(lbl_80562394)->s4C();
}
void fn_8008626C(){}
void *fn_80086270(int p0){
 if(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+124)){
  return *reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+124);
 }
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+112))+2060);
}
void *fn_80086290(int p0){
 if(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+124)){
  return (void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+124)+(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+164));
 }
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+112))+2064);
}
}
#pragma pop
