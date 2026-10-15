#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *lbl_8055E7D8;
extern void *igMaterialModeAttr_meta;
extern void *igMaterialAttr_meta;
extern void *igMacroTextureRegionAttr_meta;
extern void *igLineWidthAttr_meta;
extern void *igLightingStateAttr_meta;
extern void *igLightStateAttr_meta;
extern void *igLightAttr_meta;
extern void *igGeometrySetAttr_meta;
extern void *igGeometryMaskAttr_meta;
extern void *igGeometryAttr2_meta;
extern void *lbl_80562AF8;
}
extern "C" {
void *igMatrixConstantAttr_virtual94(){return lbl_8055E7D8;}
void *igMatrixConstantAttr_virtual98(int p0,int p1){
 lbl_8055E7D8=(void *)p1;
 return (void *)p0;
}
void *igMatrixConstantAttr_virtual9C(){return lbl_80562AF8;}
void *igMatrixConstantAttr_virtualA0(int p0,int p1){
 lbl_80562AF8=(void *)p1;
 return (void *)p0;
}
void *igMaterialModeAttr_virtual58(){return igMaterialModeAttr_meta;}
void *igMaterialAttr_virtual58(){return igMaterialAttr_meta;}
void *igMacroTextureRegionAttr_virtual58(){return igMacroTextureRegionAttr_meta;}
void *igLineWidthAttr_virtual58(){return igLineWidthAttr_meta;}
void *igLightingStateAttr_virtual58(){return igLightingStateAttr_meta;}
void *igLightStateAttr_virtual58(){return igLightStateAttr_meta;}
void *igLightAttr_virtual58(){return igLightAttr_meta;}
void igLightAttr_virtualA0(void *object,UnknownGenValue *value){
 if(value) ++value->unknown04;
 UnknownGenValue *old=*reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+0x8C);
 if(old) unknownGenDrop(old);
 *reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+0x8C)=value;
}
void *igGeometrySetAttr_virtual58(){return igGeometrySetAttr_meta;}
void *igGeometryMaskAttr_virtual58(){return igGeometryMaskAttr_meta;}
void *igGeometryAttr2_virtual58(){return igGeometryAttr2_meta;}
}
#pragma pop
