#include <unknownGen.h>
#include <meta/igPixelPipelineModeAttr.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igGamecubeVisualContext_virtual248(void *,void *);
}
extern "C" {
void igPixelPipelineModeAttr_virtual60(int p0,int p1){
 igGamecubeVisualContext_virtual248((void *)p1,(void *)(int)reinterpret_cast<Meta::igPixelPipelineModeAttr *>((void *)p0)->_pipelineMode);
}
}
#pragma pop
