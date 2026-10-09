#include <unknownGen.h>
#include <meta/igTextureStageConstantAlphaSelectAttr.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800BCB6C(void *,void *);
void fn_800BCB74(void *);
}
extern "C" {
void igTextureStageConstantAlphaSelectAttr_virtual44(int p0){
 fn_800BCB74((void *)p0);
 fn_800BCB6C((void *)p0,(void *)(int)reinterpret_cast<Meta::igTextureStageConstantAlphaSelectAttr *>((void *)p0)->_unitID);
}
}
#pragma pop
