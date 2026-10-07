#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_803B863C(void *);
extern char lbl_804EEB88[];
extern void *lbl_805661F0;
}
class UnknownGenV803B85CC_0 {
public:
 virtual void s08();
 virtual void s0C();
 virtual void s10(void *);
};
extern "C" {
void *fn_803B85CC(void *p0,int p1){
 if((int)(int)p0!=0){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(p0)+0)=lbl_804EEB88;
  fn_803B863C(p0);
  if((int)(short)p1>0){
   reinterpret_cast<UnknownGenV803B85CC_0 *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(lbl_805661F0)+0))->s10(p0);
  }
 }
 return p0;
}
}
#pragma pop
