#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *igRenderListAttr_meta;
extern void *igRenderDestinationAttr_meta;
extern void *igRefVertexBlendMatrixAttr_meta;
extern void *igProjectionMatrixAttr_meta;
extern void *igPolygonModeAttr_meta;
}
extern "C" {
void *igRenderListAttr_virtual58(){return igRenderListAttr_meta;}
void igRenderListAttr_virtual80(void *object,UnknownGenValue *value){
 if(value) ++value->unknown04;
 UnknownGenValue *old=*reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+0x10);
 if(old) unknownGenDrop(old);
 *reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+0x10)=value;
}
void *igRenderDestinationAttr_virtual58(){return igRenderDestinationAttr_meta;}
void *igRefVertexBlendMatrixAttr_virtual58(){return igRefVertexBlendMatrixAttr_meta;}
void igRefVertexBlendMatrixAttr_virtual80(void *object,UnknownGenValue *value){
 if(value) ++value->unknown04;
 UnknownGenValue *old=*reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+0xC);
 if(old) unknownGenDrop(old);
 *reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+0xC)=value;
}
void *igProjectionMatrixAttr_virtual58(){return igProjectionMatrixAttr_meta;}
void *igPolygonModeAttr_virtual58(){return igPolygonModeAttr_meta;}
}
#pragma pop
