#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802959C4(void *);
void fn_802959E4(void *);
void *memset(void *,int,int);
}
extern "C" {
void fn_80295980(int p0){
 void *value0;
 if((int)p0!=0){
  fn_802959E4((void *)p0);
  value0=memset((void *)p0,0,48);
  fn_802959C4(value0);
  return;
 } else {
  return;
 }
}
}
#pragma pop
