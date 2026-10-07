#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80277F60(void *,void *,int,void *);
void *fn_80282F18(void *,void *,void *);
extern char lbl_804CAE20[];
}
extern "C" {
void fn_80282FD8(int p0,int p1,int p2){
 void *value0;
 value0=fn_80282F18((void *)p0,(void *)p1,(void *)p2);
 if((int)(int)value0==0){
  fn_80277F60((void *)p0,(reinterpret_cast<char *>((void *)p1)+-32),2,lbl_804CAE20);
  return;
 } else {
  return;
 }
}
}
#pragma pop
