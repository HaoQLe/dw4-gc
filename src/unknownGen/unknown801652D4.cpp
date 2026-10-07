#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80056378(void *);
extern void *lbl_805645A8;
}
extern "C" {
void *fn_801652D4(){
 void *value1;
 void *value0=lbl_805645A8;
 if(value0){
  value1=fn_80056378(value0);
  lbl_805645A8=(void *)0;
  return value1;
 } else {
  return value0;
 }
}
}
#pragma pop
