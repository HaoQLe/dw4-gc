#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80273330(void *);
void fn_80273450(void *,void *);
}
extern "C" {
void fn_80269ECC(int p0,int p1,int p2){
 if((unsigned int)p2!=0){
  fn_80273450((void *)p1,(void *)p2);
  return;
 } else {
  fn_80273330((void *)p1);
  return;
 }
}
}
#pragma pop
