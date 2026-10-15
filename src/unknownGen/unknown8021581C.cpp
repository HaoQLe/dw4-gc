#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_801F3BC8();
extern void *igLightStateSet_meta;
extern void *igLightSet_meta;
extern void *igInverseKinematicsSource_meta;
extern void *igInverseKinematicsSolver_meta;
extern void *igInverseKinematicsJoint_meta;
extern void *igInverseKinematicsAnimation_meta;
extern void *igIntersectTraversal_meta;
extern void *igInterpretedShaderProcessor_meta;
extern void *igInterpretedShader_meta;
extern void *igIniShaderFactory_meta;
extern void *igHeap_meta;
extern void *igHashedUserInfo_meta;
extern void *igGroup_meta;
extern void *igFrustCullTraversal_meta;
extern void *igEnbayaTransformSource_meta;
extern void *igEnbayaContextPool_meta;
extern void *igEnbayaAnimationState_meta;
extern void *igEnbayaAnimationSource_meta;
extern void *igCompressedBezierAnimationSequenceQS_meta;
}
extern "C" {
void *igLightStateSet_virtual58(){return igLightStateSet_meta;}
void *igLightSet_virtual58(){return igLightSet_meta;}
void *igIntersectTraversal_virtual58(){return igIntersectTraversal_meta;}
void *igInverseKinematicsSource_virtual58(){return igInverseKinematicsSource_meta;}
void *igInverseKinematicsSolver_virtual58(){return igInverseKinematicsSolver_meta;}
void *igInverseKinematicsJoint_virtual58(){return igInverseKinematicsJoint_meta;}
void *igInverseKinematicsAnimation_virtual58(){return igInverseKinematicsAnimation_meta;}
void *igInverseKinematicsAnimation_virtual44(){return fn_801F3BC8();}
void *igInterpretedShaderProcessor_virtual58(){return igInterpretedShaderProcessor_meta;}
void *igInterpretedShader_virtual58(){return igInterpretedShader_meta;}
void *igIniShaderFactory_virtual58(){return igIniShaderFactory_meta;}
void *igHeap_virtual58(){return igHeap_meta;}
void *igHashedUserInfo_virtual58(){return igHashedUserInfo_meta;}
void *igGroup_virtual58(){return igGroup_meta;}
void *fn_802158A4(){return igFrustCullTraversal_meta;}
void igCommonTraversal_virtual74(void *object,UnknownGenValue *value){
 if(value) ++value->unknown04;
 UnknownGenValue *old=*reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+0x44);
 if(old) unknownGenDrop(old);
 *reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+0x44)=value;
}
int fn_8021591C(){return 0;}
void *igEnbayaTransformSource_virtual58(){return igEnbayaTransformSource_meta;}
void *igEnbayaContextPool_virtual58(){return igEnbayaContextPool_meta;}
void *igEnbayaAnimationState_virtual58(){return igEnbayaAnimationState_meta;}
void *igEnbayaAnimationSource_virtual58(){return igEnbayaAnimationSource_meta;}
void igDOFShader_virtual94(){}
void *igCompressedBezierAnimationSequenceQS_virtual58(){return igCompressedBezierAnimationSequenceQS_meta;}
unsigned char igCompressedAnimationSequenceQS_virtual88(void *object){return *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+56);}
}
#pragma pop
