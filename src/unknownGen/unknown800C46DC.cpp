#include <unknownGen.h>
#include <meta/igTextureMatrixAttr.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80100234(void *,void *,void *);
void igGamecubeVisualContext_virtual32C(void *,void *,void *);
}
extern "C" {
void igTextureMatrixAttr_virtual60(int p0,int p1){
 fn_80100234((void *)p1,(void *)reinterpret_cast<Meta::igTextureMatrixAttr *>((void *)p0)->_unitID,(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+82));
 igGamecubeVisualContext_virtual32C((void *)p1,(reinterpret_cast<char *>((void *)reinterpret_cast<Meta::igTextureMatrixAttr *>((void *)p0)->_unitID)+2),(reinterpret_cast<char *>((void *)p0)+12));
}
void *fn_800C4734(int p0){
 *reinterpret_cast<short *>(reinterpret_cast<char *>((void *)p0)+10)=(short)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+76);
 return (void *)p0;
}
}
#pragma pop
