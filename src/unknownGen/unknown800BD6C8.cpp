#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igGamecubeVisualContext_virtual260(void *,void *);
void *igGamecubeVisualContext_virtual314(void *,void *,void *);
}
extern "C" {
int igBlendFunctionAttr_virtual7C(){return 1;}
void igBlendMatricesAttr_virtual60(int p0,int p1){
 igGamecubeVisualContext_virtual314((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12));
}
void igBlendMatricesAttr_virtual68(){}
void igBlendMatrixPaletteAttr_virtual60(int p0,int p1){
 igGamecubeVisualContext_virtual314((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12));
}
void igBlendMatrixPaletteAttr_virtual68(){}
void igBlendStateAttr_virtual60(int p0,int p1){
 igGamecubeVisualContext_virtual260((void *)p1,(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+12));
}
}
#pragma pop
