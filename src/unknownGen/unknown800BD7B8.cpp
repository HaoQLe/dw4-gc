#include <unknownGen.h>
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
 value0=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+64);
 igGamecubeVisualContext_virtual2D4((void *)p1,value0);
 igGamecubeVisualContext_virtual2C8((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+60));
 igGamecubeVisualContext_virtual2DC((void *)p1,(int)(int)(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+56)));
 if(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12)){
  igGamecubeVisualContext_virtual2C0((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12));
  return;
 } else {
  return;
 }
}
}
#pragma pop
