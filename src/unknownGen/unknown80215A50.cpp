#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *igCompressedAnimationSequenceQS_meta;
extern void *igCompiledGraph_meta;
extern void *igCompileTraversal_meta;
extern void *igCommonTraversal_meta;
extern void *igCartoonShaderProcessor_meta;
extern void *igDOFCamera_meta;
extern void *igBillboardProcessor_meta;
extern void *igAttrStackManager_meta;
extern void *igAnimationState_meta;
extern void *igAnimationInfo_meta;
extern void *igAnimationDatabase_meta;
extern void *igAnimationCombiner_meta;
}
extern "C" {
void *igCompressedAnimationSequenceQS_virtual58(){return igCompressedAnimationSequenceQS_meta;}
void *igCompiledGraph_virtual58(){return igCompiledGraph_meta;}
void *fn_80215A60(){return igCompileTraversal_meta;}
void *igCommonTraversal_virtual58(){return igCommonTraversal_meta;}
void *igCartoonShaderProcessor_virtual58(){return igCartoonShaderProcessor_meta;}
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
void *igDOFCamera_virtual58(){return igDOFCamera_meta;}
int igCamera_virtual68(){return 0;}
void igBumpMapShader_virtual98(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+48)=value;}
void igBumpMapShader_virtual9C(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+52)=value;}
void igBumpMapShader_virtualA0(void *object,UnknownGenValue *value){
 if(value) ++value->unknown04;
 UnknownGenValue *old=*reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+0x24);
 if(old) unknownGenDrop(old);
 *reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+0x24)=value;
}
void *igBillboardProcessor_virtual58(){return igBillboardProcessor_meta;}
void *igAttrStackManager_virtual58(){return igAttrStackManager_meta;}
void *igAnimationState_virtual58(){return igAnimationState_meta;}
void *igAnimationInfo_virtual58(){return igAnimationInfo_meta;}
void *igAnimationDatabase_virtual58(){return igAnimationDatabase_meta;}
void *igAnimationCombiner_virtual58(){return igAnimationCombiner_meta;}
unsigned char igAnimationCombiner_virtual64(void *object){return *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+81);}
int igAnimationCombiner_virtual6C(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+84);}
}
#pragma pop
