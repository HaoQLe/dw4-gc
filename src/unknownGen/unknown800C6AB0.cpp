#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8004155C(void *,void *,int);
extern void *lbl_8056240C;
extern void *lbl_8056249C;
extern void *lbl_805624A0;
extern void *lbl_805624E4;
extern void *lbl_805624E8;
extern void *lbl_80562554;
extern void *lbl_80562594;
extern void *lbl_805626F4;
extern void *lbl_805626F8;
extern void *lbl_8056275C;
extern void *lbl_80562760;
extern void *lbl_80562764;
extern void *lbl_80562768;
extern void *lbl_8056276C;
extern void *lbl_805627DC;
extern void *lbl_805627E0;
extern void *lbl_805627F0;
extern void *lbl_805627F4;
extern void *lbl_80562888;
extern void *lbl_805629A0;
extern void *lbl_805629A8;
extern void *lbl_805629C8;
extern void *lbl_805629D0;
extern void *lbl_805629D8;
extern void *lbl_805629E0;
extern void *lbl_805629E4;
extern void *lbl_805629F8;
extern void *lbl_80562A40;
extern void *lbl_80562A44;
extern void *lbl_80562A48;
extern void *lbl_80562A58;
extern void *lbl_80562A5C;
extern void *lbl_80562A60;
extern void *lbl_80562A64;
extern void *lbl_80562A68;
extern void *lbl_80562A74;
extern void *lbl_80562A7C;
extern void *lbl_80562F78;
extern void *lbl_80563A14;
}
extern "C" {
void *igClippingStateAttr_virtual58(){return lbl_805629A0;}
void *igClearAttr_virtual58(){return lbl_805629A8;}
void *igBlendingCorrectionStateAttr_virtual58(){return lbl_805629C8;}
void *igBlendingControlStateAttr_virtual58(){return lbl_805629D0;}
void *igBlendStateAttr_virtual58(){return lbl_805629D8;}
void *igBlendMatrixPaletteAttr_virtual58(){return lbl_805629E4;}
void igBlendMatrixPaletteAttr_virtual44(int p0){
 if(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24)){
  return;
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+24)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20);
}
void *igBlendMatricesAttr_virtual58(){return lbl_805629F8;}
void igBlendMatricesAttr_virtual44(int p0){
 if(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20)){
  return;
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+20)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16);
}
void *igAttrPool_virtual58(){return lbl_80562A48;}
void *fn_800C6B20(){return lbl_80562A58;}
void *igAlphaStateAttr_virtual58(){return lbl_80562A74;}
void *igAlphaFunctionAttr_virtual58(){return lbl_80562A7C;}
void *igAttrList_virtual58(){return lbl_80562A64;}
void *igNonRefCountedAttrList_virtual58(){return lbl_80562A60;}
void *igAttrListList_virtual58(){return lbl_80562A5C;}
void *igGeometryAttrList_virtual58(){return lbl_80562A44;}
void *igTextureList_virtual58(){return lbl_80562A40;}
void *igBlendMatrixPaletteAttrList_virtual58(){return lbl_805629E0;}
void *igLightList_virtual58(){return lbl_805627F0;}
void *igLightStateAttrList_virtual58(){return lbl_805627DC;}
void *igModelViewMatrixAttrList_virtual58(){return lbl_80562768;}
void *igMorphDataList_virtual58(){return lbl_80562760;}
void *igVec3fAlignedList_virtual58(){return lbl_8056275C;}
void *igVec3fList_virtual58(){return lbl_80563A14;}
void *fn_800C6B98(){return lbl_80562764;}
void *igParticleAttrList_virtual58(){return lbl_805626F4;}
void *igImageMipMapList_virtual58(){return lbl_80562594;}
void *igTextureMatrixAttrList_virtual58(){return lbl_805624E4;}
void *igVertexBlendMatrixAttrList_virtual58(){return lbl_8056249C;}
void *fn_800C6BC0(){return lbl_8056240C;}
void *igNonRefCountedAttrList_virtual60(){return lbl_80562A68;}
int igVec3fList_virtual5C(){return 12;}
void *igBlendMatrixPaletteAttrList_virtual60(){return lbl_805629E4;}
void *igLightStateAttrList_virtual60(){return lbl_805627E0;}
void *igLightList_virtual60(){return lbl_805627F4;}
void *igModelViewMatrixAttrList_virtual60(){return lbl_8056276C;}
void *igMorphDataList_virtual60(){return lbl_80562764;}
void *igParticleAttrList_virtual60(){return lbl_805626F8;}
void *igTextureList_virtual60(){return lbl_80562554;}
void *igGeometryAttrList_virtual60(){return lbl_80562888;}
void *igTextureMatrixAttrList_virtual60(){return lbl_805624E8;}
void *fn_800C6C20(){return lbl_80562F78;}
void *igVertexBlendMatrixAttrList_virtual60(){return lbl_805624A0;}
void *igAttrListList_virtual60(){return lbl_80562A64;}
void *igAttrList_virtual60(){return lbl_80562A68;}
void igVec3fList_virtual48(int p0){
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12)>(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8)){
  fn_8004155C((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8),12);
  return;
 } else {
  return;
 }
}
}
#pragma pop
