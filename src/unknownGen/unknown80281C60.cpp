#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80281B90(void *,void *);
void *fn_802841C8(void *,void *,void *);
}
extern "C" {
void fn_80281C60(int p0,int p1,int p2,int p3){
 void *value0;
 value0=fn_802841C8((void *)p1,(void *)p2,(void *)p3);
 if((int)(int)value0!=0){
  fn_80281B90((void *)p0,(void *)p1);
  return;
 } else {
  return;
 }
}
}
#pragma pop
