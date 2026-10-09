#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_801F3BC8();
extern void *lbl_80564DAC;
extern void *lbl_80564DB4;
extern void *lbl_80564DC8;
extern void *lbl_80564DD8;
extern void *lbl_80564DE4;
extern void *lbl_80564E0C;
extern void *lbl_80564E3C;
extern void *lbl_80564E6C;
extern void *lbl_80564E7C;
extern void *lbl_80564E88;
extern void *lbl_80564EB0;
extern void *lbl_80564EC8;
extern void *lbl_80564ED0;
extern void *lbl_80564EFC;
extern void *lbl_80564F78;
extern void *lbl_80564F84;
extern void *lbl_80564F94;
extern void *lbl_80564FA4;
extern void *lbl_80565020;
}
extern "C" {
void *igLightStateSet_virtual58(){return lbl_80564DAC;}
void *igLightSet_virtual58(){return lbl_80564DB4;}
void *igIntersectTraversal_virtual58(){return lbl_80564E3C;}
void *igInverseKinematicsSource_virtual58(){return lbl_80564DC8;}
void *igInverseKinematicsSolver_virtual58(){return lbl_80564DD8;}
void *igInverseKinematicsJoint_virtual58(){return lbl_80564DE4;}
void *igInverseKinematicsAnimation_virtual58(){return lbl_80564E0C;}
void *igInverseKinematicsAnimation_virtual44(){return fn_801F3BC8();}
void *igInterpretedShaderProcessor_virtual58(){return lbl_80564E6C;}
void *igInterpretedShader_virtual58(){return lbl_80564E7C;}
void *igIniShaderFactory_virtual58(){return lbl_80564E88;}
void *igHeap_virtual58(){return lbl_80564EB0;}
void *igHashedUserInfo_virtual58(){return lbl_80564EC8;}
void *igGroup_virtual58(){return lbl_80564ED0;}
void *fn_802158A4(){return lbl_80564EFC;}
void igCommonTraversal_virtual74(void *object,UnknownGenValue *value){
 if(value) ++value->unknown04;
 UnknownGenValue *old=*reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+0x44);
 if(old) unknownGenDrop(old);
 *reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+0x44)=value;
}
int fn_8021591C(){return 0;}
void *igEnbayaTransformSource_virtual58(){return lbl_80564F78;}
void *igEnbayaContextPool_virtual58(){return lbl_80564F84;}
void *igEnbayaAnimationState_virtual58(){return lbl_80564F94;}
void *igEnbayaAnimationSource_virtual58(){return lbl_80564FA4;}
void igDOFShader_virtual94(){}
void *igCompressedBezierAnimationSequenceQS_virtual58(){return lbl_80565020;}
unsigned char igCompressedAnimationSequenceQS_virtual88(void *object){return *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+56);}
}
#pragma pop
