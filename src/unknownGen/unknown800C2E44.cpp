#include <unknownGen.h>
#include <meta/igStencilFunctionAttr.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igGamecubeVisualContext_virtual284(void *,void *);
void igGamecubeVisualContext_virtual28C(void *,void *);
void igGamecubeVisualContext_virtual294(void *,void *,void *,void *);
void igGamecubeVisualContext_virtual29C(void *,void *);
void igGamecubeVisualContext_virtual2A4(void *,void *);
}
extern "C" {
void igStencilFunctionAttr_virtual60(int p0,int p1){
 igGamecubeVisualContext_virtual294((void *)p1,(void *)reinterpret_cast<Meta::igStencilFunctionAttr *>((void *)p0)->_stenFailOp,(void *)reinterpret_cast<Meta::igStencilFunctionAttr *>((void *)p0)->_stenPassZPassOp,(void *)reinterpret_cast<Meta::igStencilFunctionAttr *>((void *)p0)->_stenPassZFailOp);
 igGamecubeVisualContext_virtual284((void *)p1,(void *)reinterpret_cast<Meta::igStencilFunctionAttr *>((void *)p0)->_refVal);
 igGamecubeVisualContext_virtual28C((void *)p1,(void *)reinterpret_cast<Meta::igStencilFunctionAttr *>((void *)p0)->_func);
 igGamecubeVisualContext_virtual29C((void *)p1,(void *)reinterpret_cast<Meta::igStencilFunctionAttr *>((void *)p0)->_readMask);
 igGamecubeVisualContext_virtual2A4((void *)p1,(void *)reinterpret_cast<Meta::igStencilFunctionAttr *>((void *)p0)->_writeMask);
}
}
#pragma pop
