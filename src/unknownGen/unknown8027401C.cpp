#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80272D5C(void *);
void fn_80274360(void *,...);
extern char lbl_804C9C08[];
}
extern "C" {
void fn_8027401C(int p0,int p1,int p2){
 void *value0;
 value0=fn_80272D5C((void *)p0);
 if((int)p1>(int)(int)value0){
  fn_80274360((void *)p0,lbl_804C9C08,(void *)p2);
  return;
 } else {
  return;
 }
}
}
#pragma pop
