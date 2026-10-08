#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_803B5D80(void *,void *);
extern void *lbl_805661F0;
}
class UnknownGenV803B5D20_0 {
public:
 virtual void s08();
 virtual void * s0C(void *);
};
extern "C" {
void fn_803B5D20(int p0){
 void *value0;
 if(!lbl_805661F0){
  if((unsigned int)p0!=0){
   value0=reinterpret_cast<UnknownGenV803B5D20_0 *>((void *)p0)->s0C((void *)4);
   lbl_805661F0=value0;
  }
  fn_803B5D80(lbl_805661F0,(void *)p0);
  return;
 } else {
  return;
 }
}
}
#pragma pop
