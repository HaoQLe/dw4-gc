#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *lbl_8055E7D8;
extern void *lbl_80562794;
extern void *lbl_8056279C;
extern void *lbl_805627B8;
extern void *lbl_805627CC;
extern void *lbl_805627D4;
extern void *lbl_805627E0;
extern void *lbl_805627F4;
extern void *lbl_8056283C;
extern void *lbl_80562854;
extern void *lbl_8056285C;
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
void *igMaterialModeAttr_virtual58(){return lbl_80562794;}
void *igMaterialAttr_virtual58(){return lbl_8056279C;}
void *igMacroTextureRegionAttr_virtual58(){return lbl_805627B8;}
void *igLineWidthAttr_virtual58(){return lbl_805627CC;}
void *igLightingStateAttr_virtual58(){return lbl_805627D4;}
void *igLightStateAttr_virtual58(){return lbl_805627E0;}
void *igLightAttr_virtual58(){return lbl_805627F4;}
void igLightAttr_virtualA0(void *object,UnknownGenValue *value){
 if(value) ++value->unknown04;
 UnknownGenValue *old=*reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+0x8C);
 if(old) unknownGenDrop(old);
 *reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+0x8C)=value;
}
void *igGeometrySetAttr_virtual58(){return lbl_8056283C;}
void *igGeometryMaskAttr_virtual58(){return lbl_80562854;}
void *igGeometryAttr2_virtual58(){return lbl_8056285C;}
}
#pragma pop
