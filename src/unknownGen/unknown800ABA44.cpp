#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *OSDisableInterrupts(void *);
void OSRestoreInterrupts(void *);
void __dl__FPv(void *);
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void igVertexShaderBindAttr_registerNow();
void igVertexShaderAttr_registerNow();
void igVertexPipelineModeAttr_registerNow();
void igVertexBlendStateAttr_registerNow();
void igVertexBlendMatrixListAttr_registerNow();
void igVertexBlendMatrixAttrList_registerNow();
void igVertexBlendMatrixAttr_registerNow();
void igVectorConstantAttr_registerNow();
void igTimeAttr_registerNow();
void igTextureUnloadAttr_registerNow();
void igTextureStateAttr_registerNow();
void igTextureMatrixStateAttr_registerNow();
void igTextureMatrixAttrList_registerNow();
void igTextureMatrixAttr_registerNow();
void igTextureInfo_registerNow();
void igTextureFunctionAttr_registerNow();
void igTextureCubeAttr_registerNow();
void igTextureCoordSourceAttr_registerNow();
void igTextureBindAttr_registerNow();
void igTextureAttr_registerNow();
void igImageMipMapList_registerNow();
void igTextureAddressModeAttr_registerNow();
void igTexGenMatrixAttr_registerNow();
void igSubTextureBindAttr_registerNow();
void igStencilStateAttr_registerNow();
void igStencilFunctionAttr_registerNow();
void igSpriteAttr_registerNow();
void igShadeModelAttr_registerNow();
void igSetRenderDestinationAttr_registerNow();
void igScissorTypeAttr_registerNow();
void igScissorAttr_registerNow();
void igSceneAmbientColorAttr_registerNow();
void igRenderListAttr_registerNow();
void igRenderDestinationAttr_registerNow();
void igRefVertexBlendMatrixAttr_registerNow();
void igProjectionMatrixAttr_registerNow();
void igPolygonModeAttr_registerNow();
void igPointSpriteSizeAttr_registerNow();
void igPixelShaderBindAttr_registerNow();
void igPixelShaderAttr_registerNow();
void igPixelPipelineModeAttr_registerNow();
void igParticleAttrList_registerNow();
void igParticleAttr_registerNow();
void igNormalizeNormalsStateAttr_registerNow();
void igMultiPassStateAttr_registerNow();
void igMorphedGeometryAttr_registerNow();
void igVector3MorphData_registerNow();
void igVec3fAlignedList_registerNow();
void igMorphDataList_registerNow();
void igMorphData_registerNow();
void igModelViewMatrixAttrList_registerNow();
void igModelViewMatrixAttr_registerNow();
void igMipMapAttr_registerNow();
void igMatrixOptStateAttr_registerNow();
void igMatrixConstantAttr_registerNow();
void igMaterialModeAttr_registerNow();
void igMaterialAttr_registerNow();
void igMacroTextureRegionAttr_registerNow();
void igLineWidthAttr_registerNow();
void igLightingStateAttr_registerNow();
void igLightStateAttrList_registerNow();
void igLightStateAttr_registerNow();
void igLightList_registerNow();
void igLightAttr_registerNow();
void igGeometrySetAttr_registerNow();
void igGeometryMaskAttr_registerNow();
void igGeometryAttr2_registerNow();
void igGeometryAttr1_5_registerNow();
void igGeometryAttr_registerNow();
void igGenericAttrDefaultManager_registerNow();
void igFogStateAttr_registerNow();
void igFogAttr_registerNow();
void igFloatConstantAttr_registerNow();
void igFileAttrDefaultManager_registerNow();
void igDitherStateAttr_registerNow();
void igDisplayListAttr_registerNow();
void igDestinationAlphaStateAttr_registerNow();
void igDestinationAlphaFunctionAttr_registerNow();
void igDestinationAlphaAttr_registerNow();
void igDepthWriteStateAttr_registerNow();
void igDepthStateAttr_registerNow();
void igDepthFunctionAttr_registerNow();
void igDecalAttr_registerNow();
void igCustomStateCollectionAttr_registerNow();
void igCullFaceAttr_registerNow();
void igCopyRenderDestinationAttr_registerNow();
void igColorScalerStateAttr_registerNow();
void igColorMaskAttr_registerNow();
void igColorAttr_registerNow();
void igClippingStateAttr_registerNow();
void igClearAttr_registerNow();
void igBlendingCorrectionStateAttr_registerNow();
void igBlendingControlStateAttr_registerNow();
void igBlendStateAttr_registerNow();
void igBlendMatrixPaletteAttrList_registerNow();
void igBlendMatrixPaletteAttr_registerNow();
void igBlendMatricesAttr_registerNow();
void igBlendFunctionAttr_registerNow();
void igTextureList_registerNow();
void igGeometryAttrList_registerNow();
void igAttrPool_registerNow();
void igAttrDefaultManager_registerNow();
void igAttrListList_registerNow();
void igNonRefCountedAttrList_registerNow();
void igAttrList_registerNow();
void igAttr_registerNow();
void igAlphaStateAttr_registerNow();
void igAlphaFunctionAttr_registerNow();
void igTextureSwapTableAttr_registerNow();
void igTextureSwapAttr_registerNow();
void igTextureStageConstantColorSelectAttr_registerNow();
void igTextureStageConstantAlphaSelectAttr_registerNow();
void igTextureEnvironmentColorAttr_registerNow();
void igTextureConstantAttr_registerNow();
void *fn_800CE788();
void igAttrDefaultManager_register();
void igAttr_register();
void igViewportAttr_fieldInit();
extern char igVisualContextAttrDefaultManager_className[];
extern char igVisualAttribute_className[];
extern char igViewportAttr_className[];
extern char igVisualContextAttrDefaultManager_vtable[];
extern char igViewportAttr_vtable[];
extern char lbl_8047D514[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055DE60[8];
extern char lbl_8055DE68[4];
extern char lbl_8055DE6C[4];
extern char lbl_8055DE70[4];
extern char lbl_8055DE74[4];
extern char lbl_8055DE78[8];
extern void *lbl_805621F4;
extern char lbl_80562400[1];
extern char lbl_80562401[1];
extern void *igVisualContextAttrDefaultManager_meta;
extern void *igVisualAttribute_meta;
extern void *igViewportAttr_meta;
extern void *igAttrDefaultManager_meta;
extern void *igAttr_meta;
void fn_800ABC8C();
void *igVisualContextAttrDefaultManager_getMeta();
void *igVisualContextAttrDefaultManager_vtableRead();
void igVisualContextAttrDefaultManager_registerNow();
void igVisualContextAttrDefaultManager_register();
void *igVisualContextAttrDefaultManager_getMetaCall();
void *fn_800ABEF8();
void igVisualContextAttrDefaultManager_fieldInit();
void *igVisualAttribute_getMeta();
void igVisualAttribute_registerNow();
void igVisualAttribute_register();
void *igVisualAttribute_getMetaCall();
void *fn_800AC0B8();
void *igViewportAttr_getMeta();
void *igViewportAttr_vtableRead();
void igViewportAttr_registerNow();
void igViewportAttr_register();
void *igViewportAttr_getMetaCall();
void *fn_800AC294();
}
struct UnknownGenRoot800ABD34 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800ABD34(){igObject_construct(this);}
};
struct UnknownGenObject800ABD34 : UnknownGenRoot800ABD34 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject800ABD34(){unknown00=igVisualContextAttrDefaultManager_vtable;}
};
struct UnknownGenRoot800AC138 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800AC138(){igObject_construct(this);}
};
struct UnknownGenObject800AC138 : UnknownGenRoot800AC138 {
 char unknown04[24];
 UnknownGenRefMember unknown1C;
 char unknown20[16];
 inline ~UnknownGenObject800AC138(){unknown00=igViewportAttr_vtable;}
};
extern "C" {
void fn_800ABA44(int p0){
 OSRestoreInterrupts(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0));
}
void fn_800ABA68(int p0){
 void *value0=OSDisableInterrupts((void *)p0);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=value0;
}
void fn_800ABA98(){}
void fn_800ABA9C(){
 igVisualContextAttrDefaultManager_registerNow();
 igVisualAttribute_registerNow();
 igViewportAttr_registerNow();
 igVertexShaderBindAttr_registerNow();
 igVertexShaderAttr_registerNow();
 igVertexPipelineModeAttr_registerNow();
 igVertexBlendStateAttr_registerNow();
 igVertexBlendMatrixListAttr_registerNow();
 igVertexBlendMatrixAttr_registerNow();
 igVertexBlendMatrixAttrList_registerNow();
 igVectorConstantAttr_registerNow();
 igTimeAttr_registerNow();
 igTextureUnloadAttr_registerNow();
 igTextureStateAttr_registerNow();
 igTextureMatrixStateAttr_registerNow();
 igTextureMatrixAttr_registerNow();
 igTextureMatrixAttrList_registerNow();
 igTextureInfo_registerNow();
 igTextureFunctionAttr_registerNow();
 igTextureCubeAttr_registerNow();
 igTextureCoordSourceAttr_registerNow();
 igTextureBindAttr_registerNow();
 igImageMipMapList_registerNow();
 igTextureAttr_registerNow();
 igTextureAddressModeAttr_registerNow();
 igTexGenMatrixAttr_registerNow();
 igSubTextureBindAttr_registerNow();
 igStencilStateAttr_registerNow();
 igStencilFunctionAttr_registerNow();
 igSpriteAttr_registerNow();
 igShadeModelAttr_registerNow();
 igSetRenderDestinationAttr_registerNow();
 igScissorTypeAttr_registerNow();
 igScissorAttr_registerNow();
 igSceneAmbientColorAttr_registerNow();
 igRenderListAttr_registerNow();
 igRenderDestinationAttr_registerNow();
 igRefVertexBlendMatrixAttr_registerNow();
 igProjectionMatrixAttr_registerNow();
 igPolygonModeAttr_registerNow();
 igPointSpriteSizeAttr_registerNow();
 igPixelShaderBindAttr_registerNow();
 igPixelShaderAttr_registerNow();
 igPixelPipelineModeAttr_registerNow();
 igParticleAttr_registerNow();
 igParticleAttrList_registerNow();
 igNormalizeNormalsStateAttr_registerNow();
 igMultiPassStateAttr_registerNow();
 igMorphData_registerNow();
 igMorphDataList_registerNow();
 igVec3fAlignedList_registerNow();
 igVector3MorphData_registerNow();
 igMorphedGeometryAttr_registerNow();
 igModelViewMatrixAttr_registerNow();
 igModelViewMatrixAttrList_registerNow();
 igMipMapAttr_registerNow();
 igMatrixOptStateAttr_registerNow();
 igMatrixConstantAttr_registerNow();
 igMaterialModeAttr_registerNow();
 igMaterialAttr_registerNow();
 igMacroTextureRegionAttr_registerNow();
 igLineWidthAttr_registerNow();
 igLightingStateAttr_registerNow();
 igLightStateAttr_registerNow();
 igLightStateAttrList_registerNow();
 igLightAttr_registerNow();
 igLightList_registerNow();
 igGeometrySetAttr_registerNow();
 igGeometryMaskAttr_registerNow();
 igGeometryAttr2_registerNow();
 igGeometryAttr1_5_registerNow();
 igGeometryAttr_registerNow();
 igGenericAttrDefaultManager_registerNow();
 igFogStateAttr_registerNow();
 igFogAttr_registerNow();
 igFloatConstantAttr_registerNow();
 igFileAttrDefaultManager_registerNow();
 igDitherStateAttr_registerNow();
 igDisplayListAttr_registerNow();
 igDestinationAlphaStateAttr_registerNow();
 igDestinationAlphaFunctionAttr_registerNow();
 igDestinationAlphaAttr_registerNow();
 igDepthWriteStateAttr_registerNow();
 igDepthStateAttr_registerNow();
 igDepthFunctionAttr_registerNow();
 igDecalAttr_registerNow();
 igCustomStateCollectionAttr_registerNow();
 igCullFaceAttr_registerNow();
 igCopyRenderDestinationAttr_registerNow();
 igColorScalerStateAttr_registerNow();
 igColorMaskAttr_registerNow();
 igColorAttr_registerNow();
 igClippingStateAttr_registerNow();
 igClearAttr_registerNow();
 igBlendingCorrectionStateAttr_registerNow();
 igBlendingControlStateAttr_registerNow();
 igBlendStateAttr_registerNow();
 igBlendMatrixPaletteAttr_registerNow();
 igBlendMatrixPaletteAttrList_registerNow();
 igBlendMatricesAttr_registerNow();
 igBlendFunctionAttr_registerNow();
 igGeometryAttrList_registerNow();
 igTextureList_registerNow();
 igAttrPool_registerNow();
 igAttrDefaultManager_registerNow();
 igAttr_registerNow();
 igAttrList_registerNow();
 igNonRefCountedAttrList_registerNow();
 igAttrListList_registerNow();
 igAlphaStateAttr_registerNow();
 igAlphaFunctionAttr_registerNow();
 igTextureSwapTableAttr_registerNow();
 igTextureSwapAttr_registerNow();
 igTextureStageConstantColorSelectAttr_registerNow();
 igTextureStageConstantAlphaSelectAttr_registerNow();
 igTextureEnvironmentColorAttr_registerNow();
 igTextureConstantAttr_registerNow();
}
void fn_800ABC8C(){
 if((int)*reinterpret_cast<signed char *>((lbl_80562401+0))==0){
  *reinterpret_cast<unsigned char *>((lbl_80562400+0))=0;
  *reinterpret_cast<unsigned char *>((lbl_80562401+0))=1;
 }
 if((void *)(int)*reinterpret_cast<unsigned char *>((lbl_80562400+0))){
  return;
 }
 *reinterpret_cast<unsigned char *>((lbl_80562400+0))=1;
}
void *igVisualContextAttrDefaultManager_create(void *object){
 igVisualContextAttrDefaultManager_registerNow();
 return meta_createInstance(igVisualContextAttrDefaultManager_meta,object);
}
void *igVisualContextAttrDefaultManager_getMeta(){
 if(!igVisualContextAttrDefaultManager_meta || !(reinterpret_cast<unsigned int *>(igVisualContextAttrDefaultManager_meta)[0x24/4]&4)) igVisualContextAttrDefaultManager_registerNow();
 return igVisualContextAttrDefaultManager_meta;
}
void *igVisualContextAttrDefaultManager_vtableRead(){
 UnknownGenObject800ABD34 object;
 object.unknown00=lbl_8047D514;
 object.unknown00=igVisualContextAttrDefaultManager_vtable;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
UnknownGenHolder *dtor_800ABDC8(UnknownGenHolder *object,short flags){
 if(object){
  UnknownGenValue *value=object->unknown00;
  if(value){
   --value->unknown04;
   if(!(reinterpret_cast<volatile unsigned int *>(value)[1]&0x7FFFFF)) fn_80066E1C(value);
  }
  if(flags>0) __dl__FPv(object);
 }
 return object;
}
void igVisualContextAttrDefaultManager_registerNow(){
 meta_registerNow((int)igVisualContextAttrDefaultManager_register);
}
void igVisualContextAttrDefaultManager_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igVisualContextAttrDefaultManager_meta,(int)igAttrDefaultManager_register,(int)fn_800ABEF8,(int)igVisualContextAttrDefaultManager_getMetaCall,(int)igVisualContextAttrDefaultManager_className,12,(int)igVisualContextAttrDefaultManager_vtableRead,(int)igVisualContextAttrDefaultManager_fieldInit,0,(int)lbl_8055DE60);
}
void *igVisualContextAttrDefaultManager_getMetaCall(){return igVisualContextAttrDefaultManager_getMeta();}
void *fn_800ABEF8(){return igAttrDefaultManager_meta;}
void igVisualContextAttrDefaultManager_fieldInit(){
 void *value0=igVisualContextAttrDefaultManager_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_8055DE68,1);
 void *value2=meta_field(value0,value1);
 void *value3=fn_800CE788();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+38)=0;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+40)=1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+39)=1;
 meta_setupFields(value0,lbl_8055DE6C,lbl_8055DE70,lbl_8055DE74,value1);
}
void *fn_800ABF94(){
 if(!igVisualAttribute_meta) igVisualAttribute_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igVisualAttribute_meta;
}
void *igVisualAttribute_getMeta(){
 if(!igVisualAttribute_meta || !(reinterpret_cast<unsigned int *>(igVisualAttribute_meta)[0x24/4]&4)) igVisualAttribute_registerNow();
 return igVisualAttribute_meta;
}
void igVisualAttribute_registerNow(){
 meta_registerNow((int)igVisualAttribute_register);
}
void igVisualAttribute_register(){
 fn_800ABC8C();
 meta_registerClass(1,(int)&igVisualAttribute_meta,(int)igAttr_register,(int)fn_800AC0B8,(int)igVisualAttribute_getMetaCall,(int)igVisualAttribute_className,12,0,0,0,0);
}
void *igVisualAttribute_getMetaCall(){return igVisualAttribute_getMeta();}
void *fn_800AC0B8(){return igAttr_meta;}
void *fn_800AC0C0(){
 if(!igViewportAttr_meta) igViewportAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igViewportAttr_meta;
}
void *igViewportAttr_getMeta(){
 if(!igViewportAttr_meta || !(reinterpret_cast<unsigned int *>(igViewportAttr_meta)[0x24/4]&4)) igViewportAttr_registerNow();
 return igViewportAttr_meta;
}
void *igViewportAttr_vtableRead(){
 UnknownGenObject800AC138 object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igViewportAttr_vtable;
 object.unknown1C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igViewportAttr_registerNow(){
 meta_registerNow((int)igViewportAttr_register);
}
void igViewportAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igViewportAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igViewportAttr_getMetaCall,(int)igViewportAttr_className,40,(int)igViewportAttr_vtableRead,(int)igViewportAttr_fieldInit,0,(int)lbl_8055DE78);
}
void *igViewportAttr_getMetaCall(){return igViewportAttr_getMeta();}
void *fn_800AC294(){return igVisualAttribute_meta;}
}
#pragma pop
