#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *lbl_8055E7EC;
extern void *lbl_805624B8;
extern void *lbl_805624C0;
extern void *lbl_805624CC;
extern void *lbl_805624D8;
extern void *lbl_805624E8;
extern void *lbl_805624FC;
extern void *lbl_80562528;
extern void *lbl_80562538;
extern void *lbl_80562548;
extern void *lbl_80562554;
extern void *lbl_80562598;
extern void *lbl_805625A4;
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
void *igTimeAttr_virtual58(){return lbl_805624B8;}
void *igTextureUnloadAttr_virtual58(){return lbl_805624C0;}
void igTextureUnloadAttr_virtual80(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+12)=value;}
void *igTextureStateAttr_virtual58(){return lbl_805624CC;}
void *igTextureMatrixStateAttr_virtual58(){return lbl_805624D8;}
void *igTextureMatrixAttr_virtual58(){return lbl_805624E8;}
void *igTextureInfo_virtual58(){return lbl_805624FC;}
int igTextureFunctionAttr_virtual84(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+28);}
void igTextureFunctionAttr_virtual88(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+36)=value;}
int igTextureFunctionAttr_virtual8C(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+36);}
void *igTextureCubeAttr_virtual58(){return lbl_80562528;}
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
void *igTextureCoordSourceAttr_virtual58(){return lbl_80562538;}
void igTextureCoordSourceAttr_virtual80(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+12)=value;}
void igTextureCoordSourceAttr_virtual84(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+16)=value;}
void *igTextureBindAttr_virtual58(){return lbl_80562548;}
void igTextureBindAttr_virtual84(void *object,UnknownGenValue *value){
 if(value) ++value->unknown04;
 UnknownGenValue *old=*reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+0xC);
 if(old) unknownGenDrop(old);
 *reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+0xC)=value;
}
void *igTextureAttr_virtual58(){return lbl_80562554;}
void *igTextureAddressModeAttr_virtual58(){return lbl_80562598;}
void igTextureAddressModeAttr_virtual80(void *object,unsigned char value){*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+12)=value;}
void *igTexGenMatrixAttr_virtual58(){return lbl_805625A4;}
}
#pragma pop
