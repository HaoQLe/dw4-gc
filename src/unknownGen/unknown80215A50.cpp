#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *lbl_80565030;
extern void *lbl_8056506C;
extern void *lbl_805650BC;
extern void *lbl_80565118;
extern void *lbl_805651A8;
extern void *lbl_805651FC;
extern void *lbl_805652D8;
extern void *lbl_80565304;
extern void *lbl_805653BC;
extern void *lbl_8056542C;
extern void *lbl_80565468;
extern void *lbl_805654B4;
}
extern "C" {
void *igCompressedAnimationSequenceQS_virtual58(){return lbl_80565030;}
void *igCompiledGraph_virtual58(){return lbl_8056506C;}
void *fn_80215A60(){return lbl_805650BC;}
void *igCommonTraversal_virtual58(){return lbl_80565118;}
void *igCartoonShaderProcessor_virtual58(){return lbl_805651A8;}
void igCartoonShader_virtual94(void *object,UnknownGenValue *value){
 if(value) ++value->unknown04;
 UnknownGenValue *old=*reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+0x20);
 if(old) unknownGenDrop(old);
 *reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+0x20)=value;
}
void igCartoonShader_virtual98(void *object,UnknownGenValue *value){
 if(value) ++value->unknown04;
 UnknownGenValue *old=*reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+0x24);
 if(old) unknownGenDrop(old);
 *reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+0x24)=value;
}
void igCartoonShader_virtual9C(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+48)=value;}
void igCartoonShader_virtualA0(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+52)=value;}
void *igDOFCamera_virtual58(){return lbl_805651FC;}
int igCamera_virtual68(){return 0;}
void igBumpMapShader_virtual98(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+48)=value;}
void igBumpMapShader_virtual9C(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+52)=value;}
void igBumpMapShader_virtualA0(void *object,UnknownGenValue *value){
 if(value) ++value->unknown04;
 UnknownGenValue *old=*reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+0x24);
 if(old) unknownGenDrop(old);
 *reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+0x24)=value;
}
void *igBillboardProcessor_virtual58(){return lbl_805652D8;}
void *igAttrStackManager_virtual58(){return lbl_80565304;}
void *igAnimationState_virtual58(){return lbl_805653BC;}
void *igAnimationInfo_virtual58(){return lbl_8056542C;}
void *igAnimationDatabase_virtual58(){return lbl_80565468;}
void *igAnimationCombiner_virtual58(){return lbl_805654B4;}
unsigned char igAnimationCombiner_virtual64(void *object){return *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+81);}
int igAnimationCombiner_virtual6C(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+84);}
}
#pragma pop
