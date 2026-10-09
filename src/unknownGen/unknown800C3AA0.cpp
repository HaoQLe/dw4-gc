#include <unknownGen.h>
#include <meta/igTextureCoordSourceAttr.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igGamecubeVisualContext_virtual258(void *,void *,void *,void *);
}
extern "C" {
void igTextureCoordSourceAttr_virtual60(int p0,int p1){
 igGamecubeVisualContext_virtual258((void *)p1,(void *)reinterpret_cast<Meta::igTextureCoordSourceAttr *>((void *)p0)->_unitID,(void *)(int)reinterpret_cast<Meta::igTextureCoordSourceAttr *>((void *)p0)->_mode,(void *)reinterpret_cast<Meta::igTextureCoordSourceAttr *>((void *)p0)->_texCoordIndex);
}
}
#pragma pop
