#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *lbl_80562644;
extern void *lbl_80562658;
extern void *lbl_80562694;
extern void *lbl_805626A0;
extern void *lbl_805626A8;
}
extern "C" {
void *igRenderListAttr_virtual58(){return lbl_80562644;}
void igRenderListAttr_virtual80(void *object,UnknownGenValue *value){
 if(value) ++value->unknown04;
 UnknownGenValue *old=*reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+0x10);
 if(old) unknownGenDrop(old);
 *reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+0x10)=value;
}
void *igRenderDestinationAttr_virtual58(){return lbl_80562658;}
void *igRefVertexBlendMatrixAttr_virtual58(){return lbl_80562694;}
void igRefVertexBlendMatrixAttr_virtual80(void *object,UnknownGenValue *value){
 if(value) ++value->unknown04;
 UnknownGenValue *old=*reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+0xC);
 if(old) unknownGenDrop(old);
 *reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+0xC)=value;
}
void *igProjectionMatrixAttr_virtual58(){return lbl_805626A0;}
void *igPolygonModeAttr_virtual58(){return lbl_805626A8;}
}
#pragma pop
