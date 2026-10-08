#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800607F4(int);
}
extern "C" {
void fn_80060934(){
 void *value0;
 value0=fn_800607F4(2);
 if(!value0){
  fn_800607F4(0);
  return;
 } else {
  return;
 }
}
}
#pragma pop
