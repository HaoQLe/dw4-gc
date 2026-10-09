#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igGamecubeVisualContext_virtual364(void *,void *);
}
extern "C" {
void igAlphaFunctionAttr_virtual80(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+12)=value;}
void igAlphaStateAttr_virtual60(int p0,int p1){
 igGamecubeVisualContext_virtual364((void *)p1,(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+12));
}
}
#pragma pop
