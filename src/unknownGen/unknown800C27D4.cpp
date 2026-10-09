#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igGamecubeVisualContext_virtual310(void *,void *);
}
extern "C" {
void igGamecubeVisualContext_virtualBC(){}
void igRenderListAttr_virtual60(int p0,int p1){
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12)>=0){
  igGamecubeVisualContext_virtual310((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12));
  return;
 } else {
  return;
 }
}
void igRenderListAttr_virtual68(){}
}
#pragma pop
