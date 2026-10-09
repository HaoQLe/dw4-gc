#include <unknownGen.h>
#include <meta/igBlendFunctionAttr.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800BCB6C(void *,void *);
}
extern "C" {
void igBlendFunctionAttr_virtual64(int p0,int p1){
 reinterpret_cast<Meta::igBlendFunctionAttr *>((void *)p0)->_blendStage=(short)(int)(void *)p1;
 fn_800BCB6C((void *)p0,(void *)p1);
}
}
#pragma pop
