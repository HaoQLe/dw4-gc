#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *lbl_8055E7EC;
extern void *igTimeAttr_meta;
extern void *igTextureUnloadAttr_meta;
extern void *igTextureStateAttr_meta;
extern void *igTextureMatrixStateAttr_meta;
extern void *igTextureMatrixAttr_meta;
extern void *igTextureInfo_meta;
extern void *igTextureCubeAttr_meta;
extern void *igTextureCoordSourceAttr_meta;
extern void *igTextureBindAttr_meta;
extern void *igTextureAttr_meta;
extern void *igTextureAddressModeAttr_meta;
extern void *igTexGenMatrixAttr_meta;
extern void *lbl_80562B1C;
}
extern "C" {
void *igVectorConstantAttr_virtual94(){return lbl_8055E7EC;}
void *igVectorConstantAttr_virtual98(int p0,int p1){
 lbl_8055E7EC=(void *)p1;
 return (void *)p0;
}
void *igVectorConstantAttr_virtual9C(){return lbl_80562B1C;}
void *igVectorConstantAttr_virtualA0(int p0,int p1){
 lbl_80562B1C=(void *)p1;
 return (void *)p0;
}
void *igTimeAttr_virtual58(){return igTimeAttr_meta;}
void *igTextureUnloadAttr_virtual58(){return igTextureUnloadAttr_meta;}
void igTextureUnloadAttr_virtual80(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+12)=value;}
void *igTextureStateAttr_virtual58(){return igTextureStateAttr_meta;}
void *igTextureMatrixStateAttr_virtual58(){return igTextureMatrixStateAttr_meta;}
void *igTextureMatrixAttr_virtual58(){return igTextureMatrixAttr_meta;}
void *igTextureInfo_virtual58(){return igTextureInfo_meta;}
int igTextureFunctionAttr_virtual84(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+28);}
void igTextureFunctionAttr_virtual88(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+36)=value;}
int igTextureFunctionAttr_virtual8C(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+36);}
void *igTextureCubeAttr_virtual58(){return igTextureCubeAttr_meta;}
void igTextureAttr_virtual80(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+20)=value;}
void igTextureAttr_virtual84(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+24)=value;}
void igTextureAttr_virtual88(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+28)=value;}
void igTextureAttr_virtual8C(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+32)=value;}
void igTextureAttr_virtual90(void *object,UnknownGenValue *value){
 if(value) ++value->unknown04;
 UnknownGenValue *old=*reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+0xC);
 if(old) unknownGenDrop(old);
 *reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+0xC)=value;
}
void *igTextureCoordSourceAttr_virtual58(){return igTextureCoordSourceAttr_meta;}
void igTextureCoordSourceAttr_virtual80(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+12)=value;}
void igTextureCoordSourceAttr_virtual84(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+16)=value;}
void *igTextureBindAttr_virtual58(){return igTextureBindAttr_meta;}
void igTextureBindAttr_virtual84(void *object,UnknownGenValue *value){
 if(value) ++value->unknown04;
 UnknownGenValue *old=*reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+0xC);
 if(old) unknownGenDrop(old);
 *reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+0xC)=value;
}
void *igTextureAttr_virtual58(){return igTextureAttr_meta;}
void *igTextureAddressModeAttr_virtual58(){return igTextureAddressModeAttr_meta;}
void igTextureAddressModeAttr_virtual80(void *object,unsigned char value){*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+12)=value;}
void *igTexGenMatrixAttr_virtual58(){return igTexGenMatrixAttr_meta;}
}
#pragma pop
