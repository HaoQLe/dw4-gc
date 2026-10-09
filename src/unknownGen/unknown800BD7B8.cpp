#include <unknownGen.h>
#include <meta/igClearAttr.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igGamecubeVisualContext_virtual2C0(void *,void *);
void igGamecubeVisualContext_virtual2C8(void *,void *);
void igGamecubeVisualContext_virtual2D4(void *,float);
void igGamecubeVisualContext_virtual2DC(void *,int);
}
extern "C" {
void igBlendStateAttr_virtual80(void *object,unsigned char value){*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+12)=value;}
void igBlendingControlStateAttr_virtual60(){}
void igBlendingControlStateAttr_virtual68(){}
void igBlendingCorrectionStateAttr_virtual60(){}
void igBlendingCorrectionStateAttr_virtual68(){}
void igClearAttr_virtual60(int p0,int p1){
 float value0;
 value0=reinterpret_cast<Meta::igClearAttr *>((void *)p0)->_depthF;
 igGamecubeVisualContext_virtual2D4((void *)p1,value0);
 igGamecubeVisualContext_virtual2C8((void *)p1,(void *)reinterpret_cast<Meta::igClearAttr *>((void *)p0)->_colorPacked);
 igGamecubeVisualContext_virtual2DC((void *)p1,(int)(int)((void *)reinterpret_cast<Meta::igClearAttr *>((void *)p0)->_stencil));
 if((void *)reinterpret_cast<Meta::igClearAttr *>((void *)p0)->_clearMode){
  igGamecubeVisualContext_virtual2C0((void *)p1,(void *)reinterpret_cast<Meta::igClearAttr *>((void *)p0)->_clearMode);
  return;
 } else {
  return;
 }
}
}
#pragma pop
