#include <unknownGen.h>
#include <meta/igVertexBlendMatrixAttr.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igGamecubeVisualContext_virtual32C(void *,void *,void *);
}
extern "C" {
int igVectorConstantAttr_virtual7C(){return 128;}
void igVertexBlendMatrixAttr_virtual60(int p0,int p1){
 igGamecubeVisualContext_virtual32C((void *)p1,(reinterpret_cast<char *>((void *)(int)reinterpret_cast<Meta::igVertexBlendMatrixAttr *>((void *)p0)->_blendMatID)+10),(reinterpret_cast<char *>((void *)p0)+12));
}
void *fn_800C4F84(int p0){
 *reinterpret_cast<short *>(reinterpret_cast<char *>((void *)p0)+10)=(short)(int)(void *)(int)*reinterpret_cast<unsigned short *>(reinterpret_cast<char *>((void *)p0)+76);
 return (void *)p0;
}
}
#pragma pop
