#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80276F5C(int,int,int);
}
extern "C" {
void fn_80276420(int p0,int p1){
 if((int)p1>0){
  fn_80276F5C((int)(int)((void *)p0),5,(int)(int)((void *)p1));
  return;
 } else {
  fn_80276F5C((int)(int)((void *)p0),4,(int)(int)((void *)(int)(-p1)));
  return;
 }
}
}
#pragma pop
