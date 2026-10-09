#include <unknownGen.h>
#include <meta/igBlendFunctionAttr.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800BCB6C(void *,void *);
void fn_800BCB74(void *);
}
extern "C" {
void igBlendFunctionAttr_virtual44(int p0){
 fn_800BCB74((void *)p0);
 fn_800BCB6C((void *)p0,(void *)(int)reinterpret_cast<Meta::igBlendFunctionAttr *>((void *)p0)->_blendStage);
}
}
#pragma pop
