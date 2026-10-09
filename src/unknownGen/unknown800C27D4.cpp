#include <unknownGen.h>
#include <meta/igRenderListAttr.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igGamecubeVisualContext_virtual310(void *,void *);
}
extern "C" {
void igGamecubeVisualContext_virtualBC(){}
void igRenderListAttr_virtual60(int p0,int p1){
 if((int)(int)(void *)reinterpret_cast<Meta::igRenderListAttr *>((void *)p0)->_handle>=0){
  igGamecubeVisualContext_virtual310((void *)p1,(void *)reinterpret_cast<Meta::igRenderListAttr *>((void *)p0)->_handle);
  return;
 } else {
  return;
 }
}
void igRenderListAttr_virtual68(){}
}
#pragma pop
