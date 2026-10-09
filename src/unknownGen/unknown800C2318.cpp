#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igGamecubeVisualContext_virtual32C(void *,int,void *);
}
extern "C" {
void igPolygonModeAttr_virtual80(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+12)=value;}
void igProjectionMatrixAttr_virtual60(int p0,int p1){
 igGamecubeVisualContext_virtual32C((void *)p1,0,(reinterpret_cast<char *>((void *)p0)+12));
}
}
#pragma pop
