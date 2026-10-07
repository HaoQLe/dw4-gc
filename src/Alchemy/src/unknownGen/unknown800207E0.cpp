#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800207D4();
void *fn_8003D1C0(void *);
}
extern "C" {
void fn_800207E0(){
 void *value0;
 value0=fn_800207D4();
 if(value0){
  fn_8003D1C0(value0);
  return;
 } else {
  return;
 }
}
}
#pragma pop
