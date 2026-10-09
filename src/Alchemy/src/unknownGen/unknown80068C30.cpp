#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066990(void *,void *);
}
class UnknownGenV80068C7C_0 {
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
};
extern "C" {
void igObjectDirEntry_virtual90(int p0,int p1){
 void *value0;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24);
 if(value0){
  if((unsigned char)p1){
   fn_80066990(value0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+28));
   return;
  } else {
   fn_80066990(value0,(void *)0);
   return;
  }
 }
}
void igObjectDirEntry_virtual94(int p0){
 reinterpret_cast<UnknownGenV80068C7C_0 *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24))->s44();
}
}
#pragma pop
