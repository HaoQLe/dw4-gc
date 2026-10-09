#include <unknownGen.h>
#include <meta/igGamecubeVisualContext.h>
#include <meta/igRenderDestinationAttr.h>
#include <meta/igVisualContext.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *igGamecubeVisualContext_virtualB8(void *,void *);
void *igGamecubeVisualContext_virtualC8(void *);
void igGamecubeVisualContext_virtualD4(void *,void *,void *,void *);
void *igGamecubeVisualContext_virtualD8(void *,void *);
void *igGamecubeVisualContext_virtualDC(void *,void *);
void *igGamecubeVisualContext_virtualE0(void *,void *);
void *igGamecubeVisualContext_virtualE4(void *,void *);
}
struct UnknownGenL800C2490_10 {
 int m10;
 int m14;
 int m18;
 int m1C;
 int m20;
 int m24;
 int m28;
};
extern "C" {
void igRenderDestinationAttr_virtual60(int p0,int p1){
 void *value3;
 void *value4;
 void *value5;
 void *value6;
 void *value7;
 void *value8;
 void *value0;
 void *value1;
 void *value2;
 UnknownGenL800C2490_10 local2;
 void *local1;
 void *local0;
 if(*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+24)){
  value3=igGamecubeVisualContext_virtualC8((void *)p1);
  reinterpret_cast<Meta::igRenderDestinationAttr *>((void *)p0)->_iPrevRDHandle=(int)value3;
  if((int)(int)(void *)reinterpret_cast<Meta::igRenderDestinationAttr *>((void *)p0)->_iRDHandle<0){
   if((int)(int)(void *)(int)reinterpret_cast<Meta::igRenderDestinationAttr *>((void *)p0)->_iCreateMode!=1){
    igGamecubeVisualContext_virtualD4((void *)p1,(void *)reinterpret_cast<Meta::igRenderDestinationAttr *>((void *)p0)->_iPrevRDHandle,&local1,&local0);
    reinterpret_cast<Meta::igRenderDestinationAttr *>((void *)p0)->_iSizeX=(int)local1;
    reinterpret_cast<Meta::igRenderDestinationAttr *>((void *)p0)->_iSizeY=(int)local0;
    value4=igGamecubeVisualContext_virtualD8((void *)p1,(void *)reinterpret_cast<Meta::igRenderDestinationAttr *>((void *)p0)->_iPrevRDHandle);
    reinterpret_cast<Meta::igRenderDestinationAttr *>((void *)p0)->_iColorBitCount=(int)value4;
    value5=igGamecubeVisualContext_virtualDC((void *)p1,(void *)reinterpret_cast<Meta::igRenderDestinationAttr *>((void *)p0)->_iPrevRDHandle);
    reinterpret_cast<Meta::igRenderDestinationAttr *>((void *)p0)->_iAlphaBitCount=(int)value5;
    value6=igGamecubeVisualContext_virtualE0((void *)p1,(void *)reinterpret_cast<Meta::igRenderDestinationAttr *>((void *)p0)->_iPrevRDHandle);
    reinterpret_cast<Meta::igRenderDestinationAttr *>((void *)p0)->_iDepthBitCount=(int)value6;
    value7=igGamecubeVisualContext_virtualE4((void *)p1,(void *)reinterpret_cast<Meta::igRenderDestinationAttr *>((void *)p0)->_iPrevRDHandle);
    reinterpret_cast<Meta::igRenderDestinationAttr *>((void *)p0)->_iStencilBitCount=(int)value7;
   }
   if((int)(int)(void *)(int)reinterpret_cast<Meta::igRenderDestinationAttr *>((void *)p0)->_iCreateMode==2){
    reinterpret_cast<Meta::igRenderDestinationAttr *>((void *)p0)->_iRDHandle=(int)(void *)reinterpret_cast<Meta::igRenderDestinationAttr *>((void *)p0)->_iPrevRDHandle;
   } else {
    local2.m14=(int)(int)(void *)reinterpret_cast<Meta::igRenderDestinationAttr *>((void *)p0)->_iSizeX;
    local2.m18=(int)(int)(void *)reinterpret_cast<Meta::igRenderDestinationAttr *>((void *)p0)->_iSizeY;
    local2.m1C=(int)(int)(void *)reinterpret_cast<Meta::igRenderDestinationAttr *>((void *)p0)->_iColorBitCount;
    local2.m20=(int)(int)(void *)reinterpret_cast<Meta::igRenderDestinationAttr *>((void *)p0)->_iAlphaBitCount;
    local2.m24=(int)(int)(void *)reinterpret_cast<Meta::igRenderDestinationAttr *>((void *)p0)->_iDepthBitCount;
    local2.m28=(int)(int)(void *)reinterpret_cast<Meta::igRenderDestinationAttr *>((void *)p0)->_iStencilBitCount;
    local2.m10=(int)(int)(void *)(int)reinterpret_cast<Meta::igRenderDestinationAttr *>((void *)p0)->_iType;
    value8=igGamecubeVisualContext_virtualB8((void *)p1,&local2);
    reinterpret_cast<Meta::igRenderDestinationAttr *>((void *)p0)->_iRDHandle=(int)value8;
   }
  }
  if((unsigned int)p1!=0){
   value0=(void *)reinterpret_cast<Meta::igGamecubeVisualContext *>((void *)p1)->_refCount;
   reinterpret_cast<Meta::igGamecubeVisualContext *>((void *)p1)->_refCount=(unsigned int)(reinterpret_cast<char *>(value0)+1);
  }
  value1=reinterpret_cast<Meta::igRenderDestinationAttr *>((void *)p0)->_vc;
  if(value1){
   value2=(void *)reinterpret_cast<Meta::igVisualContext *>(value1)->_refCount;
   reinterpret_cast<Meta::igVisualContext *>(value1)->_refCount=(unsigned int)(reinterpret_cast<char *>(value2)+-1);
   if(!((unsigned int)(int)(void *)reinterpret_cast<Meta::igVisualContext *>(value1)->_refCount&0x7FFFFF)){
    fn_80066E1C(value1);
   }
  }
  reinterpret_cast<Meta::igRenderDestinationAttr *>((void *)p0)->_vc=(Meta::igVisualContext *)(void *)p1;
  return;
 } else {
  return;
 }
}
}
#pragma pop
