#include <unknownGen.h>
#include <meta/igTextureStageConstantColorSelectAttr.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800BCB6C(void *,void *);
void fn_800BCB74(void *);
}
extern "C" {
void igTextureStageConstantColorSelectAttr_virtual44(int p0){
 fn_800BCB74((void *)p0);
 fn_800BCB6C((void *)p0,(void *)(int)reinterpret_cast<Meta::igTextureStageConstantColorSelectAttr *>((void *)p0)->_unitID);
}
}
#pragma pop
