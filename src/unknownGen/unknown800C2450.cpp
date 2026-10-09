#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igGamecubeVisualContext_virtual32C(void *,void *,void *);
extern void *lbl_80565A64;
}
extern "C" {
void igRefVertexBlendMatrixAttr_virtual60(int p0,int p1){
 igGamecubeVisualContext_virtual32C((void *)p1,(reinterpret_cast<char *>((void *)(int)*reinterpret_cast<unsigned short *>(reinterpret_cast<char *>((void *)p0)+16))+10),(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12)+(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(lbl_80565A64)+8)));
}
void igRefVertexBlendMatrixAttr_virtual68(){}
}
#pragma pop
