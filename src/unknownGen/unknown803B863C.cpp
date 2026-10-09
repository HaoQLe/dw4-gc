#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *lbl_805661F0;
}
class UnknownGenV803B863C_0 {
public:
 virtual void s08();
 virtual void s0C();
 virtual void s10();
 virtual void s14();
 virtual void s18();
 virtual void s1C(void *);
};
extern "C" {
void fn_803B863C(int p0){
 void *value0;
 value0=(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+12);
 if((value0&&*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+4))){
  reinterpret_cast<UnknownGenV803B863C_0 *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(lbl_805661F0)+0))->s1C(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+4));
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+4)=(void *)0;
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+8)=(void *)0;
}
}
#pragma pop
