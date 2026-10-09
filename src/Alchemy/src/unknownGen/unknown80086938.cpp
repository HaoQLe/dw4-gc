#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80086BDC(void *,void *);
void fn_80086C4C(void *,void *,void *,void *);
}
extern "C" {
void igElfFile_virtual18C(int p0,int p1){
 void *value0;
 void *local1;
 void *local0;
 if((unsigned int)p1!=0){
  value0=fn_80086BDC((void *)p0,(void *)p1);
  fn_80086C4C((void *)p0,value0,&local1,&local0);
  return;
 } else {
  return;
 }
}
}
#pragma pop
