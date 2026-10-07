#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *lbl_80562394;
}
class UnknownGenV800779D4_0 {
public:
 virtual void s08();
 virtual void * s0C();
};
extern "C" {
void *fn_800779D4(){
 void *value1;
 void *value0=lbl_80562394;
 if(value0){
  value1=reinterpret_cast<UnknownGenV800779D4_0 *>(value0)->s0C();
  return value1;
 } else {
  return value0;
 }
}
int fn_80077A0C(){return 6;}
}
#pragma pop
