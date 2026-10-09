#include <unknownGen.h>
#include <meta/igVertexBlendMatrixListAttr.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800667D4(void *);
void fn_80068390(void *,void *);
}
extern "C" {
void igVertexBlendMatrixListAttr_virtual30(int p0){
 fn_80068390((void *)p0,reinterpret_cast<Meta::igVertexBlendMatrixListAttr *>((void *)p0)->_matrixCache);
 fn_800667D4((void *)p0);
}
}
#pragma pop
