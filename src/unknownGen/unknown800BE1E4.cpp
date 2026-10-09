#include <unknownGen.h>
#include <meta/igDepthFunctionAttr.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *igGamecubeVisualContext_virtual3AC(void *,void *);
}
extern "C" {
void igDepthFunctionAttr_virtual80(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+12)=value;}
void igDepthFunctionAttr_virtual60(int p0,int p1){
 igGamecubeVisualContext_virtual3AC((void *)p1,(void *)(int)reinterpret_cast<Meta::igDepthFunctionAttr *>((void *)p0)->_func);
}
}
#pragma pop
