#include <unknownGen.h>
#include <meta/igBlendMatricesAttr.h>
#include <meta/igBlendMatrixPaletteAttr.h>
#include <meta/igVec3fList.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8004155C(void *,void *,int);
extern void *igVisualAttribute_meta;
extern void *igVertexBlendMatrixAttrList_meta;
extern void *igVertexBlendMatrixAttr_meta;
extern void *igTextureMatrixAttrList_meta;
extern void *igTextureMatrixAttr_meta;
extern void *igTextureAttr_meta;
extern void *igImageMipMapList_meta;
extern void *igParticleAttrList_meta;
extern void *igParticleAttr_meta;
extern void *igVec3fAlignedList_meta;
extern void *igMorphDataList_meta;
extern void *igMorphData_meta;
extern void *igModelViewMatrixAttrList_meta;
extern void *igModelViewMatrixAttr_meta;
extern void *igLightStateAttrList_meta;
extern void *igLightStateAttr_meta;
extern void *igLightList_meta;
extern void *igLightAttr_meta;
extern void *igGeometryAttr_meta;
extern void *igClippingStateAttr_meta;
extern void *igClearAttr_meta;
extern void *igBlendingCorrectionStateAttr_meta;
extern void *igBlendingControlStateAttr_meta;
extern void *igBlendStateAttr_meta;
extern void *igBlendMatrixPaletteAttrList_meta;
extern void *igBlendMatrixPaletteAttr_meta;
extern void *igBlendMatricesAttr_meta;
extern void *igTextureList_meta;
extern void *igGeometryAttrList_meta;
extern void *igAttrPool_meta;
extern void *igAttrDefaultManager_meta;
extern void *igAttrListList_meta;
extern void *igNonRefCountedAttrList_meta;
extern void *igAttrList_meta;
extern void *igAttr_meta;
extern void *igAlphaStateAttr_meta;
extern void *igAlphaFunctionAttr_meta;
extern void *igImage_meta;
extern void *igVec3fList_meta;
}
extern "C" {
void *igClippingStateAttr_virtual58(){return igClippingStateAttr_meta;}
void *igClearAttr_virtual58(){return igClearAttr_meta;}
void *igBlendingCorrectionStateAttr_virtual58(){return igBlendingCorrectionStateAttr_meta;}
void *igBlendingControlStateAttr_virtual58(){return igBlendingControlStateAttr_meta;}
void *igBlendStateAttr_virtual58(){return igBlendStateAttr_meta;}
void *igBlendMatrixPaletteAttr_virtual58(){return igBlendMatrixPaletteAttr_meta;}
void igBlendMatrixPaletteAttr_virtual44(int p0){
 if((void *)reinterpret_cast<Meta::igBlendMatrixPaletteAttr *>((void *)p0)->_capacity){
  return;
 }
 reinterpret_cast<Meta::igBlendMatrixPaletteAttr *>((void *)p0)->_capacity=(unsigned int)(void *)reinterpret_cast<Meta::igBlendMatrixPaletteAttr *>((void *)p0)->_currentMatrixCount;
}
void *igBlendMatricesAttr_virtual58(){return igBlendMatricesAttr_meta;}
void igBlendMatricesAttr_virtual44(int p0){
 if((void *)reinterpret_cast<Meta::igBlendMatricesAttr *>((void *)p0)->_matrixCacheCapacity){
  return;
 }
 reinterpret_cast<Meta::igBlendMatricesAttr *>((void *)p0)->_matrixCacheCapacity=(unsigned int)(void *)reinterpret_cast<Meta::igBlendMatricesAttr *>((void *)p0)->_currentMatrixCount;
}
void *igAttrPool_virtual58(){return igAttrPool_meta;}
void *fn_800C6B20(){return igAttrDefaultManager_meta;}
void *igAlphaStateAttr_virtual58(){return igAlphaStateAttr_meta;}
void *igAlphaFunctionAttr_virtual58(){return igAlphaFunctionAttr_meta;}
void *igAttrList_virtual58(){return igAttrList_meta;}
void *igNonRefCountedAttrList_virtual58(){return igNonRefCountedAttrList_meta;}
void *igAttrListList_virtual58(){return igAttrListList_meta;}
void *igGeometryAttrList_virtual58(){return igGeometryAttrList_meta;}
void *igTextureList_virtual58(){return igTextureList_meta;}
void *igBlendMatrixPaletteAttrList_virtual58(){return igBlendMatrixPaletteAttrList_meta;}
void *igLightList_virtual58(){return igLightList_meta;}
void *igLightStateAttrList_virtual58(){return igLightStateAttrList_meta;}
void *igModelViewMatrixAttrList_virtual58(){return igModelViewMatrixAttrList_meta;}
void *igMorphDataList_virtual58(){return igMorphDataList_meta;}
void *igVec3fAlignedList_virtual58(){return igVec3fAlignedList_meta;}
void *igVec3fList_virtual58(){return igVec3fList_meta;}
void *fn_800C6B98(){return igMorphData_meta;}
void *igParticleAttrList_virtual58(){return igParticleAttrList_meta;}
void *igImageMipMapList_virtual58(){return igImageMipMapList_meta;}
void *igTextureMatrixAttrList_virtual58(){return igTextureMatrixAttrList_meta;}
void *igVertexBlendMatrixAttrList_virtual58(){return igVertexBlendMatrixAttrList_meta;}
void *fn_800C6BC0(){return igVisualAttribute_meta;}
void *igNonRefCountedAttrList_virtual60(){return igAttr_meta;}
int igVec3fList_virtual5C(){return 12;}
void *igBlendMatrixPaletteAttrList_virtual60(){return igBlendMatrixPaletteAttr_meta;}
void *igLightStateAttrList_virtual60(){return igLightStateAttr_meta;}
void *igLightList_virtual60(){return igLightAttr_meta;}
void *igModelViewMatrixAttrList_virtual60(){return igModelViewMatrixAttr_meta;}
void *igMorphDataList_virtual60(){return igMorphData_meta;}
void *igParticleAttrList_virtual60(){return igParticleAttr_meta;}
void *igTextureList_virtual60(){return igTextureAttr_meta;}
void *igGeometryAttrList_virtual60(){return igGeometryAttr_meta;}
void *igTextureMatrixAttrList_virtual60(){return igTextureMatrixAttr_meta;}
void *fn_800C6C20(){return igImage_meta;}
void *igVertexBlendMatrixAttrList_virtual60(){return igVertexBlendMatrixAttr_meta;}
void *igAttrListList_virtual60(){return igAttrList_meta;}
void *igAttrList_virtual60(){return igAttr_meta;}
void igVec3fList_virtual48(int p0){
 if((int)(int)(void *)reinterpret_cast<Meta::igVec3fList *>((void *)p0)->_capacity>(int)(int)(void *)reinterpret_cast<Meta::igVec3fList *>((void *)p0)->_count){
  fn_8004155C((void *)p0,(void *)reinterpret_cast<Meta::igVec3fList *>((void *)p0)->_count,12);
  return;
 } else {
  return;
 }
}
}
#pragma pop
