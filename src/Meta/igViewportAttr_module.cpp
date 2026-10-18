// Written by tools/alchemymeta/poolsrc.py: units whose code addresses the data below from its start.
#include <meta/register.h>
#include <meta/igFloatMetaField.h>
#include <meta/igIntMetaField.h>
#include <meta/igObjectRefMetaField.h>
#include <unknownGen.h>
#include <meta/igStringMetaField.h>
#include <meta/igEnumMetaField.h>
#include <meta/igBoolMetaField.h>
#include <meta/igMatrix44fMetaField.h>
#include <meta/igUnsignedShortMetaField.h>
#include <meta/igLongMetaField.h>
#include <meta/igShortMetaField.h>
#include <meta/igUnsignedCharMetaField.h>
#include <meta/igObjectRefArrayMetaField.h>
#include <meta/igRawRefMetaField.h>
#include <meta/igUnsignedIntMetaField.h>
#include <meta/igVec4fMetaField.h>
#include <meta/igVec3fMetaField.h>
#include <meta/igUnsignedLongMetaField.h>
#include <meta/igDoubleMetaField.h>
#include <meta/igMemoryRefMetaField.h>
#include <meta/igCharArrayMetaField.h>
#include <meta/igCharMetaField.h>

// The unit's data.
extern "C" {
void fn_80022A90();
void fn_800251EC();
void fn_800259A8();
void fn_800274EC();
void fn_8002879C();
void fn_8002AC34();
void fn_8002E1AC();
void fn_80031378();
void fn_80037B1C();
void fn_800385E0();
void igAttrListList_arkRegister();
void igCharArrayMetaField_create();
void igDoubleMetaField_create();
void igFloatList_arkRegister();
void igFloatMetaField_create();
void igGeometryAttrList_arkRegister();
void igGeometryAttr_arkRegister();
void igGfxShaderConstantList_arkRegister();
void igGfxShaderDefineList_arkRegister();
void igImageMipMapList_arkRegister();
void igImage_arkRegister();
void igIndexArray_arkRegister();
void igLightAttr_arkRegister();
void igLongMetaField_create();
void igMatrix44fMetaField_create();
void igMetaObjectList_arkRegister();
void igMorphDataList_arkRegister();
void igObjectRefArrayMetaField_create();
void igObject_arkRegister();
void igPointerList_arkRegister();
void igPrimLengthArray_arkRegister();
void igRenderDestinationAttr_arkRegister();
void igTextureAttr_arkRegister();
void igTextureSamplerSourceList_arkRegister();
void igTextureUnloadAttr_arkRegister();
void igTrackedElementList_arkRegister();
void igUnsignedCharMetaField_create();
void igUnsignedIntList_arkRegister();
void igVec3fAlignedList_arkRegister();
void igVec3fListList_arkRegister();
void igVec3fList_arkRegister();
void igVec3fMetaField_create();
void igVec4fMetaField_create();
void igVertexArray2_arkRegister();
void igVertexArray_arkRegister();
void igVertexDataList_arkRegister();
void igVisualContext_arkRegister();
extern char lbl_8055DE80[3];
extern char lbl_8055DE84[3];
extern char lbl_8055DE88[3];
extern char lbl_8055DE8C[3];
extern char lbl_8055DE90[7];
extern char lbl_8055DE98[6];
extern char lbl_8055DEC4[6];
extern char lbl_8055DF04[3];
extern char lbl_8055DF30[8];
extern char lbl_8055DF54[6];
extern char lbl_8055DFF0[6];
extern char lbl_8055DFF8[6];
extern char lbl_8055E000[6];
extern char lbl_8055E010[8];
extern char lbl_8055E020[8];
extern char lbl_8055E058[8];
extern char lbl_8055E060[7];
extern char lbl_8055E068[7];
extern char lbl_8055E070[7];
extern char lbl_8055E078[8];
extern char lbl_8055E080[7];
extern char lbl_8055E088[8];
extern char lbl_8055E090[4];
extern char lbl_8055E094[4];
extern char lbl_8055E100[6];
extern char lbl_8055E108[6];
extern char lbl_8055E110[6];
extern char lbl_8055E118[6];
extern char lbl_8055E138[8];
extern char lbl_8055E140[6];
extern char lbl_8055E160[8];
extern char lbl_8055E1B0[5];
extern char lbl_8055E1BC[7];
extern char lbl_8055E1E0[8];
extern char lbl_8055E210[6];
extern char lbl_8055E218[7];
extern char lbl_8055E220[8];
extern char lbl_8055E228[8];
extern char lbl_8055E2B8[7];
extern char lbl_8055E2C0[8];
extern char lbl_8055E32C[6];
extern char lbl_8055E334[7];
extern char lbl_8055E3CC[7];
extern char lbl_8055E404[7];
extern char lbl_8055E41C[8];
extern char lbl_8055E460[6];
extern char lbl_8055E468[6];
extern char lbl_8055E484[8];
extern char lbl_8055E518[7];
extern char lbl_8055E5A0[8];
extern char lbl_8055E5A8[7];
extern char lbl_8055E5B0[7];
extern char lbl_8055E5D8[5];
extern char lbl_8055E5E0[7];
extern char lbl_8055E5E8[6];
extern char lbl_8055E620[7];
extern char lbl_8055E628[7];
extern char lbl_8055E630[8];
extern char lbl_8055E678[5];
extern char lbl_8055E680[5];
extern char lbl_8055E688[4];
extern char lbl_8055E68C[8];
extern char lbl_8055E694[8];
extern char lbl_8055E69C[8];
extern char lbl_8055E6A4[8];
extern char lbl_80562414[4];
extern char lbl_80562418[4];
extern char lbl_8056241C[4];
extern char lbl_80562420[4];
extern char lbl_80562424[4];
extern char lbl_80562428[4];
extern char lbl_8056242C[4];
extern char lbl_8056243C[4];
extern char lbl_80562440[4];
extern char lbl_80562444[4];
extern char lbl_80562448[4];
extern char lbl_8056244C[4];
extern char lbl_80562450[4];
extern char lbl_80562454[4];
extern char lbl_80562458[4];
extern char lbl_8056245C[4];
extern char lbl_80562460[4];
extern char lbl_80562464[4];
extern char lbl_80562468[4];
extern char lbl_80562480[4];
extern char lbl_80562484[4];
extern char lbl_80562488[4];
extern char lbl_8056248C[4];
extern char lbl_80562490[4];
extern char lbl_80562494[4];
extern char lbl_80562498[4];
extern char lbl_805624EC[4];
extern char lbl_805624F0[4];
extern char lbl_805624F4[4];
extern char lbl_805624F8[4];
extern char lbl_80562508[4];
extern char lbl_8056250C[4];
extern char lbl_80562510[4];
extern char lbl_80562514[4];
extern char lbl_80562518[4];
extern char lbl_8056251C[4];
extern char lbl_80562520[4];
extern char lbl_8056252C[4];
extern char lbl_80562530[4];
extern char lbl_80562534[4];
extern char lbl_8056253C[4];
extern char lbl_80562540[4];
extern char lbl_80562544[4];
extern char lbl_80562558[4];
extern char lbl_8056255C[4];
extern char lbl_80562560[4];
extern char lbl_80562564[4];
extern char lbl_80562568[4];
extern char lbl_8056256C[4];
extern char lbl_80562570[4];
extern char lbl_80562574[4];
extern char lbl_80562578[4];
extern char lbl_8056257C[4];
extern char lbl_80562580[4];
extern char lbl_80562584[4];
extern char lbl_80562588[4];
extern char lbl_8056258C[4];
extern char lbl_80562590[4];
extern char lbl_805625B4[4];
extern char lbl_805625B8[4];
extern char lbl_805625BC[4];
extern char lbl_805625C0[4];
extern char lbl_805625C4[4];
extern char lbl_805625C8[4];
extern char lbl_805625D8[4];
extern char lbl_805625DC[4];
extern char lbl_805625E0[4];
extern char lbl_805625E4[4];
extern char lbl_805625E8[4];
extern char lbl_805625EC[4];
extern char lbl_805625F0[4];
extern char lbl_805625F8[4];
extern char lbl_805625FC[4];
extern char lbl_80562600[4];
extern char lbl_80562604[4];
extern char lbl_80562608[4];
extern char lbl_80562628[4];
extern char lbl_8056262C[4];
extern char lbl_80562630[4];
extern char lbl_80562634[4];
extern char lbl_80562638[4];
extern char lbl_8056265C[4];
extern char lbl_80562660[4];
extern char lbl_80562664[4];
extern char lbl_80562668[4];
extern char lbl_8056266C[4];
extern char lbl_80562670[4];
extern char lbl_80562674[4];
extern char lbl_80562678[4];
extern char lbl_8056267C[4];
extern char lbl_80562680[4];
extern char lbl_80562684[4];
extern char lbl_80562688[4];
extern char lbl_8056268C[4];
extern char lbl_80562690[4];
extern char lbl_805626C4[4];
extern char lbl_805626C8[4];
extern char lbl_805626CC[4];
extern char lbl_805626D0[4];
extern char lbl_805626D4[4];
extern char lbl_805626D8[4];
extern char lbl_805626DC[4];
extern char lbl_805626E0[4];
extern char lbl_805626E4[4];
extern char lbl_805626E8[4];
extern char lbl_805626FC[4];
extern char lbl_80562700[4];
extern char lbl_80562704[4];
extern char lbl_80562708[4];
extern char lbl_8056270C[4];
extern char lbl_80562710[4];
extern char lbl_80562714[4];
extern char lbl_80562738[4];
extern char lbl_8056273C[4];
extern char lbl_80562740[4];
extern char lbl_80562744[4];
extern char lbl_80562748[4];
extern char lbl_8056274C[4];
extern char lbl_80562750[4];
extern char lbl_80562754[4];
extern char lbl_80562758[4];
extern char lbl_805627A0[4];
extern char lbl_805627A4[4];
extern char lbl_805627A8[4];
extern char lbl_805627AC[4];
extern char lbl_805627B0[4];
extern char lbl_805627B4[4];
extern char lbl_805627BC[4];
extern char lbl_805627C0[4];
extern char lbl_805627C4[4];
extern char lbl_805627C8[4];
extern char lbl_805627E4[4];
extern char lbl_805627E8[4];
extern char lbl_805627EC[4];
extern char lbl_805627F8[4];
extern char lbl_805627FC[4];
extern char lbl_80562800[4];
extern char lbl_80562804[4];
extern char lbl_80562808[4];
extern char lbl_8056280C[4];
extern char lbl_80562810[4];
extern char lbl_80562814[4];
extern char lbl_80562818[4];
extern char lbl_8056281C[4];
extern char lbl_80562820[4];
extern char lbl_80562824[4];
extern char lbl_80562828[4];
extern char lbl_8056282C[4];
extern char lbl_80562830[4];
extern char lbl_80562834[4];
extern char lbl_80562840[4];
extern char lbl_80562844[4];
extern char lbl_80562848[4];
extern char lbl_8056284C[4];
extern char lbl_80562850[4];
extern char lbl_80562860[4];
extern char lbl_80562864[4];
extern char lbl_80562868[4];
extern char lbl_8056286C[4];
extern char lbl_80562870[4];
extern char lbl_80562874[4];
extern char lbl_80562878[4];
extern char lbl_8056287C[4];
extern char lbl_8056288C[4];
extern char lbl_80562890[4];
extern char lbl_80562894[4];
extern char lbl_80562898[4];
extern char lbl_8056289C[4];
extern char lbl_805628A0[4];
extern char lbl_805628A4[4];
extern char lbl_805628A8[4];
extern char lbl_805628AC[4];
extern char lbl_805628C0[4];
extern char lbl_805628C4[4];
extern char lbl_805628C8[4];
extern char lbl_805628CC[4];
extern char lbl_805628D0[4];
extern char lbl_8056294C[4];
extern char lbl_80562950[4];
extern char lbl_80562954[4];
extern char lbl_80562958[4];
extern char lbl_8056295C[4];
extern char lbl_80562960[4];
extern char lbl_80562964[4];
extern char lbl_80562968[4];
extern char lbl_8056296C[4];
extern char lbl_80562970[4];
extern char lbl_80562980[4];
extern char lbl_80562984[4];
extern char lbl_80562988[4];
extern char lbl_8056298C[4];
extern char lbl_80562990[4];
extern char lbl_805629AC[4];
extern char lbl_805629B0[4];
extern char lbl_805629B4[4];
extern char lbl_805629B8[4];
extern char lbl_805629BC[4];
extern char lbl_805629C0[4];
extern char lbl_805629C4[4];
extern char lbl_805629E8[4];
extern char lbl_805629EC[4];
extern char lbl_805629F0[4];
extern char lbl_805629F4[4];
extern char lbl_805629FC[4];
extern char lbl_80562A00[4];
extern char lbl_80562A04[4];
extern char lbl_80562A14[4];
extern char lbl_80562A18[4];
extern char lbl_80562A1C[4];
extern char lbl_80562A20[4];
extern char lbl_80562A24[4];
extern char lbl_80562A28[4];
extern char lbl_80562A2C[4];
extern char lbl_80562A30[4];
extern char lbl_80562A34[4];
extern char lbl_80562A38[4];
extern char lbl_80562A3C[4];
extern char lbl_80562A4C[4];
extern char lbl_80562A50[4];
extern char lbl_80562A54[4];
extern char lbl_80562A8C[4];
extern char lbl_80562A90[4];
extern char lbl_80562A94[4];
extern char lbl_80562A98[4];
extern char lbl_80562AA0[4];
extern char lbl_80562AA4[4];
extern char lbl_80562AA8[4];
char igVisualContextAttrDefaultManager_className[] = "igVisualContextAttrDefaultManager";
char lbl_80477D2C[] = "_visualContext";
char igVisualAttribute_className[] = "igVisualAttribute";
char igViewportAttr_className[] = "igViewportAttr";
void *igViewportAttr_fieldTypes[7] = {(void *)fn_8002E1AC, (void *)fn_8002E1AC, (void *)fn_8002E1AC, (void *)fn_8002E1AC, (void *)fn_8002879C, (void *)igFloatMetaField_create, (void *)igFloatMetaField_create};
char lbl_80477D7C[] = "_scissorExt";
void *igViewportAttr_fieldNames[7] = {(void *)lbl_8055DE80, (void *)lbl_8055DE84, (void *)lbl_8055DE88, (void *)lbl_8055DE8C, (void *)lbl_80477D7C, (void *)lbl_8055DE90, (void *)lbl_8055DE98};
void *igViewportAttr_fieldStorage[7] = {(void *)lbl_80562414, (void *)lbl_80562418, (void *)lbl_8056241C, (void *)lbl_80562420, (void *)lbl_80562424, (void *)lbl_80562428, (void *)lbl_8056242C};
void *igViewportAttr_fieldOffsets[7] = {(void *)0xC, (void *)0x10, (void *)0x14, (void *)0x18, (void *)0x1C, (void *)0x20, (void *)0x24};
char igVertexShaderBindAttr_className[] = "igVertexShaderBindAttr";
char lbl_80477DF4[] = "_vertexShader";
void *igVertexShaderAttr_dependencies[7] = {(void *)igUnsignedIntList_arkRegister, (void *)igTrackedElementList_arkRegister, (void *)igGfxShaderConstantList_arkRegister, (void *)igVertexDataList_arkRegister, (void *)igGfxShaderDefineList_arkRegister, (void *)igVisualContext_arkRegister, 0};
char igVertexShaderAttr_className[] = "igVertexShaderAttr";
void *igVertexShaderAttr_fieldTypes[12] = {(void *)fn_8002879C, (void *)fn_800251EC, (void *)fn_800251EC, (void *)fn_800251EC, (void *)fn_8002879C, (void *)fn_8002E1AC, (void *)fn_80022A90, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C};
char lbl_80477E64[] = "_binaryDefinition";
char lbl_80477E78[] = "_textDefinition";
char lbl_80477E88[] = "_entryPoint";
char lbl_80477E94[] = "_profile";
char lbl_80477EA0[] = "_dxDeclaration";
char lbl_80477EB0[] = "_vertexShaderHandle";
char lbl_80477EC4[] = "_usageFlags";
char lbl_80477ED0[] = "_trackedElements";
char lbl_80477EE4[] = "_stateList";
char lbl_80477EF0[] = "_inputList";
char lbl_80477EFC[] = "_defineList";
void *igVertexShaderAttr_fieldNames[12] = {(void *)lbl_80477E64, (void *)lbl_80477E78, (void *)lbl_80477E88, (void *)lbl_80477E94, (void *)lbl_80477EA0, (void *)lbl_80477EB0, (void *)lbl_80477EC4, (void *)lbl_80477ED0, (void *)lbl_80477EE4, (void *)lbl_80477EF0, (void *)lbl_80477EFC, (void *)lbl_80477D2C};
void *igVertexShaderAttr_fieldStorage[12] = {(void *)lbl_8056243C, (void *)lbl_80562440, (void *)lbl_80562444, (void *)lbl_80562448, (void *)lbl_8056244C, (void *)lbl_80562450, (void *)lbl_80562454, (void *)lbl_80562458, (void *)lbl_8056245C, (void *)lbl_80562460, (void *)lbl_80562464, (void *)lbl_80562468};
void *igVertexShaderAttr_fieldOffsets[12] = {(void *)0xC, (void *)0x10, (void *)0x14, (void *)0x18, (void *)0x1C, (void *)0x20, (void *)0x24, (void *)0x28, (void *)0x2C, (void *)0x30, (void *)0x34, (void *)0x38};
char igVertexPipelineModeAttr_className[] = "igVertexPipelineModeAttr";
char igVertexBlendStateAttr_className[] = "igVertexBlendStateAttr";
char lbl_80477FCC[] = "_enabled";
char igVertexBlendMatrixListAttr_className[] = "igVertexBlendMatrixListAttr";
void *igVertexBlendMatrixListAttr_fieldTypes[7] = {(void *)fn_8002879C, (void *)igMatrix44fMetaField_create, (void *)igMatrix44fMetaField_create, (void *)fn_800274EC, (void *)fn_800385E0, (void *)fn_800385E0, (void *)fn_8002E1AC};
char lbl_80478010[] = "_matrixList";
char lbl_8047801C[] = "_skeletonTransform";
char lbl_80478030[] = "_skeletonInverseTransform";
char lbl_8047804C[] = "_matrixCache";
char lbl_8047805C[] = "_isSkeletonTransformIdentity";
char lbl_8047807C[] = "_isSkeletonTransformSet";
char lbl_80478094[] = "_currentMatrixCount";
void *igVertexBlendMatrixListAttr_fieldNames[7] = {(void *)lbl_80478010, (void *)lbl_8047801C, (void *)lbl_80478030, (void *)lbl_8047804C, (void *)lbl_8047805C, (void *)lbl_8047807C, (void *)lbl_80478094};
void *igVertexBlendMatrixListAttr_fieldStorage[7] = {(void *)lbl_80562480, (void *)lbl_80562484, (void *)lbl_80562488, (void *)lbl_8056248C, (void *)lbl_80562490, (void *)lbl_80562494, (void *)lbl_80562498};
void *igVertexBlendMatrixListAttr_fieldOffsets[7] = {(void *)0x18, (void *)0x1C, (void *)0x5C, (void *)0x10, (void *)0xC, (void *)0xD, (void *)0x14};
char igVertexBlendMatrixAttrList_className[] = "igVertexBlendMatrixAttrList";
char igVertexBlendMatrixAttr_className[] = "igVertexBlendMatrixAttr";
char lbl_80478130[] = "_blendMatID";
char igVectorConstantAttr_className[] = "igVectorConstantAttr";
char igTimeAttr_className[] = "igTimeAttr";
char igTextureUnloadAttr_className[] = "igTextureUnloadAttr";
char lbl_80478174[] = "_texture";
char igTextureStateAttr_className[] = "igTextureStateAttr";
char igTextureMatrixStateAttr_className[] = "igTextureMatrixStateAttr";
char igTextureMatrixAttrList_className[] = "igTextureMatrixAttrList";
char igTextureMatrixAttr_className[] = "igTextureMatrixAttr";
void *igTextureMatrixAttr_fieldTypes[4] = {(void *)igMatrix44fMetaField_create, (void *)fn_8002E1AC, (void *)fn_800259A8, (void *)fn_800385E0};
char lbl_804781EC[] = "_outputElementCount";
char lbl_80478200[] = "_isProjective";
void *igTextureMatrixAttr_fieldNames[4] = {(void *)lbl_8055DF04, (void *)lbl_8055DF30, (void *)lbl_804781EC, (void *)lbl_80478200};
void *igTextureMatrixAttr_fieldStorage[4] = {(void *)lbl_805624EC, (void *)lbl_805624F0, (void *)lbl_805624F4, (void *)lbl_805624F8};
void *igTextureMatrixAttr_fieldOffsets[4] = {(void *)0xC, (void *)0x4C, (void *)0x50, (void *)0x52};
char igTextureInfo_className[] = "igTextureInfo";
char lbl_80478250[] = "_textureList";
char lbl_80478260[] = "IG_TEXTURE_FUNCTION_ATTR_TYPE_ALL";
char lbl_80478284[] = "IG_TEXTURE_FUNCTION_ATTR_TYPE_ARGS";
char lbl_804782A8[] = "IG_TEXTURE_FUNCTION_ATTR_TYPE_FUNC";
void *lbl_804782CC[6] = {(void *)lbl_80478260, (void *)lbl_80478284, (void *)lbl_804782A8, 0, (void *)0x1, (void *)0x2};
char lbl_804782E4[] = "IG_TEXTURE_FUNCTION_ATTR_TYPE";
char igTextureFunctionAttr_className[] = "igTextureFunctionAttr";
void *igTextureFunctionAttr_fieldTypes[7] = {(void *)fn_80031378, (void *)fn_8002E1AC, (void *)fn_80031378, (void *)fn_80031378, (void *)fn_80031378, (void *)igUnsignedCharMetaField_create, (void *)fn_80031378};
char lbl_80478338[] = "_call_state";
char lbl_80478344[] = "_functionType";
void *igTextureFunctionAttr_fieldNames[7] = {(void *)lbl_8055DEC4, (void *)lbl_8055DF30, (void *)lbl_8055DFF0, (void *)lbl_8055DFF8, (void *)lbl_8055E000, (void *)lbl_80478338, (void *)lbl_80478344};
void *igTextureFunctionAttr_fieldStorage[7] = {(void *)lbl_80562508, (void *)lbl_8056250C, (void *)lbl_80562510, (void *)lbl_80562514, (void *)lbl_80562518, (void *)lbl_8056251C, (void *)lbl_80562520};
void *igTextureFunctionAttr_fieldOffsets[7] = {(void *)0xC, (void *)0x10, (void *)0x14, (void *)0x18, (void *)0x1C, (void *)0x20, (void *)0x24};
char lbl_804783A8[] = "CUBE_MAP";
char lbl_804783B4[] = "SPHERE_MAP";
void *lbl_804783C0[6] = {(void *)lbl_8055E010, (void *)lbl_804783A8, (void *)lbl_804783B4, 0, (void *)0x1, (void *)0x2};
char lbl_804783D8[] = "ApplyType";
char lbl_804783E4[] = "FACE_NEG_X";
char lbl_804783F0[] = "FACE_POS_X";
char lbl_804783FC[] = "FACE_NEG_Y";
char lbl_80478408[] = "FACE_POS_Y";
char lbl_80478414[] = "FACE_NEG_Z";
char lbl_80478420[] = "FACE_POS_Z";
void *lbl_8047842C[12] = {(void *)lbl_804783E4, (void *)lbl_804783F0, (void *)lbl_804783FC, (void *)lbl_80478408, (void *)lbl_80478414, (void *)lbl_80478420, 0, (void *)0x1, (void *)0x2, (void *)0x3, (void *)0x4, (void *)0x5};
char lbl_8047845C[] = "CubeFaceID";
char igTextureCubeAttr_className[] = "igTextureCubeAttr";
void *igTextureCubeAttr_fieldTypes[3] = {(void *)igObjectRefArrayMetaField_create, (void *)fn_80031378, (void *)fn_8002E1AC};
char lbl_80478488[] = "_cubeImage";
char lbl_80478494[] = "_applyType";
void *igTextureCubeAttr_fieldNames[3] = {(void *)lbl_80478488, (void *)lbl_80478494, (void *)lbl_8055E020};
void *igTextureCubeAttr_fieldStorage[3] = {(void *)lbl_8056252C, (void *)lbl_80562530, (void *)lbl_80562534};
void *igTextureCubeAttr_fieldOffsets[3] = {(void *)0x48, (void *)0x60, (void *)0x64};
char igTextureCoordSourceAttr_className[] = "igTextureCoordSourceAttr";
void *igTextureCoordSourceAttr_fieldTypes[3] = {(void *)fn_80031378, (void *)fn_8002E1AC, (void *)fn_8002E1AC};
char lbl_804784EC[] = "_texCoordIndex";
void *igTextureCoordSourceAttr_fieldNames[3] = {(void *)lbl_8055DEC4, (void *)lbl_804784EC, (void *)lbl_8055DF30};
void *igTextureCoordSourceAttr_fieldStorage[3] = {(void *)lbl_8056253C, (void *)lbl_80562540, (void *)lbl_80562544};
void *igTextureCoordSourceAttr_fieldOffsets[3] = {(void *)0xC, (void *)0x10, (void *)0x14};
char igTextureBindAttr_className[] = "igTextureBindAttr";
void *igTextureAttr_dependencies[5] = {(void *)igImage_arkRegister, (void *)igTextureUnloadAttr_arkRegister, (void *)igImageMipMapList_arkRegister, (void *)igVisualContext_arkRegister, 0};
char igTextureAttr_className[] = "igTextureAttr";
void *igTextureAttr_fieldTypes[15] = {(void *)fn_80022A90, (void *)fn_80031378, (void *)fn_80031378, (void *)fn_80031378, (void *)fn_80031378, (void *)fn_8002E1AC, (void *)fn_80031378, (void *)fn_80031378, (void *)fn_8002879C, (void *)fn_800385E0, (void *)fn_8002879C, (void *)fn_8002E1AC, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_800274EC};
char lbl_80478594[] = "_magFilter";
char lbl_804785A0[] = "_minFilter";
char lbl_804785AC[] = "_mipmapMode";
char lbl_804785B8[] = "_imageCount";
char lbl_804785C4[] = "_imageMipMaps";
char lbl_804785D4[] = "_videoBuffer";
void *igTextureAttr_fieldNames[15] = {(void *)lbl_8055E058, (void *)lbl_80478594, (void *)lbl_804785A0, (void *)lbl_8055E060, (void *)lbl_8055E068, (void *)lbl_8055E070, (void *)lbl_804785AC, (void *)lbl_8055E078, (void *)lbl_8055E080, (void *)lbl_8055E088, (void *)lbl_8055E090, (void *)lbl_804785B8, (void *)lbl_804785C4, (void *)lbl_8055E094, (void *)lbl_804785D4};
void *igTextureAttr_fieldStorage[15] = {(void *)lbl_80562558, (void *)lbl_8056255C, (void *)lbl_80562560, (void *)lbl_80562564, (void *)lbl_80562568, (void *)lbl_8056256C, (void *)lbl_80562570, (void *)lbl_80562574, (void *)lbl_80562578, (void *)lbl_8056257C, (void *)lbl_80562580, (void *)lbl_80562584, (void *)lbl_80562588, (void *)lbl_8056258C, (void *)lbl_80562590};
void *igTextureAttr_fieldOffsets[15] = {(void *)0x10, (void *)0x14, (void *)0x18, (void *)0x1C, (void *)0x20, (void *)0x24, (void *)0x28, (void *)0x2C, (void *)0x30, (void *)0x34, (void *)0x38, (void *)0x3C, (void *)0x40, (void *)0xC, (void *)0x44};
char igImageMipMapList_className[] = "igImageMipMapList";
char igTextureAddressModeAttr_className[] = "igTextureAddressModeAttr";
char igTexGenMatrixAttr_className[] = "igTexGenMatrixAttr";
char igSubTextureBindAttr_className[] = "igSubTextureBindAttr";
void *igSubTextureBindAttr_fieldTypes[6] = {(void *)fn_80031378, (void *)fn_80031378, (void *)fn_80022A90, (void *)fn_80022A90, (void *)fn_80022A90, (void *)fn_80022A90};
void *igSubTextureBindAttr_fieldNames[6] = {(void *)lbl_8055E060, (void *)lbl_8055E068, (void *)lbl_8055E100, (void *)lbl_8055E108, (void *)lbl_8055E110, (void *)lbl_8055E118};
void *igSubTextureBindAttr_fieldStorage[6] = {(void *)lbl_805625B4, (void *)lbl_805625B8, (void *)lbl_805625BC, (void *)lbl_805625C0, (void *)lbl_805625C4, (void *)lbl_805625C8};
void *igSubTextureBindAttr_fieldOffsets[6] = {(void *)0x14, (void *)0x18, (void *)0x1C, (void *)0x20, (void *)0x24, (void *)0x28};
char igStencilStateAttr_className[] = "igStencilStateAttr";
char igStencilFunctionAttr_className[] = "igStencilFunctionAttr";
void *igStencilFunctionAttr_fieldTypes[7] = {(void *)fn_80022A90, (void *)fn_80031378, (void *)fn_80022A90, (void *)fn_80022A90, (void *)fn_80031378, (void *)fn_80031378, (void *)fn_80031378};
char lbl_8047879C[] = "_writeMask";
char lbl_804787A8[] = "_readMask";
char lbl_804787B4[] = "_stenFailOp";
char lbl_804787C0[] = "_stenPassZPassOp";
char lbl_804787D4[] = "_stenPassZFailOp";
void *igStencilFunctionAttr_fieldNames[7] = {(void *)lbl_8055E138, (void *)lbl_8055E140, (void *)lbl_8047879C, (void *)lbl_804787A8, (void *)lbl_804787B4, (void *)lbl_804787C0, (void *)lbl_804787D4};
void *igStencilFunctionAttr_fieldStorage[7] = {(void *)lbl_805625D8, (void *)lbl_805625DC, (void *)lbl_805625E0, (void *)lbl_805625E4, (void *)lbl_805625E8, (void *)lbl_805625EC, (void *)lbl_805625F0};
void *igStencilFunctionAttr_fieldOffsets[7] = {(void *)0xC, (void *)0x10, (void *)0x14, (void *)0x18, (void *)0x1C, (void *)0x20, (void *)0x24};
char igSpriteAttr_className[] = "igSpriteAttr";
void *igSpriteAttr_fieldTypes[5] = {(void *)fn_80031378, (void *)fn_80022A90, (void *)fn_80022A90, (void *)fn_8002879C, (void *)fn_80031378};
char lbl_80478860[] = "_spriteType";
char lbl_8047886C[] = "_numPrims";
char lbl_80478878[] = "_vertexArray";
char lbl_80478888[] = "_spriteSpace";
void *igSpriteAttr_fieldNames[5] = {(void *)lbl_80478860, (void *)lbl_8047886C, (void *)lbl_8055E160, (void *)lbl_80478878, (void *)lbl_80478888};
void *igSpriteAttr_fieldStorage[5] = {(void *)lbl_805625F8, (void *)lbl_805625FC, (void *)lbl_80562600, (void *)lbl_80562604, (void *)lbl_80562608};
void *igSpriteAttr_fieldOffsets[5] = {(void *)0xC, (void *)0x10, (void *)0x14, (void *)0x18, (void *)0x1C};
char igShadeModelAttr_className[] = "igShadeModelAttr";
char igSetRenderDestinationAttr_className[] = "igSetRenderDestinationAttr";
char lbl_80478904[] = "_pRDAttr";
char igScissorTypeAttr_className[] = "igScissorTypeAttr";
char igScissorAttr_className[] = "igScissorAttr";
void *igScissorAttr_fieldTypes[5] = {(void *)fn_800385E0, (void *)fn_8002E1AC, (void *)fn_8002E1AC, (void *)fn_8002E1AC, (void *)fn_8002E1AC};
void *igScissorAttr_fieldNames[5] = {(void *)lbl_8055E1B0, (void *)lbl_8055DE80, (void *)lbl_8055DE84, (void *)lbl_8055DE88, (void *)lbl_8055DE8C};
void *igScissorAttr_fieldStorage[5] = {(void *)lbl_80562628, (void *)lbl_8056262C, (void *)lbl_80562630, (void *)lbl_80562634, (void *)lbl_80562638};
void *igScissorAttr_fieldOffsets[5] = {(void *)0xC, (void *)0x10, (void *)0x14, (void *)0x18, (void *)0x1C};
char igSceneAmbientColorAttr_className[] = "igSceneAmbientColorAttr";
char igRenderListAttr_className[] = "igRenderListAttr";
char lbl_804789B0[] = "RENDERDESTINATION_TEXTURE_CREATE_MODE_AUTO_CREATE";
char lbl_804789E4[] = "RENDERDESTINATION_TEXTURE_CREATE_MODE_USE_SPECIFIED";
char lbl_80478A18[] = "RENDERDESTINATION_TEXTURE_CREATE_MODE";
char lbl_80478A40[] = "RENDERDESTINATION_CREATE_MODE_INHERIT";
char lbl_80478A68[] = "RENDERDESTINATION_CREATE_MODE_AUTONOMOUS";
char lbl_80478A94[] = "RENDERDESTINATION_CREATE_MODE_USE_DEFAULT";
void *lbl_80478AC0[6] = {(void *)lbl_80478A40, (void *)lbl_80478A68, (void *)lbl_80478A94, 0, (void *)0x1, (void *)0x2};
char lbl_80478AD8[] = "RENDERDESTINATION_CREATE_MODE";
void *igRenderDestinationAttr_dependencies[3] = {(void *)igTextureAttr_arkRegister, (void *)igVisualContext_arkRegister, 0};
char igRenderDestinationAttr_className[] = "igRenderDestinationAttr";
void *igRenderDestinationAttr_fieldTypes[14] = {(void *)fn_80031378, (void *)fn_80031378, (void *)fn_8002E1AC, (void *)fn_800385E0, (void *)fn_8002E1AC, (void *)fn_8002879C, (void *)fn_80031378, (void *)fn_8002E1AC, (void *)fn_8002E1AC, (void *)fn_8002E1AC, (void *)fn_8002E1AC, (void *)fn_8002E1AC, (void *)fn_8002E1AC, (void *)fn_8002879C};
char lbl_80478B54[] = "_iCreateMode";
char lbl_80478B64[] = "_iTexCreateMode";
char lbl_80478B74[] = "_iRDHandle";
char lbl_80478B80[] = "_bEnabled";
char lbl_80478B8C[] = "_iPrevRDHandle";
char lbl_80478B9C[] = "_iColorBitCount";
char lbl_80478BAC[] = "_iAlphaBitCount";
char lbl_80478BBC[] = "_iDepthBitCount";
char lbl_80478BCC[] = "_iStencilBitCount";
void *igRenderDestinationAttr_fieldNames[14] = {(void *)lbl_80478B54, (void *)lbl_80478B64, (void *)lbl_80478B74, (void *)lbl_80478B80, (void *)lbl_80478B8C, (void *)lbl_8055E210, (void *)lbl_8055E218, (void *)lbl_8055E220, (void *)lbl_8055E228, (void *)lbl_80478B9C, (void *)lbl_80478BAC, (void *)lbl_80478BBC, (void *)lbl_80478BCC, (void *)lbl_8055E094};
void *igRenderDestinationAttr_fieldStorage[14] = {(void *)lbl_8056265C, (void *)lbl_80562660, (void *)lbl_80562664, (void *)lbl_80562668, (void *)lbl_8056266C, (void *)lbl_80562670, (void *)lbl_80562674, (void *)lbl_80562678, (void *)lbl_8056267C, (void *)lbl_80562680, (void *)lbl_80562684, (void *)lbl_80562688, (void *)lbl_8056268C, (void *)lbl_80562690};
void *igRenderDestinationAttr_fieldOffsets[14] = {(void *)0xC, (void *)0x10, (void *)0x14, (void *)0x18, (void *)0x1C, (void *)0x20, (void *)0x24, (void *)0x28, (void *)0x2C, (void *)0x30, (void *)0x34, (void *)0x38, (void *)0x3C, (void *)0x40};
char igRefVertexBlendMatrixAttr_className[] = "igRefVertexBlendMatrixAttr";
char igProjectionMatrixAttr_className[] = "igProjectionMatrixAttr";
char igPolygonModeAttr_className[] = "igPolygonModeAttr";
char igPointSpriteSizeAttr_className[] = "igPointSpriteSizeAttr";
char igPixelShaderBindAttr_className[] = "igPixelShaderBindAttr";
char lbl_80478D00[] = "_pixelShader";
void *igPixelShaderAttr_dependencies[5] = {(void *)igVisualContext_arkRegister, (void *)igTextureSamplerSourceList_arkRegister, (void *)igGfxShaderConstantList_arkRegister, (void *)igGfxShaderDefineList_arkRegister, 0};
char igPixelShaderAttr_className[] = "igPixelShaderAttr";
void *igPixelShaderAttr_fieldTypes[10] = {(void *)fn_8002E1AC, (void *)fn_800274EC, (void *)fn_8002E1AC, (void *)fn_8002879C, (void *)fn_800251EC, (void *)fn_800251EC, (void *)fn_800251EC, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C};
char lbl_80478D60[] = "_iHandle";
char lbl_80478D6C[] = "_samplerList";
void *igPixelShaderAttr_fieldNames[10] = {(void *)lbl_80478D60, (void *)lbl_8055E2B8, (void *)lbl_8055E2C0, (void *)lbl_80477D2C, (void *)lbl_80477E78, (void *)lbl_80477E88, (void *)lbl_80477E94, (void *)lbl_80478D6C, (void *)lbl_80477EE4, (void *)lbl_80477EFC};
void *igPixelShaderAttr_fieldStorage[10] = {(void *)lbl_805626C4, (void *)lbl_805626C8, (void *)lbl_805626CC, (void *)lbl_805626D0, (void *)lbl_805626D4, (void *)lbl_805626D8, (void *)lbl_805626DC, (void *)lbl_805626E0, (void *)lbl_805626E4, (void *)lbl_805626E8};
void *igPixelShaderAttr_fieldOffsets[10] = {(void *)0xC, (void *)0x10, (void *)0x14, (void *)0x18, (void *)0x1C, (void *)0x20, (void *)0x24, (void *)0x28, (void *)0x2C, (void *)0x30};
char igPixelPipelineModeAttr_className[] = "igPixelPipelineModeAttr";
char lbl_80478E0C[] = "_pipelineMode";
char igParticleAttrList_className[] = "igParticleAttrList";
char igParticleAttr_className[] = "igParticleAttr";
void *igParticleAttr_fieldTypes[7] = {(void *)fn_800385E0, (void *)fn_8002879C, (void *)fn_80022A90, (void *)fn_80022A90, (void *)igLongMetaField_create, (void *)igFloatMetaField_create, (void *)igFloatMetaField_create};
char lbl_80478E5C[] = "_bUseCurrentTime";
char lbl_80478E70[] = "_particleArray";
char lbl_80478E80[] = "_particleNum";
char lbl_80478E90[] = "_particleOffset";
char lbl_80478EA0[] = "_startTime";
void *igParticleAttr_fieldNames[7] = {(void *)lbl_80478E5C, (void *)lbl_80478E70, (void *)lbl_80478E80, (void *)lbl_80478E90, (void *)lbl_80478EA0, (void *)lbl_8055DF54, (void *)lbl_8055E160};
void *igParticleAttr_fieldStorage[7] = {(void *)lbl_805626FC, (void *)lbl_80562700, (void *)lbl_80562704, (void *)lbl_80562708, (void *)lbl_8056270C, (void *)lbl_80562710, (void *)lbl_80562714};
void *igParticleAttr_fieldOffsets[7] = {(void *)0xC, (void *)0x10, (void *)0x14, (void *)0x18, (void *)0x20, (void *)0x28, (void *)0x2C};
char igNormalizeNormalsStateAttr_className[] = "igNormalizeNormalsStateAttr";
char igMultiPassStateAttr_className[] = "igMultiPassStateAttr";
char lbl_80478F34[] = "_numPasses";
void *igMorphedGeometryAttr_dependencies[3] = {(void *)igGeometryAttr_arkRegister, (void *)igMorphDataList_arkRegister, 0};
char igMorphedGeometryAttr_className[] = "igMorphedGeometryAttr";
char lbl_80478F64[] = "_geometry";
char lbl_80478F70[] = "_morphList";
void *igVector3MorphData_dependencies[5] = {(void *)igVec3fAlignedList_arkRegister, (void *)igVec3fListList_arkRegister, (void *)igPointerList_arkRegister, (void *)igFloatList_arkRegister, 0};
char igVector3MorphData_className[] = "igVector3MorphData";
void *igVector3MorphData_fieldTypes[9] = {(void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002E1AC, (void *)fn_8002E1AC, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002E1AC, (void *)fn_80031378, (void *)fn_800385E0};
char lbl_80478FC8[] = "_targets";
char lbl_80478FD4[] = "_targetCount";
char lbl_80478FE4[] = "_vertexCount";
char lbl_80478FF4[] = "_activeTargets";
char lbl_80479004[] = "_activeCoeff";
char lbl_80479014[] = "_activeCount";
char lbl_80479024[] = "_component";
void *igVector3MorphData_fieldNames[9] = {(void *)lbl_8055E32C, (void *)lbl_80478FC8, (void *)lbl_80478FD4, (void *)lbl_80478FE4, (void *)lbl_80478FF4, (void *)lbl_80479004, (void *)lbl_80479014, (void *)lbl_80479024, (void *)lbl_8055E334};
void *igVector3MorphData_fieldStorage[9] = {(void *)lbl_80562738, (void *)lbl_8056273C, (void *)lbl_80562740, (void *)lbl_80562744, (void *)lbl_80562748, (void *)lbl_8056274C, (void *)lbl_80562750, (void *)lbl_80562754, (void *)lbl_80562758};
void *igVector3MorphData_fieldOffsets[9] = {(void *)0x8, (void *)0xC, (void *)0x10, (void *)0x14, (void *)0x18, (void *)0x1C, (void *)0x20, (void *)0x24, (void *)0x28};
char igVec3fAlignedList_className[] = "igVec3fAlignedList";
char igMorphDataList_className[] = "igMorphDataList";
char igMorphData_className[] = "igMorphData";
char igModelViewMatrixAttrList_className[] = "igModelViewMatrixAttrList";
char igModelViewMatrixAttr_className[] = "igModelViewMatrixAttr";
char igMipMapAttr_className[] = "igMipMapAttr";
char igMatrixOptStateAttr_className[] = "igMatrixOptStateAttr";
char igMatrixConstantAttr_className[] = "igMatrixConstantAttr";
char igMaterialModeAttr_className[] = "igMaterialModeAttr";
char igMaterialAttr_className[] = "igMaterialAttr";
void *igMaterialAttr_fieldTypes[6] = {(void *)igFloatMetaField_create, (void *)igVec4fMetaField_create, (void *)igVec4fMetaField_create, (void *)igVec4fMetaField_create, (void *)igVec4fMetaField_create, (void *)fn_80022A90};
char lbl_8047917C[] = "_shininess";
char lbl_80479188[] = "_diffuse";
char lbl_80479194[] = "_ambient";
char lbl_804791A0[] = "_emission";
char lbl_804791AC[] = "_specular";
void *igMaterialAttr_fieldNames[6] = {(void *)lbl_8047917C, (void *)lbl_80479188, (void *)lbl_80479194, (void *)lbl_804791A0, (void *)lbl_804791AC, (void *)lbl_8055E3CC};
void *igMaterialAttr_fieldStorage[6] = {(void *)lbl_805627A0, (void *)lbl_805627A4, (void *)lbl_805627A8, (void *)lbl_805627AC, (void *)lbl_805627B0, (void *)lbl_805627B4};
void *igMaterialAttr_fieldOffsets[6] = {(void *)0xC, (void *)0x10, (void *)0x20, (void *)0x30, (void *)0x40, (void *)0x50};
char igMacroTextureRegionAttr_className[] = "igMacroTextureRegionAttr";
void *igMacroTextureRegionAttr_fieldTypes[4] = {(void *)fn_80022A90, (void *)fn_80022A90, (void *)fn_80022A90, (void *)fn_80022A90};
void *igMacroTextureRegionAttr_fieldNames[4] = {(void *)lbl_8055E100, (void *)lbl_8055E108, (void *)lbl_8055E110, (void *)lbl_8055E118};
void *igMacroTextureRegionAttr_fieldStorage[4] = {(void *)lbl_805627BC, (void *)lbl_805627C0, (void *)lbl_805627C4, (void *)lbl_805627C8};
void *igMacroTextureRegionAttr_fieldOffsets[4] = {(void *)0xC, (void *)0x10, (void *)0x14, (void *)0x18};
char igLineWidthAttr_className[] = "igLineWidthAttr";
char igLightingStateAttr_className[] = "igLightingStateAttr";
char igLightStateAttrList_className[] = "igLightStateAttrList";
void *igLightStateAttr_dependencies[3] = {(void *)igLightAttr_arkRegister, (void *)igObject_arkRegister, 0};
char igLightStateAttr_className[] = "igLightStateAttr";
void *igLightStateAttr_fieldTypes[3] = {(void *)fn_8002879C, (void *)fn_800385E0, (void *)fn_8002879C};
char lbl_804792C4[] = "_internal";
void *igLightStateAttr_fieldNames[3] = {(void *)lbl_8055E404, (void *)lbl_80477FCC, (void *)lbl_804792C4};
void *igLightStateAttr_fieldStorage[3] = {(void *)lbl_805627E4, (void *)lbl_805627E8, (void *)lbl_805627EC};
void *igLightStateAttr_fieldOffsets[3] = {(void *)0x10, (void *)0x14, (void *)0xC};
char igLightList_className[] = "igLightList";
char igLightAttr_className[] = "igLightAttr";
void *igLightAttr_fieldTypes[16] = {(void *)fn_80031378, (void *)fn_8002E1AC, (void *)igVec3fMetaField_create, (void *)igVec4fMetaField_create, (void *)igVec4fMetaField_create, (void *)igVec4fMetaField_create, (void *)igVec3fMetaField_create, (void *)igFloatMetaField_create, (void *)igFloatMetaField_create, (void *)igVec3fMetaField_create, (void *)igFloatMetaField_create, (void *)igVec3fMetaField_create, (void *)igVec3fMetaField_create, (void *)fn_8002879C, (void *)fn_800385E0, (void *)fn_800385E0};
char lbl_8047934C[] = "_lightType";
char lbl_80479358[] = "_lightId";
char lbl_80479364[] = "_position";
char lbl_80479370[] = "_direction";
char lbl_8047937C[] = "_falloff";
char lbl_80479388[] = "_attenuation";
char lbl_80479398[] = "_cachedPosition";
char lbl_804793A8[] = "_cachedDirection";
char lbl_804793BC[] = "_changed";
char lbl_804793C8[] = "_cacheable";
void *igLightAttr_fieldNames[16] = {(void *)lbl_8047934C, (void *)lbl_80479358, (void *)lbl_80479364, (void *)lbl_80479194, (void *)lbl_80479188, (void *)lbl_804791AC, (void *)lbl_80479370, (void *)lbl_8047937C, (void *)lbl_8055E41C, (void *)lbl_80479388, (void *)lbl_8047917C, (void *)lbl_80479398, (void *)lbl_804793A8, (void *)lbl_8055E094, (void *)lbl_804793BC, (void *)lbl_804793C8};
void *igLightAttr_fieldStorage[16] = {(void *)lbl_805627F8, (void *)lbl_805627FC, (void *)lbl_80562800, (void *)lbl_80562804, (void *)lbl_80562808, (void *)lbl_8056280C, (void *)lbl_80562810, (void *)lbl_80562814, (void *)lbl_80562818, (void *)lbl_8056281C, (void *)lbl_80562820, (void *)lbl_80562824, (void *)lbl_80562828, (void *)lbl_8056282C, (void *)lbl_80562830, (void *)lbl_80562834};
void *igLightAttr_fieldOffsets[16] = {(void *)0xC, (void *)0x10, (void *)0x14, (void *)0x20, (void *)0x30, (void *)0x40, (void *)0x50, (void *)0x5C, (void *)0x60, (void *)0x64, (void *)0x70, (void *)0x74, (void *)0x80, (void *)0x8C, (void *)0x90, (void *)0x91};
char lbl_80479494[] = "IMMEDIATE";
char lbl_804794A0[] = "USE_RENDER_LIST";
char lbl_804794B0[] = "USE_RENDER_LIST_DELETE_ORIGINAL";
void *lbl_804794D0[6] = {(void *)lbl_80479494, (void *)lbl_804794A0, (void *)lbl_804794B0, 0, (void *)0x1, (void *)0x2};
char lbl_804794E8[] = "ATTR_FLAGS";
void *igGeometrySetAttr_dependencies[3] = {(void *)igVisualContext_arkRegister, (void *)igGeometryAttrList_arkRegister, 0};
char igGeometrySetAttr_className[] = "igGeometrySetAttr";
void *igGeometrySetAttr_fieldTypes[5] = {(void *)fn_8002879C, (void *)fn_8002E1AC, (void *)fn_8002879C, (void *)fn_80031378, (void *)fn_800385E0};
char lbl_80479528[] = "_renderListHandle";
char lbl_8047953C[] = "_geometryAttrList";
char lbl_80479550[] = "_renderListState";
char lbl_80479564[] = "_drawState";
void *igGeometrySetAttr_fieldNames[5] = {(void *)lbl_8055E094, (void *)lbl_80479528, (void *)lbl_8047953C, (void *)lbl_80479550, (void *)lbl_80479564};
void *igGeometrySetAttr_fieldStorage[5] = {(void *)lbl_80562840, (void *)lbl_80562844, (void *)lbl_80562848, (void *)lbl_8056284C, (void *)lbl_80562850};
void *igGeometrySetAttr_fieldOffsets[5] = {(void *)0xC, (void *)0x10, (void *)0x14, (void *)0x18, (void *)0x1C};
char igGeometryMaskAttr_className[] = "igGeometryMaskAttr";
void *igGeometryAttr2_dependencies[4] = {(void *)igVertexArray2_arkRegister, (void *)igIndexArray_arkRegister, (void *)igPrimLengthArray_arkRegister, 0};
char igGeometryAttr2_className[] = "igGeometryAttr2";
void *igGeometryAttr2_fieldTypes[8] = {(void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_80031378, (void *)fn_80022A90, (void *)fn_80022A90, (void *)fn_80022A90, (void *)fn_800385E0};
char lbl_80479600[] = "_indexArray";
char lbl_8047960C[] = "_stripLengths";
char lbl_8047961C[] = "_primType";
void *igGeometryAttr2_fieldNames[8] = {(void *)lbl_80478878, (void *)lbl_80479600, (void *)lbl_8047960C, (void *)lbl_8047961C, (void *)lbl_8047886C, (void *)lbl_8055E160, (void *)lbl_8055DF30, (void *)lbl_80479564};
void *igGeometryAttr2_fieldStorage[8] = {(void *)lbl_80562860, (void *)lbl_80562864, (void *)lbl_80562868, (void *)lbl_8056286C, (void *)lbl_80562870, (void *)lbl_80562874, (void *)lbl_80562878, (void *)lbl_8056287C};
void *igGeometryAttr2_fieldOffsets[8] = {(void *)0xC, (void *)0x10, (void *)0x14, (void *)0x18, (void *)0x1C, (void *)0x20, (void *)0x24, (void *)0x28};
char igGeometryAttr1_5_className[] = "igGeometryAttr1_5";
void *igGeometryAttr_dependencies[5] = {(void *)igVertexArray_arkRegister, (void *)igIndexArray_arkRegister, (void *)igUnsignedIntList_arkRegister, (void *)igVec3fList_arkRegister, 0};
char igGeometryAttr_className[] = "igGeometryAttr";
void *igGeometryAttr_fieldTypes[9] = {(void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_80031378, (void *)fn_80022A90, (void *)fn_80022A90, (void *)fn_8002879C, (void *)fn_8002E1AC, (void *)fn_8002879C, (void *)fn_8002879C};
char lbl_804796E4[] = "_primLengths";
void *igGeometryAttr_fieldNames[9] = {(void *)lbl_80478878, (void *)lbl_80479600, (void *)lbl_8047961C, (void *)lbl_8047886C, (void *)lbl_8055E160, (void *)lbl_804796E4, (void *)lbl_8055E1E0, (void *)lbl_8055E460, (void *)lbl_8055E468};
void *igGeometryAttr_fieldStorage[9] = {(void *)lbl_8056288C, (void *)lbl_80562890, (void *)lbl_80562894, (void *)lbl_80562898, (void *)lbl_8056289C, (void *)lbl_805628A0, (void *)lbl_805628A4, (void *)lbl_805628A8, (void *)lbl_805628AC};
void *igGeometryAttr_fieldOffsets[9] = {(void *)0xC, (void *)0x10, (void *)0x14, (void *)0x18, (void *)0x1C, (void *)0x20, (void *)0x24, (void *)0x28, (void *)0x2C};
char igGenericAttrDefaultManager_className[] = "igGenericAttrDefaultManager";
char igFogStateAttr_className[] = "igFogStateAttr";
char igFogAttr_className[] = "igFogAttr";
void *igFogAttr_fieldTypes[5] = {(void *)fn_80031378, (void *)igFloatMetaField_create, (void *)igFloatMetaField_create, (void *)igFloatMetaField_create, (void *)igVec4fMetaField_create};
char lbl_804797AC[] = "_nearVal";
char lbl_804797B8[] = "_density";
void *igFogAttr_fieldNames[5] = {(void *)lbl_8055DEC4, (void *)lbl_804797AC, (void *)lbl_8055E484, (void *)lbl_804797B8, (void *)lbl_8055E1BC};
void *igFogAttr_fieldStorage[5] = {(void *)lbl_805628C0, (void *)lbl_805628C4, (void *)lbl_805628C8, (void *)lbl_805628CC, (void *)lbl_805628D0};
void *igFogAttr_fieldOffsets[5] = {(void *)0xC, (void *)0x10, (void *)0x14, (void *)0x18, (void *)0x1C};
char igFloatConstantAttr_className[] = "igFloatConstantAttr";
char igFileAttrDefaultManager_className[] = "igFileAttrDefaultManager";
char igDitherStateAttr_className[] = "igDitherStateAttr";
char igDisplayListAttr_className[] = "igDisplayListAttr";
char lbl_80479858[] = "_contents";
char igDestinationAlphaStateAttr_className[] = "igDestinationAlphaStateAttr";
char igDestinationAlphaFunctionAttr_className[] = "igDestinationAlphaFunctionAttr";
char lbl_804798A0[] = "_refValue";
char igDestinationAlphaAttr_className[] = "igDestinationAlphaAttr";
char igDepthWriteStateAttr_className[] = "igDepthWriteStateAttr";
char igDepthStateAttr_className[] = "igDepthStateAttr";
char igDepthFunctionAttr_className[] = "igDepthFunctionAttr";
char igDecalAttr_className[] = "igDecalAttr";
char lbl_80479910[] = "_decalOffset";
char igCustomStateCollectionAttr_className[] = "igCustomStateCollectionAttr";
char igCullFaceAttr_className[] = "igCullFaceAttr";
char lbl_8047994C[] = "FROM_RENDERDESTINATION_TO_TEXTURE";
char lbl_80479970[] = "FROM_RENDERDESTINATION_TO_MEMORY";
char lbl_80479994[] = "FROM_RENDERDESTINATION_DEPTH_TO_TEXTURE";
char lbl_804799BC[] = "FROM_RENDERDESTINATION_DEPTH_TO_MEMORY";
void *lbl_804799E4[10] = {(void *)lbl_8055E010, (void *)lbl_8047994C, (void *)lbl_80479970, (void *)lbl_80479994, (void *)lbl_804799BC, 0, (void *)0x1, (void *)0x2, (void *)0x3, (void *)0x4};
char lbl_80479A0C[] = "CopyType";
void *igCopyRenderDestinationAttr_dependencies[4] = {(void *)igRenderDestinationAttr_arkRegister, (void *)igImage_arkRegister, (void *)igTextureAttr_arkRegister, 0};
char igCopyRenderDestinationAttr_className[] = "igCopyRenderDestinationAttr";
void *igCopyRenderDestinationAttr_fieldTypes[10] = {(void *)fn_80031378, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002E1AC, (void *)fn_8002E1AC, (void *)fn_8002E1AC, (void *)fn_8002E1AC, (void *)fn_8002E1AC, (void *)fn_8002E1AC};
char lbl_80479A6C[] = "_copyType";
char lbl_80479A78[] = "_pTextureAttr";
char lbl_80479A88[] = "_sourceX";
char lbl_80479A94[] = "_sourceY";
char lbl_80479AA0[] = "_destinationX";
char lbl_80479AB0[] = "_destinationY";
void *igCopyRenderDestinationAttr_fieldNames[10] = {(void *)lbl_80479A6C, (void *)lbl_80478904, (void *)lbl_8055E5A0, (void *)lbl_80479A78, (void *)lbl_80479A88, (void *)lbl_80479A94, (void *)lbl_80479AA0, (void *)lbl_80479AB0, (void *)lbl_8055E5A8, (void *)lbl_8055E5B0};
void *igCopyRenderDestinationAttr_fieldStorage[10] = {(void *)lbl_8056294C, (void *)lbl_80562950, (void *)lbl_80562954, (void *)lbl_80562958, (void *)lbl_8056295C, (void *)lbl_80562960, (void *)lbl_80562964, (void *)lbl_80562968, (void *)lbl_8056296C, (void *)lbl_80562970};
void *igCopyRenderDestinationAttr_fieldOffsets[10] = {(void *)0xC, (void *)0x10, (void *)0x14, (void *)0x18, (void *)0x1C, (void *)0x20, (void *)0x24, (void *)0x28, (void *)0x2C, (void *)0x30};
char igColorScalerStateAttr_className[] = "igColorScalerStateAttr";
char igColorMaskAttr_className[] = "igColorMaskAttr";
void *igColorMaskAttr_fieldTypes[5] = {(void *)fn_800385E0, (void *)fn_800385E0, (void *)fn_800385E0, (void *)fn_800385E0, (void *)fn_80022A90};
void *igColorMaskAttr_fieldNames[5] = {(void *)lbl_8055E5D8, (void *)lbl_8055E5E0, (void *)lbl_8055E5E8, (void *)lbl_8055E518, (void *)lbl_8055E020};
void *igColorMaskAttr_fieldStorage[5] = {(void *)lbl_80562980, (void *)lbl_80562984, (void *)lbl_80562988, (void *)lbl_8056298C, (void *)lbl_80562990};
void *igColorMaskAttr_fieldOffsets[5] = {(void *)0xC, (void *)0xD, (void *)0xE, (void *)0xF, (void *)0x10};
char igColorAttr_className[] = "igColorAttr";
char lbl_80479BBC[] = "_colorPacked";
char igClippingStateAttr_className[] = "igClippingStateAttr";
char igClearAttr_className[] = "igClearAttr";
void *igClearAttr_fieldTypes[7] = {(void *)fn_80022A90, (void *)igVec4fMetaField_create, (void *)igVec4fMetaField_create, (void *)igDoubleMetaField_create, (void *)fn_80022A90, (void *)fn_80022A90, (void *)igFloatMetaField_create};
char lbl_80479C08[] = "_clearMode";
char lbl_80479C14[] = "_stencil";
void *igClearAttr_fieldNames[7] = {(void *)lbl_80479C08, (void *)lbl_8055E1BC, (void *)lbl_8055E620, (void *)lbl_8055E628, (void *)lbl_80479C14, (void *)lbl_80479BBC, (void *)lbl_8055E630};
void *igClearAttr_fieldStorage[7] = {(void *)lbl_805629AC, (void *)lbl_805629B0, (void *)lbl_805629B4, (void *)lbl_805629B8, (void *)lbl_805629BC, (void *)lbl_805629C0, (void *)lbl_805629C4};
void *igClearAttr_fieldOffsets[7] = {(void *)0xC, (void *)0x10, (void *)0x20, (void *)0x30, (void *)0x38, (void *)0x3C, (void *)0x40};
char igBlendingCorrectionStateAttr_className[] = "igBlendingCorrectionStateAttr";
char igBlendingControlStateAttr_className[] = "igBlendingControlStateAttr";
char igBlendStateAttr_className[] = "igBlendStateAttr";
char igBlendMatrixPaletteAttrList_className[] = "igBlendMatrixPaletteAttrList";
char igBlendMatrixPaletteAttr_className[] = "igBlendMatrixPaletteAttr";
void *igBlendMatrixPaletteAttr_fieldTypes[4] = {(void *)fn_8002AC34, (void *)fn_8002AC34, (void *)fn_80022A90, (void *)fn_80022A90};
char lbl_80479D10[] = "_matrixIndices";
char lbl_80479D20[] = "_capacity";
void *igBlendMatrixPaletteAttr_fieldNames[4] = {(void *)lbl_8047804C, (void *)lbl_80479D10, (void *)lbl_80478094, (void *)lbl_80479D20};
void *igBlendMatrixPaletteAttr_fieldStorage[4] = {(void *)lbl_805629E8, (void *)lbl_805629EC, (void *)lbl_805629F0, (void *)lbl_805629F4};
void *igBlendMatrixPaletteAttr_fieldOffsets[4] = {(void *)0xC, (void *)0x10, (void *)0x14, (void *)0x18};
char igBlendMatricesAttr_className[] = "igBlendMatricesAttr";
void *igBlendMatricesAttr_fieldTypes[3] = {(void *)fn_8002AC34, (void *)fn_80022A90, (void *)fn_80022A90};
char lbl_80479D7C[] = "_matrixCacheCapacity";
void *igBlendMatricesAttr_fieldNames[3] = {(void *)lbl_8047804C, (void *)lbl_80478094, (void *)lbl_80479D7C};
void *igBlendMatricesAttr_fieldStorage[3] = {(void *)lbl_805629FC, (void *)lbl_80562A00, (void *)lbl_80562A04};
void *igBlendMatricesAttr_fieldOffsets[3] = {(void *)0xC, (void *)0x10, (void *)0x14};
char lbl_80479DB8[] = "IG_BLENDING_ALPHA_SOURCE";
char lbl_80479DD4[] = "IG_BLENDING_ALPHA_DESTINATION";
char lbl_80479DF4[] = "IG_BLENDING_ALPHA_FIX";
void *lbl_80479E0C[6] = {(void *)lbl_80479DB8, (void *)lbl_80479DD4, (void *)lbl_80479DF4, 0, (void *)0x1, (void *)0x2};
char lbl_80479E24[] = "BLENDING_FUNCTION_ALPHA_PSX2";
char lbl_80479E44[] = "IG_BLENDING_COLOR_SOURCE";
char lbl_80479E60[] = "IG_BLENDING_COLOR_DESTINATION";
char lbl_80479E80[] = "IG_BLENDING_COLOR_ZERO";
void *lbl_80479E98[6] = {(void *)lbl_80479E44, (void *)lbl_80479E60, (void *)lbl_80479E80, 0, (void *)0x1, (void *)0x2};
char lbl_80479EB0[] = "BLENDING_FUNCTION_COLOR_PSX2";
char igBlendFunctionAttr_className[] = "igBlendFunctionAttr";
void *igBlendFunctionAttr_fieldTypes[11] = {(void *)fn_80031378, (void *)fn_80031378, (void *)fn_80031378, (void *)fn_8002879C, (void *)igUnsignedCharMetaField_create, (void *)fn_800259A8, (void *)igFloatMetaField_create, (void *)fn_80031378, (void *)fn_80031378, (void *)fn_80031378, (void *)fn_80031378};
char lbl_80479F10[] = "_blendEquationExt";
char lbl_80479F24[] = "_blendConstant";
char lbl_80479F34[] = "_blendStage";
char lbl_80479F40[] = "_blendConstantFloat";
void *igBlendFunctionAttr_fieldNames[11] = {(void *)lbl_8055E678, (void *)lbl_8055E680, (void *)lbl_8055E688, (void *)lbl_80479F10, (void *)lbl_80479F24, (void *)lbl_80479F34, (void *)lbl_80479F40, (void *)lbl_8055E68C, (void *)lbl_8055E694, (void *)lbl_8055E69C, (void *)lbl_8055E6A4};
void *igBlendFunctionAttr_fieldStorage[11] = {(void *)lbl_80562A14, (void *)lbl_80562A18, (void *)lbl_80562A1C, (void *)lbl_80562A20, (void *)lbl_80562A24, (void *)lbl_80562A28, (void *)lbl_80562A2C, (void *)lbl_80562A30, (void *)lbl_80562A34, (void *)lbl_80562A38, (void *)lbl_80562A3C};
void *igBlendFunctionAttr_fieldOffsets[11] = {(void *)0xC, (void *)0x10, (void *)0x14, (void *)0x18, (void *)0x1C, (void *)0x1E, (void *)0x20, (void *)0x24, (void *)0x28, (void *)0x2C, (void *)0x30};
char igTextureList_className[] = "igTextureList";
char igGeometryAttrList_className[] = "igGeometryAttrList";
void *igAttrPool_dependencies[3] = {(void *)igMetaObjectList_arkRegister, (void *)igAttrListList_arkRegister, 0};
char igAttrPool_className[] = "igAttrPool";
void *igAttrPool_fieldTypes[3] = {(void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C};
char lbl_8047A020[] = "_metaList";
char lbl_8047A02C[] = "_nonSharableMetaList";
char lbl_8047A044[] = "_attributeList";
void *igAttrPool_fieldNames[3] = {(void *)lbl_8047A020, (void *)lbl_8047A02C, (void *)lbl_8047A044};
void *igAttrPool_fieldStorage[3] = {(void *)lbl_80562A4C, (void *)lbl_80562A50, (void *)lbl_80562A54};
void *igAttrPool_fieldOffsets[3] = {(void *)0x8, (void *)0xC, (void *)0x10};
char igAttrDefaultManager_className[] = "igAttrDefaultManager";
char igAttrListList_className[] = "igAttrListList";
char igNonRefCountedAttrList_className[] = "igNonRefCountedAttrList";
char igAttrList_className[] = "igAttrList";
char lbl_8047A0C4[] = "_cachedUnitID";
char lbl_8047A0D4[] = "_cachedAttrIndex";
char igAlphaStateAttr_className[] = "igAlphaStateAttr";
char igAlphaFunctionAttr_className[] = "igAlphaFunctionAttr";
char igTextureSwapTableAttr_className[] = "igTextureSwapTableAttr";
void *igTextureSwapTableAttr_fieldTypes[4] = {(void *)igCharArrayMetaField_create, (void *)igCharArrayMetaField_create, (void *)igCharArrayMetaField_create, (void *)igCharArrayMetaField_create};
void *igTextureSwapTableAttr_fieldNames[4] = {(void *)lbl_8055E5D8, (void *)lbl_8055E5E0, (void *)lbl_8055E5E8, (void *)lbl_8055E518};
void *igTextureSwapTableAttr_fieldStorage[4] = {(void *)lbl_80562A8C, (void *)lbl_80562A90, (void *)lbl_80562A94, (void *)lbl_80562A98};
void *igTextureSwapTableAttr_fieldOffsets[4] = {(void *)0xC, (void *)0x10, (void *)0x14, (void *)0x18};
char igTextureSwapAttr_className[] = "igTextureSwapAttr";
void *igTextureSwapAttr_fieldTypes[3] = {(void *)fn_80037B1C, (void *)fn_80037B1C, (void *)fn_8002E1AC};
char lbl_8047A188[] = "_rasterSelect";
char lbl_8047A198[] = "_textureSelect";
void *igTextureSwapAttr_fieldNames[3] = {(void *)lbl_8047A188, (void *)lbl_8047A198, (void *)lbl_8055DF30};
void *igTextureSwapAttr_fieldStorage[3] = {(void *)lbl_80562AA0, (void *)lbl_80562AA4, (void *)lbl_80562AA8};
void *igTextureSwapAttr_fieldOffsets[3] = {(void *)0xC, (void *)0xD, (void *)0x10};
}

namespace igViewportAttr_fieldInit {
// igViewportAttr: Alchemy class registration (0x800AC29C..0x800AC37C). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igViewportAttr)

extern "C" {
void fn_8004D4BC(void *, float);
void fn_80053650(void *, int);
void *fn_800D0324();
extern const char lbl_80566810[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igViewportAttr_fieldInit()
{
    Meta::igMetaObject *meta = igViewportAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igViewportAttr_fieldTypes, 7);
    Meta::igIntMetaField *wField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 2));
    fn_80053650(wField, 639);
    Meta::igIntMetaField *hField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 3));
    fn_80053650(hField, 447);
    Meta::igObjectRefMetaField *scissorExtField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 4));
    void *value_v4 = fn_800D0324();
    scissorExtField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v4);
    scissorExtField->_persistent = false;
    scissorExtField->_deepCopyMethod = 1;
    scissorExtField->_shallowCopyMethod = 1;
    scissorExtField->_isAlikeShallowMethod = 3;
    Meta::igFloatMetaField *farZField = static_cast<Meta::igFloatMetaField *>(meta_field(meta, base + 6));
    fn_8004D4BC(farZField, *reinterpret_cast<const float *>(lbl_80566810));
    meta_setupFields(meta, igViewportAttr_fieldNames, igViewportAttr_fieldStorage, igViewportAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace igVertexShaderBindAttr {
// igVertexShaderBindAttr: Alchemy class registration (0x800AC37C..0x800AC594). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igVertexShaderBindAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_800ABC8C();
void *fn_800AC294();
void *fn_800AC594();
extern char igVertexShaderBindAttr_dependencies[8];
extern char igVertexShaderBindAttr_fieldNames[4];
extern char igVertexShaderBindAttr_fieldOffsets[4];
extern char igVertexShaderBindAttr_fieldStorage[4];
extern char igVertexShaderBindAttr_fieldTypes[4];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

struct igVertexShaderBindAttrInstance : igObjectInstance {
    char unknown04[8];
    igObjectRefMember _vertexShader;
    inline ~igVertexShaderBindAttrInstance() { __vtable = igVertexShaderBindAttr_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igVertexShaderBindAttr)

void *igVertexShaderBindAttr_vtableRead()
{
    igVertexShaderBindAttrInstance object;
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igVertexShaderBindAttr_vtable;
    object._vertexShader._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igVertexShaderBindAttr)

void igVertexShaderBindAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igVertexShaderBindAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igVertexShaderBindAttr_getMetaCall,
                       igVertexShaderBindAttr_className, 0x10,
                       igVertexShaderBindAttr_vtableRead, igVertexShaderBindAttr_fieldInit, 0, igVertexShaderBindAttr_dependencies);
}

META_GET_META_CALL(igVertexShaderBindAttr)

void igVertexShaderBindAttr_fieldInit()
{
    Meta::igMetaObject *meta = igVertexShaderBindAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igVertexShaderBindAttr_fieldTypes, 1);
    Meta::igObjectRefMetaField *vertexShaderField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_800AC594();
    vertexShaderField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    meta_setupFields(meta, igVertexShaderBindAttr_fieldNames, igVertexShaderBindAttr_fieldStorage, igVertexShaderBindAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace unknown800AC594 {
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void *fn_800AC294();
void fn_800AC6A0(void *,short);
void igVertexShaderAttr_arkRegister();
void igVisualAttribute_register();
extern char igVertexShaderBindAttr_vtable[];
extern char igVertexShaderAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char igVertexShaderBindAttr_dependencies[8];
extern char igVertexShaderBindAttr_fieldTypes[4];
extern char igVertexShaderBindAttr_fieldNames[4];
extern char igVertexShaderBindAttr_fieldStorage[4];
extern char igVertexShaderBindAttr_fieldOffsets[4];
extern void *lbl_805621F4;
extern void *igVertexShaderBindAttr_meta;
extern void *igVertexShaderAttr_meta;
void *igVertexShaderBindAttr_getMeta();
void *igVertexShaderBindAttr_vtableRead();
void igVertexShaderBindAttr_arkRegister();
void igVertexShaderBindAttr_register();
void *igVertexShaderBindAttr_getMetaCall();
void igVertexShaderBindAttr_fieldInit();
void *fn_800AC594();
}
struct UnknownGenRoot800AC3B8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800AC3B8(){igObject_construct(this);}
};
struct UnknownGenObject800AC3B8 : UnknownGenRoot800AC3B8 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject800AC3B8(){unknown00=igVertexShaderBindAttr_vtable;}
};
struct UnknownGenObject800AC60C {
 void *unknown00;
 char unknown04[8];
 int unknown0C;
 int unknown10;
 int unknown14;
 int unknown18;
 int unknown1C;
 char unknown20[8];
 int unknown28;
 int unknown2C;
 int unknown30;
 int unknown34;
 char unknown38[8];
};
extern "C" {
void *fn_800AC594(){
 if(!igVertexShaderAttr_meta) igVertexShaderAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igVertexShaderAttr_meta;
}
}
#pragma pop
}

namespace igVertexShaderAttr {
// igVertexShaderAttr: Alchemy class registration (0x800AC5D0..0x800AC6A0). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igVertexShaderAttr)

extern "C" {
void fn_800AC6A0(void *,short);
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

struct Instance_800AC60C {
    void *__vtable;
    char unknown04[8];
    int unknown0C;
    int unknown10;
    int unknown14;
    int unknown18;
    int unknown1C;
    char unknown20[8];
    int unknown28;
    int unknown2C;
    int unknown30;
    int unknown34;
    char unknown38[8];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igVertexShaderAttr)

void *igVertexShaderAttr_vtableRead()
{
    Instance_800AC60C object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igVertexShaderAttr_vtable;
    object.unknown0C = 0;
    object.unknown10 = 0;
    object.unknown14 = 0;
    object.unknown18 = 0;
    object.unknown1C = 0;
    object.unknown28 = 0;
    object.unknown2C = 0;
    object.unknown30 = 0;
    object.unknown34 = 0;
    void *result = meta_vtableOf(&object);
    fn_800AC6A0(&object, -1);   // the class's destructor
    return result;
}

}
#pragma pop
}

namespace igVertexShaderAttr_destructor {
// fn_800AC6A0: the deleting destructor of igVertexShaderAttr. Written by tools/alchemymeta/dtorsrc.py.

META_DECLARE(igVertexShaderAttr)
extern "C" {
void fn_80066DFC(void *object);   // frees an object
}

struct igVertexShaderAttrObject {
    void *__vtable;
    char unknown04[8];
    igObjectRefMember _binaryDefinition;
    igStringMember _textDefinition;
    igStringMember _entryPoint;
    igStringMember _profile;
    igObjectRefMember _dxDeclaration;
    char unknown20[8];
    igObjectRefMember _trackedElements;
    igObjectRefMember _stateList;
    igObjectRefMember _inputList;
    igObjectRefMember _defineList;
    char unknown38[4];
};

extern "C" igVertexShaderAttrObject *fn_800AC6A0(igVertexShaderAttrObject *self, short flags)
{
    if (self) {
        self->__vtable = igVertexShaderAttr_vtable;
        self->_defineList.~igObjectRefMember();
        self->_inputList.~igObjectRefMember();
        self->_stateList.~igObjectRefMember();
        self->_trackedElements.~igObjectRefMember();
        self->_dxDeclaration.~igObjectRefMember();
        self->_profile.~igStringMember();
        self->_entryPoint.~igStringMember();
        self->_textDefinition.~igStringMember();
        self->_binaryDefinition.~igObjectRefMember();
        if (flags > 0) fn_80066DFC(self);
    }
    return self;
}
}

namespace unknown800AC8A8 {
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_800ABC8C();
void *fn_800AC294();
void igVertexShaderAttr_fieldInit();
void *igVertexShaderAttr_getMeta();
void igVertexShaderAttr_vtableRead();
void igVisualAttribute_register();
extern void *igVertexShaderAttr_meta;
void igVertexShaderAttr_register();
void *igVertexShaderAttr_getMetaCall();
}
extern "C" {
void igVertexShaderAttr_arkRegister(){
 meta_registerNow((int)igVertexShaderAttr_register);
}
void igVertexShaderAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igVertexShaderAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igVertexShaderAttr_getMetaCall,(int)igVertexShaderAttr_className,60,(int)igVertexShaderAttr_vtableRead,(int)igVertexShaderAttr_fieldInit,0,(int)igVertexShaderAttr_dependencies);
}
void *igVertexShaderAttr_getMetaCall(){return igVertexShaderAttr_getMeta();}
}
#pragma pop
}

namespace igVertexShaderAttr_fieldInit {
// igVertexShaderAttr: Alchemy class registration (0x800AC968..0x800ACB30). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igVertexShaderAttr)

extern "C" {
void *fn_80035CB0();
void fn_80053650(void *, int);
void fn_80071694(void *, void *);
void *fn_800CE788();
void *fn_800CF6D8();
void *fn_800D26E4();
void *fn_800D3854();
void *fn_800D3FC4();
extern char lbl_8055DEB8[5];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igVertexShaderAttr_fieldInit()
{
    Meta::igMetaObject *meta = igVertexShaderAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igVertexShaderAttr_fieldTypes, 12);
    Meta::igObjectRefMetaField *binaryDefinitionField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_v2 = fn_80035CB0();
    binaryDefinitionField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v2);
    Meta::igStringMetaField *textDefinitionField = static_cast<Meta::igStringMetaField *>(meta_field(meta, base + 1));
    fn_80071694(textDefinitionField, (void *)0);
    Meta::igStringMetaField *entryPointField = static_cast<Meta::igStringMetaField *>(meta_field(meta, base + 2));
    fn_80071694(entryPointField, (void *)lbl_8055DEB8);
    Meta::igStringMetaField *profileField = static_cast<Meta::igStringMetaField *>(meta_field(meta, base + 3));
    fn_80071694(profileField, (void *)0);
    Meta::igObjectRefMetaField *dxDeclarationField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 4));
    void *value_v7 = fn_80035CB0();
    dxDeclarationField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v7);
    Meta::igIntMetaField *vertexShaderHandleField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 5));
    fn_80053650(vertexShaderHandleField, -1);
    vertexShaderHandleField->_persistent = false;
    vertexShaderHandleField->_deepCopyMethod = 4;
    vertexShaderHandleField->_shallowCopyMethod = 4;
    vertexShaderHandleField->_isAlikeShallowMethod = 3;
    Meta::igObjectRefMetaField *trackedElementsField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 7));
    void *value_v10 = fn_800D26E4();
    trackedElementsField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v10);
    trackedElementsField->_construct = true;
    Meta::igObjectRefMetaField *stateListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 8));
    void *value_v12 = fn_800D3854();
    stateListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v12);
    stateListField->_construct = true;
    Meta::igObjectRefMetaField *inputListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 9));
    void *value_v14 = fn_800CF6D8();
    inputListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v14);
    inputListField->_construct = true;
    Meta::igObjectRefMetaField *defineListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 10));
    void *value_v16 = fn_800D3FC4();
    defineListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v16);
    defineListField->_construct = true;
    Meta::igObjectRefMetaField *visualContextField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 11));
    void *value_v18 = fn_800CE788();
    visualContextField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v18);
    visualContextField->_refCounted = false;
    visualContextField->_persistent = false;
    visualContextField->_deepCopyMethod = 4;
    visualContextField->_shallowCopyMethod = 4;
    visualContextField->_isAlikeShallowMethod = 3;
    meta_setupFields(meta, igVertexShaderAttr_fieldNames, igVertexShaderAttr_fieldStorage, igVertexShaderAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace igVertexPipelineModeAttr {
// igVertexPipelineModeAttr: Alchemy class registration (0x800ACB30..0x800ACD08). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igVertexPipelineModeAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_80046E58(void *,void *);
void fn_800ABC8C();
void *fn_800AC294();
void *fn_800CDF6C();
extern char igVertexPipelineModeAttr_fieldNames[4];
extern char igVertexPipelineModeAttr_fieldOffsets[4];
extern char igVertexPipelineModeAttr_fieldStorage[4];
extern char igVertexPipelineModeAttr_fieldTypes[4];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055DED8[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igVertexPipelineModeAttr)

void *igVertexPipelineModeAttr_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igVertexPipelineModeAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igVertexPipelineModeAttr)

void igVertexPipelineModeAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igVertexPipelineModeAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igVertexPipelineModeAttr_getMetaCall,
                       igVertexPipelineModeAttr_className, 0x10,
                       igVertexPipelineModeAttr_vtableRead, igVertexPipelineModeAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igVertexPipelineModeAttr)

void igVertexPipelineModeAttr_fieldInit()
{
    Meta::igMetaObject *meta = igVertexPipelineModeAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igVertexPipelineModeAttr_fieldTypes, 1);
    Meta::igEnumMetaField *modeField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base));
    fn_80046E58(modeField, lbl_8055DED8);
    modeField->_getMetaEnumFunction = reinterpret_cast<void *>((void *)fn_800CDF6C);
    meta_setupFields(meta, igVertexPipelineModeAttr_fieldNames, igVertexPipelineModeAttr_fieldStorage, igVertexPipelineModeAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace igVertexBlendStateAttr {
// igVertexBlendStateAttr: Alchemy class registration (0x800ACD08..0x800ACEBC). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igVertexBlendStateAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_800ABC8C();
void *fn_800AC294();
extern char igVertexBlendStateAttr_fieldNames[4];
extern char igVertexBlendStateAttr_fieldOffsets[4];
extern char igVertexBlendStateAttr_fieldStorage[4];
extern char igVertexBlendStateAttr_fieldTypes[4];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igVertexBlendStateAttr)

void *igVertexBlendStateAttr_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igVertexBlendStateAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igVertexBlendStateAttr)

void igVertexBlendStateAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igVertexBlendStateAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igVertexBlendStateAttr_getMetaCall,
                       igVertexBlendStateAttr_className, 0x10,
                       igVertexBlendStateAttr_vtableRead, igVertexBlendStateAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igVertexBlendStateAttr)

void igVertexBlendStateAttr_fieldInit()
{
    Meta::igMetaObject *meta = igVertexBlendStateAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igVertexBlendStateAttr_fieldTypes, 1);
    meta_setupFields(meta, igVertexBlendStateAttr_fieldNames, igVertexBlendStateAttr_fieldStorage, igVertexBlendStateAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace igVertexBlendMatrixListAttr {
// igVertexBlendMatrixListAttr: Alchemy class registration (0x800ACEBC..0x800AD0A8). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igVertexBlendMatrixListAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_800ABC8C();
void *fn_800AC294();
void fn_801285A0(void *);
extern char igVertexBlendMatrixListAttr_dependencies[8];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

struct Instance_LigVertexBlendMatrixListAttr_0 : igObjectInstance {
    inline Instance_LigVertexBlendMatrixListAttr_0()
    {
        __vtable = lbl_8047D578;
    }
};

struct Instance_LigVertexBlendMatrixListAttr_1 : Instance_LigVertexBlendMatrixListAttr_0 {
    inline Instance_LigVertexBlendMatrixListAttr_1()
    {
        __vtable = lbl_8047E50C;
    }
};

struct igVertexBlendMatrixListAttrInstance : Instance_LigVertexBlendMatrixListAttr_1 {
    char unknown04[20];
    igObjectRefMember _matrixList;
    char unknown1C[64];
    char unknown5C[64];
    inline igVertexBlendMatrixListAttrInstance()
    {
        __vtable = igVertexBlendMatrixListAttr_vtable;
        _matrixList._value = 0;
        fn_801285A0(&unknown1C);
        fn_801285A0(&unknown5C);
    }
    inline ~igVertexBlendMatrixListAttrInstance() { __vtable = igVertexBlendMatrixListAttr_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igVertexBlendMatrixListAttr)

META_GET_META(igVertexBlendMatrixListAttr)

void *igVertexBlendMatrixListAttr_vtableRead()
{
    igVertexBlendMatrixListAttrInstance object;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igVertexBlendMatrixListAttr)

void igVertexBlendMatrixListAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igVertexBlendMatrixListAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igVertexBlendMatrixListAttr_getMetaCall,
                       igVertexBlendMatrixListAttr_className, 0x9C,
                       igVertexBlendMatrixListAttr_vtableRead, igVertexBlendMatrixListAttr_fieldInit, 0, igVertexBlendMatrixListAttr_dependencies);
}

META_GET_META_CALL(igVertexBlendMatrixListAttr)

}
#pragma pop
}

namespace igVertexBlendMatrixListAttr_fieldInit {
// igVertexBlendMatrixListAttr: Alchemy class registration (0x800AD0A8..0x800AD19C). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igVertexBlendMatrixListAttr)

extern "C" {
void fn_80053650(void *, int);
void *fn_80217F4C();
}

#pragma push
#pragma auto_inline off
extern "C" {

void igVertexBlendMatrixListAttr_fieldInit()
{
    Meta::igMetaObject *meta = igVertexBlendMatrixListAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igVertexBlendMatrixListAttr_fieldTypes, 7);
    Meta::igBoolMetaField *isSkeletonTransformIdentityField = static_cast<Meta::igBoolMetaField *>(meta_field(meta, base));
    void *value_v2 = fn_80217F4C();
    *reinterpret_cast<void **>(reinterpret_cast<char *>(isSkeletonTransformIdentityField) + 0x38) = value_v2;
    *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(isSkeletonTransformIdentityField) + 0x34) = 1;
    Meta::igIntMetaField *currentMatrixCountField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 3));
    currentMatrixCountField->_persistent = false;
    currentMatrixCountField->_isAlikeShallowMethod = 3;
    Meta::igObjectRefMetaField *matrixListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 4));
    matrixListField->_persistent = false;
    Meta::igMatrix44fMetaField *skeletonTransformField = static_cast<Meta::igMatrix44fMetaField *>(meta_field(meta, base + 5));
    skeletonTransformField->_persistent = false;
    Meta::igMatrix44fMetaField *skeletonInverseTransformField = static_cast<Meta::igMatrix44fMetaField *>(meta_field(meta, base + 6));
    fn_80053650(skeletonInverseTransformField, -1);
    skeletonInverseTransformField->_persistent = false;
    meta_setupFields(meta, igVertexBlendMatrixListAttr_fieldNames, igVertexBlendMatrixListAttr_fieldStorage, igVertexBlendMatrixListAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace igVertexBlendMatrixAttrList {
// igVertexBlendMatrixAttrList: Alchemy class registration (0x800AD19C..0x800AD2FC). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igVertexBlendMatrixAttrList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_800ABC8C();
extern char igVertexBlendMatrixAttrList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_8047E3E4[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igVertexBlendMatrixAttrList)

void *igVertexBlendMatrixAttrList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_8047E3E4;
    object.__vtable = igVertexBlendMatrixAttrList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igVertexBlendMatrixAttrList)

void igVertexBlendMatrixAttrList_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igVertexBlendMatrixAttrList_meta, igObjectList_register,
                       fn_80024180, igVertexBlendMatrixAttrList_getMetaCall,
                       igVertexBlendMatrixAttrList_className, 0x14,
                       igVertexBlendMatrixAttrList_vtableRead, 0, 0, igVertexBlendMatrixAttrList_dependencies);
}

META_GET_META_CALL(igVertexBlendMatrixAttrList)

}
#pragma pop
}

namespace igVertexBlendMatrixAttr {
// igVertexBlendMatrixAttr: Alchemy class registration (0x800AD2FC..0x800AD488). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igVertexBlendMatrixAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_800ABC8C();
void *fn_800AC294();
void fn_801285A0(void *);
extern char lbl_8047D578[128];
extern char lbl_8047E50C[132];
}

struct Instance_LigVertexBlendMatrixAttr_0 : igObjectInstance {
};

struct Instance_LigVertexBlendMatrixAttr_1 : Instance_LigVertexBlendMatrixAttr_0 {
};

struct Instance_LigVertexBlendMatrixAttr_2 : Instance_LigVertexBlendMatrixAttr_1 {
    char unknown04[8];
    char unknown0C[68];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igVertexBlendMatrixAttr)

META_GET_META(igVertexBlendMatrixAttr)

void *igVertexBlendMatrixAttr_vtableRead()
{
    Instance_LigVertexBlendMatrixAttr_2 object;
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igVertexBlendMatrixAttr_vtable;
    fn_801285A0(&object.unknown0C);
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igVertexBlendMatrixAttr)

void igVertexBlendMatrixAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igVertexBlendMatrixAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igVertexBlendMatrixAttr_getMetaCall,
                       igVertexBlendMatrixAttr_className, 0x50,
                       igVertexBlendMatrixAttr_vtableRead, igVertexBlendMatrixAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igVertexBlendMatrixAttr)

}
#pragma pop
}

namespace igVertexBlendMatrixAttr_2 {
// igVertexBlendMatrixAttr: Alchemy class registration (0x800AD488..0x800AD574). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igVertexBlendMatrixAttr)

extern "C" {
void fn_800C4F84();
void fn_80124504(void *, void *);
extern char igVertexBlendMatrixAttr_fieldNames[8];
extern char igVertexBlendMatrixAttr_fieldOffsets[8];
extern char igVertexBlendMatrixAttr_fieldStorage[8];
extern char igVertexBlendMatrixAttr_fieldTypes[8];
extern char lbl_80566810[4];
extern char lbl_80566814[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igVertexBlendMatrixAttr_fieldInit()
{
    float local[20];
    Meta::igMetaObject *meta = igVertexBlendMatrixAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igVertexBlendMatrixAttr_fieldTypes, 2);
    Meta::igMatrix44fMetaField *mField = static_cast<Meta::igMatrix44fMetaField *>(meta_field(meta, base));
    local[0] = *reinterpret_cast<float *>(lbl_80566810);
    local[1] = *reinterpret_cast<float *>(lbl_80566814);
    local[2] = *reinterpret_cast<float *>(lbl_80566814);
    local[3] = *reinterpret_cast<float *>(lbl_80566814);
    local[4] = *reinterpret_cast<float *>(lbl_80566810);
    local[5] = *reinterpret_cast<float *>(lbl_80566814);
    local[6] = *reinterpret_cast<float *>(lbl_80566814);
    local[7] = *reinterpret_cast<float *>(lbl_80566814);
    local[8] = *reinterpret_cast<float *>(lbl_80566814);
    local[9] = *reinterpret_cast<float *>(lbl_80566810);
    local[10] = *reinterpret_cast<float *>(lbl_80566814);
    local[11] = *reinterpret_cast<float *>(lbl_80566814);
    local[12] = *reinterpret_cast<float *>(lbl_80566814);
    local[13] = *reinterpret_cast<float *>(lbl_80566814);
    local[14] = *reinterpret_cast<float *>(lbl_80566810);
    local[15] = *reinterpret_cast<float *>(lbl_80566814);
    local[16] = *reinterpret_cast<float *>(lbl_80566814);
    local[17] = *reinterpret_cast<float *>(lbl_80566814);
    local[18] = *reinterpret_cast<float *>(lbl_80566814);
    local[19] = *reinterpret_cast<float *>(lbl_80566810);
    fn_80124504(mField, &local[4]);
    Meta::igUnsignedShortMetaField *blendMatIDField = static_cast<Meta::igUnsignedShortMetaField *>(meta_field(meta, base + 1));
    blendMatIDField->_invarianceFunction = reinterpret_cast<void *>(fn_800C4F84);
    meta_setupFields(meta, igVertexBlendMatrixAttr_fieldNames, igVertexBlendMatrixAttr_fieldStorage, igVertexBlendMatrixAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace unknown800AD574 {
#pragma push
#pragma auto_inline off
extern "C" {
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
void fn_800ABC8C();
void *fn_800AC294();
void *fn_800C4BF8(int);
void igCustomStateCollectionAttr_register();
void igTimeAttr_fieldInit();
void igVisualAttribute_register();
extern char igVectorConstantAttr_vtable[];
extern char igTimeAttr_vtable[];
extern char lbl_8047CD74[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char igVectorConstantAttr_fieldTypes[8];
extern char igVectorConstantAttr_fieldNames[8];
extern char igVectorConstantAttr_fieldStorage[8];
extern char igVectorConstantAttr_fieldOffsets[8];
extern void *lbl_805621F4;
extern void *igVectorConstantAttr_meta;
extern void *igTimeAttr_meta;
extern void *igCustomStateCollectionAttr_meta;
void *igVectorConstantAttr_getMeta();
void *igVectorConstantAttr_vtableRead();
void igVectorConstantAttr_arkRegister();
void igVectorConstantAttr_register();
void *igVectorConstantAttr_getMetaCall();
void *fn_800AD708();
void igVectorConstantAttr_fieldInit();
void *igTimeAttr_getMeta();
void *igTimeAttr_vtableRead();
void igTimeAttr_arkRegister();
void igTimeAttr_register();
void *igTimeAttr_getMetaCall();
}
struct UnknownGenObject800AD5EC_0 {
 void *unknown00;
 char unknown04[36];
};
struct UnknownGenObject800AD840_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800AD574(){
 if(!igVectorConstantAttr_meta) igVectorConstantAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igVectorConstantAttr_meta;
}
}
#pragma pop
}

namespace igVectorConstantAttr {
// igVectorConstantAttr: Alchemy class registration (0x800AD5B0..0x800AD708). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igVectorConstantAttr)
META_DECLARE(igCustomStateCollectionAttr)

extern "C" {
void fn_800ABC8C();
void *fn_800AD708();
extern char lbl_8047CD74[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igVectorConstantAttr)

void *igVectorConstantAttr_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[36];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = lbl_8047CD74;
    object.__vtable = igVectorConstantAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igVectorConstantAttr)

void igVectorConstantAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igVectorConstantAttr_meta, igCustomStateCollectionAttr_register,
                       fn_800AD708, igVectorConstantAttr_getMetaCall,
                       igVectorConstantAttr_className, 0x20,
                       igVectorConstantAttr_vtableRead, igVectorConstantAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igVectorConstantAttr)

}
#pragma pop
}

namespace unknown800AD708 {
#pragma push
#pragma auto_inline off
extern "C" {
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
void fn_800ABC8C();
void *fn_800AC294();
void *fn_800C4BF8(int);
void igCustomStateCollectionAttr_register();
void igTimeAttr_fieldInit();
void igVisualAttribute_register();
extern char igVectorConstantAttr_vtable[];
extern char igTimeAttr_vtable[];
extern char lbl_8047CD74[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char igVectorConstantAttr_fieldTypes[8];
extern char igVectorConstantAttr_fieldNames[8];
extern char igVectorConstantAttr_fieldStorage[8];
extern char igVectorConstantAttr_fieldOffsets[8];
extern void *lbl_805621F4;
extern void *igVectorConstantAttr_meta;
extern void *igTimeAttr_meta;
extern void *igCustomStateCollectionAttr_meta;
void *igVectorConstantAttr_getMeta();
void *igVectorConstantAttr_vtableRead();
void igVectorConstantAttr_arkRegister();
void igVectorConstantAttr_register();
void *igVectorConstantAttr_getMetaCall();
void *fn_800AD708();
void igVectorConstantAttr_fieldInit();
void *igTimeAttr_getMeta();
void *igTimeAttr_vtableRead();
void igTimeAttr_arkRegister();
void igTimeAttr_register();
void *igTimeAttr_getMetaCall();
}
struct UnknownGenObject800AD5EC_0 {
 void *unknown00;
 char unknown04[36];
};
struct UnknownGenObject800AD840_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800AD708(){return igCustomStateCollectionAttr_meta;}
}
#pragma pop
}

namespace igVectorConstantAttr_2 {
// igVectorConstantAttr: Alchemy class registration (0x800AD710..0x800AD790). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igVectorConstantAttr)

extern "C" {
void *fn_800C4BF8(int);
extern char igVectorConstantAttr_fieldNames[8];
extern char igVectorConstantAttr_fieldOffsets[8];
extern char igVectorConstantAttr_fieldStorage[8];
extern char igVectorConstantAttr_fieldTypes[8];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igVectorConstantAttr_fieldInit()
{
    Meta::igMetaObject *meta = igVectorConstantAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igVectorConstantAttr_fieldTypes, 2);
    Meta::igIntMetaField *unitIDField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 1));
    unitIDField->_invarianceFunction = reinterpret_cast<void *>((void *)fn_800C4BF8);
    meta_setupFields(meta, igVectorConstantAttr_fieldNames, igVectorConstantAttr_fieldStorage, igVectorConstantAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace igTimeAttr {
// igTimeAttr: Alchemy class registration (0x800AD790..0x800AD7C8). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igTimeAttr)

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igTimeAttr)

}
#pragma pop
}

namespace unknown800AD7C8 {
#pragma push
#pragma auto_inline off
extern "C" {
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
void fn_800ABC8C();
void *fn_800AC294();
void *fn_800C4BF8(int);
void igCustomStateCollectionAttr_register();
void igTimeAttr_fieldInit();
void igVisualAttribute_register();
extern char igVectorConstantAttr_vtable[];
extern char igTimeAttr_vtable[];
extern char lbl_8047CD74[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char igVectorConstantAttr_fieldTypes[8];
extern char igVectorConstantAttr_fieldNames[8];
extern char igVectorConstantAttr_fieldStorage[8];
extern char igVectorConstantAttr_fieldOffsets[8];
extern void *lbl_805621F4;
extern void *igVectorConstantAttr_meta;
extern void *igTimeAttr_meta;
extern void *igCustomStateCollectionAttr_meta;
void *igVectorConstantAttr_getMeta();
void *igVectorConstantAttr_vtableRead();
void igVectorConstantAttr_arkRegister();
void igVectorConstantAttr_register();
void *igVectorConstantAttr_getMetaCall();
void *fn_800AD708();
void igVectorConstantAttr_fieldInit();
void *igTimeAttr_getMeta();
void *igTimeAttr_vtableRead();
void igTimeAttr_arkRegister();
void igTimeAttr_register();
void *igTimeAttr_getMetaCall();
}
struct UnknownGenObject800AD5EC_0 {
 void *unknown00;
 char unknown04[36];
};
struct UnknownGenObject800AD840_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800AD7C8(){
 if(!igTimeAttr_meta) igTimeAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igTimeAttr_meta;
}
}
#pragma pop
}

namespace igTimeAttr_2 {
// igTimeAttr: Alchemy class registration (0x800AD804..0x800AD9D0). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igTimeAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_80054BC8(void *, long long);
void fn_800ABC8C();
void *fn_800AC294();
extern char igTimeAttr_fieldNames[4];
extern char igTimeAttr_fieldOffsets[4];
extern char igTimeAttr_fieldStorage[4];
extern char igTimeAttr_fieldTypes[4];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igTimeAttr)

void *igTimeAttr_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igTimeAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igTimeAttr)

void igTimeAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igTimeAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igTimeAttr_getMetaCall,
                       igTimeAttr_className, 0x18,
                       igTimeAttr_vtableRead, igTimeAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igTimeAttr)

void igTimeAttr_fieldInit()
{
    Meta::igMetaObject *meta = igTimeAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igTimeAttr_fieldTypes, 1);
    Meta::igLongMetaField *timeField = static_cast<Meta::igLongMetaField *>(meta_field(meta, base));
    fn_80054BC8(timeField, 0);
    meta_setupFields(meta, igTimeAttr_fieldNames, igTimeAttr_fieldStorage, igTimeAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace unknown800AD9D0 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
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
void fn_800ABC8C();
void *fn_800AC294();
void igTextureMatrixAttr_arkRegister();
void *fn_800AF4A4();
void *fn_800C4880(int);
void *fn_800C49B4(int);
void *fn_800C4B28(int);
void igObjectList_register();
void igVisualAttribute_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igTextureUnloadAttr_vtable[];
extern char igTextureStateAttr_vtable[];
extern char igTextureMatrixStateAttr_vtable[];
extern char lbl_8047D578[];
extern char igTextureMatrixAttrList_vtable[];
extern char lbl_8047E31C[];
extern char lbl_8047E50C[];
extern char igTextureUnloadAttr_dependencies[8];
extern char igTextureUnloadAttr_fieldTypes[8];
extern char igTextureUnloadAttr_fieldNames[8];
extern char igTextureUnloadAttr_fieldStorage[8];
extern char igTextureUnloadAttr_fieldOffsets[8];
extern char igTextureStateAttr_fieldTypes[8];
extern char igTextureStateAttr_fieldNames[8];
extern char igTextureStateAttr_fieldStorage[8];
extern char igTextureStateAttr_fieldOffsets[8];
extern char igTextureMatrixStateAttr_fieldTypes[8];
extern char igTextureMatrixStateAttr_fieldNames[8];
extern char igTextureMatrixStateAttr_fieldStorage[8];
extern char igTextureMatrixStateAttr_fieldOffsets[8];
extern char igTextureMatrixAttrList_dependencies[8];
extern void *lbl_805621F4;
extern void *igTextureUnloadAttr_meta;
extern void *igTextureStateAttr_meta;
extern void *igTextureMatrixStateAttr_meta;
extern void *igTextureMatrixAttrList_meta;
extern void *igTextureMatrixAttr_meta;
void *igTextureUnloadAttr_getMeta();
void *igTextureUnloadAttr_vtableRead();
void igTextureUnloadAttr_arkRegister();
void igTextureUnloadAttr_register();
void *igTextureUnloadAttr_getMetaCall();
void igTextureUnloadAttr_fieldInit();
void *igTextureStateAttr_getMeta();
void *igTextureStateAttr_vtableRead();
void igTextureStateAttr_arkRegister();
void igTextureStateAttr_register();
void *igTextureStateAttr_getMetaCall();
void igTextureStateAttr_fieldInit();
void *igTextureMatrixStateAttr_getMeta();
void *igTextureMatrixStateAttr_vtableRead();
void igTextureMatrixStateAttr_arkRegister();
void igTextureMatrixStateAttr_register();
void *igTextureMatrixStateAttr_getMetaCall();
void igTextureMatrixStateAttr_fieldInit();
void *igTextureMatrixAttrList_getMeta();
void *igTextureMatrixAttrList_vtableRead();
void igTextureMatrixAttrList_arkRegister();
void igTextureMatrixAttrList_register();
void *igTextureMatrixAttrList_getMetaCall();
}
struct UnknownGenObject800ADA48_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800ADCAC_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800ADEB0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800AE07C_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800AD9D0(){
 if(!igTextureUnloadAttr_meta) igTextureUnloadAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igTextureUnloadAttr_meta;
}
}
#pragma pop
}

namespace igTextureUnloadAttr {
// igTextureUnloadAttr: Alchemy class registration (0x800ADA0C..0x800ADBFC). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igTextureUnloadAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_800ABC8C();
void *fn_800AC294();
void *fn_800AF4A4();
void *fn_800C4B28(int);
extern char igTextureUnloadAttr_dependencies[8];
extern char igTextureUnloadAttr_fieldNames[8];
extern char igTextureUnloadAttr_fieldOffsets[8];
extern char igTextureUnloadAttr_fieldStorage[8];
extern char igTextureUnloadAttr_fieldTypes[8];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igTextureUnloadAttr)

void *igTextureUnloadAttr_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igTextureUnloadAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igTextureUnloadAttr)

void igTextureUnloadAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igTextureUnloadAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igTextureUnloadAttr_getMetaCall,
                       igTextureUnloadAttr_className, 0x14,
                       igTextureUnloadAttr_vtableRead, igTextureUnloadAttr_fieldInit, 0, igTextureUnloadAttr_dependencies);
}

META_GET_META_CALL(igTextureUnloadAttr)

void igTextureUnloadAttr_fieldInit()
{
    Meta::igMetaObject *meta = igTextureUnloadAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igTextureUnloadAttr_fieldTypes, 2);
    Meta::igObjectRefMetaField *textureField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_800AF4A4();
    textureField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    textureField->_refCounted = false;
    Meta::igIntMetaField *unitIDField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 1));
    unitIDField->_invarianceFunction = reinterpret_cast<void *>((void *)fn_800C4B28);
    meta_setupFields(meta, igTextureUnloadAttr_fieldNames, igTextureUnloadAttr_fieldStorage, igTextureUnloadAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace igTextureStateAttr {
// igTextureStateAttr: Alchemy class registration (0x800ADBFC..0x800ADC34). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igTextureStateAttr)

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igTextureStateAttr)

}
#pragma pop
}

namespace unknown800ADC34 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
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
void fn_800ABC8C();
void *fn_800AC294();
void igTextureMatrixAttr_arkRegister();
void *fn_800AF4A4();
void *fn_800C4880(int);
void *fn_800C49B4(int);
void *fn_800C4B28(int);
void igObjectList_register();
void igVisualAttribute_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igTextureUnloadAttr_vtable[];
extern char igTextureStateAttr_vtable[];
extern char igTextureMatrixStateAttr_vtable[];
extern char lbl_8047D578[];
extern char igTextureMatrixAttrList_vtable[];
extern char lbl_8047E31C[];
extern char lbl_8047E50C[];
extern char igTextureUnloadAttr_dependencies[8];
extern char igTextureUnloadAttr_fieldTypes[8];
extern char igTextureUnloadAttr_fieldNames[8];
extern char igTextureUnloadAttr_fieldStorage[8];
extern char igTextureUnloadAttr_fieldOffsets[8];
extern char igTextureStateAttr_fieldTypes[8];
extern char igTextureStateAttr_fieldNames[8];
extern char igTextureStateAttr_fieldStorage[8];
extern char igTextureStateAttr_fieldOffsets[8];
extern char igTextureMatrixStateAttr_fieldTypes[8];
extern char igTextureMatrixStateAttr_fieldNames[8];
extern char igTextureMatrixStateAttr_fieldStorage[8];
extern char igTextureMatrixStateAttr_fieldOffsets[8];
extern char igTextureMatrixAttrList_dependencies[8];
extern void *lbl_805621F4;
extern void *igTextureUnloadAttr_meta;
extern void *igTextureStateAttr_meta;
extern void *igTextureMatrixStateAttr_meta;
extern void *igTextureMatrixAttrList_meta;
extern void *igTextureMatrixAttr_meta;
void *igTextureUnloadAttr_getMeta();
void *igTextureUnloadAttr_vtableRead();
void igTextureUnloadAttr_arkRegister();
void igTextureUnloadAttr_register();
void *igTextureUnloadAttr_getMetaCall();
void igTextureUnloadAttr_fieldInit();
void *igTextureStateAttr_getMeta();
void *igTextureStateAttr_vtableRead();
void igTextureStateAttr_arkRegister();
void igTextureStateAttr_register();
void *igTextureStateAttr_getMetaCall();
void igTextureStateAttr_fieldInit();
void *igTextureMatrixStateAttr_getMeta();
void *igTextureMatrixStateAttr_vtableRead();
void igTextureMatrixStateAttr_arkRegister();
void igTextureMatrixStateAttr_register();
void *igTextureMatrixStateAttr_getMetaCall();
void igTextureMatrixStateAttr_fieldInit();
void *igTextureMatrixAttrList_getMeta();
void *igTextureMatrixAttrList_vtableRead();
void igTextureMatrixAttrList_arkRegister();
void igTextureMatrixAttrList_register();
void *igTextureMatrixAttrList_getMetaCall();
}
struct UnknownGenObject800ADA48_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800ADCAC_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800ADEB0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800AE07C_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800ADC34(){
 if(!igTextureStateAttr_meta) igTextureStateAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igTextureStateAttr_meta;
}
}
#pragma pop
}

namespace igTextureStateAttr_2 {
// igTextureStateAttr: Alchemy class registration (0x800ADC70..0x800ADE3C). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igTextureStateAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_800ABC8C();
void *fn_800AC294();
void *fn_800C49B4(int);
extern char igTextureStateAttr_fieldNames[8];
extern char igTextureStateAttr_fieldOffsets[8];
extern char igTextureStateAttr_fieldStorage[8];
extern char igTextureStateAttr_fieldTypes[8];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igTextureStateAttr)

void *igTextureStateAttr_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igTextureStateAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igTextureStateAttr)

void igTextureStateAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igTextureStateAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igTextureStateAttr_getMetaCall,
                       igTextureStateAttr_className, 0x14,
                       igTextureStateAttr_vtableRead, igTextureStateAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igTextureStateAttr)

void igTextureStateAttr_fieldInit()
{
    Meta::igMetaObject *meta = igTextureStateAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igTextureStateAttr_fieldTypes, 2);
    Meta::igIntMetaField *unitIDField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 1));
    unitIDField->_invarianceFunction = reinterpret_cast<void *>((void *)fn_800C49B4);
    meta_setupFields(meta, igTextureStateAttr_fieldNames, igTextureStateAttr_fieldStorage, igTextureStateAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace igTextureMatrixStateAttr {
// igTextureMatrixStateAttr: Alchemy class registration (0x800ADE3C..0x800AE040). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igTextureMatrixStateAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_800ABC8C();
void *fn_800AC294();
void *fn_800C4880(int);
extern char igTextureMatrixStateAttr_fieldNames[8];
extern char igTextureMatrixStateAttr_fieldOffsets[8];
extern char igTextureMatrixStateAttr_fieldStorage[8];
extern char igTextureMatrixStateAttr_fieldTypes[8];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igTextureMatrixStateAttr)

META_GET_META(igTextureMatrixStateAttr)

void *igTextureMatrixStateAttr_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igTextureMatrixStateAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igTextureMatrixStateAttr)

void igTextureMatrixStateAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igTextureMatrixStateAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igTextureMatrixStateAttr_getMetaCall,
                       igTextureMatrixStateAttr_className, 0x14,
                       igTextureMatrixStateAttr_vtableRead, igTextureMatrixStateAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igTextureMatrixStateAttr)

void igTextureMatrixStateAttr_fieldInit()
{
    Meta::igMetaObject *meta = igTextureMatrixStateAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igTextureMatrixStateAttr_fieldTypes, 2);
    Meta::igIntMetaField *unitIDField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 1));
    unitIDField->_invarianceFunction = reinterpret_cast<void *>((void *)fn_800C4880);
    meta_setupFields(meta, igTextureMatrixStateAttr_fieldNames, igTextureMatrixStateAttr_fieldStorage, igTextureMatrixStateAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace igTextureMatrixAttrList {
// igTextureMatrixAttrList: Alchemy class registration (0x800AE040..0x800AE1A0). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igTextureMatrixAttrList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_800ABC8C();
extern char igTextureMatrixAttrList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_8047E31C[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igTextureMatrixAttrList)

void *igTextureMatrixAttrList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_8047E31C;
    object.__vtable = igTextureMatrixAttrList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igTextureMatrixAttrList)

void igTextureMatrixAttrList_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igTextureMatrixAttrList_meta, igObjectList_register,
                       fn_80024180, igTextureMatrixAttrList_getMetaCall,
                       igTextureMatrixAttrList_className, 0x14,
                       igTextureMatrixAttrList_vtableRead, 0, 0, igTextureMatrixAttrList_dependencies);
}

META_GET_META_CALL(igTextureMatrixAttrList)

}
#pragma pop
}

namespace igTextureMatrixAttr {
// igTextureMatrixAttr: Alchemy class registration (0x800AE1A0..0x800AE1D8). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igTextureMatrixAttr)

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igTextureMatrixAttr)

}
#pragma pop
}

namespace unknown800AE1D8 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
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
void fn_800ABC8C();
void *fn_800AC294();
void igTextureMatrixAttr_arkRegister();
void *fn_800AF4A4();
void *fn_800C4880(int);
void *fn_800C49B4(int);
void *fn_800C4B28(int);
void igObjectList_register();
void igVisualAttribute_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igTextureUnloadAttr_vtable[];
extern char igTextureStateAttr_vtable[];
extern char igTextureMatrixStateAttr_vtable[];
extern char lbl_8047D578[];
extern char igTextureMatrixAttrList_vtable[];
extern char lbl_8047E31C[];
extern char lbl_8047E50C[];
extern char igTextureUnloadAttr_dependencies[8];
extern char igTextureUnloadAttr_fieldTypes[8];
extern char igTextureUnloadAttr_fieldNames[8];
extern char igTextureUnloadAttr_fieldStorage[8];
extern char igTextureUnloadAttr_fieldOffsets[8];
extern char igTextureStateAttr_fieldTypes[8];
extern char igTextureStateAttr_fieldNames[8];
extern char igTextureStateAttr_fieldStorage[8];
extern char igTextureStateAttr_fieldOffsets[8];
extern char igTextureMatrixStateAttr_fieldTypes[8];
extern char igTextureMatrixStateAttr_fieldNames[8];
extern char igTextureMatrixStateAttr_fieldStorage[8];
extern char igTextureMatrixStateAttr_fieldOffsets[8];
extern char igTextureMatrixAttrList_dependencies[8];
extern void *lbl_805621F4;
extern void *igTextureUnloadAttr_meta;
extern void *igTextureStateAttr_meta;
extern void *igTextureMatrixStateAttr_meta;
extern void *igTextureMatrixAttrList_meta;
extern void *igTextureMatrixAttr_meta;
void *igTextureUnloadAttr_getMeta();
void *igTextureUnloadAttr_vtableRead();
void igTextureUnloadAttr_arkRegister();
void igTextureUnloadAttr_register();
void *igTextureUnloadAttr_getMetaCall();
void igTextureUnloadAttr_fieldInit();
void *igTextureStateAttr_getMeta();
void *igTextureStateAttr_vtableRead();
void igTextureStateAttr_arkRegister();
void igTextureStateAttr_register();
void *igTextureStateAttr_getMetaCall();
void igTextureStateAttr_fieldInit();
void *igTextureMatrixStateAttr_getMeta();
void *igTextureMatrixStateAttr_vtableRead();
void igTextureMatrixStateAttr_arkRegister();
void igTextureMatrixStateAttr_register();
void *igTextureMatrixStateAttr_getMetaCall();
void igTextureMatrixStateAttr_fieldInit();
void *igTextureMatrixAttrList_getMeta();
void *igTextureMatrixAttrList_vtableRead();
void igTextureMatrixAttrList_arkRegister();
void igTextureMatrixAttrList_register();
void *igTextureMatrixAttrList_getMetaCall();
}
struct UnknownGenObject800ADA48_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800ADCAC_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800ADEB0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800AE07C_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800AE1D8(){
 if(!igTextureMatrixAttr_meta) igTextureMatrixAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igTextureMatrixAttr_meta;
}
}
#pragma pop
}

namespace igTextureMatrixAttr_2 {
// igTextureMatrixAttr: Alchemy class registration (0x800AE214..0x800AE368). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igTextureMatrixAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_800ABC8C();
void *fn_800AC294();
void fn_801285A0(void *);
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

struct Instance_LigTextureMatrixAttr_0 : igObjectInstance {
};

struct Instance_LigTextureMatrixAttr_1 : Instance_LigTextureMatrixAttr_0 {
};

struct Instance_LigTextureMatrixAttr_2 : Instance_LigTextureMatrixAttr_1 {
    char unknown04[8];
    char unknown0C[72];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igTextureMatrixAttr)

void *igTextureMatrixAttr_vtableRead()
{
    Instance_LigTextureMatrixAttr_2 object;
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igTextureMatrixAttr_vtable;
    fn_801285A0(&object.unknown0C);
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igTextureMatrixAttr)

void igTextureMatrixAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igTextureMatrixAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igTextureMatrixAttr_getMetaCall,
                       igTextureMatrixAttr_className, 0x54,
                       igTextureMatrixAttr_vtableRead, igTextureMatrixAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igTextureMatrixAttr)

}
#pragma pop
}

namespace igTextureMatrixAttr_fieldInit {
// igTextureMatrixAttr: Alchemy class registration (0x800AE368..0x800AE470). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igTextureMatrixAttr)

extern "C" {
void fn_800711A8(void *, int);
void fn_800C4734();
void fn_80124504(void *, void *);
extern const char lbl_80566810[4];
extern const char lbl_80566814[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igTextureMatrixAttr_fieldInit()
{
    float local[20];
    Meta::igMetaObject *meta = igTextureMatrixAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igTextureMatrixAttr_fieldTypes, 4);
    Meta::igMatrix44fMetaField *mField = static_cast<Meta::igMatrix44fMetaField *>(meta_field(meta, base));
    local[0] = *reinterpret_cast<const float *>(lbl_80566810);
    local[1] = *reinterpret_cast<const float *>(lbl_80566814);
    local[2] = *reinterpret_cast<const float *>(lbl_80566814);
    local[3] = *reinterpret_cast<const float *>(lbl_80566814);
    local[4] = *reinterpret_cast<const float *>(lbl_80566810);
    local[5] = *reinterpret_cast<const float *>(lbl_80566814);
    local[6] = *reinterpret_cast<const float *>(lbl_80566814);
    local[7] = *reinterpret_cast<const float *>(lbl_80566814);
    local[8] = *reinterpret_cast<const float *>(lbl_80566814);
    local[9] = *reinterpret_cast<const float *>(lbl_80566810);
    local[10] = *reinterpret_cast<const float *>(lbl_80566814);
    local[11] = *reinterpret_cast<const float *>(lbl_80566814);
    local[12] = *reinterpret_cast<const float *>(lbl_80566814);
    local[13] = *reinterpret_cast<const float *>(lbl_80566814);
    local[14] = *reinterpret_cast<const float *>(lbl_80566810);
    local[15] = *reinterpret_cast<const float *>(lbl_80566814);
    local[16] = *reinterpret_cast<const float *>(lbl_80566814);
    local[17] = *reinterpret_cast<const float *>(lbl_80566814);
    local[18] = *reinterpret_cast<const float *>(lbl_80566814);
    local[19] = *reinterpret_cast<const float *>(lbl_80566810);
    fn_80124504(mField, &local[4]);
    Meta::igIntMetaField *unitIDField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 1));
    unitIDField->_invarianceFunction = reinterpret_cast<void *>(fn_800C4734);
    Meta::igShortMetaField *outputElementCountField = static_cast<Meta::igShortMetaField *>(meta_field(meta, base + 2));
    fn_800711A8(outputElementCountField, -1);
    meta_setupFields(meta, igTextureMatrixAttr_fieldNames, igTextureMatrixAttr_fieldStorage, igTextureMatrixAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace igTextureInfo {
// igTextureInfo: Alchemy class registration (0x800AE470..0x800AE5A4). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igTextureInfo)
META_DECLARE(igInfo)
META_DECLARE(igNamedObject)

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct igInfoInstance : igNamedObjectInstance {
    inline ~igInfoInstance() { __vtable = igInfo_vtable; }
};

struct igTextureInfoInstance : igInfoInstance {
    char unknown0C[8];
    igObjectRefMember _textureList;
    char unknown18[8];
    inline ~igTextureInfoInstance() { __vtable = igTextureInfo_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igTextureInfo)

void *igTextureInfo_vtableRead()
{
    igTextureInfoInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igInfo_vtable;
    object.__vtable = igTextureInfo_vtable;
    object._textureList._value = 0;
    return meta_vtableOf(&object);
}

}
#pragma pop
}

namespace unknown800AE5A4 {
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void *fn_800284EC();
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
void fn_800ABC8C();
void *fn_800AC294();
void *fn_800AEA50();
void *fn_800BAAC4();
void igInfo_register();
void igTextureFunctionAttr_fieldInit();
void igVisualAttribute_register();
extern char igInfo_vtable[];
extern char igNamedObject_vtable[];
extern char igTextureInfo_vtable[];
extern char igTextureFunctionAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char igTextureInfo_dependencies[8];
extern char igTextureInfo_fieldTypes[4];
extern char igTextureInfo_fieldNames[4];
extern char igTextureInfo_fieldStorage[4];
extern char igTextureInfo_fieldOffsets[4];
extern void *lbl_805621F4;
extern void *igTextureInfo_meta;
extern void *igTextureFunctionAttr_meta;
void *igTextureInfo_getMeta();
void *igTextureInfo_vtableRead();
void igTextureInfo_arkRegister();
void igTextureInfo_register();
void *igTextureInfo_getMetaCall();
void igTextureInfo_fieldInit();
void *igTextureFunctionAttr_getMeta();
void *igTextureFunctionAttr_vtableRead();
void igTextureFunctionAttr_arkRegister();
void igTextureFunctionAttr_register();
void *igTextureFunctionAttr_getMetaCall();
}
struct UnknownGenRoot800AE4AC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800AE4AC(){igObject_construct(this);}
};
struct UnknownGenObject800AE4AC_0 : UnknownGenRoot800AE4AC {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800AE4AC_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject800AE4AC_1 : UnknownGenObject800AE4AC_0 {
 inline ~UnknownGenObject800AE4AC_1(){unknown00=igInfo_vtable;}
};
struct UnknownGenObject800AE4AC : UnknownGenObject800AE4AC_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 char unknown18[8];
 inline ~UnknownGenObject800AE4AC(){unknown00=igTextureInfo_vtable;}
};
struct UnknownGenObject800AE80C_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
UnknownGenHolder *dtor_800AE5A4(UnknownGenHolder *object,short flags){
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
}
#pragma pop
}

namespace igTextureInfo_2 {
// igTextureInfo: Alchemy class registration (0x800AE618..0x800AE75C). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igTextureInfo)
META_DECLARE(igInfo)

extern "C" {
void *fn_800284EC();
void fn_800ABC8C();
void *fn_800BAAC4();
extern char igTextureInfo_dependencies[8];
extern char igTextureInfo_fieldNames[4];
extern char igTextureInfo_fieldOffsets[4];
extern char igTextureInfo_fieldStorage[4];
extern char igTextureInfo_fieldTypes[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(igTextureInfo)

void igTextureInfo_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igTextureInfo_meta, igInfo_register,
                       fn_800284EC, igTextureInfo_getMetaCall,
                       igTextureInfo_className, 0x18,
                       igTextureInfo_vtableRead, igTextureInfo_fieldInit, 0, igTextureInfo_dependencies);
}

META_GET_META_CALL(igTextureInfo)

void igTextureInfo_fieldInit()
{
    Meta::igMetaObject *meta = igTextureInfo_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igTextureInfo_fieldTypes, 1);
    Meta::igObjectRefMetaField *textureListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_800BAAC4();
    textureListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    textureListField->_construct = true;
    meta_setupFields(meta, igTextureInfo_fieldNames, igTextureInfo_fieldStorage, igTextureInfo_fieldOffsets, base);
}

}
#pragma pop
}

namespace igTextureFunctionAttr {
// igTextureFunctionAttr: Alchemy class registration (0x800AE75C..0x800AE794). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igTextureFunctionAttr)

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igTextureFunctionAttr)

}
#pragma pop
}

namespace unknown800AE794 {
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void *fn_800284EC();
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
void fn_800ABC8C();
void *fn_800AC294();
void *fn_800AEA50();
void *fn_800BAAC4();
void igInfo_register();
void igTextureFunctionAttr_fieldInit();
void igVisualAttribute_register();
extern char igInfo_vtable[];
extern char igNamedObject_vtable[];
extern char igTextureInfo_vtable[];
extern char igTextureFunctionAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char igTextureInfo_dependencies[8];
extern char igTextureInfo_fieldTypes[4];
extern char igTextureInfo_fieldNames[4];
extern char igTextureInfo_fieldStorage[4];
extern char igTextureInfo_fieldOffsets[4];
extern void *lbl_805621F4;
extern void *igTextureInfo_meta;
extern void *igTextureFunctionAttr_meta;
void *igTextureInfo_getMeta();
void *igTextureInfo_vtableRead();
void igTextureInfo_arkRegister();
void igTextureInfo_register();
void *igTextureInfo_getMetaCall();
void igTextureInfo_fieldInit();
void *igTextureFunctionAttr_getMeta();
void *igTextureFunctionAttr_vtableRead();
void igTextureFunctionAttr_arkRegister();
void igTextureFunctionAttr_register();
void *igTextureFunctionAttr_getMetaCall();
}
struct UnknownGenRoot800AE4AC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800AE4AC(){igObject_construct(this);}
};
struct UnknownGenObject800AE4AC_0 : UnknownGenRoot800AE4AC {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800AE4AC_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject800AE4AC_1 : UnknownGenObject800AE4AC_0 {
 inline ~UnknownGenObject800AE4AC_1(){unknown00=igInfo_vtable;}
};
struct UnknownGenObject800AE4AC : UnknownGenObject800AE4AC_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 char unknown18[8];
 inline ~UnknownGenObject800AE4AC(){unknown00=igTextureInfo_vtable;}
};
struct UnknownGenObject800AE80C_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *fn_800AE794(){
 if(!igTextureFunctionAttr_meta) igTextureFunctionAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igTextureFunctionAttr_meta;
}
void *igTextureFunctionAttr_getMeta(){
 if(!igTextureFunctionAttr_meta || !(reinterpret_cast<unsigned int *>(igTextureFunctionAttr_meta)[0x24/4]&4)) igTextureFunctionAttr_arkRegister();
 return igTextureFunctionAttr_meta;
}
void *igTextureFunctionAttr_vtableRead(){
 UnknownGenObject800AE80C_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igTextureFunctionAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igTextureFunctionAttr_arkRegister(){
 meta_registerNow((int)igTextureFunctionAttr_register);
}
void igTextureFunctionAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igTextureFunctionAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igTextureFunctionAttr_getMetaCall,(int)igTextureFunctionAttr_className,40,(int)igTextureFunctionAttr_vtableRead,(int)igTextureFunctionAttr_fieldInit,(int)fn_800AEA50,0);
}
void *igTextureFunctionAttr_getMetaCall(){return igTextureFunctionAttr_getMeta();}
}
#pragma pop
}

namespace igTextureFunctionAttr_fieldInit {
// igTextureFunctionAttr: Alchemy class registration (0x800AE924..0x800AEA50). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igTextureFunctionAttr)

extern "C" {
void fn_8003D160();
void fn_80046E58(void *, void *);
void fn_80075874(void *, int);
void fn_800C3D9C();
void fn_800D16B0();
void fn_800D1700();
void fn_800D1750();
extern char lbl_8055E008[4];
extern char lbl_8055E00C[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igTextureFunctionAttr_fieldInit()
{
    Meta::igMetaObject *meta = igTextureFunctionAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igTextureFunctionAttr_fieldTypes, 7);
    Meta::igEnumMetaField *modeField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base));
    fn_80046E58(modeField, (void *)lbl_8055E008);
    modeField->_getMetaEnumFunction = reinterpret_cast<void *>(fn_8003D160);
    Meta::igIntMetaField *unitIDField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 1));
    unitIDField->_invarianceFunction = reinterpret_cast<void *>(fn_800C3D9C);
    Meta::igEnumMetaField *arg0Field = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base + 2));
    arg0Field->_getMetaEnumFunction = reinterpret_cast<void *>(fn_800D16B0);
    Meta::igEnumMetaField *arg1Field = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base + 3));
    arg1Field->_getMetaEnumFunction = reinterpret_cast<void *>(fn_800D16B0);
    Meta::igEnumMetaField *typeField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base + 4));
    typeField->_getMetaEnumFunction = reinterpret_cast<void *>(fn_800D1700);
    Meta::igUnsignedCharMetaField *call_stateField = static_cast<Meta::igUnsignedCharMetaField *>(meta_field(meta, base + 5));
    fn_80075874(call_stateField, 2);
    Meta::igEnumMetaField *functionTypeField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base + 6));
    fn_80046E58(functionTypeField, (void *)lbl_8055E00C);
    functionTypeField->_getMetaEnumFunction = reinterpret_cast<void *>(fn_800D1750);
    meta_setupFields(meta, igTextureFunctionAttr_fieldNames, igTextureFunctionAttr_fieldStorage, igTextureFunctionAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace unknown800AEA50 {
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void igTextureCubeAttr_arkRegister();
void *fn_800C3E0C();
extern void *lbl_805621F4;
extern void *lbl_80562524;
extern void *igTextureCubeAttr_meta;
}
extern "C" {
void *fn_800AEA50(){return fn_800C3E0C();}
void *fn_800AEA70(){
 char *data=igVisualContextAttrDefaultManager_className;
 if(!lbl_80562524) lbl_80562524=fn_800635C8(data+0x6D0,data+0x6B8,data+0x6C4,0x3);
 return lbl_80562524;
}
void *fn_800AEABC(){
 if(!igTextureCubeAttr_meta) igTextureCubeAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igTextureCubeAttr_meta;
}
}
#pragma pop
}

namespace igTextureCubeAttr_2 {
// igTextureCubeAttr: Alchemy class registration (0x800AEAF8..0x800AECCC). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igTextureCubeAttr)
META_DECLARE(igTextureAttr)

extern "C" {
void dtor_800AECD8(void *);
void fn_800A3340(void *array, void (*destroy)(void *), unsigned int size, unsigned int count);
void fn_800A33B8(void *array, void (*construct)(void *), void (*destroy)(void *), unsigned int size, unsigned int count);
void fn_800AECCC(void *);
extern char lbl_8047D578[128];
extern char lbl_8047E50C[132];
}

struct Instance_LigTextureCubeAttr_0 : igObjectInstance {
    inline Instance_LigTextureCubeAttr_0()
    {
        __vtable = lbl_8047D578;
    }
};

struct Instance_LigTextureCubeAttr_1 : Instance_LigTextureCubeAttr_0 {
    inline Instance_LigTextureCubeAttr_1()
    {
        __vtable = lbl_8047E50C;
    }
};

struct igTextureAttrInstance : Instance_LigTextureCubeAttr_1 {
    char unknown04[8];
    igObjectRefMember _vc;
    char unknown10[32];
    igObjectRefMember _image;
    char unknown34[4];
    igObjectRefMember _tu;
    char unknown3C[4];
    igObjectRefMember _imageMipMaps;
    inline igTextureAttrInstance()
    {
        __vtable = igTextureAttr_vtable;
        _vc._value = 0;
        _image._value = 0;
        _tu._value = 0;
        _imageMipMaps._value = 0;
    }
    inline ~igTextureAttrInstance() { __vtable = igTextureAttr_vtable; }
};

struct Instance_LigTextureCubeAttr_3 : igTextureAttrInstance {
    char unknown44[4];
    char unknown48[32];
    inline Instance_LigTextureCubeAttr_3()
    {
        __vtable = igTextureCubeAttr_vtable;
        fn_800A33B8(unknown48, fn_800AECCC, dtor_800AECD8, 4, 6);   // constructs each element
    }
    inline ~Instance_LigTextureCubeAttr_3()
    {
        __vtable = igTextureCubeAttr_vtable;
        fn_800A3340(unknown48, dtor_800AECD8, 4, 6);
    }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igTextureCubeAttr)

void *igTextureCubeAttr_vtableRead()
{
    Instance_LigTextureCubeAttr_3 object;
    return meta_vtableOf(&object);
}

}
#pragma pop
}

namespace unknown800AECCC {
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_800ABC8C();
void igTextureAttr_register();
void igTextureCubeAttr_fieldInit();
void *igTextureCubeAttr_getMeta();
void igTextureCubeAttr_vtableRead();
extern char igTextureCubeAttr_dependencies[8];
extern void *igTextureCubeAttr_meta;
extern void *igTextureAttr_meta;
void igTextureCubeAttr_register();
void *igTextureCubeAttr_getMetaCall();
void *igTextureCubeAttr_parentMeta();
}
extern "C" {
void *fn_800AECCC(int p0){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=(void *)0;
 return (void *)p0;
}
UnknownGenHolder *dtor_800AECD8(UnknownGenHolder *object,short flags){
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
}
#pragma pop
}

namespace igTextureCubeAttr {
// igTextureCubeAttr: Alchemy class registration (0x800AED4C..0x800AEE08). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igTextureCubeAttr)
META_DECLARE(igTextureAttr)

extern "C" {
void fn_800ABC8C();
extern char igTextureCubeAttr_dependencies[8];
void *igTextureCubeAttr_parentMeta();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(igTextureCubeAttr)

void igTextureCubeAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igTextureCubeAttr_meta, igTextureAttr_register,
                       igTextureCubeAttr_parentMeta, igTextureCubeAttr_getMetaCall,
                       igTextureCubeAttr_className, 0x68,
                       igTextureCubeAttr_vtableRead, igTextureCubeAttr_fieldInit, 0, igTextureCubeAttr_dependencies);
}

META_GET_META_CALL(igTextureCubeAttr)

}
#pragma pop
}

namespace unknown800AEE08 {
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_800ABC8C();
void igTextureAttr_register();
void igTextureCubeAttr_fieldInit();
void *igTextureCubeAttr_getMeta();
void igTextureCubeAttr_vtableRead();
extern char igTextureCubeAttr_dependencies[8];
extern void *igTextureCubeAttr_meta;
extern void *igTextureAttr_meta;
void igTextureCubeAttr_register();
void *igTextureCubeAttr_getMetaCall();
void *igTextureCubeAttr_parentMeta();
}
extern "C" {
void *igTextureCubeAttr_parentMeta(){return igTextureAttr_meta;}
}
#pragma pop
}

namespace igTextureCubeAttr_fieldInit {
// igTextureCubeAttr: Alchemy class registration (0x800AEE10..0x800AEEC4). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igTextureCubeAttr)

extern "C" {
void fn_80046E58(void *, void *);
void fn_800AEA70();
void *fn_800D2414();
extern char lbl_8055E028[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igTextureCubeAttr_fieldInit()
{
    Meta::igMetaObject *meta = igTextureCubeAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igTextureCubeAttr_fieldTypes, 3);
    Meta::igObjectRefArrayMetaField *cubeImageField = static_cast<Meta::igObjectRefArrayMetaField *>(meta_field(meta, base));
    void *value_v2 = fn_800D2414();
    cubeImageField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v2);
    cubeImageField->_num = 6;
    Meta::igEnumMetaField *applyTypeField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base + 1));
    fn_80046E58(applyTypeField, (void *)lbl_8055E028);
    applyTypeField->_getMetaEnumFunction = reinterpret_cast<void *>(fn_800AEA70);
    meta_setupFields(meta, igTextureCubeAttr_fieldNames, igTextureCubeAttr_fieldStorage, igTextureCubeAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace igTextureCoordSourceAttr {
// igTextureCoordSourceAttr: Alchemy class registration (0x800AEEC4..0x800AEEFC). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igTextureCoordSourceAttr)

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igTextureCoordSourceAttr)

}
#pragma pop
}

namespace unknown800AEEFC {
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void *fn_800AC294();
void igTextureCoordSourceAttr_fieldInit();
void igVisualAttribute_register();
extern char igTextureCoordSourceAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *lbl_805621F4;
extern void *igTextureCoordSourceAttr_meta;
void *igTextureCoordSourceAttr_getMeta();
void *igTextureCoordSourceAttr_vtableRead();
void igTextureCoordSourceAttr_arkRegister();
void igTextureCoordSourceAttr_register();
void *igTextureCoordSourceAttr_getMetaCall();
}
struct UnknownGenObject800AEF74_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800AEEFC(){
 if(!igTextureCoordSourceAttr_meta) igTextureCoordSourceAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igTextureCoordSourceAttr_meta;
}
void *igTextureCoordSourceAttr_getMeta(){
 if(!igTextureCoordSourceAttr_meta || !(reinterpret_cast<unsigned int *>(igTextureCoordSourceAttr_meta)[0x24/4]&4)) igTextureCoordSourceAttr_arkRegister();
 return igTextureCoordSourceAttr_meta;
}
void *igTextureCoordSourceAttr_vtableRead(){
 UnknownGenObject800AEF74_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igTextureCoordSourceAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igTextureCoordSourceAttr_arkRegister(){
 meta_registerNow((int)igTextureCoordSourceAttr_register);
}
void igTextureCoordSourceAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igTextureCoordSourceAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igTextureCoordSourceAttr_getMetaCall,(int)igTextureCoordSourceAttr_className,24,(int)igTextureCoordSourceAttr_vtableRead,(int)igTextureCoordSourceAttr_fieldInit,0,0);
}
void *igTextureCoordSourceAttr_getMetaCall(){return igTextureCoordSourceAttr_getMeta();}
}
#pragma pop
}

namespace igTextureCoordSourceAttr_fieldInit {
// igTextureCoordSourceAttr: Alchemy class registration (0x800AF084..0x800AF130). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igTextureCoordSourceAttr)

extern "C" {
void fn_80046E58(void *, void *);
void fn_800C3B08();
void fn_800CDE88();
extern char lbl_8055E02C[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igTextureCoordSourceAttr_fieldInit()
{
    Meta::igMetaObject *meta = igTextureCoordSourceAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igTextureCoordSourceAttr_fieldTypes, 3);
    Meta::igEnumMetaField *modeField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base));
    fn_80046E58(modeField, (void *)lbl_8055E02C);
    modeField->_getMetaEnumFunction = reinterpret_cast<void *>(fn_800CDE88);
    Meta::igIntMetaField *unitIDField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 2));
    unitIDField->_invarianceFunction = reinterpret_cast<void *>(fn_800C3B08);
    meta_setupFields(meta, igTextureCoordSourceAttr_fieldNames, igTextureCoordSourceAttr_fieldStorage, igTextureCoordSourceAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace igTextureBindAttr {
// igTextureBindAttr: Alchemy class registration (0x800AF130..0x800AF168). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igTextureBindAttr)

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igTextureBindAttr)

}
#pragma pop
}

namespace unknown800AF168 {
#pragma push
#pragma auto_inline off
extern "C" {
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
void fn_800ABC8C();
void *fn_800AC294();
void *fn_800C3A2C(int);
void fn_800C3A9C();
void igTextureAttr_fieldInit();
void igVisualAttribute_register();
extern char igTextureBindAttr_vtable[];
extern char igTextureAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char igTextureBindAttr_dependencies[8];
extern char igTextureBindAttr_fieldTypes[8];
extern char igTextureBindAttr_fieldNames[8];
extern char igTextureBindAttr_fieldStorage[8];
extern char igTextureBindAttr_fieldOffsets[8];
extern void *lbl_805621F4;
extern void *igTextureBindAttr_meta;
extern void *igTextureAttr_meta;
void *igTextureBindAttr_getMeta();
void *igTextureBindAttr_vtableRead();
void igTextureBindAttr_arkRegister();
void igTextureBindAttr_register();
void *igTextureBindAttr_getMetaCall();
void igTextureBindAttr_fieldInit();
void fn_800AF44C();
void *fn_800AF4A4();
void *igTextureAttr_getMeta();
void *igTextureAttr_vtableRead();
void igTextureAttr_arkRegister();
void igTextureAttr_register();
void *igTextureAttr_getMetaCall();
}
struct UnknownGenRoot800AF1E0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800AF1E0(){igObject_construct(this);}
};
struct UnknownGenObject800AF1E0 : UnknownGenRoot800AF1E0 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 char unknown10[16];
 inline ~UnknownGenObject800AF1E0(){unknown00=igTextureBindAttr_vtable;}
};
struct UnknownGenRoot800AF51C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800AF51C(){igObject_construct(this);}
};
struct UnknownGenObject800AF51C : UnknownGenRoot800AF51C {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 char unknown10[32];
 UnknownGenRefMember unknown30;
 char unknown34[4];
 UnknownGenRefMember unknown38;
 char unknown3C[4];
 UnknownGenRefMember unknown40;
 char unknown44[4];
 inline ~UnknownGenObject800AF51C(){unknown00=igTextureAttr_vtable;}
};
extern "C" {
void *fn_800AF168(){
 if(!igTextureBindAttr_meta) igTextureBindAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igTextureBindAttr_meta;
}
}
#pragma pop
}

namespace igTextureBindAttr_2 {
// igTextureBindAttr: Alchemy class registration (0x800AF1A4..0x800AF280). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igTextureBindAttr)

extern "C" {
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

struct igTextureBindAttrInstance : igObjectInstance {
    char unknown04[8];
    igObjectRefMember _texture;
    char unknown10[16];
    inline ~igTextureBindAttrInstance() { __vtable = igTextureBindAttr_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igTextureBindAttr)

void *igTextureBindAttr_vtableRead()
{
    igTextureBindAttrInstance object;
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igTextureBindAttr_vtable;
    object._texture._value = 0;
    return meta_vtableOf(&object);
}

}
#pragma pop
}

namespace unknown800AF280 {
#pragma push
#pragma auto_inline off
extern "C" {
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
void fn_800ABC8C();
void *fn_800AC294();
void *fn_800C3A2C(int);
void fn_800C3A9C();
void igTextureAttr_fieldInit();
void igVisualAttribute_register();
extern char igTextureBindAttr_vtable[];
extern char igTextureAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char igTextureBindAttr_dependencies[8];
extern char igTextureBindAttr_fieldTypes[8];
extern char igTextureBindAttr_fieldNames[8];
extern char igTextureBindAttr_fieldStorage[8];
extern char igTextureBindAttr_fieldOffsets[8];
extern void *lbl_805621F4;
extern void *igTextureBindAttr_meta;
extern void *igTextureAttr_meta;
void *igTextureBindAttr_getMeta();
void *igTextureBindAttr_vtableRead();
void igTextureBindAttr_arkRegister();
void igTextureBindAttr_register();
void *igTextureBindAttr_getMetaCall();
void igTextureBindAttr_fieldInit();
void fn_800AF44C();
void *fn_800AF4A4();
void *igTextureAttr_getMeta();
void *igTextureAttr_vtableRead();
void igTextureAttr_arkRegister();
void igTextureAttr_register();
void *igTextureAttr_getMetaCall();
}
struct UnknownGenRoot800AF1E0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800AF1E0(){igObject_construct(this);}
};
struct UnknownGenObject800AF1E0 : UnknownGenRoot800AF1E0 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 char unknown10[16];
 inline ~UnknownGenObject800AF1E0(){unknown00=igTextureBindAttr_vtable;}
};
struct UnknownGenRoot800AF51C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800AF51C(){igObject_construct(this);}
};
struct UnknownGenObject800AF51C : UnknownGenRoot800AF51C {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 char unknown10[32];
 UnknownGenRefMember unknown30;
 char unknown34[4];
 UnknownGenRefMember unknown38;
 char unknown3C[4];
 UnknownGenRefMember unknown40;
 char unknown44[4];
 inline ~UnknownGenObject800AF51C(){unknown00=igTextureAttr_vtable;}
};
extern "C" {
UnknownGenHolder *dtor_800AF280(UnknownGenHolder *object,short flags){
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
}
#pragma pop
}

namespace igTextureBindAttr_3 {
// igTextureBindAttr: Alchemy class registration (0x800AF2F4..0x800AF44C). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igTextureBindAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_800ABC8C();
void *fn_800AC294();
void fn_800AF44C();
void *fn_800AF4A4();
void *fn_800C3A2C(int);
extern char igTextureBindAttr_dependencies[8];
extern char igTextureBindAttr_fieldNames[8];
extern char igTextureBindAttr_fieldOffsets[8];
extern char igTextureBindAttr_fieldStorage[8];
extern char igTextureBindAttr_fieldTypes[8];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(igTextureBindAttr)

void igTextureBindAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igTextureBindAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igTextureBindAttr_getMetaCall,
                       igTextureBindAttr_className, 0x14,
                       igTextureBindAttr_vtableRead, igTextureBindAttr_fieldInit, fn_800AF44C, igTextureBindAttr_dependencies);
}

META_GET_META_CALL(igTextureBindAttr)

void igTextureBindAttr_fieldInit()
{
    Meta::igMetaObject *meta = igTextureBindAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igTextureBindAttr_fieldTypes, 2);
    Meta::igObjectRefMetaField *textureField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_800AF4A4();
    textureField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    Meta::igIntMetaField *unitIDField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 1));
    unitIDField->_invarianceFunction = reinterpret_cast<void *>((void *)fn_800C3A2C);
    meta_setupFields(meta, igTextureBindAttr_fieldNames, igTextureBindAttr_fieldStorage, igTextureBindAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace unknown800AF44C {
#pragma push
#pragma auto_inline off
extern "C" {
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
void fn_800ABC8C();
void *fn_800AC294();
void *fn_800C3A2C(int);
void fn_800C3A9C();
void igTextureAttr_fieldInit();
void igVisualAttribute_register();
extern char igTextureBindAttr_vtable[];
extern char igTextureAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char igTextureBindAttr_dependencies[8];
extern char igTextureBindAttr_fieldTypes[8];
extern char igTextureBindAttr_fieldNames[8];
extern char igTextureBindAttr_fieldStorage[8];
extern char igTextureBindAttr_fieldOffsets[8];
extern void *lbl_805621F4;
extern void *igTextureBindAttr_meta;
extern void *igTextureAttr_meta;
void *igTextureBindAttr_getMeta();
void *igTextureBindAttr_vtableRead();
void igTextureBindAttr_arkRegister();
void igTextureBindAttr_register();
void *igTextureBindAttr_getMetaCall();
void igTextureBindAttr_fieldInit();
void fn_800AF44C();
void *fn_800AF4A4();
void *igTextureAttr_getMeta();
void *igTextureAttr_vtableRead();
void igTextureAttr_arkRegister();
void igTextureAttr_register();
void *igTextureAttr_getMetaCall();
}
struct UnknownGenRoot800AF1E0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800AF1E0(){igObject_construct(this);}
};
struct UnknownGenObject800AF1E0 : UnknownGenRoot800AF1E0 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 char unknown10[16];
 inline ~UnknownGenObject800AF1E0(){unknown00=igTextureBindAttr_vtable;}
};
struct UnknownGenRoot800AF51C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800AF51C(){igObject_construct(this);}
};
struct UnknownGenObject800AF51C : UnknownGenRoot800AF51C {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 char unknown10[32];
 UnknownGenRefMember unknown30;
 char unknown34[4];
 UnknownGenRefMember unknown38;
 char unknown3C[4];
 UnknownGenRefMember unknown40;
 char unknown44[4];
 inline ~UnknownGenObject800AF51C(){unknown00=igTextureAttr_vtable;}
};
extern "C" {
void fn_800AF44C(){return fn_800C3A9C();}
}
#pragma pop
}

namespace igTextureAttr {
// igTextureAttr: Alchemy class registration (0x800AF46C..0x800AF4A4). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igTextureAttr)

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igTextureAttr)

}
#pragma pop
}

namespace unknown800AF4A4 {
#pragma push
#pragma auto_inline off
extern "C" {
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
void fn_800ABC8C();
void *fn_800AC294();
void *fn_800C3A2C(int);
void fn_800C3A9C();
void igTextureAttr_fieldInit();
void igVisualAttribute_register();
extern char igTextureBindAttr_vtable[];
extern char igTextureAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char igTextureBindAttr_dependencies[8];
extern char igTextureBindAttr_fieldTypes[8];
extern char igTextureBindAttr_fieldNames[8];
extern char igTextureBindAttr_fieldStorage[8];
extern char igTextureBindAttr_fieldOffsets[8];
extern void *lbl_805621F4;
extern void *igTextureBindAttr_meta;
extern void *igTextureAttr_meta;
void *igTextureBindAttr_getMeta();
void *igTextureBindAttr_vtableRead();
void igTextureBindAttr_arkRegister();
void igTextureBindAttr_register();
void *igTextureBindAttr_getMetaCall();
void igTextureBindAttr_fieldInit();
void fn_800AF44C();
void *fn_800AF4A4();
void *igTextureAttr_getMeta();
void *igTextureAttr_vtableRead();
void igTextureAttr_arkRegister();
void igTextureAttr_register();
void *igTextureAttr_getMetaCall();
}
struct UnknownGenRoot800AF1E0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800AF1E0(){igObject_construct(this);}
};
struct UnknownGenObject800AF1E0 : UnknownGenRoot800AF1E0 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 char unknown10[16];
 inline ~UnknownGenObject800AF1E0(){unknown00=igTextureBindAttr_vtable;}
};
struct UnknownGenRoot800AF51C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800AF51C(){igObject_construct(this);}
};
struct UnknownGenObject800AF51C : UnknownGenRoot800AF51C {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 char unknown10[32];
 UnknownGenRefMember unknown30;
 char unknown34[4];
 UnknownGenRefMember unknown38;
 char unknown3C[4];
 UnknownGenRefMember unknown40;
 char unknown44[4];
 inline ~UnknownGenObject800AF51C(){unknown00=igTextureAttr_vtable;}
};
extern "C" {
void *fn_800AF4A4(){
 if(!igTextureAttr_meta) igTextureAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igTextureAttr_meta;
}
void *igTextureAttr_getMeta(){
 if(!igTextureAttr_meta || !(reinterpret_cast<unsigned int *>(igTextureAttr_meta)[0x24/4]&4)) igTextureAttr_arkRegister();
 return igTextureAttr_meta;
}
void *igTextureAttr_vtableRead(){
 UnknownGenObject800AF51C object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igTextureAttr_vtable;
 object.unknown0C.value=0;
 object.unknown30.value=0;
 object.unknown38.value=0;
 object.unknown40.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igTextureAttr_arkRegister(){
 meta_registerNow((int)igTextureAttr_register);
}
void igTextureAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igTextureAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igTextureAttr_getMetaCall,(int)igTextureAttr_className,72,(int)igTextureAttr_vtableRead,(int)igTextureAttr_fieldInit,0,(int)igTextureAttr_dependencies);
}
void *igTextureAttr_getMetaCall(){return igTextureAttr_getMeta();}
}
#pragma pop
}

namespace igTextureAttr_fieldInit {
// igTextureAttr: Alchemy class registration (0x800AF72C..0x800AF954). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igTextureAttr)

extern "C" {
void fn_80046E58(void *, void *);
void fn_80053650(void *, int);
void *fn_800AD9D0();
void *fn_800AF954();
void fn_800CDFB4();
void fn_800CE000();
void fn_800CE04C();
void fn_800CE098();
void *fn_800CE788();
void *fn_800D2414();
extern char lbl_8055E098[4];
extern char lbl_8055E09C[4];
extern char lbl_8055E0A0[4];
extern char lbl_8055E0A4[4];
extern char lbl_8055E0A8[4];
extern char lbl_8055E0AC[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igTextureAttr_fieldInit()
{
    Meta::igMetaObject *meta = igTextureAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igTextureAttr_fieldTypes, 15);
    Meta::igUnsignedIntMetaField *bColorField = static_cast<Meta::igUnsignedIntMetaField *>(meta_field(meta, base + 1));
    fn_80046E58(bColorField, (void *)lbl_8055E098);
    *reinterpret_cast<void **>(reinterpret_cast<char *>(bColorField) + 0x34) = fn_800CE098;
    Meta::igEnumMetaField *magFilterField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base + 2));
    fn_80046E58(magFilterField, (void *)lbl_8055E09C);
    magFilterField->_getMetaEnumFunction = reinterpret_cast<void *>(fn_800CE098);
    Meta::igEnumMetaField *minFilterField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base + 3));
    fn_80046E58(minFilterField, (void *)lbl_8055E0A0);
    minFilterField->_getMetaEnumFunction = reinterpret_cast<void *>(fn_800CE04C);
    Meta::igEnumMetaField *wrapSField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base + 4));
    fn_80046E58(wrapSField, (void *)lbl_8055E0A4);
    wrapSField->_getMetaEnumFunction = reinterpret_cast<void *>(fn_800CE04C);
    Meta::igEnumMetaField *wrapTField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base + 5));
    fn_80053650(wrapTField, -1);
    wrapTField->_persistent = false;
    wrapTField->_deepCopyMethod = 4;
    wrapTField->_shallowCopyMethod = 4;
    wrapTField->_isAlikeShallowMethod = 3;
    Meta::igIntMetaField *texIdField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 6));
    fn_80046E58(texIdField, (void *)lbl_8055E0A8);
    *reinterpret_cast<void **>(reinterpret_cast<char *>(texIdField) + 0x34) = fn_800CDFB4;
    Meta::igEnumMetaField *mipmapModeField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base + 7));
    fn_80046E58(mipmapModeField, (void *)lbl_8055E0AC);
    mipmapModeField->_getMetaEnumFunction = reinterpret_cast<void *>(fn_800CE000);
    Meta::igEnumMetaField *sourceField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base + 8));
    void *value_v9 = fn_800D2414();
    *reinterpret_cast<void **>(reinterpret_cast<char *>(sourceField) + 0x38) = value_v9;
    Meta::igBoolMetaField *pagingField = static_cast<Meta::igBoolMetaField *>(meta_field(meta, base + 10));
    void *value_v11 = fn_800AD9D0();
    *reinterpret_cast<void **>(reinterpret_cast<char *>(pagingField) + 0x38) = value_v11;
    Meta::igObjectRefMetaField *tuField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 11));
    fn_80053650(tuField, 1);
    Meta::igIntMetaField *imageCountField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 12));
    void *value_v14 = fn_800AF954();
    *reinterpret_cast<void **>(reinterpret_cast<char *>(imageCountField) + 0x38) = value_v14;
    *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(imageCountField) + 0x34) = 1;
    Meta::igObjectRefMetaField *imageMipMapsField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 13));
    void *value_v16 = fn_800CE788();
    imageMipMapsField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v16);
    imageMipMapsField->_persistent = false;
    imageMipMapsField->_deepCopyMethod = 1;
    imageMipMapsField->_shallowCopyMethod = 1;
    imageMipMapsField->_isAlikeShallowMethod = 3;
    Meta::igRawRefMetaField *videoBufferField = static_cast<Meta::igRawRefMetaField *>(meta_field(meta, base + 14));
    videoBufferField->_persistent = false;
    meta_setupFields(meta, igTextureAttr_fieldNames, igTextureAttr_fieldStorage, igTextureAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace unknown800AF954 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void *meta_newMetaObject(void *);
void fn_8003EC68(void *,int);
void fn_80046E58(void *,void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void *fn_800AC294();
void igTexGenMatrixAttr_arkRegister();
void fn_800CE04C();
void igObjectList_register();
void igVisualAttribute_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igTextureAddressModeAttr_vtable[];
extern char lbl_8047D578[];
extern char igImageMipMapList_vtable[];
extern char lbl_8047E1F8[];
extern char lbl_8047E50C[];
extern char igImageMipMapList_dependencies[8];
extern char igTextureAddressModeAttr_fieldTypes[8];
extern char igTextureAddressModeAttr_fieldNames[8];
extern char igTextureAddressModeAttr_fieldStorage[8];
extern char igTextureAddressModeAttr_fieldOffsets[8];
extern char lbl_8055E0D8[4];
extern void *lbl_805621F4;
extern void *igImageMipMapList_meta;
extern void *igTextureAddressModeAttr_meta;
extern void *igTexGenMatrixAttr_meta;
void *igImageMipMapList_getMeta();
void *igImageMipMapList_vtableRead();
void igImageMipMapList_arkRegister();
void igImageMipMapList_register();
void *igImageMipMapList_getMetaCall();
void *igTextureAddressModeAttr_getMeta();
void *igTextureAddressModeAttr_vtableRead();
void igTextureAddressModeAttr_arkRegister();
void igTextureAddressModeAttr_register();
void *igTextureAddressModeAttr_getMetaCall();
void igTextureAddressModeAttr_fieldInit();
}
struct UnknownGenObject800AF9CC_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800AFB64_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800AF954(){
 if(!igImageMipMapList_meta) igImageMipMapList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igImageMipMapList_meta;
}
}
#pragma pop
}

namespace igImageMipMapList {
// igImageMipMapList: Alchemy class registration (0x800AF990..0x800AFAF0). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igImageMipMapList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_800ABC8C();
extern char igImageMipMapList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_8047E1F8[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igImageMipMapList)

void *igImageMipMapList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_8047E1F8;
    object.__vtable = igImageMipMapList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igImageMipMapList)

void igImageMipMapList_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igImageMipMapList_meta, igObjectList_register,
                       fn_80024180, igImageMipMapList_getMetaCall,
                       igImageMipMapList_className, 0x14,
                       igImageMipMapList_vtableRead, 0, 0, igImageMipMapList_dependencies);
}

META_GET_META_CALL(igImageMipMapList)

}
#pragma pop
}

namespace igTextureAddressModeAttr {
// igTextureAddressModeAttr: Alchemy class registration (0x800AFAF0..0x800AFD14). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igTextureAddressModeAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_8003EC68(void *,int);
void fn_80046E58(void *,void *);
void fn_800ABC8C();
void *fn_800AC294();
void fn_800CE04C();
extern char igTextureAddressModeAttr_fieldNames[8];
extern char igTextureAddressModeAttr_fieldOffsets[8];
extern char igTextureAddressModeAttr_fieldStorage[8];
extern char igTextureAddressModeAttr_fieldTypes[8];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055E0D8[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igTextureAddressModeAttr)

META_GET_META(igTextureAddressModeAttr)

void *igTextureAddressModeAttr_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igTextureAddressModeAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igTextureAddressModeAttr)

void igTextureAddressModeAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igTextureAddressModeAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igTextureAddressModeAttr_getMetaCall,
                       igTextureAddressModeAttr_className, 0x14,
                       igTextureAddressModeAttr_vtableRead, igTextureAddressModeAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igTextureAddressModeAttr)

void igTextureAddressModeAttr_fieldInit()
{
    Meta::igMetaObject *meta = igTextureAddressModeAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igTextureAddressModeAttr_fieldTypes, 2);
    Meta::igBoolMetaField *enabledField = static_cast<Meta::igBoolMetaField *>(meta_field(meta, base));
    fn_8003EC68(enabledField, 1);
    Meta::igEnumMetaField *wrapSField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base + 1));
    fn_80046E58(wrapSField, lbl_8055E0D8);
    wrapSField->_getMetaEnumFunction = reinterpret_cast<void *>((void *)fn_800CE04C);
    meta_setupFields(meta, igTextureAddressModeAttr_fieldNames, igTextureAddressModeAttr_fieldStorage, igTextureAddressModeAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace unknown800AFD14 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void *meta_newMetaObject(void *);
void fn_8003EC68(void *,int);
void fn_80046E58(void *,void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void *fn_800AC294();
void igTexGenMatrixAttr_arkRegister();
void fn_800CE04C();
void igObjectList_register();
void igVisualAttribute_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igTextureAddressModeAttr_vtable[];
extern char lbl_8047D578[];
extern char igImageMipMapList_vtable[];
extern char lbl_8047E1F8[];
extern char lbl_8047E50C[];
extern char igImageMipMapList_dependencies[8];
extern char igTextureAddressModeAttr_fieldTypes[8];
extern char igTextureAddressModeAttr_fieldNames[8];
extern char igTextureAddressModeAttr_fieldStorage[8];
extern char igTextureAddressModeAttr_fieldOffsets[8];
extern char lbl_8055E0D8[4];
extern void *lbl_805621F4;
extern void *igImageMipMapList_meta;
extern void *igTextureAddressModeAttr_meta;
extern void *igTexGenMatrixAttr_meta;
void *igImageMipMapList_getMeta();
void *igImageMipMapList_vtableRead();
void igImageMipMapList_arkRegister();
void igImageMipMapList_register();
void *igImageMipMapList_getMetaCall();
void *igTextureAddressModeAttr_getMeta();
void *igTextureAddressModeAttr_vtableRead();
void igTextureAddressModeAttr_arkRegister();
void igTextureAddressModeAttr_register();
void *igTextureAddressModeAttr_getMetaCall();
void igTextureAddressModeAttr_fieldInit();
}
struct UnknownGenObject800AF9CC_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800AFB64_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800AFD14(){
 if(!igTexGenMatrixAttr_meta) igTexGenMatrixAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igTexGenMatrixAttr_meta;
}
}
#pragma pop
}

namespace igTexGenMatrixAttr {
// igTexGenMatrixAttr: Alchemy class registration (0x800AFD50..0x800AFEA4). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igTexGenMatrixAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_800ABC8C();
void *fn_800AC294();
void fn_801285A0(void *);
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

struct Instance_LigTexGenMatrixAttr_0 : igObjectInstance {
};

struct Instance_LigTexGenMatrixAttr_1 : Instance_LigTexGenMatrixAttr_0 {
};

struct Instance_LigTexGenMatrixAttr_2 : Instance_LigTexGenMatrixAttr_1 {
    char unknown04[8];
    char unknown0C[68];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igTexGenMatrixAttr)

void *igTexGenMatrixAttr_vtableRead()
{
    Instance_LigTexGenMatrixAttr_2 object;
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igTexGenMatrixAttr_vtable;
    fn_801285A0(&object.unknown0C);
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igTexGenMatrixAttr)

void igTexGenMatrixAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igTexGenMatrixAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igTexGenMatrixAttr_getMetaCall,
                       igTexGenMatrixAttr_className, 0x50,
                       igTexGenMatrixAttr_vtableRead, igTexGenMatrixAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igTexGenMatrixAttr)

}
#pragma pop
}

namespace igTexGenMatrixAttr_2 {
// igTexGenMatrixAttr: Alchemy class registration (0x800AFEA4..0x800AFF90). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igTexGenMatrixAttr)

extern "C" {
void fn_800C305C();
void fn_80124504(void *, void *);
extern char igTexGenMatrixAttr_fieldNames[8];
extern char igTexGenMatrixAttr_fieldOffsets[8];
extern char igTexGenMatrixAttr_fieldStorage[8];
extern char igTexGenMatrixAttr_fieldTypes[8];
extern char lbl_80566810[4];
extern char lbl_80566814[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igTexGenMatrixAttr_fieldInit()
{
    float local[20];
    Meta::igMetaObject *meta = igTexGenMatrixAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igTexGenMatrixAttr_fieldTypes, 2);
    Meta::igMatrix44fMetaField *mField = static_cast<Meta::igMatrix44fMetaField *>(meta_field(meta, base));
    local[0] = *reinterpret_cast<float *>(lbl_80566810);
    local[1] = *reinterpret_cast<float *>(lbl_80566814);
    local[2] = *reinterpret_cast<float *>(lbl_80566814);
    local[3] = *reinterpret_cast<float *>(lbl_80566814);
    local[4] = *reinterpret_cast<float *>(lbl_80566810);
    local[5] = *reinterpret_cast<float *>(lbl_80566814);
    local[6] = *reinterpret_cast<float *>(lbl_80566814);
    local[7] = *reinterpret_cast<float *>(lbl_80566814);
    local[8] = *reinterpret_cast<float *>(lbl_80566814);
    local[9] = *reinterpret_cast<float *>(lbl_80566810);
    local[10] = *reinterpret_cast<float *>(lbl_80566814);
    local[11] = *reinterpret_cast<float *>(lbl_80566814);
    local[12] = *reinterpret_cast<float *>(lbl_80566814);
    local[13] = *reinterpret_cast<float *>(lbl_80566814);
    local[14] = *reinterpret_cast<float *>(lbl_80566810);
    local[15] = *reinterpret_cast<float *>(lbl_80566814);
    local[16] = *reinterpret_cast<float *>(lbl_80566814);
    local[17] = *reinterpret_cast<float *>(lbl_80566814);
    local[18] = *reinterpret_cast<float *>(lbl_80566814);
    local[19] = *reinterpret_cast<float *>(lbl_80566810);
    fn_80124504(mField, &local[4]);
    Meta::igIntMetaField *unitIDField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 1));
    unitIDField->_invarianceFunction = reinterpret_cast<void *>(fn_800C305C);
    meta_setupFields(meta, igTexGenMatrixAttr_fieldNames, igTexGenMatrixAttr_fieldStorage, igTexGenMatrixAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace igSubTextureBindAttr {
// igSubTextureBindAttr: Alchemy class registration (0x800AFF90..0x800B0134). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igSubTextureBindAttr)
META_DECLARE(igTextureBindAttr)

extern "C" {
void fn_800ABC8C();
void *igSubTextureBindAttr_parentMeta();
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

struct igTextureBindAttrInstance : igObjectInstance {
    char unknown04[8];
    igObjectRefMember _texture;
    inline ~igTextureBindAttrInstance() { __vtable = igTextureBindAttr_vtable; }
};

struct igSubTextureBindAttrInstance : igTextureBindAttrInstance {
    char unknown10[32];
    inline ~igSubTextureBindAttrInstance() { __vtable = igSubTextureBindAttr_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igSubTextureBindAttr)

void *igSubTextureBindAttr_vtableRead()
{
    igSubTextureBindAttrInstance object;
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igTextureBindAttr_vtable;
    object._texture._value = 0;
    object.__vtable = igSubTextureBindAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igSubTextureBindAttr)

void igSubTextureBindAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igSubTextureBindAttr_meta, igTextureBindAttr_register,
                       igSubTextureBindAttr_parentMeta, igSubTextureBindAttr_getMetaCall,
                       igSubTextureBindAttr_className, 0x2C,
                       igSubTextureBindAttr_vtableRead, igSubTextureBindAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igSubTextureBindAttr)

}
#pragma pop
}

namespace unknown800B0134 {
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void igSubTextureBindAttr_fieldInit();
void igTextureBindAttr_register();
extern char igTextureBindAttr_vtable[];
extern char igSubTextureBindAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *igTextureBindAttr_meta;
extern void *igSubTextureBindAttr_meta;
void *igSubTextureBindAttr_getMeta();
void *igSubTextureBindAttr_vtableRead();
void igSubTextureBindAttr_arkRegister();
void igSubTextureBindAttr_register();
void *igSubTextureBindAttr_getMetaCall();
void *igSubTextureBindAttr_parentMeta();
}
struct UnknownGenRoot800AFFCC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800AFFCC(){igObject_construct(this);}
};
struct UnknownGenObject800AFFCC_0 : UnknownGenRoot800AFFCC {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject800AFFCC_0(){unknown00=igTextureBindAttr_vtable;}
};
struct UnknownGenObject800AFFCC : UnknownGenObject800AFFCC_0 {
 char unknown10[32];
 inline ~UnknownGenObject800AFFCC(){unknown00=igSubTextureBindAttr_vtable;}
};
extern "C" {
void *igSubTextureBindAttr_parentMeta(){return igTextureBindAttr_meta;}
}
#pragma pop
}

namespace igSubTextureBindAttr_fieldInit {
// igSubTextureBindAttr: Alchemy class registration (0x800B013C..0x800B01F4). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igSubTextureBindAttr)

extern "C" {
void fn_80046E58(void *, void *);
void fn_800CE04C();
extern char lbl_8055E120[4];
extern char lbl_8055E124[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igSubTextureBindAttr_fieldInit()
{
    Meta::igMetaObject *meta = igSubTextureBindAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igSubTextureBindAttr_fieldTypes, 6);
    Meta::igEnumMetaField *wrapSField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base));
    fn_80046E58(wrapSField, (void *)lbl_8055E120);
    wrapSField->_getMetaEnumFunction = reinterpret_cast<void *>(fn_800CE04C);
    Meta::igEnumMetaField *wrapTField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base + 1));
    fn_80046E58(wrapTField, (void *)lbl_8055E124);
    wrapTField->_getMetaEnumFunction = reinterpret_cast<void *>(fn_800CE04C);
    meta_setupFields(meta, igSubTextureBindAttr_fieldNames, igSubTextureBindAttr_fieldStorage, igSubTextureBindAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace igStencilStateAttr {
// igStencilStateAttr: Alchemy class registration (0x800B01F4..0x800B022C). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igStencilStateAttr)

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igStencilStateAttr)

}
#pragma pop
}

namespace unknown800B022C {
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void *fn_800AC294();
void igStencilFunctionAttr_fieldInit();
void igVisualAttribute_register();
extern char igStencilStateAttr_vtable[];
extern char igStencilFunctionAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char igStencilStateAttr_fieldTypes[4];
extern char igStencilStateAttr_fieldNames[4];
extern char igStencilStateAttr_fieldStorage[4];
extern char igStencilStateAttr_fieldOffsets[4];
extern void *lbl_805621F4;
extern void *igStencilStateAttr_meta;
extern void *igStencilFunctionAttr_meta;
void *igStencilStateAttr_getMeta();
void *igStencilStateAttr_vtableRead();
void igStencilStateAttr_arkRegister();
void igStencilStateAttr_register();
void *igStencilStateAttr_getMetaCall();
void igStencilStateAttr_fieldInit();
void *igStencilFunctionAttr_getMeta();
void *igStencilFunctionAttr_vtableRead();
void igStencilFunctionAttr_arkRegister();
void igStencilFunctionAttr_register();
void *igStencilFunctionAttr_getMetaCall();
}
struct UnknownGenObject800B02A4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B0490_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *fn_800B022C(){
 if(!igStencilStateAttr_meta) igStencilStateAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igStencilStateAttr_meta;
}
}
#pragma pop
}

namespace igStencilStateAttr_2 {
// igStencilStateAttr: Alchemy class registration (0x800B0268..0x800B041C). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igStencilStateAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_800ABC8C();
void *fn_800AC294();
extern char igStencilStateAttr_fieldNames[4];
extern char igStencilStateAttr_fieldOffsets[4];
extern char igStencilStateAttr_fieldStorage[4];
extern char igStencilStateAttr_fieldTypes[4];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igStencilStateAttr)

void *igStencilStateAttr_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igStencilStateAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igStencilStateAttr)

void igStencilStateAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igStencilStateAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igStencilStateAttr_getMetaCall,
                       igStencilStateAttr_className, 0x10,
                       igStencilStateAttr_vtableRead, igStencilStateAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igStencilStateAttr)

void igStencilStateAttr_fieldInit()
{
    Meta::igMetaObject *meta = igStencilStateAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igStencilStateAttr_fieldTypes, 1);
    meta_setupFields(meta, igStencilStateAttr_fieldNames, igStencilStateAttr_fieldStorage, igStencilStateAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace unknown800B041C {
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void *fn_800AC294();
void igStencilFunctionAttr_fieldInit();
void igVisualAttribute_register();
extern char igStencilStateAttr_vtable[];
extern char igStencilFunctionAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char igStencilStateAttr_fieldTypes[4];
extern char igStencilStateAttr_fieldNames[4];
extern char igStencilStateAttr_fieldStorage[4];
extern char igStencilStateAttr_fieldOffsets[4];
extern void *lbl_805621F4;
extern void *igStencilStateAttr_meta;
extern void *igStencilFunctionAttr_meta;
void *igStencilStateAttr_getMeta();
void *igStencilStateAttr_vtableRead();
void igStencilStateAttr_arkRegister();
void igStencilStateAttr_register();
void *igStencilStateAttr_getMetaCall();
void igStencilStateAttr_fieldInit();
void *igStencilFunctionAttr_getMeta();
void *igStencilFunctionAttr_vtableRead();
void igStencilFunctionAttr_arkRegister();
void igStencilFunctionAttr_register();
void *igStencilFunctionAttr_getMetaCall();
}
struct UnknownGenObject800B02A4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B0490_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *igStencilFunctionAttr_create(void *object){
 igStencilFunctionAttr_arkRegister();
 return meta_createInstance(igStencilFunctionAttr_meta,object);
}
void *igStencilFunctionAttr_getMeta(){
 if(!igStencilFunctionAttr_meta || !(reinterpret_cast<unsigned int *>(igStencilFunctionAttr_meta)[0x24/4]&4)) igStencilFunctionAttr_arkRegister();
 return igStencilFunctionAttr_meta;
}
void *igStencilFunctionAttr_vtableRead(){
 UnknownGenObject800B0490_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igStencilFunctionAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igStencilFunctionAttr_arkRegister(){
 meta_registerNow((int)igStencilFunctionAttr_register);
}
void igStencilFunctionAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igStencilFunctionAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igStencilFunctionAttr_getMetaCall,(int)igStencilFunctionAttr_className,40,(int)igStencilFunctionAttr_vtableRead,(int)igStencilFunctionAttr_fieldInit,0,0);
}
void *igStencilFunctionAttr_getMetaCall(){return igStencilFunctionAttr_getMeta();}
}
#pragma pop
}

namespace igStencilFunctionAttr_fieldInit {
// igStencilFunctionAttr: Alchemy class registration (0x800B05A0..0x800B06C8). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igStencilFunctionAttr)

extern "C" {
void fn_80046E58(void *, void *);
void fn_80075AC4(void *, int);
void fn_800CDBE4();
void fn_800CDC30();
extern char lbl_8055E148[4];
extern char lbl_8055E14C[4];
extern char lbl_8055E150[4];
extern char lbl_8055E154[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igStencilFunctionAttr_fieldInit()
{
    Meta::igMetaObject *meta = igStencilFunctionAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igStencilFunctionAttr_fieldTypes, 7);
    Meta::igEnumMetaField *funcField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base + 1));
    fn_80046E58(funcField, (void *)lbl_8055E148);
    funcField->_getMetaEnumFunction = reinterpret_cast<void *>(fn_800CDC30);
    Meta::igUnsignedIntMetaField *writeMaskField = static_cast<Meta::igUnsignedIntMetaField *>(meta_field(meta, base + 2));
    fn_80075AC4(writeMaskField, -1);
    Meta::igUnsignedIntMetaField *readMaskField = static_cast<Meta::igUnsignedIntMetaField *>(meta_field(meta, base + 3));
    fn_80075AC4(readMaskField, -1);
    Meta::igEnumMetaField *stenFailOpField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base + 4));
    fn_80046E58(stenFailOpField, (void *)lbl_8055E14C);
    stenFailOpField->_getMetaEnumFunction = reinterpret_cast<void *>(fn_800CDBE4);
    Meta::igEnumMetaField *stenPassZPassOpField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base + 5));
    fn_80046E58(stenPassZPassOpField, (void *)lbl_8055E150);
    stenPassZPassOpField->_getMetaEnumFunction = reinterpret_cast<void *>(fn_800CDBE4);
    Meta::igEnumMetaField *stenPassZFailOpField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base + 6));
    fn_80046E58(stenPassZFailOpField, (void *)lbl_8055E154);
    stenPassZFailOpField->_getMetaEnumFunction = reinterpret_cast<void *>(fn_800CDBE4);
    meta_setupFields(meta, igStencilFunctionAttr_fieldNames, igStencilFunctionAttr_fieldStorage, igStencilFunctionAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace igSpriteAttr {
// igSpriteAttr: Alchemy class registration (0x800B06C8..0x800B07A4). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igSpriteAttr)

extern "C" {
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

struct igSpriteAttrInstance : igObjectInstance {
    char unknown04[20];
    igObjectRefMember _vertexArray;
    char unknown1C[4];
    inline ~igSpriteAttrInstance() { __vtable = igSpriteAttr_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igSpriteAttr)

void *igSpriteAttr_vtableRead()
{
    igSpriteAttrInstance object;
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igSpriteAttr_vtable;
    object._vertexArray._value = 0;
    return meta_vtableOf(&object);
}

}
#pragma pop
}

namespace unknown800B07A4 {
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void *fn_800AC294();
void igSpriteAttr_fieldInit();
void igVisualAttribute_register();
extern char igSpriteAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char igSpriteAttr_dependencies[8];
extern void *igSpriteAttr_meta;
void *igSpriteAttr_getMeta();
void *igSpriteAttr_vtableRead();
void igSpriteAttr_arkRegister();
void igSpriteAttr_register();
void *igSpriteAttr_getMetaCall();
}
struct UnknownGenRoot800B0704 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B0704(){igObject_construct(this);}
};
struct UnknownGenObject800B0704 : UnknownGenRoot800B0704 {
 char unknown04[20];
 UnknownGenRefMember unknown18;
 char unknown1C[4];
 inline ~UnknownGenObject800B0704(){unknown00=igSpriteAttr_vtable;}
};
extern "C" {
UnknownGenHolder *dtor_800B07A4(UnknownGenHolder *object,short flags){
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
void igSpriteAttr_arkRegister(){
 meta_registerNow((int)igSpriteAttr_register);
}
void igSpriteAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igSpriteAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igSpriteAttr_getMetaCall,(int)igSpriteAttr_className,32,(int)igSpriteAttr_vtableRead,(int)igSpriteAttr_fieldInit,0,(int)igSpriteAttr_dependencies);
}
void *igSpriteAttr_getMetaCall(){return igSpriteAttr_getMeta();}
}
#pragma pop
}

namespace igSpriteAttr_fieldInit {
// igSpriteAttr: Alchemy class registration (0x800B08D4..0x800B09A4). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igSpriteAttr)

extern "C" {
void fn_80046E58(void *, void *);
void *fn_800D0068();
void fn_800D08C8();
void fn_800D0910();
extern char lbl_8055E168[4];
extern char lbl_8055E16C[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igSpriteAttr_fieldInit()
{
    Meta::igMetaObject *meta = igSpriteAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igSpriteAttr_fieldTypes, 5);
    Meta::igEnumMetaField *spriteTypeField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base));
    fn_80046E58(spriteTypeField, (void *)lbl_8055E168);
    spriteTypeField->_getMetaEnumFunction = reinterpret_cast<void *>(fn_800D08C8);
    Meta::igObjectRefMetaField *vertexArrayField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 3));
    void *value_v3 = fn_800D0068();
    vertexArrayField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v3);
    Meta::igEnumMetaField *spriteSpaceField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base + 4));
    fn_80046E58(spriteSpaceField, (void *)lbl_8055E16C);
    spriteSpaceField->_getMetaEnumFunction = reinterpret_cast<void *>(fn_800D0910);
    meta_setupFields(meta, igSpriteAttr_fieldNames, igSpriteAttr_fieldStorage, igSpriteAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace unknown800B09A4 {
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void fn_80046E58(void *,void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void *fn_800AC294();
void *fn_800B1738();
void *fn_800CDB9C();
void *fn_800CDDA8();
void igScissorAttr_fieldInit();
void igVisualAttribute_register();
extern char igShadeModelAttr_vtable[];
extern char igSetRenderDestinationAttr_vtable[];
extern char igScissorTypeAttr_vtable[];
extern char igScissorAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char igShadeModelAttr_fieldTypes[4];
extern char igShadeModelAttr_fieldNames[4];
extern char igShadeModelAttr_fieldStorage[4];
extern char igShadeModelAttr_fieldOffsets[4];
extern char lbl_8055E180[4];
extern char igSetRenderDestinationAttr_dependencies[8];
extern char igSetRenderDestinationAttr_fieldTypes[4];
extern char igSetRenderDestinationAttr_fieldNames[4];
extern char igSetRenderDestinationAttr_fieldStorage[4];
extern char igSetRenderDestinationAttr_fieldOffsets[4];
extern char igScissorTypeAttr_fieldTypes[4];
extern char igScissorTypeAttr_fieldNames[4];
extern char igScissorTypeAttr_fieldStorage[4];
extern char igScissorTypeAttr_fieldOffsets[4];
extern char lbl_8055E1AC[4];
extern void *lbl_805621F4;
extern void *igShadeModelAttr_meta;
extern void *igSetRenderDestinationAttr_meta;
extern void *igScissorTypeAttr_meta;
extern void *igScissorAttr_meta;
void *igShadeModelAttr_getMeta();
void *igShadeModelAttr_vtableRead();
void igShadeModelAttr_arkRegister();
void igShadeModelAttr_register();
void *igShadeModelAttr_getMetaCall();
void igShadeModelAttr_fieldInit();
void *igSetRenderDestinationAttr_getMeta();
void *igSetRenderDestinationAttr_vtableRead();
void igSetRenderDestinationAttr_arkRegister();
void igSetRenderDestinationAttr_register();
void *igSetRenderDestinationAttr_getMetaCall();
void igSetRenderDestinationAttr_fieldInit();
void *igScissorTypeAttr_getMeta();
void *igScissorTypeAttr_vtableRead();
void igScissorTypeAttr_arkRegister();
void igScissorTypeAttr_register();
void *igScissorTypeAttr_getMetaCall();
void igScissorTypeAttr_fieldInit();
void *igScissorAttr_getMeta();
void *igScissorAttr_vtableRead();
void igScissorAttr_arkRegister();
void igScissorAttr_register();
void *igScissorAttr_getMetaCall();
}
struct UnknownGenObject800B0A1C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800B0C68 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B0C68(){igObject_construct(this);}
};
struct UnknownGenObject800B0C68 : UnknownGenRoot800B0C68 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject800B0C68(){unknown00=igSetRenderDestinationAttr_vtable;}
};
struct UnknownGenObject800B0E80_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B1058_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *fn_800B09A4(){
 if(!igShadeModelAttr_meta) igShadeModelAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igShadeModelAttr_meta;
}
}
#pragma pop
}

namespace igShadeModelAttr {
// igShadeModelAttr: Alchemy class registration (0x800B09E0..0x800B0BB8). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igShadeModelAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_80046E58(void *,void *);
void fn_800ABC8C();
void *fn_800AC294();
void *fn_800CDDA8();
extern char igShadeModelAttr_fieldNames[4];
extern char igShadeModelAttr_fieldOffsets[4];
extern char igShadeModelAttr_fieldStorage[4];
extern char igShadeModelAttr_fieldTypes[4];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055E180[4];
}

struct Instance_800B0A1C_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igShadeModelAttr)

void *igShadeModelAttr_vtableRead()
{
    Instance_800B0A1C_0 object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igShadeModelAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igShadeModelAttr)

void igShadeModelAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igShadeModelAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igShadeModelAttr_getMetaCall,
                       igShadeModelAttr_className, 0x10,
                       igShadeModelAttr_vtableRead, igShadeModelAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igShadeModelAttr)

void igShadeModelAttr_fieldInit()
{
    Meta::igMetaObject *meta = igShadeModelAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igShadeModelAttr_fieldTypes, 1);
    Meta::igEnumMetaField *modeField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base));
    fn_80046E58(modeField, lbl_8055E180);
    modeField->_getMetaEnumFunction = reinterpret_cast<void *>((void *)fn_800CDDA8);
    meta_setupFields(meta, igShadeModelAttr_fieldNames, igShadeModelAttr_fieldStorage, igShadeModelAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace igSetRenderDestinationAttr {
// igSetRenderDestinationAttr: Alchemy class registration (0x800B0BB8..0x800B0BF0). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igSetRenderDestinationAttr)

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igSetRenderDestinationAttr)

}
#pragma pop
}

namespace unknown800B0BF0 {
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void fn_80046E58(void *,void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void *fn_800AC294();
void *fn_800B1738();
void *fn_800CDB9C();
void *fn_800CDDA8();
void igScissorAttr_fieldInit();
void igVisualAttribute_register();
extern char igShadeModelAttr_vtable[];
extern char igSetRenderDestinationAttr_vtable[];
extern char igScissorTypeAttr_vtable[];
extern char igScissorAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char igShadeModelAttr_fieldTypes[4];
extern char igShadeModelAttr_fieldNames[4];
extern char igShadeModelAttr_fieldStorage[4];
extern char igShadeModelAttr_fieldOffsets[4];
extern char lbl_8055E180[4];
extern char igSetRenderDestinationAttr_dependencies[8];
extern char igSetRenderDestinationAttr_fieldTypes[4];
extern char igSetRenderDestinationAttr_fieldNames[4];
extern char igSetRenderDestinationAttr_fieldStorage[4];
extern char igSetRenderDestinationAttr_fieldOffsets[4];
extern char igScissorTypeAttr_fieldTypes[4];
extern char igScissorTypeAttr_fieldNames[4];
extern char igScissorTypeAttr_fieldStorage[4];
extern char igScissorTypeAttr_fieldOffsets[4];
extern char lbl_8055E1AC[4];
extern void *lbl_805621F4;
extern void *igShadeModelAttr_meta;
extern void *igSetRenderDestinationAttr_meta;
extern void *igScissorTypeAttr_meta;
extern void *igScissorAttr_meta;
void *igShadeModelAttr_getMeta();
void *igShadeModelAttr_vtableRead();
void igShadeModelAttr_arkRegister();
void igShadeModelAttr_register();
void *igShadeModelAttr_getMetaCall();
void igShadeModelAttr_fieldInit();
void *igSetRenderDestinationAttr_getMeta();
void *igSetRenderDestinationAttr_vtableRead();
void igSetRenderDestinationAttr_arkRegister();
void igSetRenderDestinationAttr_register();
void *igSetRenderDestinationAttr_getMetaCall();
void igSetRenderDestinationAttr_fieldInit();
void *igScissorTypeAttr_getMeta();
void *igScissorTypeAttr_vtableRead();
void igScissorTypeAttr_arkRegister();
void igScissorTypeAttr_register();
void *igScissorTypeAttr_getMetaCall();
void igScissorTypeAttr_fieldInit();
void *igScissorAttr_getMeta();
void *igScissorAttr_vtableRead();
void igScissorAttr_arkRegister();
void igScissorAttr_register();
void *igScissorAttr_getMetaCall();
}
struct UnknownGenObject800B0A1C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800B0C68 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B0C68(){igObject_construct(this);}
};
struct UnknownGenObject800B0C68 : UnknownGenRoot800B0C68 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject800B0C68(){unknown00=igSetRenderDestinationAttr_vtable;}
};
struct UnknownGenObject800B0E80_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B1058_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *fn_800B0BF0(){
 if(!igSetRenderDestinationAttr_meta) igSetRenderDestinationAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igSetRenderDestinationAttr_meta;
}
}
#pragma pop
}

namespace igSetRenderDestinationAttr_2 {
// igSetRenderDestinationAttr: Alchemy class registration (0x800B0C2C..0x800B0E44). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igSetRenderDestinationAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_800ABC8C();
void *fn_800AC294();
void *fn_800B1738();
extern char igSetRenderDestinationAttr_dependencies[8];
extern char igSetRenderDestinationAttr_fieldNames[4];
extern char igSetRenderDestinationAttr_fieldOffsets[4];
extern char igSetRenderDestinationAttr_fieldStorage[4];
extern char igSetRenderDestinationAttr_fieldTypes[4];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

struct igSetRenderDestinationAttrInstance : igObjectInstance {
    char unknown04[8];
    igObjectRefMember _pRDAttr;
    inline ~igSetRenderDestinationAttrInstance() { __vtable = igSetRenderDestinationAttr_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igSetRenderDestinationAttr)

void *igSetRenderDestinationAttr_vtableRead()
{
    igSetRenderDestinationAttrInstance object;
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igSetRenderDestinationAttr_vtable;
    object._pRDAttr._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igSetRenderDestinationAttr)

void igSetRenderDestinationAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igSetRenderDestinationAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igSetRenderDestinationAttr_getMetaCall,
                       igSetRenderDestinationAttr_className, 0x10,
                       igSetRenderDestinationAttr_vtableRead, igSetRenderDestinationAttr_fieldInit, 0, igSetRenderDestinationAttr_dependencies);
}

META_GET_META_CALL(igSetRenderDestinationAttr)

void igSetRenderDestinationAttr_fieldInit()
{
    Meta::igMetaObject *meta = igSetRenderDestinationAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igSetRenderDestinationAttr_fieldTypes, 1);
    Meta::igObjectRefMetaField *pRDAttrField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_800B1738();
    pRDAttrField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    meta_setupFields(meta, igSetRenderDestinationAttr_fieldNames, igSetRenderDestinationAttr_fieldStorage, igSetRenderDestinationAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace igScissorTypeAttr {
// igScissorTypeAttr: Alchemy class registration (0x800B0E44..0x800B101C). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igScissorTypeAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_80046E58(void *,void *);
void fn_800ABC8C();
void *fn_800AC294();
void *fn_800CDB9C();
extern char igScissorTypeAttr_fieldNames[4];
extern char igScissorTypeAttr_fieldOffsets[4];
extern char igScissorTypeAttr_fieldStorage[4];
extern char igScissorTypeAttr_fieldTypes[4];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055E1AC[4];
}

struct Instance_800B0E80_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igScissorTypeAttr)

void *igScissorTypeAttr_vtableRead()
{
    Instance_800B0E80_0 object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igScissorTypeAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igScissorTypeAttr)

void igScissorTypeAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igScissorTypeAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igScissorTypeAttr_getMetaCall,
                       igScissorTypeAttr_className, 0x10,
                       igScissorTypeAttr_vtableRead, igScissorTypeAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igScissorTypeAttr)

void igScissorTypeAttr_fieldInit()
{
    Meta::igMetaObject *meta = igScissorTypeAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igScissorTypeAttr_fieldTypes, 1);
    Meta::igEnumMetaField *typeField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base));
    fn_80046E58(typeField, lbl_8055E1AC);
    typeField->_getMetaEnumFunction = reinterpret_cast<void *>((void *)fn_800CDB9C);
    meta_setupFields(meta, igScissorTypeAttr_fieldNames, igScissorTypeAttr_fieldStorage, igScissorTypeAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace unknown800B101C {
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void fn_80046E58(void *,void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void *fn_800AC294();
void *fn_800B1738();
void *fn_800CDB9C();
void *fn_800CDDA8();
void igScissorAttr_fieldInit();
void igVisualAttribute_register();
extern char igShadeModelAttr_vtable[];
extern char igSetRenderDestinationAttr_vtable[];
extern char igScissorTypeAttr_vtable[];
extern char igScissorAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char igShadeModelAttr_fieldTypes[4];
extern char igShadeModelAttr_fieldNames[4];
extern char igShadeModelAttr_fieldStorage[4];
extern char igShadeModelAttr_fieldOffsets[4];
extern char lbl_8055E180[4];
extern char igSetRenderDestinationAttr_dependencies[8];
extern char igSetRenderDestinationAttr_fieldTypes[4];
extern char igSetRenderDestinationAttr_fieldNames[4];
extern char igSetRenderDestinationAttr_fieldStorage[4];
extern char igSetRenderDestinationAttr_fieldOffsets[4];
extern char igScissorTypeAttr_fieldTypes[4];
extern char igScissorTypeAttr_fieldNames[4];
extern char igScissorTypeAttr_fieldStorage[4];
extern char igScissorTypeAttr_fieldOffsets[4];
extern char lbl_8055E1AC[4];
extern void *lbl_805621F4;
extern void *igShadeModelAttr_meta;
extern void *igSetRenderDestinationAttr_meta;
extern void *igScissorTypeAttr_meta;
extern void *igScissorAttr_meta;
void *igShadeModelAttr_getMeta();
void *igShadeModelAttr_vtableRead();
void igShadeModelAttr_arkRegister();
void igShadeModelAttr_register();
void *igShadeModelAttr_getMetaCall();
void igShadeModelAttr_fieldInit();
void *igSetRenderDestinationAttr_getMeta();
void *igSetRenderDestinationAttr_vtableRead();
void igSetRenderDestinationAttr_arkRegister();
void igSetRenderDestinationAttr_register();
void *igSetRenderDestinationAttr_getMetaCall();
void igSetRenderDestinationAttr_fieldInit();
void *igScissorTypeAttr_getMeta();
void *igScissorTypeAttr_vtableRead();
void igScissorTypeAttr_arkRegister();
void igScissorTypeAttr_register();
void *igScissorTypeAttr_getMetaCall();
void igScissorTypeAttr_fieldInit();
void *igScissorAttr_getMeta();
void *igScissorAttr_vtableRead();
void igScissorAttr_arkRegister();
void igScissorAttr_register();
void *igScissorAttr_getMetaCall();
}
struct UnknownGenObject800B0A1C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800B0C68 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B0C68(){igObject_construct(this);}
};
struct UnknownGenObject800B0C68 : UnknownGenRoot800B0C68 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject800B0C68(){unknown00=igSetRenderDestinationAttr_vtable;}
};
struct UnknownGenObject800B0E80_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B1058_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *igScissorAttr_getMeta(){
 if(!igScissorAttr_meta || !(reinterpret_cast<unsigned int *>(igScissorAttr_meta)[0x24/4]&4)) igScissorAttr_arkRegister();
 return igScissorAttr_meta;
}
void *igScissorAttr_vtableRead(){
 UnknownGenObject800B1058_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igScissorAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igScissorAttr_arkRegister(){
 meta_registerNow((int)igScissorAttr_register);
}
void igScissorAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igScissorAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igScissorAttr_getMetaCall,(int)igScissorAttr_className,32,(int)igScissorAttr_vtableRead,(int)igScissorAttr_fieldInit,0,0);
}
void *igScissorAttr_getMetaCall(){return igScissorAttr_getMeta();}
}
#pragma pop
}

namespace igScissorAttr_fieldInit {
// igScissorAttr: Alchemy class registration (0x800B1168..0x800B1200). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igScissorAttr)

extern "C" {
void fn_80053650(void *, int);
}

#pragma push
#pragma auto_inline off
extern "C" {

void igScissorAttr_fieldInit()
{
    Meta::igMetaObject *meta = igScissorAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igScissorAttr_fieldTypes, 5);
    Meta::igIntMetaField *wField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 3));
    fn_80053650(wField, 640);
    Meta::igIntMetaField *hField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 4));
    fn_80053650(hField, 480);
    meta_setupFields(meta, igScissorAttr_fieldNames, igScissorAttr_fieldStorage, igScissorAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace unknown800B1200 {
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void *fn_800AC294();
void igSceneAmbientColorAttr_fieldInit();
void igVisualAttribute_register();
extern char igSceneAmbientColorAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *igSceneAmbientColorAttr_meta;
void *igSceneAmbientColorAttr_getMeta();
void *igSceneAmbientColorAttr_vtableRead();
void igSceneAmbientColorAttr_arkRegister();
void igSceneAmbientColorAttr_register();
void *igSceneAmbientColorAttr_getMetaCall();
}
struct UnknownGenObject800B123C_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *igSceneAmbientColorAttr_getMeta(){
 if(!igSceneAmbientColorAttr_meta || !(reinterpret_cast<unsigned int *>(igSceneAmbientColorAttr_meta)[0x24/4]&4)) igSceneAmbientColorAttr_arkRegister();
 return igSceneAmbientColorAttr_meta;
}
void *igSceneAmbientColorAttr_vtableRead(){
 UnknownGenObject800B123C_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igSceneAmbientColorAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igSceneAmbientColorAttr_arkRegister(){
 meta_registerNow((int)igSceneAmbientColorAttr_register);
}
void igSceneAmbientColorAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igSceneAmbientColorAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igSceneAmbientColorAttr_getMetaCall,(int)igSceneAmbientColorAttr_className,28,(int)igSceneAmbientColorAttr_vtableRead,(int)igSceneAmbientColorAttr_fieldInit,0,0);
}
void *igSceneAmbientColorAttr_getMetaCall(){return igSceneAmbientColorAttr_getMeta();}
}
#pragma pop
}

namespace unknown800B134C {
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void fn_80126CF0(void *,void *);
extern char igSceneAmbientColorAttr_fieldTypes[4];
extern char igSceneAmbientColorAttr_fieldNames[4];
extern char igSceneAmbientColorAttr_fieldStorage[4];
extern char igSceneAmbientColorAttr_fieldOffsets[4];
extern void *igSceneAmbientColorAttr_meta;
extern char lbl_80566814[4];
}
struct UnknownGenL800B134C_8 {
 float m08;
 float m0C;
 float m10;
 float m14;
};
extern "C" {
void igSceneAmbientColorAttr_fieldInit(){
 UnknownGenL800B134C_8 local0;
 void *value0=igSceneAmbientColorAttr_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,igSceneAmbientColorAttr_fieldTypes,1);
 void *value2=meta_field(value0,value1);
 local0.m08=*reinterpret_cast<float *>((lbl_80566814+0));
 local0.m0C=*reinterpret_cast<float *>((lbl_80566814+0));
 local0.m10=*reinterpret_cast<float *>((lbl_80566814+0));
 local0.m14=*reinterpret_cast<float *>((lbl_80566814+0));
 fn_80126CF0(value2,&local0);
 meta_setupFields(value0,igSceneAmbientColorAttr_fieldNames,igSceneAmbientColorAttr_fieldStorage,igSceneAmbientColorAttr_fieldOffsets,value1);
}
}
#pragma pop
}

namespace unknown800B13DC {
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void fn_80053650(void *,int);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void *fn_800AC294();
void *fn_800CE788();
void igRenderDestinationAttr_fieldInit();
void igVisualAttribute_register();
extern char igRenderListAttr_vtable[];
extern char igRenderDestinationAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char igRenderListAttr_dependencies[8];
extern char igRenderListAttr_fieldTypes[8];
extern char igRenderListAttr_fieldNames[8];
extern char igRenderListAttr_fieldStorage[8];
extern char igRenderListAttr_fieldOffsets[8];
extern char lbl_8055E200[8];
extern char lbl_8055E208[8];
extern void *lbl_805621F4;
extern void *igRenderListAttr_meta;
extern void *lbl_80562650;
extern void *lbl_80562654;
extern void *igRenderDestinationAttr_meta;
void *igRenderListAttr_getMeta();
void *igRenderListAttr_vtableRead();
void igRenderListAttr_arkRegister();
void igRenderListAttr_register();
void *igRenderListAttr_getMetaCall();
void igRenderListAttr_fieldInit();
void *igRenderDestinationAttr_getMeta();
void *igRenderDestinationAttr_vtableRead();
void igRenderDestinationAttr_arkRegister();
void igRenderDestinationAttr_register();
void *igRenderDestinationAttr_getMetaCall();
}
struct UnknownGenRoot800B1454 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B1454(){igObject_construct(this);}
};
struct UnknownGenObject800B1454 : UnknownGenRoot800B1454 {
 char unknown04[12];
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject800B1454(){unknown00=igRenderListAttr_vtable;}
};
struct UnknownGenRoot800B17B0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B17B0(){igObject_construct(this);}
};
struct UnknownGenObject800B17B0 : UnknownGenRoot800B17B0 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 char unknown24[28];
 UnknownGenRefMember unknown40;
 char unknown44[12];
 inline ~UnknownGenObject800B17B0(){unknown00=igRenderDestinationAttr_vtable;}
};
extern "C" {
void *fn_800B13DC(){
 if(!igRenderListAttr_meta) igRenderListAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igRenderListAttr_meta;
}
}
#pragma pop
}

namespace igRenderListAttr {
// igRenderListAttr: Alchemy class registration (0x800B1418..0x800B166C). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igRenderListAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_80053650(void *,int);
void fn_800ABC8C();
void *fn_800AC294();
void *fn_800CE788();
extern char igRenderListAttr_dependencies[8];
extern char igRenderListAttr_fieldNames[8];
extern char igRenderListAttr_fieldOffsets[8];
extern char igRenderListAttr_fieldStorage[8];
extern char igRenderListAttr_fieldTypes[8];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

struct igRenderListAttrInstance : igObjectInstance {
    char unknown04[12];
    igObjectRefMember _vc;
    char unknown14[12];
    inline ~igRenderListAttrInstance() { __vtable = igRenderListAttr_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igRenderListAttr)

void *igRenderListAttr_vtableRead()
{
    igRenderListAttrInstance object;
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igRenderListAttr_vtable;
    object._vc._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igRenderListAttr)

void igRenderListAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igRenderListAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igRenderListAttr_getMetaCall,
                       igRenderListAttr_className, 0x14,
                       igRenderListAttr_vtableRead, igRenderListAttr_fieldInit, 0, igRenderListAttr_dependencies);
}

META_GET_META_CALL(igRenderListAttr)

void igRenderListAttr_fieldInit()
{
    Meta::igMetaObject *meta = igRenderListAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igRenderListAttr_fieldTypes, 2);
    Meta::igIntMetaField *handleField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base));
    fn_80053650(handleField, -1);
    handleField->_persistent = false;
    Meta::igObjectRefMetaField *vcField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_value4 = fn_800CE788();
    vcField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value4);
    vcField->_persistent = false;
    vcField->_deepCopyMethod = 1;
    vcField->_shallowCopyMethod = 1;
    vcField->_isAlikeShallowMethod = 3;
    meta_setupFields(meta, igRenderListAttr_fieldNames, igRenderListAttr_fieldStorage, igRenderListAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace unknown800B166C {
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void fn_80053650(void *,int);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void *fn_800AC294();
void *fn_800CE788();
void igRenderDestinationAttr_fieldInit();
void igVisualAttribute_register();
extern char igRenderListAttr_vtable[];
extern char igRenderDestinationAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char igRenderListAttr_dependencies[8];
extern char igRenderListAttr_fieldTypes[8];
extern char igRenderListAttr_fieldNames[8];
extern char igRenderListAttr_fieldStorage[8];
extern char igRenderListAttr_fieldOffsets[8];
extern char lbl_8055E200[8];
extern char lbl_8055E208[8];
extern void *lbl_805621F4;
extern void *igRenderListAttr_meta;
extern void *lbl_80562650;
extern void *lbl_80562654;
extern void *igRenderDestinationAttr_meta;
void *igRenderListAttr_getMeta();
void *igRenderListAttr_vtableRead();
void igRenderListAttr_arkRegister();
void igRenderListAttr_register();
void *igRenderListAttr_getMetaCall();
void igRenderListAttr_fieldInit();
void *igRenderDestinationAttr_getMeta();
void *igRenderDestinationAttr_vtableRead();
void igRenderDestinationAttr_arkRegister();
void igRenderDestinationAttr_register();
void *igRenderDestinationAttr_getMetaCall();
}
struct UnknownGenRoot800B1454 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B1454(){igObject_construct(this);}
};
struct UnknownGenObject800B1454 : UnknownGenRoot800B1454 {
 char unknown04[12];
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject800B1454(){unknown00=igRenderListAttr_vtable;}
};
struct UnknownGenRoot800B17B0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B17B0(){igObject_construct(this);}
};
struct UnknownGenObject800B17B0 : UnknownGenRoot800B17B0 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 char unknown24[28];
 UnknownGenRefMember unknown40;
 char unknown44[12];
 inline ~UnknownGenObject800B17B0(){unknown00=igRenderDestinationAttr_vtable;}
};
extern "C" {
void *fn_800B166C(){
 void *value0;
 if(!lbl_80562650){
  value0=fn_800635C8(lbl_80478A18,lbl_8055E200,lbl_8055E208,2);
  lbl_80562650=value0;
 }
 return lbl_80562650;
}
void *fn_800B16B4(){
 char *data=igVisualContextAttrDefaultManager_className;
 if(!lbl_80562654) lbl_80562654=fn_800635C8(data+0xDD0,data+0xDB8,data+0xDC4,0x3);
 return lbl_80562654;
}
}
#pragma pop
}

namespace igRenderDestinationAttr {
// igRenderDestinationAttr: Alchemy class registration (0x800B1700..0x800B1738). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igRenderDestinationAttr)

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igRenderDestinationAttr)

}
#pragma pop
}

namespace unknown800B1738 {
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void fn_80053650(void *,int);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void *fn_800AC294();
void *fn_800CE788();
void igRenderDestinationAttr_fieldInit();
void igVisualAttribute_register();
extern char igRenderListAttr_vtable[];
extern char igRenderDestinationAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char igRenderListAttr_dependencies[8];
extern char igRenderListAttr_fieldTypes[8];
extern char igRenderListAttr_fieldNames[8];
extern char igRenderListAttr_fieldStorage[8];
extern char igRenderListAttr_fieldOffsets[8];
extern char lbl_8055E200[8];
extern char lbl_8055E208[8];
extern void *lbl_805621F4;
extern void *igRenderListAttr_meta;
extern void *lbl_80562650;
extern void *lbl_80562654;
extern void *igRenderDestinationAttr_meta;
void *igRenderListAttr_getMeta();
void *igRenderListAttr_vtableRead();
void igRenderListAttr_arkRegister();
void igRenderListAttr_register();
void *igRenderListAttr_getMetaCall();
void igRenderListAttr_fieldInit();
void *igRenderDestinationAttr_getMeta();
void *igRenderDestinationAttr_vtableRead();
void igRenderDestinationAttr_arkRegister();
void igRenderDestinationAttr_register();
void *igRenderDestinationAttr_getMetaCall();
}
struct UnknownGenRoot800B1454 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B1454(){igObject_construct(this);}
};
struct UnknownGenObject800B1454 : UnknownGenRoot800B1454 {
 char unknown04[12];
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject800B1454(){unknown00=igRenderListAttr_vtable;}
};
struct UnknownGenRoot800B17B0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B17B0(){igObject_construct(this);}
};
struct UnknownGenObject800B17B0 : UnknownGenRoot800B17B0 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 char unknown24[28];
 UnknownGenRefMember unknown40;
 char unknown44[12];
 inline ~UnknownGenObject800B17B0(){unknown00=igRenderDestinationAttr_vtable;}
};
extern "C" {
void *fn_800B1738(){
 if(!igRenderDestinationAttr_meta) igRenderDestinationAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igRenderDestinationAttr_meta;
}
void *igRenderDestinationAttr_getMeta(){
 if(!igRenderDestinationAttr_meta || !(reinterpret_cast<unsigned int *>(igRenderDestinationAttr_meta)[0x24/4]&4)) igRenderDestinationAttr_arkRegister();
 return igRenderDestinationAttr_meta;
}
void *igRenderDestinationAttr_vtableRead(){
 UnknownGenObject800B17B0 object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igRenderDestinationAttr_vtable;
 object.unknown20.value=0;
 object.unknown40.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igRenderDestinationAttr_arkRegister(){
 meta_registerNow((int)igRenderDestinationAttr_register);
}
void igRenderDestinationAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igRenderDestinationAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igRenderDestinationAttr_getMetaCall,(int)igRenderDestinationAttr_className,68,(int)igRenderDestinationAttr_vtableRead,(int)igRenderDestinationAttr_fieldInit,0,(int)igRenderDestinationAttr_dependencies);
}
void *igRenderDestinationAttr_getMetaCall(){return igRenderDestinationAttr_getMeta();}
}
#pragma pop
}

namespace igRenderDestinationAttr_fieldInit {
// igRenderDestinationAttr: Alchemy class registration (0x800B1950..0x800B1BB8). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igRenderDestinationAttr)

extern "C" {
void fn_80046E58(void *, void *);
void fn_80053650(void *, int);
void *fn_800AF4A4();
void fn_800B166C();
void fn_800B16B4();
void fn_800CE260();
void *fn_800CE788();
extern char lbl_8055E230[4];
extern char lbl_8055E234[4];
extern char lbl_8055E238[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igRenderDestinationAttr_fieldInit()
{
    Meta::igMetaObject *meta = igRenderDestinationAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igRenderDestinationAttr_fieldTypes, 14);
    Meta::igEnumMetaField *iCreateModeField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base));
    fn_80046E58(iCreateModeField, (void *)lbl_8055E230);
    iCreateModeField->_persistent = false;
    iCreateModeField->_getMetaEnumFunction = reinterpret_cast<void *>(fn_800B16B4);
    Meta::igEnumMetaField *iTexCreateModeField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base + 1));
    fn_80046E58(iTexCreateModeField, (void *)lbl_8055E234);
    iTexCreateModeField->_persistent = false;
    iTexCreateModeField->_getMetaEnumFunction = reinterpret_cast<void *>(fn_800B166C);
    Meta::igIntMetaField *iRDHandleField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 2));
    fn_80053650(iRDHandleField, -1);
    iRDHandleField->_persistent = false;
    iRDHandleField->_deepCopyMethod = 4;
    iRDHandleField->_shallowCopyMethod = 4;
    iRDHandleField->_isAlikeShallowMethod = 3;
    Meta::igBoolMetaField *bEnabledField = static_cast<Meta::igBoolMetaField *>(meta_field(meta, base + 3));
    bEnabledField->_persistent = false;
    Meta::igIntMetaField *iPrevRDHandleField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 4));
    fn_80053650(iPrevRDHandleField, -1);
    iPrevRDHandleField->_persistent = false;
    Meta::igObjectRefMetaField *pTexField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 5));
    void *value_v7 = fn_800AF4A4();
    pTexField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v7);
    pTexField->_persistent = false;
    Meta::igEnumMetaField *iTypeField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base + 6));
    fn_80046E58(iTypeField, (void *)lbl_8055E238);
    iTypeField->_getMetaEnumFunction = reinterpret_cast<void *>(fn_800CE260);
    Meta::igIntMetaField *iSizeXField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 7));
    fn_80053650(iSizeXField, -1);
    iSizeXField->_persistent = false;
    Meta::igIntMetaField *iSizeYField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 8));
    fn_80053650(iSizeYField, -1);
    iSizeYField->_persistent = false;
    Meta::igIntMetaField *iColorBitCountField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 9));
    fn_80053650(iColorBitCountField, -1);
    iColorBitCountField->_persistent = false;
    Meta::igIntMetaField *iAlphaBitCountField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 10));
    fn_80053650(iAlphaBitCountField, -1);
    iAlphaBitCountField->_persistent = false;
    Meta::igIntMetaField *iDepthBitCountField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 11));
    fn_80053650(iDepthBitCountField, -1);
    iDepthBitCountField->_persistent = false;
    Meta::igIntMetaField *iStencilBitCountField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 12));
    fn_80053650(iStencilBitCountField, -1);
    iStencilBitCountField->_persistent = false;
    Meta::igObjectRefMetaField *vcField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 13));
    void *value_v16 = fn_800CE788();
    vcField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v16);
    vcField->_persistent = false;
    vcField->_deepCopyMethod = 1;
    vcField->_shallowCopyMethod = 1;
    vcField->_isAlikeShallowMethod = 3;
    meta_setupFields(meta, igRenderDestinationAttr_fieldNames, igRenderDestinationAttr_fieldStorage, igRenderDestinationAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace igRefVertexBlendMatrixAttr {
// igRefVertexBlendMatrixAttr: Alchemy class registration (0x800B1BB8..0x800B1DE8). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igRefVertexBlendMatrixAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_800ABC8C();
void *fn_800AC294();
void *fn_800C23E4(int);
void *fn_80218120();
extern char igRefVertexBlendMatrixAttr_dependencies[8];
extern char igRefVertexBlendMatrixAttr_fieldNames[8];
extern char igRefVertexBlendMatrixAttr_fieldOffsets[8];
extern char igRefVertexBlendMatrixAttr_fieldStorage[8];
extern char igRefVertexBlendMatrixAttr_fieldTypes[8];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

struct igRefVertexBlendMatrixAttrInstance : igObjectInstance {
    char unknown04[8];
    igObjectRefMember _m;
    char unknown10[16];
    inline ~igRefVertexBlendMatrixAttrInstance() { __vtable = igRefVertexBlendMatrixAttr_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igRefVertexBlendMatrixAttr)

void *igRefVertexBlendMatrixAttr_vtableRead()
{
    igRefVertexBlendMatrixAttrInstance object;
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igRefVertexBlendMatrixAttr_vtable;
    object._m._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igRefVertexBlendMatrixAttr)

void igRefVertexBlendMatrixAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igRefVertexBlendMatrixAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igRefVertexBlendMatrixAttr_getMetaCall,
                       igRefVertexBlendMatrixAttr_className, 0x14,
                       igRefVertexBlendMatrixAttr_vtableRead, igRefVertexBlendMatrixAttr_fieldInit, 0, igRefVertexBlendMatrixAttr_dependencies);
}

META_GET_META_CALL(igRefVertexBlendMatrixAttr)

void igRefVertexBlendMatrixAttr_fieldInit()
{
    Meta::igMetaObject *meta = igRefVertexBlendMatrixAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igRefVertexBlendMatrixAttr_fieldTypes, 2);
    Meta::igObjectRefMetaField *mField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_80218120();
    mField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    Meta::igUnsignedShortMetaField *blendMatIDField = static_cast<Meta::igUnsignedShortMetaField *>(meta_field(meta, base + 1));
    blendMatIDField->_invarianceFunction = reinterpret_cast<void *>((void *)fn_800C23E4);
    meta_setupFields(meta, igRefVertexBlendMatrixAttr_fieldNames, igRefVertexBlendMatrixAttr_fieldStorage, igRefVertexBlendMatrixAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace igProjectionMatrixAttr {
// igProjectionMatrixAttr: Alchemy class registration (0x800B1DE8..0x800B1E20). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igProjectionMatrixAttr)

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igProjectionMatrixAttr)

}
#pragma pop
}

namespace unknown800B1E20 {
#pragma push
#pragma auto_inline off
extern "C" {
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
void fn_800ABC8C();
void *fn_800AC294();
void igProjectionMatrixAttr_arkRegister();
void *fn_800C23E4(int);
void *fn_80218120();
void igVisualAttribute_register();
extern char igRefVertexBlendMatrixAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char igRefVertexBlendMatrixAttr_dependencies[8];
extern char igRefVertexBlendMatrixAttr_fieldTypes[8];
extern char igRefVertexBlendMatrixAttr_fieldNames[8];
extern char igRefVertexBlendMatrixAttr_fieldStorage[8];
extern char igRefVertexBlendMatrixAttr_fieldOffsets[8];
extern void *lbl_805621F4;
extern void *igRefVertexBlendMatrixAttr_meta;
extern void *igProjectionMatrixAttr_meta;
void *igRefVertexBlendMatrixAttr_getMeta();
void *igRefVertexBlendMatrixAttr_vtableRead();
void igRefVertexBlendMatrixAttr_arkRegister();
void igRefVertexBlendMatrixAttr_register();
void *igRefVertexBlendMatrixAttr_getMetaCall();
void igRefVertexBlendMatrixAttr_fieldInit();
}
struct UnknownGenRoot800B1BF4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B1BF4(){igObject_construct(this);}
};
struct UnknownGenObject800B1BF4 : UnknownGenRoot800B1BF4 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 char unknown10[16];
 inline ~UnknownGenObject800B1BF4(){unknown00=igRefVertexBlendMatrixAttr_vtable;}
};
extern "C" {
void *fn_800B1E20(){
 if(!igProjectionMatrixAttr_meta) igProjectionMatrixAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igProjectionMatrixAttr_meta;
}
}
#pragma pop
}

namespace igProjectionMatrixAttr_2 {
// igProjectionMatrixAttr: Alchemy class registration (0x800B1E5C..0x800B1FB0). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igProjectionMatrixAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_800ABC8C();
void *fn_800AC294();
void fn_801285A0(void *);
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

struct Instance_LigProjectionMatrixAttr_0 : igObjectInstance {
};

struct Instance_LigProjectionMatrixAttr_1 : Instance_LigProjectionMatrixAttr_0 {
};

struct Instance_LigProjectionMatrixAttr_2 : Instance_LigProjectionMatrixAttr_1 {
    char unknown04[8];
    char unknown0C[64];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igProjectionMatrixAttr)

void *igProjectionMatrixAttr_vtableRead()
{
    Instance_LigProjectionMatrixAttr_2 object;
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igProjectionMatrixAttr_vtable;
    fn_801285A0(&object.unknown0C);
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igProjectionMatrixAttr)

void igProjectionMatrixAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igProjectionMatrixAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igProjectionMatrixAttr_getMetaCall,
                       igProjectionMatrixAttr_className, 0x4C,
                       igProjectionMatrixAttr_vtableRead, igProjectionMatrixAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igProjectionMatrixAttr)

}
#pragma pop
}

namespace igProjectionMatrixAttr_3 {
// igProjectionMatrixAttr: Alchemy class registration (0x800B1FB0..0x800B2084). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igProjectionMatrixAttr)

extern "C" {
void fn_80124504(void *, void *);
extern char igProjectionMatrixAttr_fieldNames[4];
extern char igProjectionMatrixAttr_fieldOffsets[4];
extern char igProjectionMatrixAttr_fieldStorage[4];
extern char igProjectionMatrixAttr_fieldTypes[4];
extern char lbl_80566810[4];
extern char lbl_80566814[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igProjectionMatrixAttr_fieldInit()
{
    float local[20];
    Meta::igMetaObject *meta = igProjectionMatrixAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igProjectionMatrixAttr_fieldTypes, 1);
    Meta::igMatrix44fMetaField *mField = static_cast<Meta::igMatrix44fMetaField *>(meta_field(meta, base));
    local[0] = *reinterpret_cast<float *>(lbl_80566810);
    local[1] = *reinterpret_cast<float *>(lbl_80566814);
    local[2] = *reinterpret_cast<float *>(lbl_80566814);
    local[3] = *reinterpret_cast<float *>(lbl_80566814);
    local[4] = *reinterpret_cast<float *>(lbl_80566810);
    local[5] = *reinterpret_cast<float *>(lbl_80566814);
    local[6] = *reinterpret_cast<float *>(lbl_80566814);
    local[7] = *reinterpret_cast<float *>(lbl_80566814);
    local[8] = *reinterpret_cast<float *>(lbl_80566814);
    local[9] = *reinterpret_cast<float *>(lbl_80566810);
    local[10] = *reinterpret_cast<float *>(lbl_80566814);
    local[11] = *reinterpret_cast<float *>(lbl_80566814);
    local[12] = *reinterpret_cast<float *>(lbl_80566814);
    local[13] = *reinterpret_cast<float *>(lbl_80566814);
    local[14] = *reinterpret_cast<float *>(lbl_80566810);
    local[15] = *reinterpret_cast<float *>(lbl_80566814);
    local[16] = *reinterpret_cast<float *>(lbl_80566814);
    local[17] = *reinterpret_cast<float *>(lbl_80566814);
    local[18] = *reinterpret_cast<float *>(lbl_80566814);
    local[19] = *reinterpret_cast<float *>(lbl_80566810);
    fn_80124504(mField, &local[4]);
    meta_setupFields(meta, igProjectionMatrixAttr_fieldNames, igProjectionMatrixAttr_fieldStorage, igProjectionMatrixAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace unknown800B2084 {
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void fn_80046E58(void *,void *);
void fn_8004D4BC(void *,float);
void *fn_800607F4(void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void *fn_800AC294();
void fn_800CDCC8();
void igPixelShaderAttr_fieldInit();
void igVisualAttribute_register();
extern char igPolygonModeAttr_vtable[];
extern char igPointSpriteSizeAttr_vtable[];
extern char igPixelShaderBindAttr_vtable[];
extern char igPixelShaderAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char igPolygonModeAttr_fieldTypes[4];
extern char igPolygonModeAttr_fieldNames[4];
extern char igPolygonModeAttr_fieldStorage[4];
extern char igPolygonModeAttr_fieldOffsets[4];
extern char lbl_8055E284[4];
extern char igPointSpriteSizeAttr_fieldTypes[4];
extern char igPointSpriteSizeAttr_fieldNames[4];
extern char igPointSpriteSizeAttr_fieldStorage[4];
extern char igPointSpriteSizeAttr_fieldOffsets[4];
extern char igPixelShaderBindAttr_dependencies[8];
extern char igPixelShaderBindAttr_fieldTypes[4];
extern char igPixelShaderBindAttr_fieldNames[4];
extern char igPixelShaderBindAttr_fieldStorage[4];
extern char igPixelShaderBindAttr_fieldOffsets[4];
extern void *lbl_805621F4;
extern void *igPolygonModeAttr_meta;
extern void *igPointSpriteSizeAttr_meta;
extern void *igPixelShaderBindAttr_meta;
extern void *igPixelShaderAttr_meta;
extern char lbl_80566818[4];
void *igPolygonModeAttr_getMeta();
void *igPolygonModeAttr_vtableRead();
void igPolygonModeAttr_arkRegister();
void igPolygonModeAttr_register();
void *igPolygonModeAttr_getMetaCall();
void igPolygonModeAttr_fieldInit();
void *igPointSpriteSizeAttr_getMeta();
void *igPointSpriteSizeAttr_vtableRead();
void igPointSpriteSizeAttr_arkRegister();
void igPointSpriteSizeAttr_register();
void *igPointSpriteSizeAttr_getMetaCall();
void igPointSpriteSizeAttr_fieldInit();
void *igPixelShaderBindAttr_getMeta();
void *igPixelShaderBindAttr_vtableRead();
void igPixelShaderBindAttr_arkRegister();
void igPixelShaderBindAttr_register();
void *igPixelShaderBindAttr_getMetaCall();
void igPixelShaderBindAttr_fieldInit();
void *fn_800B2678();
void *igPixelShaderAttr_getMeta();
void *igPixelShaderAttr_vtableRead();
void igPixelShaderAttr_arkRegister();
void igPixelShaderAttr_register();
void *igPixelShaderAttr_getMetaCall();
}
struct UnknownGenObject800B20FC_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B22D4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800B249C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B249C(){igObject_construct(this);}
};
struct UnknownGenObject800B249C : UnknownGenRoot800B249C {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject800B249C(){unknown00=igPixelShaderBindAttr_vtable;}
};
struct UnknownGenRoot800B26F0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B26F0(){igObject_construct(this);}
};
struct UnknownGenObject800B26F0 : UnknownGenRoot800B26F0 {
 char unknown04[24];
 UnknownGenString unknown1C;
 UnknownGenString unknown20;
 UnknownGenString unknown24;
 UnknownGenRefMember unknown28;
 UnknownGenRefMember unknown2C;
 UnknownGenRefMember unknown30;
 char unknown34[12];
 inline ~UnknownGenObject800B26F0(){unknown00=igPixelShaderAttr_vtable;}
};
extern "C" {
void *fn_800B2084(){
 if(!igPolygonModeAttr_meta) igPolygonModeAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igPolygonModeAttr_meta;
}
}
#pragma pop
}

namespace igPolygonModeAttr {
// igPolygonModeAttr: Alchemy class registration (0x800B20C0..0x800B2298). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igPolygonModeAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_80046E58(void *,void *);
void fn_800ABC8C();
void *fn_800AC294();
void fn_800CDCC8();
extern char igPolygonModeAttr_fieldNames[4];
extern char igPolygonModeAttr_fieldOffsets[4];
extern char igPolygonModeAttr_fieldStorage[4];
extern char igPolygonModeAttr_fieldTypes[4];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055E284[4];
}

struct Instance_800B20FC_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igPolygonModeAttr)

void *igPolygonModeAttr_vtableRead()
{
    Instance_800B20FC_0 object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igPolygonModeAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igPolygonModeAttr)

void igPolygonModeAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igPolygonModeAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igPolygonModeAttr_getMetaCall,
                       igPolygonModeAttr_className, 0x10,
                       igPolygonModeAttr_vtableRead, igPolygonModeAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igPolygonModeAttr)

void igPolygonModeAttr_fieldInit()
{
    Meta::igMetaObject *meta = igPolygonModeAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igPolygonModeAttr_fieldTypes, 1);
    Meta::igEnumMetaField *modeField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base));
    fn_80046E58(modeField, lbl_8055E284);
    modeField->_getMetaEnumFunction = reinterpret_cast<void *>((void *)fn_800CDCC8);
    meta_setupFields(meta, igPolygonModeAttr_fieldNames, igPolygonModeAttr_fieldStorage, igPolygonModeAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace igPointSpriteSizeAttr {
// igPointSpriteSizeAttr: Alchemy class registration (0x800B2298..0x800B2460). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igPointSpriteSizeAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_8004D4BC(void *,float);
void fn_800ABC8C();
void *fn_800AC294();
extern char igPointSpriteSizeAttr_fieldNames[4];
extern char igPointSpriteSizeAttr_fieldOffsets[4];
extern char igPointSpriteSizeAttr_fieldStorage[4];
extern char igPointSpriteSizeAttr_fieldTypes[4];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_80566818[4];
}

struct Instance_800B22D4_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igPointSpriteSizeAttr)

void *igPointSpriteSizeAttr_vtableRead()
{
    Instance_800B22D4_0 object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igPointSpriteSizeAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igPointSpriteSizeAttr)

void igPointSpriteSizeAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igPointSpriteSizeAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igPointSpriteSizeAttr_getMetaCall,
                       igPointSpriteSizeAttr_className, 0x10,
                       igPointSpriteSizeAttr_vtableRead, igPointSpriteSizeAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igPointSpriteSizeAttr)

void igPointSpriteSizeAttr_fieldInit()
{
    Meta::igMetaObject *meta = igPointSpriteSizeAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igPointSpriteSizeAttr_fieldTypes, 1);
    Meta::igFloatMetaField *sizeField = static_cast<Meta::igFloatMetaField *>(meta_field(meta, base));
    fn_8004D4BC(sizeField, *reinterpret_cast<float *>(lbl_80566818 + 0));
    meta_setupFields(meta, igPointSpriteSizeAttr_fieldNames, igPointSpriteSizeAttr_fieldStorage, igPointSpriteSizeAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace igPixelShaderBindAttr {
// igPixelShaderBindAttr: Alchemy class registration (0x800B2460..0x800B2678). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igPixelShaderBindAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_800ABC8C();
void *fn_800AC294();
void *fn_800B2678();
extern char igPixelShaderBindAttr_dependencies[8];
extern char igPixelShaderBindAttr_fieldNames[4];
extern char igPixelShaderBindAttr_fieldOffsets[4];
extern char igPixelShaderBindAttr_fieldStorage[4];
extern char igPixelShaderBindAttr_fieldTypes[4];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

struct igPixelShaderBindAttrInstance : igObjectInstance {
    char unknown04[8];
    igObjectRefMember _pixelShader;
    inline ~igPixelShaderBindAttrInstance() { __vtable = igPixelShaderBindAttr_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igPixelShaderBindAttr)

void *igPixelShaderBindAttr_vtableRead()
{
    igPixelShaderBindAttrInstance object;
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igPixelShaderBindAttr_vtable;
    object._pixelShader._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igPixelShaderBindAttr)

void igPixelShaderBindAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igPixelShaderBindAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igPixelShaderBindAttr_getMetaCall,
                       igPixelShaderBindAttr_className, 0x10,
                       igPixelShaderBindAttr_vtableRead, igPixelShaderBindAttr_fieldInit, 0, igPixelShaderBindAttr_dependencies);
}

META_GET_META_CALL(igPixelShaderBindAttr)

void igPixelShaderBindAttr_fieldInit()
{
    Meta::igMetaObject *meta = igPixelShaderBindAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igPixelShaderBindAttr_fieldTypes, 1);
    Meta::igObjectRefMetaField *pixelShaderField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_800B2678();
    pixelShaderField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    meta_setupFields(meta, igPixelShaderBindAttr_fieldNames, igPixelShaderBindAttr_fieldStorage, igPixelShaderBindAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace unknown800B2678 {
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void fn_80046E58(void *,void *);
void fn_8004D4BC(void *,float);
void *fn_800607F4(void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void *fn_800AC294();
void fn_800CDCC8();
void igPixelShaderAttr_fieldInit();
void igVisualAttribute_register();
extern char igPolygonModeAttr_vtable[];
extern char igPointSpriteSizeAttr_vtable[];
extern char igPixelShaderBindAttr_vtable[];
extern char igPixelShaderAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char igPolygonModeAttr_fieldTypes[4];
extern char igPolygonModeAttr_fieldNames[4];
extern char igPolygonModeAttr_fieldStorage[4];
extern char igPolygonModeAttr_fieldOffsets[4];
extern char lbl_8055E284[4];
extern char igPointSpriteSizeAttr_fieldTypes[4];
extern char igPointSpriteSizeAttr_fieldNames[4];
extern char igPointSpriteSizeAttr_fieldStorage[4];
extern char igPointSpriteSizeAttr_fieldOffsets[4];
extern char igPixelShaderBindAttr_dependencies[8];
extern char igPixelShaderBindAttr_fieldTypes[4];
extern char igPixelShaderBindAttr_fieldNames[4];
extern char igPixelShaderBindAttr_fieldStorage[4];
extern char igPixelShaderBindAttr_fieldOffsets[4];
extern void *lbl_805621F4;
extern void *igPolygonModeAttr_meta;
extern void *igPointSpriteSizeAttr_meta;
extern void *igPixelShaderBindAttr_meta;
extern void *igPixelShaderAttr_meta;
extern char lbl_80566818[4];
void *igPolygonModeAttr_getMeta();
void *igPolygonModeAttr_vtableRead();
void igPolygonModeAttr_arkRegister();
void igPolygonModeAttr_register();
void *igPolygonModeAttr_getMetaCall();
void igPolygonModeAttr_fieldInit();
void *igPointSpriteSizeAttr_getMeta();
void *igPointSpriteSizeAttr_vtableRead();
void igPointSpriteSizeAttr_arkRegister();
void igPointSpriteSizeAttr_register();
void *igPointSpriteSizeAttr_getMetaCall();
void igPointSpriteSizeAttr_fieldInit();
void *igPixelShaderBindAttr_getMeta();
void *igPixelShaderBindAttr_vtableRead();
void igPixelShaderBindAttr_arkRegister();
void igPixelShaderBindAttr_register();
void *igPixelShaderBindAttr_getMetaCall();
void igPixelShaderBindAttr_fieldInit();
void *fn_800B2678();
void *igPixelShaderAttr_getMeta();
void *igPixelShaderAttr_vtableRead();
void igPixelShaderAttr_arkRegister();
void igPixelShaderAttr_register();
void *igPixelShaderAttr_getMetaCall();
}
struct UnknownGenObject800B20FC_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B22D4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800B249C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B249C(){igObject_construct(this);}
};
struct UnknownGenObject800B249C : UnknownGenRoot800B249C {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject800B249C(){unknown00=igPixelShaderBindAttr_vtable;}
};
struct UnknownGenRoot800B26F0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B26F0(){igObject_construct(this);}
};
struct UnknownGenObject800B26F0 : UnknownGenRoot800B26F0 {
 char unknown04[24];
 UnknownGenString unknown1C;
 UnknownGenString unknown20;
 UnknownGenString unknown24;
 UnknownGenRefMember unknown28;
 UnknownGenRefMember unknown2C;
 UnknownGenRefMember unknown30;
 char unknown34[12];
 inline ~UnknownGenObject800B26F0(){unknown00=igPixelShaderAttr_vtable;}
};
extern "C" {
void *fn_800B2678(){
 if(!igPixelShaderAttr_meta) igPixelShaderAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igPixelShaderAttr_meta;
}
void *igPixelShaderAttr_getMeta(){
 if(!igPixelShaderAttr_meta || !(reinterpret_cast<unsigned int *>(igPixelShaderAttr_meta)[0x24/4]&4)) igPixelShaderAttr_arkRegister();
 return igPixelShaderAttr_meta;
}
void *igPixelShaderAttr_vtableRead(){
 UnknownGenObject800B26F0 object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igPixelShaderAttr_vtable;
 object.unknown1C.value=0;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 object.unknown30.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igPixelShaderAttr_arkRegister(){
 meta_registerNow((int)igPixelShaderAttr_register);
}
void igPixelShaderAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igPixelShaderAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igPixelShaderAttr_getMetaCall,(int)igPixelShaderAttr_className,52,(int)igPixelShaderAttr_vtableRead,(int)igPixelShaderAttr_fieldInit,0,(int)igPixelShaderAttr_dependencies);
}
void *igPixelShaderAttr_getMetaCall(){return igPixelShaderAttr_getMeta();}
}
#pragma pop
}

namespace igPixelShaderAttr_fieldInit {
// igPixelShaderAttr: Alchemy class registration (0x800B2970..0x800B2AFC). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igPixelShaderAttr)

extern "C" {
void fn_80053650(void *, int);
void fn_80071694(void *, void *);
void *fn_800CE788();
void *fn_800D3854();
void *fn_800D3FC4();
void *fn_800D43C8();
extern char lbl_8055DEB8[5];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igPixelShaderAttr_fieldInit()
{
    Meta::igMetaObject *meta = igPixelShaderAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igPixelShaderAttr_fieldTypes, 10);
    Meta::igIntMetaField *iHandleField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base));
    fn_80053650(iHandleField, -1);
    iHandleField->_persistent = false;
    iHandleField->_deepCopyMethod = 4;
    iHandleField->_shallowCopyMethod = 4;
    iHandleField->_isAlikeShallowMethod = 3;
    Meta::igRawRefMetaField *pDataField = static_cast<Meta::igRawRefMetaField *>(meta_field(meta, base + 1));
    pDataField->_persistent = false;
    Meta::igIntMetaField *iBytesField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 2));
    iBytesField->_persistent = false;
    Meta::igObjectRefMetaField *visualContextField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 3));
    void *value_v5 = fn_800CE788();
    visualContextField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v5);
    visualContextField->_refCounted = false;
    visualContextField->_persistent = false;
    visualContextField->_deepCopyMethod = 4;
    visualContextField->_shallowCopyMethod = 4;
    visualContextField->_isAlikeShallowMethod = 3;
    Meta::igStringMetaField *entryPointField = static_cast<Meta::igStringMetaField *>(meta_field(meta, base + 5));
    fn_80071694(entryPointField, (void *)lbl_8055DEB8);
    Meta::igStringMetaField *profileField = static_cast<Meta::igStringMetaField *>(meta_field(meta, base + 6));
    fn_80071694(profileField, (void *)0);
    Meta::igObjectRefMetaField *samplerListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 7));
    void *value_v9 = fn_800D43C8();
    samplerListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v9);
    samplerListField->_construct = true;
    Meta::igObjectRefMetaField *stateListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 8));
    void *value_v11 = fn_800D3854();
    stateListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v11);
    stateListField->_construct = true;
    Meta::igObjectRefMetaField *defineListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 9));
    void *value_v13 = fn_800D3FC4();
    defineListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v13);
    defineListField->_construct = true;
    meta_setupFields(meta, igPixelShaderAttr_fieldNames, igPixelShaderAttr_fieldStorage, igPixelShaderAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace igPixelPipelineModeAttr {
// igPixelPipelineModeAttr: Alchemy class registration (0x800B2AFC..0x800B2CD4). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igPixelPipelineModeAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_80046E58(void *,void *);
void fn_800ABC8C();
void *fn_800AC294();
void fn_800CDF20();
extern char igPixelPipelineModeAttr_fieldNames[4];
extern char igPixelPipelineModeAttr_fieldOffsets[4];
extern char igPixelPipelineModeAttr_fieldStorage[4];
extern char igPixelPipelineModeAttr_fieldTypes[4];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055E2D8[4];
}

struct Instance_800B2B38_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igPixelPipelineModeAttr)

void *igPixelPipelineModeAttr_vtableRead()
{
    Instance_800B2B38_0 object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igPixelPipelineModeAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igPixelPipelineModeAttr)

void igPixelPipelineModeAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igPixelPipelineModeAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igPixelPipelineModeAttr_getMetaCall,
                       igPixelPipelineModeAttr_className, 0x10,
                       igPixelPipelineModeAttr_vtableRead, igPixelPipelineModeAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igPixelPipelineModeAttr)

void igPixelPipelineModeAttr_fieldInit()
{
    Meta::igMetaObject *meta = igPixelPipelineModeAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igPixelPipelineModeAttr_fieldTypes, 1);
    Meta::igEnumMetaField *pipelineModeField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base));
    fn_80046E58(pipelineModeField, lbl_8055E2D8);
    pipelineModeField->_getMetaEnumFunction = reinterpret_cast<void *>((void *)fn_800CDF20);
    meta_setupFields(meta, igPixelPipelineModeAttr_fieldNames, igPixelPipelineModeAttr_fieldStorage, igPixelPipelineModeAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace igParticleAttrList {
// igParticleAttrList: Alchemy class registration (0x800B2CD4..0x800B2E34). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igParticleAttrList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_800ABC8C();
extern char igParticleAttrList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_8047E130[];
}

struct Instance_800B2D10_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igParticleAttrList)

void *igParticleAttrList_vtableRead()
{
    Instance_800B2D10_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_8047E130;
    object.__vtable = igParticleAttrList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igParticleAttrList)

void igParticleAttrList_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igParticleAttrList_meta, igObjectList_register,
                       fn_80024180, igParticleAttrList_getMetaCall,
                       igParticleAttrList_className, 0x14,
                       igParticleAttrList_vtableRead, 0, 0, igParticleAttrList_dependencies);
}

META_GET_META_CALL(igParticleAttrList)

}
#pragma pop
}

namespace unknown800B2E34 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_80046E58(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void *fn_800AC294();
void fn_800CDF20();
void igObjectList_register();
void igParticleAttr_fieldInit();
void igVisualAttribute_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igPixelPipelineModeAttr_vtable[];
extern char igParticleAttr_vtable[];
extern char lbl_8047D578[];
extern char igParticleAttrList_vtable[];
extern char lbl_8047E130[];
extern char lbl_8047E50C[];
extern char igPixelPipelineModeAttr_fieldTypes[4];
extern char igPixelPipelineModeAttr_fieldNames[4];
extern char igPixelPipelineModeAttr_fieldStorage[4];
extern char igPixelPipelineModeAttr_fieldOffsets[4];
extern char lbl_8055E2D8[4];
extern char igParticleAttrList_dependencies[8];
extern char igParticleAttr_dependencies[8];
extern void *igPixelPipelineModeAttr_meta;
extern void *igParticleAttrList_meta;
extern void *igParticleAttr_meta;
void *igPixelPipelineModeAttr_getMeta();
void *igPixelPipelineModeAttr_vtableRead();
void igPixelPipelineModeAttr_arkRegister();
void igPixelPipelineModeAttr_register();
void *igPixelPipelineModeAttr_getMetaCall();
void igPixelPipelineModeAttr_fieldInit();
void *igParticleAttrList_getMeta();
void *igParticleAttrList_vtableRead();
void igParticleAttrList_arkRegister();
void igParticleAttrList_register();
void *igParticleAttrList_getMetaCall();
void *igParticleAttr_getMeta();
void *igParticleAttr_vtableRead();
void igParticleAttr_arkRegister();
void igParticleAttr_register();
void *igParticleAttr_getMetaCall();
}
struct UnknownGenObject800B2B38_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B2D10_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800B2E70 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B2E70(){igObject_construct(this);}
};
struct UnknownGenObject800B2E70 : UnknownGenRoot800B2E70 {
 char unknown04[12];
 UnknownGenRefMember unknown10;
 char unknown14[28];
 inline ~UnknownGenObject800B2E70(){unknown00=igParticleAttr_vtable;}
};
extern "C" {
void *igParticleAttr_getMeta(){
 if(!igParticleAttr_meta || !(reinterpret_cast<unsigned int *>(igParticleAttr_meta)[0x24/4]&4)) igParticleAttr_arkRegister();
 return igParticleAttr_meta;
}
void *igParticleAttr_vtableRead(){
 UnknownGenObject800B2E70 object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igParticleAttr_vtable;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igParticleAttr_arkRegister(){
 meta_registerNow((int)igParticleAttr_register);
}
void igParticleAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igParticleAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igParticleAttr_getMetaCall,(int)igParticleAttr_className,48,(int)igParticleAttr_vtableRead,(int)igParticleAttr_fieldInit,0,(int)igParticleAttr_dependencies);
}
void *igParticleAttr_getMetaCall(){return igParticleAttr_getMeta();}
}
#pragma pop
}

namespace igParticleAttr_fieldInit {
// igParticleAttr: Alchemy class registration (0x800B2FCC..0x800B308C). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igParticleAttr)

extern "C" {
void fn_80054BC8(void *, long long);
void *fn_800D0E7C();
}

#pragma push
#pragma auto_inline off
extern "C" {

void igParticleAttr_fieldInit()
{
    Meta::igMetaObject *meta = igParticleAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igParticleAttr_fieldTypes, 7);
    Meta::igObjectRefMetaField *particleArrayField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_v2 = fn_800D0E7C();
    particleArrayField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v2);
    Meta::igLongMetaField *startTimeField = static_cast<Meta::igLongMetaField *>(meta_field(meta, base + 4));
    fn_80054BC8(startTimeField, 0xFFFFFFFFFFFFFFFFLL);
    startTimeField->_persistent = false;
    Meta::igFloatMetaField *timeField = static_cast<Meta::igFloatMetaField *>(meta_field(meta, base + 5));
    timeField->_persistent = false;
    meta_setupFields(meta, igParticleAttr_fieldNames, igParticleAttr_fieldStorage, igParticleAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace unknown800B308C {
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void *fn_800AC294();
void *fn_800B3D08();
void *fn_800B6C60();
void igMorphData_register();
void igVector3MorphData_fieldInit();
void igVisualAttribute_register();
extern char igNormalizeNormalsStateAttr_vtable[];
extern char igMultiPassStateAttr_vtable[];
extern char igVector3MorphData_vtable[];
extern char igMorphedGeometryAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E058[];
extern char lbl_8047E50C[];
extern char igNormalizeNormalsStateAttr_fieldTypes[4];
extern char igNormalizeNormalsStateAttr_fieldNames[4];
extern char igNormalizeNormalsStateAttr_fieldStorage[4];
extern char igNormalizeNormalsStateAttr_fieldOffsets[4];
extern char igMultiPassStateAttr_fieldTypes[4];
extern char igMultiPassStateAttr_fieldNames[4];
extern char igMultiPassStateAttr_fieldStorage[4];
extern char igMultiPassStateAttr_fieldOffsets[4];
extern char igMorphedGeometryAttr_fieldTypes[8];
extern char igMorphedGeometryAttr_fieldNames[8];
extern char igMorphedGeometryAttr_fieldStorage[8];
extern char igMorphedGeometryAttr_fieldOffsets[8];
extern void *lbl_805621F4;
extern void *igNormalizeNormalsStateAttr_meta;
extern void *igMultiPassStateAttr_meta;
extern void *igMorphedGeometryAttr_meta;
extern void *igVector3MorphData_meta;
extern void *igMorphData_meta;
void *igNormalizeNormalsStateAttr_getMeta();
void *igNormalizeNormalsStateAttr_vtableRead();
void igNormalizeNormalsStateAttr_arkRegister();
void igNormalizeNormalsStateAttr_register();
void *igNormalizeNormalsStateAttr_getMetaCall();
void igNormalizeNormalsStateAttr_fieldInit();
void *igMultiPassStateAttr_getMeta();
void *igMultiPassStateAttr_vtableRead();
void igMultiPassStateAttr_arkRegister();
void igMultiPassStateAttr_register();
void *igMultiPassStateAttr_getMetaCall();
void igMultiPassStateAttr_fieldInit();
void *igMorphedGeometryAttr_getMeta();
void *igMorphedGeometryAttr_vtableRead();
void igMorphedGeometryAttr_arkRegister();
void igMorphedGeometryAttr_register();
void *igMorphedGeometryAttr_getMetaCall();
void igMorphedGeometryAttr_fieldInit();
void *igVector3MorphData_getMeta();
void *igVector3MorphData_vtableRead();
void igVector3MorphData_arkRegister();
void igVector3MorphData_register();
void *igVector3MorphData_getMetaCall();
void *igVector3MorphData_parentMeta();
}
struct UnknownGenObject800B3104_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B32B8_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800B34A8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B34A8(){igObject_construct(this);}
};
struct UnknownGenObject800B34A8 : UnknownGenRoot800B34A8 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject800B34A8(){unknown00=igMorphedGeometryAttr_vtable;}
};
struct UnknownGenRoot800B3798 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B3798(){igObject_construct(this);}
};
struct UnknownGenObject800B3798 : UnknownGenRoot800B3798 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 char unknown10[8];
 UnknownGenRefMember unknown18;
 UnknownGenRefMember unknown1C;
 char unknown20[24];
 inline ~UnknownGenObject800B3798(){unknown00=igVector3MorphData_vtable;}
};
extern "C" {
void *fn_800B308C(){
 if(!igNormalizeNormalsStateAttr_meta) igNormalizeNormalsStateAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igNormalizeNormalsStateAttr_meta;
}
}
#pragma pop
}

namespace igNormalizeNormalsStateAttr {
// igNormalizeNormalsStateAttr: Alchemy class registration (0x800B30C8..0x800B327C). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igNormalizeNormalsStateAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_800ABC8C();
void *fn_800AC294();
extern char igNormalizeNormalsStateAttr_fieldNames[4];
extern char igNormalizeNormalsStateAttr_fieldOffsets[4];
extern char igNormalizeNormalsStateAttr_fieldStorage[4];
extern char igNormalizeNormalsStateAttr_fieldTypes[4];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

struct Instance_800B3104_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igNormalizeNormalsStateAttr)

void *igNormalizeNormalsStateAttr_vtableRead()
{
    Instance_800B3104_0 object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igNormalizeNormalsStateAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igNormalizeNormalsStateAttr)

void igNormalizeNormalsStateAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igNormalizeNormalsStateAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igNormalizeNormalsStateAttr_getMetaCall,
                       igNormalizeNormalsStateAttr_className, 0x10,
                       igNormalizeNormalsStateAttr_vtableRead, igNormalizeNormalsStateAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igNormalizeNormalsStateAttr)

void igNormalizeNormalsStateAttr_fieldInit()
{
    Meta::igMetaObject *meta = igNormalizeNormalsStateAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igNormalizeNormalsStateAttr_fieldTypes, 1);
    meta_setupFields(meta, igNormalizeNormalsStateAttr_fieldNames, igNormalizeNormalsStateAttr_fieldStorage, igNormalizeNormalsStateAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace igMultiPassStateAttr {
// igMultiPassStateAttr: Alchemy class registration (0x800B327C..0x800B3430). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igMultiPassStateAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_800ABC8C();
void *fn_800AC294();
extern char igMultiPassStateAttr_fieldNames[4];
extern char igMultiPassStateAttr_fieldOffsets[4];
extern char igMultiPassStateAttr_fieldStorage[4];
extern char igMultiPassStateAttr_fieldTypes[4];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

struct Instance_800B32B8_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igMultiPassStateAttr)

void *igMultiPassStateAttr_vtableRead()
{
    Instance_800B32B8_0 object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igMultiPassStateAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igMultiPassStateAttr)

void igMultiPassStateAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igMultiPassStateAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igMultiPassStateAttr_getMetaCall,
                       igMultiPassStateAttr_className, 0x10,
                       igMultiPassStateAttr_vtableRead, igMultiPassStateAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igMultiPassStateAttr)

void igMultiPassStateAttr_fieldInit()
{
    Meta::igMetaObject *meta = igMultiPassStateAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igMultiPassStateAttr_fieldTypes, 1);
    meta_setupFields(meta, igMultiPassStateAttr_fieldNames, igMultiPassStateAttr_fieldStorage, igMultiPassStateAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace unknown800B3430 {
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void *fn_800AC294();
void *fn_800B3D08();
void *fn_800B6C60();
void igMorphData_register();
void igVector3MorphData_fieldInit();
void igVisualAttribute_register();
extern char igNormalizeNormalsStateAttr_vtable[];
extern char igMultiPassStateAttr_vtable[];
extern char igVector3MorphData_vtable[];
extern char igMorphedGeometryAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E058[];
extern char lbl_8047E50C[];
extern char igNormalizeNormalsStateAttr_fieldTypes[4];
extern char igNormalizeNormalsStateAttr_fieldNames[4];
extern char igNormalizeNormalsStateAttr_fieldStorage[4];
extern char igNormalizeNormalsStateAttr_fieldOffsets[4];
extern char igMultiPassStateAttr_fieldTypes[4];
extern char igMultiPassStateAttr_fieldNames[4];
extern char igMultiPassStateAttr_fieldStorage[4];
extern char igMultiPassStateAttr_fieldOffsets[4];
extern char igMorphedGeometryAttr_fieldTypes[8];
extern char igMorphedGeometryAttr_fieldNames[8];
extern char igMorphedGeometryAttr_fieldStorage[8];
extern char igMorphedGeometryAttr_fieldOffsets[8];
extern void *lbl_805621F4;
extern void *igNormalizeNormalsStateAttr_meta;
extern void *igMultiPassStateAttr_meta;
extern void *igMorphedGeometryAttr_meta;
extern void *igVector3MorphData_meta;
extern void *igMorphData_meta;
void *igNormalizeNormalsStateAttr_getMeta();
void *igNormalizeNormalsStateAttr_vtableRead();
void igNormalizeNormalsStateAttr_arkRegister();
void igNormalizeNormalsStateAttr_register();
void *igNormalizeNormalsStateAttr_getMetaCall();
void igNormalizeNormalsStateAttr_fieldInit();
void *igMultiPassStateAttr_getMeta();
void *igMultiPassStateAttr_vtableRead();
void igMultiPassStateAttr_arkRegister();
void igMultiPassStateAttr_register();
void *igMultiPassStateAttr_getMetaCall();
void igMultiPassStateAttr_fieldInit();
void *igMorphedGeometryAttr_getMeta();
void *igMorphedGeometryAttr_vtableRead();
void igMorphedGeometryAttr_arkRegister();
void igMorphedGeometryAttr_register();
void *igMorphedGeometryAttr_getMetaCall();
void igMorphedGeometryAttr_fieldInit();
void *igVector3MorphData_getMeta();
void *igVector3MorphData_vtableRead();
void igVector3MorphData_arkRegister();
void igVector3MorphData_register();
void *igVector3MorphData_getMetaCall();
void *igVector3MorphData_parentMeta();
}
struct UnknownGenObject800B3104_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B32B8_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800B34A8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B34A8(){igObject_construct(this);}
};
struct UnknownGenObject800B34A8 : UnknownGenRoot800B34A8 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject800B34A8(){unknown00=igMorphedGeometryAttr_vtable;}
};
struct UnknownGenRoot800B3798 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B3798(){igObject_construct(this);}
};
struct UnknownGenObject800B3798 : UnknownGenRoot800B3798 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 char unknown10[8];
 UnknownGenRefMember unknown18;
 UnknownGenRefMember unknown1C;
 char unknown20[24];
 inline ~UnknownGenObject800B3798(){unknown00=igVector3MorphData_vtable;}
};
extern "C" {
void *fn_800B3430(){
 if(!igMorphedGeometryAttr_meta) igMorphedGeometryAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igMorphedGeometryAttr_meta;
}
}
#pragma pop
}

namespace igMorphedGeometryAttr {
// igMorphedGeometryAttr: Alchemy class registration (0x800B346C..0x800B3588). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igMorphedGeometryAttr)

extern "C" {
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

struct igMorphedGeometryAttrInstance : igObjectInstance {
    char unknown04[8];
    igObjectRefMember _geometry;
    igObjectRefMember _morphList;
    char unknown14[12];
    inline ~igMorphedGeometryAttrInstance() { __vtable = igMorphedGeometryAttr_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igMorphedGeometryAttr)

void *igMorphedGeometryAttr_vtableRead()
{
    igMorphedGeometryAttrInstance object;
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igMorphedGeometryAttr_vtable;
    object._geometry._value = 0;
    object._morphList._value = 0;
    return meta_vtableOf(&object);
}

}
#pragma pop
}

namespace unknown800B3588 {
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void *fn_800AC294();
void *fn_800B3D08();
void *fn_800B6C60();
void igMorphData_register();
void igVector3MorphData_fieldInit();
void igVisualAttribute_register();
extern char igNormalizeNormalsStateAttr_vtable[];
extern char igMultiPassStateAttr_vtable[];
extern char igVector3MorphData_vtable[];
extern char igMorphedGeometryAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E058[];
extern char lbl_8047E50C[];
extern char igNormalizeNormalsStateAttr_fieldTypes[4];
extern char igNormalizeNormalsStateAttr_fieldNames[4];
extern char igNormalizeNormalsStateAttr_fieldStorage[4];
extern char igNormalizeNormalsStateAttr_fieldOffsets[4];
extern char igMultiPassStateAttr_fieldTypes[4];
extern char igMultiPassStateAttr_fieldNames[4];
extern char igMultiPassStateAttr_fieldStorage[4];
extern char igMultiPassStateAttr_fieldOffsets[4];
extern char igMorphedGeometryAttr_fieldTypes[8];
extern char igMorphedGeometryAttr_fieldNames[8];
extern char igMorphedGeometryAttr_fieldStorage[8];
extern char igMorphedGeometryAttr_fieldOffsets[8];
extern void *lbl_805621F4;
extern void *igNormalizeNormalsStateAttr_meta;
extern void *igMultiPassStateAttr_meta;
extern void *igMorphedGeometryAttr_meta;
extern void *igVector3MorphData_meta;
extern void *igMorphData_meta;
void *igNormalizeNormalsStateAttr_getMeta();
void *igNormalizeNormalsStateAttr_vtableRead();
void igNormalizeNormalsStateAttr_arkRegister();
void igNormalizeNormalsStateAttr_register();
void *igNormalizeNormalsStateAttr_getMetaCall();
void igNormalizeNormalsStateAttr_fieldInit();
void *igMultiPassStateAttr_getMeta();
void *igMultiPassStateAttr_vtableRead();
void igMultiPassStateAttr_arkRegister();
void igMultiPassStateAttr_register();
void *igMultiPassStateAttr_getMetaCall();
void igMultiPassStateAttr_fieldInit();
void *igMorphedGeometryAttr_getMeta();
void *igMorphedGeometryAttr_vtableRead();
void igMorphedGeometryAttr_arkRegister();
void igMorphedGeometryAttr_register();
void *igMorphedGeometryAttr_getMetaCall();
void igMorphedGeometryAttr_fieldInit();
void *igVector3MorphData_getMeta();
void *igVector3MorphData_vtableRead();
void igVector3MorphData_arkRegister();
void igVector3MorphData_register();
void *igVector3MorphData_getMetaCall();
void *igVector3MorphData_parentMeta();
}
struct UnknownGenObject800B3104_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B32B8_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800B34A8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B34A8(){igObject_construct(this);}
};
struct UnknownGenObject800B34A8 : UnknownGenRoot800B34A8 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject800B34A8(){unknown00=igMorphedGeometryAttr_vtable;}
};
struct UnknownGenRoot800B3798 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B3798(){igObject_construct(this);}
};
struct UnknownGenObject800B3798 : UnknownGenRoot800B3798 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 char unknown10[8];
 UnknownGenRefMember unknown18;
 UnknownGenRefMember unknown1C;
 char unknown20[24];
 inline ~UnknownGenObject800B3798(){unknown00=igVector3MorphData_vtable;}
};
extern "C" {
UnknownGenHolder *dtor_800B3588(UnknownGenHolder *object,short flags){
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
}
#pragma pop
}

namespace igMorphedGeometryAttr_2 {
// igMorphedGeometryAttr: Alchemy class registration (0x800B35FC..0x800B375C). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igMorphedGeometryAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_800ABC8C();
void *fn_800AC294();
void *fn_800B3D08();
void *fn_800B6C60();
extern char igMorphedGeometryAttr_fieldNames[8];
extern char igMorphedGeometryAttr_fieldOffsets[8];
extern char igMorphedGeometryAttr_fieldStorage[8];
extern char igMorphedGeometryAttr_fieldTypes[8];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(igMorphedGeometryAttr)

void igMorphedGeometryAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igMorphedGeometryAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igMorphedGeometryAttr_getMetaCall,
                       igMorphedGeometryAttr_className, 0x14,
                       igMorphedGeometryAttr_vtableRead, igMorphedGeometryAttr_fieldInit, 0, igMorphedGeometryAttr_dependencies);
}

META_GET_META_CALL(igMorphedGeometryAttr)

void igMorphedGeometryAttr_fieldInit()
{
    Meta::igMetaObject *meta = igMorphedGeometryAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igMorphedGeometryAttr_fieldTypes, 2);
    Meta::igObjectRefMetaField *geometryField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_800B6C60();
    geometryField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    Meta::igObjectRefMetaField *morphListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_value5 = fn_800B3D08();
    morphListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value5);
    morphListField->_construct = true;
    meta_setupFields(meta, igMorphedGeometryAttr_fieldNames, igMorphedGeometryAttr_fieldStorage, igMorphedGeometryAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace igVector3MorphData {
// igVector3MorphData: Alchemy class registration (0x800B375C..0x800B38DC). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igVector3MorphData)

extern "C" {
extern char lbl_8047E058[];
}

struct igVector3MorphDataInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _base;
    igObjectRefMember _targets;
    char unknown10[8];
    igObjectRefMember _activeTargets;
    igObjectRefMember _activeCoeff;
    char unknown20[24];
    inline ~igVector3MorphDataInstance() { __vtable = igVector3MorphData_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igVector3MorphData)

void *igVector3MorphData_vtableRead()
{
    igVector3MorphDataInstance object;
    object.__vtable = lbl_8047E058;
    object.__vtable = igVector3MorphData_vtable;
    object._base._value = 0;
    object._targets._value = 0;
    object._activeTargets._value = 0;
    object._activeCoeff._value = 0;
    return meta_vtableOf(&object);
}

}
#pragma pop
}

namespace unknown800B38DC {
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void *fn_800AC294();
void *fn_800B3D08();
void *fn_800B6C60();
void igMorphData_register();
void igVector3MorphData_fieldInit();
void igVisualAttribute_register();
extern char igNormalizeNormalsStateAttr_vtable[];
extern char igMultiPassStateAttr_vtable[];
extern char igVector3MorphData_vtable[];
extern char igMorphedGeometryAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E058[];
extern char lbl_8047E50C[];
extern char igNormalizeNormalsStateAttr_fieldTypes[4];
extern char igNormalizeNormalsStateAttr_fieldNames[4];
extern char igNormalizeNormalsStateAttr_fieldStorage[4];
extern char igNormalizeNormalsStateAttr_fieldOffsets[4];
extern char igMultiPassStateAttr_fieldTypes[4];
extern char igMultiPassStateAttr_fieldNames[4];
extern char igMultiPassStateAttr_fieldStorage[4];
extern char igMultiPassStateAttr_fieldOffsets[4];
extern char igMorphedGeometryAttr_fieldTypes[8];
extern char igMorphedGeometryAttr_fieldNames[8];
extern char igMorphedGeometryAttr_fieldStorage[8];
extern char igMorphedGeometryAttr_fieldOffsets[8];
extern void *lbl_805621F4;
extern void *igNormalizeNormalsStateAttr_meta;
extern void *igMultiPassStateAttr_meta;
extern void *igMorphedGeometryAttr_meta;
extern void *igVector3MorphData_meta;
extern void *igMorphData_meta;
void *igNormalizeNormalsStateAttr_getMeta();
void *igNormalizeNormalsStateAttr_vtableRead();
void igNormalizeNormalsStateAttr_arkRegister();
void igNormalizeNormalsStateAttr_register();
void *igNormalizeNormalsStateAttr_getMetaCall();
void igNormalizeNormalsStateAttr_fieldInit();
void *igMultiPassStateAttr_getMeta();
void *igMultiPassStateAttr_vtableRead();
void igMultiPassStateAttr_arkRegister();
void igMultiPassStateAttr_register();
void *igMultiPassStateAttr_getMetaCall();
void igMultiPassStateAttr_fieldInit();
void *igMorphedGeometryAttr_getMeta();
void *igMorphedGeometryAttr_vtableRead();
void igMorphedGeometryAttr_arkRegister();
void igMorphedGeometryAttr_register();
void *igMorphedGeometryAttr_getMetaCall();
void igMorphedGeometryAttr_fieldInit();
void *igVector3MorphData_getMeta();
void *igVector3MorphData_vtableRead();
void igVector3MorphData_arkRegister();
void igVector3MorphData_register();
void *igVector3MorphData_getMetaCall();
void *igVector3MorphData_parentMeta();
}
struct UnknownGenObject800B3104_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B32B8_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800B34A8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B34A8(){igObject_construct(this);}
};
struct UnknownGenObject800B34A8 : UnknownGenRoot800B34A8 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject800B34A8(){unknown00=igMorphedGeometryAttr_vtable;}
};
struct UnknownGenRoot800B3798 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B3798(){igObject_construct(this);}
};
struct UnknownGenObject800B3798 : UnknownGenRoot800B3798 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 char unknown10[8];
 UnknownGenRefMember unknown18;
 UnknownGenRefMember unknown1C;
 char unknown20[24];
 inline ~UnknownGenObject800B3798(){unknown00=igVector3MorphData_vtable;}
};
extern "C" {
UnknownGenHolder *dtor_800B38DC(UnknownGenHolder *object,short flags){
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
}
#pragma pop
}

namespace igVector3MorphData_2 {
// igVector3MorphData: Alchemy class registration (0x800B3950..0x800B3A10). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igVector3MorphData)
META_DECLARE(igMorphData)

extern "C" {
void fn_800ABC8C();
void *igVector3MorphData_parentMeta();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(igVector3MorphData)

void igVector3MorphData_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igVector3MorphData_meta, igMorphData_register,
                       igVector3MorphData_parentMeta, igVector3MorphData_getMetaCall,
                       igVector3MorphData_className, 0x2C,
                       igVector3MorphData_vtableRead, igVector3MorphData_fieldInit, 0, igVector3MorphData_dependencies);
}

META_GET_META_CALL(igVector3MorphData)

}
#pragma pop
}

namespace unknown800B3A10 {
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void *fn_800AC294();
void *fn_800B3D08();
void *fn_800B6C60();
void igMorphData_register();
void igVector3MorphData_fieldInit();
void igVisualAttribute_register();
extern char igNormalizeNormalsStateAttr_vtable[];
extern char igMultiPassStateAttr_vtable[];
extern char igVector3MorphData_vtable[];
extern char igMorphedGeometryAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E058[];
extern char lbl_8047E50C[];
extern char igNormalizeNormalsStateAttr_fieldTypes[4];
extern char igNormalizeNormalsStateAttr_fieldNames[4];
extern char igNormalizeNormalsStateAttr_fieldStorage[4];
extern char igNormalizeNormalsStateAttr_fieldOffsets[4];
extern char igMultiPassStateAttr_fieldTypes[4];
extern char igMultiPassStateAttr_fieldNames[4];
extern char igMultiPassStateAttr_fieldStorage[4];
extern char igMultiPassStateAttr_fieldOffsets[4];
extern char igMorphedGeometryAttr_fieldTypes[8];
extern char igMorphedGeometryAttr_fieldNames[8];
extern char igMorphedGeometryAttr_fieldStorage[8];
extern char igMorphedGeometryAttr_fieldOffsets[8];
extern void *lbl_805621F4;
extern void *igNormalizeNormalsStateAttr_meta;
extern void *igMultiPassStateAttr_meta;
extern void *igMorphedGeometryAttr_meta;
extern void *igVector3MorphData_meta;
extern void *igMorphData_meta;
void *igNormalizeNormalsStateAttr_getMeta();
void *igNormalizeNormalsStateAttr_vtableRead();
void igNormalizeNormalsStateAttr_arkRegister();
void igNormalizeNormalsStateAttr_register();
void *igNormalizeNormalsStateAttr_getMetaCall();
void igNormalizeNormalsStateAttr_fieldInit();
void *igMultiPassStateAttr_getMeta();
void *igMultiPassStateAttr_vtableRead();
void igMultiPassStateAttr_arkRegister();
void igMultiPassStateAttr_register();
void *igMultiPassStateAttr_getMetaCall();
void igMultiPassStateAttr_fieldInit();
void *igMorphedGeometryAttr_getMeta();
void *igMorphedGeometryAttr_vtableRead();
void igMorphedGeometryAttr_arkRegister();
void igMorphedGeometryAttr_register();
void *igMorphedGeometryAttr_getMetaCall();
void igMorphedGeometryAttr_fieldInit();
void *igVector3MorphData_getMeta();
void *igVector3MorphData_vtableRead();
void igVector3MorphData_arkRegister();
void igVector3MorphData_register();
void *igVector3MorphData_getMetaCall();
void *igVector3MorphData_parentMeta();
}
struct UnknownGenObject800B3104_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B32B8_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800B34A8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B34A8(){igObject_construct(this);}
};
struct UnknownGenObject800B34A8 : UnknownGenRoot800B34A8 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject800B34A8(){unknown00=igMorphedGeometryAttr_vtable;}
};
struct UnknownGenRoot800B3798 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B3798(){igObject_construct(this);}
};
struct UnknownGenObject800B3798 : UnknownGenRoot800B3798 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 char unknown10[8];
 UnknownGenRefMember unknown18;
 UnknownGenRefMember unknown1C;
 char unknown20[24];
 inline ~UnknownGenObject800B3798(){unknown00=igVector3MorphData_vtable;}
};
extern "C" {
void *igVector3MorphData_parentMeta(){return igMorphData_meta;}
}
#pragma pop
}

namespace igVector3MorphData_fieldInit {
// igVector3MorphData: Alchemy class registration (0x800B3A18..0x800B3B4C). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igVector3MorphData)

extern "C" {
void *fn_80034728();
void *fn_80034D84();
void fn_8003EC68(void *, int);
void fn_80046E58(void *, void *);
void *fn_800B3B4C();
void fn_800CDB50();
void *fn_80121D24();
extern char lbl_8055E33C[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igVector3MorphData_fieldInit()
{
    Meta::igMetaObject *meta = igVector3MorphData_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igVector3MorphData_fieldTypes, 9);
    Meta::igObjectRefMetaField *baseField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_v2 = fn_800B3B4C();
    baseField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v2);
    Meta::igObjectRefMetaField *targetsField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_v4 = fn_80121D24();
    targetsField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v4);
    targetsField->_construct = true;
    Meta::igObjectRefMetaField *activeTargetsField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 4));
    void *value_v6 = fn_80034728();
    activeTargetsField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v6);
    activeTargetsField->_construct = true;
    Meta::igObjectRefMetaField *activeCoeffField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 5));
    void *value_v8 = fn_80034D84();
    activeCoeffField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v8);
    activeCoeffField->_construct = true;
    Meta::igIntMetaField *activeCountField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 6));
    activeCountField->_persistent = false;
    Meta::igEnumMetaField *componentField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base + 7));
    fn_80046E58(componentField, (void *)lbl_8055E33C);
    componentField->_getMetaEnumFunction = reinterpret_cast<void *>(fn_800CDB50);
    Meta::igBoolMetaField *dirtyField = static_cast<Meta::igBoolMetaField *>(meta_field(meta, base + 8));
    fn_8003EC68(dirtyField, 1);
    meta_setupFields(meta, igVector3MorphData_fieldNames, igVector3MorphData_fieldStorage, igVector3MorphData_fieldOffsets, base);
}

}
#pragma pop
}

namespace unknown800B3B4C {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void igModelViewMatrixAttr_arkRegister();
void *fn_800C192C();
void igObjectList_register();
void igObject_register();
void igVec3fList_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igModelViewMatrixAttrList_vtable[];
extern char lbl_8047DE0C[];
extern char igMorphDataList_vtable[];
extern char lbl_8047DED4[];
extern char igVec3fAlignedList_vtable[];
extern char igVec3fList_vtable[];
extern char lbl_8047DFF8[];
extern char igMorphDataList_dependencies[8];
extern char igModelViewMatrixAttrList_dependencies[8];
extern void *lbl_805621F4;
extern void *igVec3fAlignedList_meta;
extern void *igMorphDataList_meta;
extern void *igMorphData_meta;
extern void *igModelViewMatrixAttrList_meta;
extern void *igModelViewMatrixAttr_meta;
extern void *igVec3fList_meta;
void *igVec3fAlignedList_getMeta();
void *igVec3fAlignedList_vtableRead();
void igVec3fAlignedList_arkRegister();
void igVec3fAlignedList_register();
void *igVec3fAlignedList_getMetaCall();
void *igVec3fAlignedList_parentMeta();
void *fn_800B3CE8();
void *igMorphDataList_getMeta();
void *igMorphDataList_vtableRead();
void igMorphDataList_arkRegister();
void igMorphDataList_register();
void *igMorphDataList_getMetaCall();
void *igMorphData_getMeta();
void igMorphData_arkRegister();
void igMorphData_register();
void *igMorphData_getMetaCall();
void *igModelViewMatrixAttrList_getMeta();
void *igModelViewMatrixAttrList_vtableRead();
void igModelViewMatrixAttrList_arkRegister();
void igModelViewMatrixAttrList_register();
void *igModelViewMatrixAttrList_getMetaCall();
}
struct UnknownGenObject800B3BC4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B3D80_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B4004_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800B3B4C(){
 if(!igVec3fAlignedList_meta) igVec3fAlignedList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igVec3fAlignedList_meta;
}
}
#pragma pop
}

namespace igVec3fAlignedList {
// igVec3fAlignedList: Alchemy class registration (0x800B3B88..0x800B3CE0). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igVec3fAlignedList)
META_DECLARE(igDataList)
META_DECLARE(igVec3fList)

extern "C" {
void fn_800ABC8C();
void fn_800B3CE8();
void *igVec3fAlignedList_parentMeta();
extern char lbl_8047DFF8[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igVec3fAlignedList)

void *igVec3fAlignedList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_8047DFF8;
    object.__vtable = igVec3fList_vtable;
    object.__vtable = igVec3fAlignedList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igVec3fAlignedList)

void igVec3fAlignedList_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igVec3fAlignedList_meta, igVec3fList_register,
                       igVec3fAlignedList_parentMeta, igVec3fAlignedList_getMetaCall,
                       igVec3fAlignedList_className, 0x14,
                       igVec3fAlignedList_vtableRead, 0, fn_800B3CE8, 0);
}

META_GET_META_CALL(igVec3fAlignedList)

}
#pragma pop
}

namespace unknown800B3CE0 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void igModelViewMatrixAttr_arkRegister();
void *fn_800C192C();
void igObjectList_register();
void igObject_register();
void igVec3fList_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igModelViewMatrixAttrList_vtable[];
extern char lbl_8047DE0C[];
extern char igMorphDataList_vtable[];
extern char lbl_8047DED4[];
extern char igVec3fAlignedList_vtable[];
extern char igVec3fList_vtable[];
extern char lbl_8047DFF8[];
extern char igMorphDataList_dependencies[8];
extern char igModelViewMatrixAttrList_dependencies[8];
extern void *lbl_805621F4;
extern void *igVec3fAlignedList_meta;
extern void *igMorphDataList_meta;
extern void *igMorphData_meta;
extern void *igModelViewMatrixAttrList_meta;
extern void *igModelViewMatrixAttr_meta;
extern void *igVec3fList_meta;
void *igVec3fAlignedList_getMeta();
void *igVec3fAlignedList_vtableRead();
void igVec3fAlignedList_arkRegister();
void igVec3fAlignedList_register();
void *igVec3fAlignedList_getMetaCall();
void *igVec3fAlignedList_parentMeta();
void *fn_800B3CE8();
void *igMorphDataList_getMeta();
void *igMorphDataList_vtableRead();
void igMorphDataList_arkRegister();
void igMorphDataList_register();
void *igMorphDataList_getMetaCall();
void *igMorphData_getMeta();
void igMorphData_arkRegister();
void igMorphData_register();
void *igMorphData_getMetaCall();
void *igModelViewMatrixAttrList_getMeta();
void *igModelViewMatrixAttrList_vtableRead();
void igModelViewMatrixAttrList_arkRegister();
void igModelViewMatrixAttrList_register();
void *igModelViewMatrixAttrList_getMetaCall();
}
struct UnknownGenObject800B3BC4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B3D80_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B4004_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *igVec3fAlignedList_parentMeta(){return igVec3fList_meta;}
void *fn_800B3CE8(){return fn_800C192C();}
void *fn_800B3D08(){
 if(!igMorphDataList_meta) igMorphDataList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igMorphDataList_meta;
}
}
#pragma pop
}

namespace igMorphDataList {
// igMorphDataList: Alchemy class registration (0x800B3D44..0x800B3EA4). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igMorphDataList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_800ABC8C();
extern char igMorphDataList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_8047DED4[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igMorphDataList)

void *igMorphDataList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_8047DED4;
    object.__vtable = igMorphDataList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igMorphDataList)

void igMorphDataList_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igMorphDataList_meta, igObjectList_register,
                       fn_80024180, igMorphDataList_getMetaCall,
                       igMorphDataList_className, 0x14,
                       igMorphDataList_vtableRead, 0, 0, igMorphDataList_dependencies);
}

META_GET_META_CALL(igMorphDataList)

}
#pragma pop
}

namespace igMorphData {
// igMorphData: Alchemy class registration (0x800B3EA4..0x800B3F8C). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igMorphData)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_800ABC8C();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igMorphData)

META_ARK_REGISTER(igMorphData)

void igMorphData_register()
{
    fn_800ABC8C();
    meta_registerClass(1, &igMorphData_meta, igObject_register,
                       fn_800237D0, igMorphData_getMetaCall,
                       igMorphData_className, 0x8,
                       0, 0, 0, 0);
}

META_GET_META_CALL(igMorphData)

}
#pragma pop
}

namespace unknown800B3F8C {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void igModelViewMatrixAttr_arkRegister();
void *fn_800C192C();
void igObjectList_register();
void igObject_register();
void igVec3fList_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igModelViewMatrixAttrList_vtable[];
extern char lbl_8047DE0C[];
extern char igMorphDataList_vtable[];
extern char lbl_8047DED4[];
extern char igVec3fAlignedList_vtable[];
extern char igVec3fList_vtable[];
extern char lbl_8047DFF8[];
extern char igMorphDataList_dependencies[8];
extern char igModelViewMatrixAttrList_dependencies[8];
extern void *lbl_805621F4;
extern void *igVec3fAlignedList_meta;
extern void *igMorphDataList_meta;
extern void *igMorphData_meta;
extern void *igModelViewMatrixAttrList_meta;
extern void *igModelViewMatrixAttr_meta;
extern void *igVec3fList_meta;
void *igVec3fAlignedList_getMeta();
void *igVec3fAlignedList_vtableRead();
void igVec3fAlignedList_arkRegister();
void igVec3fAlignedList_register();
void *igVec3fAlignedList_getMetaCall();
void *igVec3fAlignedList_parentMeta();
void *fn_800B3CE8();
void *igMorphDataList_getMeta();
void *igMorphDataList_vtableRead();
void igMorphDataList_arkRegister();
void igMorphDataList_register();
void *igMorphDataList_getMetaCall();
void *igMorphData_getMeta();
void igMorphData_arkRegister();
void igMorphData_register();
void *igMorphData_getMetaCall();
void *igModelViewMatrixAttrList_getMeta();
void *igModelViewMatrixAttrList_vtableRead();
void igModelViewMatrixAttrList_arkRegister();
void igModelViewMatrixAttrList_register();
void *igModelViewMatrixAttrList_getMetaCall();
}
struct UnknownGenObject800B3BC4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B3D80_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B4004_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800B3F8C(){
 if(!igModelViewMatrixAttrList_meta) igModelViewMatrixAttrList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igModelViewMatrixAttrList_meta;
}
}
#pragma pop
}

namespace igModelViewMatrixAttrList {
// igModelViewMatrixAttrList: Alchemy class registration (0x800B3FC8..0x800B4128). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igModelViewMatrixAttrList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_800ABC8C();
extern char igModelViewMatrixAttrList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_8047DE0C[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igModelViewMatrixAttrList)

void *igModelViewMatrixAttrList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_8047DE0C;
    object.__vtable = igModelViewMatrixAttrList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igModelViewMatrixAttrList)

void igModelViewMatrixAttrList_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igModelViewMatrixAttrList_meta, igObjectList_register,
                       fn_80024180, igModelViewMatrixAttrList_getMetaCall,
                       igModelViewMatrixAttrList_className, 0x14,
                       igModelViewMatrixAttrList_vtableRead, 0, 0, igModelViewMatrixAttrList_dependencies);
}

META_GET_META_CALL(igModelViewMatrixAttrList)

}
#pragma pop
}

namespace igModelViewMatrixAttr {
// igModelViewMatrixAttr: Alchemy class registration (0x800B4128..0x800B4160). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igModelViewMatrixAttr)

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igModelViewMatrixAttr)

}
#pragma pop
}

namespace unknown800B4160 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void igModelViewMatrixAttr_arkRegister();
void *fn_800C192C();
void igObjectList_register();
void igObject_register();
void igVec3fList_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igModelViewMatrixAttrList_vtable[];
extern char lbl_8047DE0C[];
extern char igMorphDataList_vtable[];
extern char lbl_8047DED4[];
extern char igVec3fAlignedList_vtable[];
extern char igVec3fList_vtable[];
extern char lbl_8047DFF8[];
extern char igMorphDataList_dependencies[8];
extern char igModelViewMatrixAttrList_dependencies[8];
extern void *lbl_805621F4;
extern void *igVec3fAlignedList_meta;
extern void *igMorphDataList_meta;
extern void *igMorphData_meta;
extern void *igModelViewMatrixAttrList_meta;
extern void *igModelViewMatrixAttr_meta;
extern void *igVec3fList_meta;
void *igVec3fAlignedList_getMeta();
void *igVec3fAlignedList_vtableRead();
void igVec3fAlignedList_arkRegister();
void igVec3fAlignedList_register();
void *igVec3fAlignedList_getMetaCall();
void *igVec3fAlignedList_parentMeta();
void *fn_800B3CE8();
void *igMorphDataList_getMeta();
void *igMorphDataList_vtableRead();
void igMorphDataList_arkRegister();
void igMorphDataList_register();
void *igMorphDataList_getMetaCall();
void *igMorphData_getMeta();
void igMorphData_arkRegister();
void igMorphData_register();
void *igMorphData_getMetaCall();
void *igModelViewMatrixAttrList_getMeta();
void *igModelViewMatrixAttrList_vtableRead();
void igModelViewMatrixAttrList_arkRegister();
void igModelViewMatrixAttrList_register();
void *igModelViewMatrixAttrList_getMetaCall();
}
struct UnknownGenObject800B3BC4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B3D80_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B4004_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800B4160(){
 if(!igModelViewMatrixAttr_meta) igModelViewMatrixAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igModelViewMatrixAttr_meta;
}
}
#pragma pop
}

namespace igModelViewMatrixAttr_2 {
// igModelViewMatrixAttr: Alchemy class registration (0x800B419C..0x800B42F8). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igModelViewMatrixAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_800ABC8C();
void *fn_800AC294();
void fn_800B43D8();
void fn_801285A0(void *);
extern char lbl_8047D578[128];
extern char lbl_8047E50C[132];
}

struct Instance_LigModelViewMatrixAttr_0 : igObjectInstance {
};

struct Instance_LigModelViewMatrixAttr_1 : Instance_LigModelViewMatrixAttr_0 {
};

struct Instance_LigModelViewMatrixAttr_2 : Instance_LigModelViewMatrixAttr_1 {
    char unknown04[8];
    char unknown0C[64];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igModelViewMatrixAttr)

void *igModelViewMatrixAttr_vtableRead()
{
    Instance_LigModelViewMatrixAttr_2 object;
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igModelViewMatrixAttr_vtable;
    fn_801285A0(&object.unknown0C);
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igModelViewMatrixAttr)

void igModelViewMatrixAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igModelViewMatrixAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igModelViewMatrixAttr_getMetaCall,
                       igModelViewMatrixAttr_className, 0x4C,
                       igModelViewMatrixAttr_vtableRead, igModelViewMatrixAttr_fieldInit, fn_800B43D8, 0);
}

META_GET_META_CALL(igModelViewMatrixAttr)

}
#pragma pop
}

namespace igModelViewMatrixAttr_3 {
// igModelViewMatrixAttr: Alchemy class registration (0x800B42F8..0x800B43D8). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igModelViewMatrixAttr)

extern "C" {
void fn_80065D94(void *);
void fn_800B43F8();
void fn_80124504(void *, void *);
extern char igModelViewMatrixAttr_fieldNames[4];
extern char igModelViewMatrixAttr_fieldOffsets[4];
extern char igModelViewMatrixAttr_fieldStorage[4];
extern char igModelViewMatrixAttr_fieldTypes[4];
extern const char lbl_80566810[4];
extern const char lbl_80566814[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igModelViewMatrixAttr_fieldInit()
{
    float local[20];
    Meta::igMetaObject *meta = igModelViewMatrixAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igModelViewMatrixAttr_fieldTypes, 1);
    Meta::igMatrix44fMetaField *mField = static_cast<Meta::igMatrix44fMetaField *>(meta_field(meta, base));
    local[0] = *reinterpret_cast<const float *>(lbl_80566810);
    local[1] = *reinterpret_cast<const float *>(lbl_80566814);
    local[2] = *reinterpret_cast<const float *>(lbl_80566814);
    local[3] = *reinterpret_cast<const float *>(lbl_80566814);
    local[4] = *reinterpret_cast<const float *>(lbl_80566810);
    local[5] = *reinterpret_cast<const float *>(lbl_80566814);
    local[6] = *reinterpret_cast<const float *>(lbl_80566814);
    local[7] = *reinterpret_cast<const float *>(lbl_80566814);
    local[8] = *reinterpret_cast<const float *>(lbl_80566814);
    local[9] = *reinterpret_cast<const float *>(lbl_80566810);
    local[10] = *reinterpret_cast<const float *>(lbl_80566814);
    local[11] = *reinterpret_cast<const float *>(lbl_80566814);
    local[12] = *reinterpret_cast<const float *>(lbl_80566814);
    local[13] = *reinterpret_cast<const float *>(lbl_80566814);
    local[14] = *reinterpret_cast<const float *>(lbl_80566810);
    local[15] = *reinterpret_cast<const float *>(lbl_80566814);
    local[16] = *reinterpret_cast<const float *>(lbl_80566814);
    local[17] = *reinterpret_cast<const float *>(lbl_80566814);
    local[18] = *reinterpret_cast<const float *>(lbl_80566814);
    local[19] = *reinterpret_cast<const float *>(lbl_80566810);
    fn_80124504(mField, &local[4]);
    meta_setupFields(meta, igModelViewMatrixAttr_fieldNames, igModelViewMatrixAttr_fieldStorage, igModelViewMatrixAttr_fieldOffsets, base);
    fn_80065D94(fn_800B43F8);
}

}
#pragma pop
}

namespace unknown800B43D8 {
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void fn_8003EC68(void *,int);
void fn_8004D4BC(void *,float);
void *fn_800607F4(void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void *fn_800AC294();
void igMatrixConstantAttr_arkRegister();
void fn_800C17B4();
void *fn_800C1848();
void igVisualAttribute_register();
extern char igMipMapAttr_vtable[];
extern char igMatrixOptStateAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char igMipMapAttr_fieldTypes[8];
extern char igMipMapAttr_fieldNames[8];
extern char igMipMapAttr_fieldStorage[8];
extern char igMipMapAttr_fieldOffsets[8];
extern char igMatrixOptStateAttr_fieldTypes[4];
extern char igMatrixOptStateAttr_fieldNames[4];
extern char igMatrixOptStateAttr_fieldStorage[4];
extern char igMatrixOptStateAttr_fieldOffsets[4];
extern void *lbl_805621F4;
extern void *igMipMapAttr_meta;
extern void *igMatrixOptStateAttr_meta;
extern void *igMatrixConstantAttr_meta;
extern char lbl_8056681C[4];
void *igMipMapAttr_getMeta();
void *igMipMapAttr_vtableRead();
void igMipMapAttr_arkRegister();
void igMipMapAttr_register();
void *igMipMapAttr_getMetaCall();
void igMipMapAttr_fieldInit();
void *igMatrixOptStateAttr_getMeta();
void *igMatrixOptStateAttr_vtableRead();
void igMatrixOptStateAttr_arkRegister();
void igMatrixOptStateAttr_register();
void *igMatrixOptStateAttr_getMetaCall();
void igMatrixOptStateAttr_fieldInit();
}
struct UnknownGenObject800B4454_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B4658_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void fn_800B43D8(){return fn_800C17B4();}
void *fn_800B43F8(){return fn_800C1848();}
}
#pragma pop
}

namespace igMipMapAttr {
// igMipMapAttr: Alchemy class registration (0x800B4418..0x800B45E0). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igMipMapAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_8004D4BC(void *,float);
void fn_800ABC8C();
void *fn_800AC294();
extern char igMipMapAttr_fieldNames[8];
extern char igMipMapAttr_fieldOffsets[8];
extern char igMipMapAttr_fieldStorage[8];
extern char igMipMapAttr_fieldTypes[8];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8056681C[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igMipMapAttr)

void *igMipMapAttr_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igMipMapAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igMipMapAttr)

void igMipMapAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igMipMapAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igMipMapAttr_getMetaCall,
                       igMipMapAttr_className, 0x14,
                       igMipMapAttr_vtableRead, igMipMapAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igMipMapAttr)

void igMipMapAttr_fieldInit()
{
    Meta::igMetaObject *meta = igMipMapAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igMipMapAttr_fieldTypes, 2);
    Meta::igFloatMetaField *kField = static_cast<Meta::igFloatMetaField *>(meta_field(meta, base + 1));
    fn_8004D4BC(kField, *reinterpret_cast<float *>(lbl_8056681C + 0));
    meta_setupFields(meta, igMipMapAttr_fieldNames, igMipMapAttr_fieldStorage, igMipMapAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace unknown800B45E0 {
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void fn_8003EC68(void *,int);
void fn_8004D4BC(void *,float);
void *fn_800607F4(void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void *fn_800AC294();
void igMatrixConstantAttr_arkRegister();
void fn_800C17B4();
void *fn_800C1848();
void igVisualAttribute_register();
extern char igMipMapAttr_vtable[];
extern char igMatrixOptStateAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char igMipMapAttr_fieldTypes[8];
extern char igMipMapAttr_fieldNames[8];
extern char igMipMapAttr_fieldStorage[8];
extern char igMipMapAttr_fieldOffsets[8];
extern char igMatrixOptStateAttr_fieldTypes[4];
extern char igMatrixOptStateAttr_fieldNames[4];
extern char igMatrixOptStateAttr_fieldStorage[4];
extern char igMatrixOptStateAttr_fieldOffsets[4];
extern void *lbl_805621F4;
extern void *igMipMapAttr_meta;
extern void *igMatrixOptStateAttr_meta;
extern void *igMatrixConstantAttr_meta;
extern char lbl_8056681C[4];
void *igMipMapAttr_getMeta();
void *igMipMapAttr_vtableRead();
void igMipMapAttr_arkRegister();
void igMipMapAttr_register();
void *igMipMapAttr_getMetaCall();
void igMipMapAttr_fieldInit();
void *igMatrixOptStateAttr_getMeta();
void *igMatrixOptStateAttr_vtableRead();
void igMatrixOptStateAttr_arkRegister();
void igMatrixOptStateAttr_register();
void *igMatrixOptStateAttr_getMetaCall();
void igMatrixOptStateAttr_fieldInit();
}
struct UnknownGenObject800B4454_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B4658_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800B45E0(){
 if(!igMatrixOptStateAttr_meta) igMatrixOptStateAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igMatrixOptStateAttr_meta;
}
}
#pragma pop
}

namespace igMatrixOptStateAttr {
// igMatrixOptStateAttr: Alchemy class registration (0x800B461C..0x800B47E4). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igMatrixOptStateAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_8003EC68(void *,int);
void fn_800ABC8C();
void *fn_800AC294();
extern char igMatrixOptStateAttr_fieldNames[4];
extern char igMatrixOptStateAttr_fieldOffsets[4];
extern char igMatrixOptStateAttr_fieldStorage[4];
extern char igMatrixOptStateAttr_fieldTypes[4];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igMatrixOptStateAttr)

void *igMatrixOptStateAttr_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igMatrixOptStateAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igMatrixOptStateAttr)

void igMatrixOptStateAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igMatrixOptStateAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igMatrixOptStateAttr_getMetaCall,
                       igMatrixOptStateAttr_className, 0x10,
                       igMatrixOptStateAttr_vtableRead, igMatrixOptStateAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igMatrixOptStateAttr)

void igMatrixOptStateAttr_fieldInit()
{
    Meta::igMetaObject *meta = igMatrixOptStateAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igMatrixOptStateAttr_fieldTypes, 1);
    fn_8003EC68(meta_field(meta, base), 1);
    meta_setupFields(meta, igMatrixOptStateAttr_fieldNames, igMatrixOptStateAttr_fieldStorage, igMatrixOptStateAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace igMatrixConstantAttr {
// igMatrixConstantAttr: Alchemy class registration (0x800B47E4..0x800B49C4). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igMatrixConstantAttr)
META_DECLARE(igCustomStateCollectionAttr)

extern "C" {
void fn_800ABC8C();
void *fn_800AD708();
void *fn_800C1444(int);
void fn_801285A0(void *);
extern char igMatrixConstantAttr_fieldNames[8];
extern char igMatrixConstantAttr_fieldOffsets[8];
extern char igMatrixConstantAttr_fieldStorage[8];
extern char igMatrixConstantAttr_fieldTypes[8];
extern char lbl_8047CD74[164];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

struct Instance_LigMatrixConstantAttr_0 : igObjectInstance {
};

struct Instance_LigMatrixConstantAttr_1 : Instance_LigMatrixConstantAttr_0 {
};

struct Instance_LigMatrixConstantAttr_2 : Instance_LigMatrixConstantAttr_1 {
};

struct Instance_LigMatrixConstantAttr_3 : Instance_LigMatrixConstantAttr_2 {
    char unknown04[8];
    char unknown0C[68];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igMatrixConstantAttr)

void *igMatrixConstantAttr_vtableRead()
{
    Instance_LigMatrixConstantAttr_3 object;
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = lbl_8047CD74;
    object.__vtable = igMatrixConstantAttr_vtable;
    fn_801285A0(&object.unknown0C);
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igMatrixConstantAttr)

void igMatrixConstantAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igMatrixConstantAttr_meta, igCustomStateCollectionAttr_register,
                       fn_800AD708, igMatrixConstantAttr_getMetaCall,
                       igMatrixConstantAttr_className, 0x50,
                       igMatrixConstantAttr_vtableRead, igMatrixConstantAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igMatrixConstantAttr)

void igMatrixConstantAttr_fieldInit()
{
    Meta::igMetaObject *meta = igMatrixConstantAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igMatrixConstantAttr_fieldTypes, 2);
    Meta::igIntMetaField *unitIDField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 1));
    unitIDField->_invarianceFunction = reinterpret_cast<void *>((void *)fn_800C1444);
    meta_setupFields(meta, igMatrixConstantAttr_fieldNames, igMatrixConstantAttr_fieldStorage, igMatrixConstantAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace igMaterialModeAttr {
// igMaterialModeAttr: Alchemy class registration (0x800B49C4..0x800B4B9C). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igMaterialModeAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_80046E58(void *,void *);
void fn_800ABC8C();
void *fn_800AC294();
void fn_800CE17C();
extern char igMaterialModeAttr_fieldNames[4];
extern char igMaterialModeAttr_fieldOffsets[4];
extern char igMaterialModeAttr_fieldStorage[4];
extern char igMaterialModeAttr_fieldTypes[4];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055E3C8[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igMaterialModeAttr)

void *igMaterialModeAttr_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igMaterialModeAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igMaterialModeAttr)

void igMaterialModeAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igMaterialModeAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igMaterialModeAttr_getMetaCall,
                       igMaterialModeAttr_className, 0x10,
                       igMaterialModeAttr_vtableRead, igMaterialModeAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igMaterialModeAttr)

void igMaterialModeAttr_fieldInit()
{
    Meta::igMetaObject *meta = igMaterialModeAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igMaterialModeAttr_fieldTypes, 1);
    Meta::igEnumMetaField *modeField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base));
    fn_80046E58(modeField, lbl_8055E3C8);
    modeField->_getMetaEnumFunction = reinterpret_cast<void *>((void *)fn_800CE17C);
    meta_setupFields(meta, igMaterialModeAttr_fieldNames, igMaterialModeAttr_fieldStorage, igMaterialModeAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace unknown800B4B9C {
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80046E58(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void *fn_800AC294();
void *fn_800AD708();
void *fn_800C1444(int);
void fn_800CE17C();
void igCustomStateCollectionAttr_register();
void igMaterialAttr_fieldInit();
void *igMatrixConstantAttr_getMeta();
void igMatrixConstantAttr_vtableRead();
void igVisualAttribute_register();
extern char igMaterialModeAttr_vtable[];
extern char igMaterialAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char igMatrixConstantAttr_fieldTypes[8];
extern char igMatrixConstantAttr_fieldNames[8];
extern char igMatrixConstantAttr_fieldStorage[8];
extern char igMatrixConstantAttr_fieldOffsets[8];
extern char igMaterialModeAttr_fieldTypes[4];
extern char igMaterialModeAttr_fieldNames[4];
extern char igMaterialModeAttr_fieldStorage[4];
extern char igMaterialModeAttr_fieldOffsets[4];
extern char lbl_8055E3C8[4];
extern void *igMatrixConstantAttr_meta;
extern void *igMaterialModeAttr_meta;
extern void *igMaterialAttr_meta;
void igMatrixConstantAttr_register();
void *igMatrixConstantAttr_getMetaCall();
void igMatrixConstantAttr_fieldInit();
void *igMaterialModeAttr_getMeta();
void *igMaterialModeAttr_vtableRead();
void igMaterialModeAttr_arkRegister();
void igMaterialModeAttr_register();
void *igMaterialModeAttr_getMetaCall();
void igMaterialModeAttr_fieldInit();
void *igMaterialAttr_getMeta();
void *igMaterialAttr_vtableRead();
void igMaterialAttr_arkRegister();
void igMaterialAttr_register();
void *igMaterialAttr_getMetaCall();
}
struct UnknownGenObject800B4A00_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B4BD8_0 {
 void *unknown00;
 char unknown04[84];
};
extern "C" {
void *igMaterialAttr_getMeta(){
 if(!igMaterialAttr_meta || !(reinterpret_cast<unsigned int *>(igMaterialAttr_meta)[0x24/4]&4)) igMaterialAttr_arkRegister();
 return igMaterialAttr_meta;
}
void *igMaterialAttr_vtableRead(){
 UnknownGenObject800B4BD8_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igMaterialAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igMaterialAttr_arkRegister(){
 meta_registerNow((int)igMaterialAttr_register);
}
void igMaterialAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igMaterialAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igMaterialAttr_getMetaCall,(int)igMaterialAttr_className,84,(int)igMaterialAttr_vtableRead,(int)igMaterialAttr_fieldInit,0,0);
}
void *igMaterialAttr_getMetaCall(){return igMaterialAttr_getMeta();}
}
#pragma pop
}

namespace igMaterialAttr_fieldInit {
// igMaterialAttr: Alchemy class registration (0x800B4CE8..0x800B4E08). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igMaterialAttr)

extern "C" {
void fn_80126CF0(void *, void *);
extern const char lbl_80566810[4];
extern const char lbl_80566814[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igMaterialAttr_fieldInit()
{
    float local[16];
    Meta::igMetaObject *meta = igMaterialAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igMaterialAttr_fieldTypes, 6);
    Meta::igVec4fMetaField *diffuseField = static_cast<Meta::igVec4fMetaField *>(meta_field(meta, base + 1));
    local[12] = *reinterpret_cast<const float *>(lbl_80566814);
    local[13] = *reinterpret_cast<const float *>(lbl_80566814);
    local[14] = *reinterpret_cast<const float *>(lbl_80566814);
    local[15] = *reinterpret_cast<const float *>(lbl_80566810);
    fn_80126CF0(diffuseField, &local[12]);
    Meta::igVec4fMetaField *ambientField = static_cast<Meta::igVec4fMetaField *>(meta_field(meta, base + 2));
    local[8] = *reinterpret_cast<const float *>(lbl_80566814);
    local[9] = *reinterpret_cast<const float *>(lbl_80566814);
    local[10] = *reinterpret_cast<const float *>(lbl_80566814);
    local[11] = *reinterpret_cast<const float *>(lbl_80566810);
    fn_80126CF0(ambientField, &local[8]);
    Meta::igVec4fMetaField *emissionField = static_cast<Meta::igVec4fMetaField *>(meta_field(meta, base + 3));
    local[4] = *reinterpret_cast<const float *>(lbl_80566814);
    local[5] = *reinterpret_cast<const float *>(lbl_80566814);
    local[6] = *reinterpret_cast<const float *>(lbl_80566814);
    local[7] = *reinterpret_cast<const float *>(lbl_80566810);
    fn_80126CF0(emissionField, &local[4]);
    Meta::igVec4fMetaField *specularField = static_cast<Meta::igVec4fMetaField *>(meta_field(meta, base + 4));
    local[0] = *reinterpret_cast<const float *>(lbl_80566814);
    local[1] = *reinterpret_cast<const float *>(lbl_80566814);
    local[2] = *reinterpret_cast<const float *>(lbl_80566814);
    local[3] = *reinterpret_cast<const float *>(lbl_80566810);
    fn_80126CF0(specularField, &local[0]);
    meta_setupFields(meta, igMaterialAttr_fieldNames, igMaterialAttr_fieldStorage, igMaterialAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace unknown800B4E08 {
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void *fn_800AC294();
void igMacroTextureRegionAttr_fieldInit();
void igVisualAttribute_register();
extern char igMacroTextureRegionAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *igMacroTextureRegionAttr_meta;
void *igMacroTextureRegionAttr_getMeta();
void *igMacroTextureRegionAttr_vtableRead();
void igMacroTextureRegionAttr_arkRegister();
void igMacroTextureRegionAttr_register();
void *igMacroTextureRegionAttr_getMetaCall();
}
struct UnknownGenObject800B4E7C_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *igMacroTextureRegionAttr_create(void *object){
 igMacroTextureRegionAttr_arkRegister();
 return meta_createInstance(igMacroTextureRegionAttr_meta,object);
}
void *igMacroTextureRegionAttr_getMeta(){
 if(!igMacroTextureRegionAttr_meta || !(reinterpret_cast<unsigned int *>(igMacroTextureRegionAttr_meta)[0x24/4]&4)) igMacroTextureRegionAttr_arkRegister();
 return igMacroTextureRegionAttr_meta;
}
void *igMacroTextureRegionAttr_vtableRead(){
 UnknownGenObject800B4E7C_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igMacroTextureRegionAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igMacroTextureRegionAttr_arkRegister(){
 meta_registerNow((int)igMacroTextureRegionAttr_register);
}
void igMacroTextureRegionAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igMacroTextureRegionAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igMacroTextureRegionAttr_getMetaCall,(int)igMacroTextureRegionAttr_className,28,(int)igMacroTextureRegionAttr_vtableRead,(int)igMacroTextureRegionAttr_fieldInit,0,0);
}
void *igMacroTextureRegionAttr_getMetaCall(){return igMacroTextureRegionAttr_getMeta();}
}
#pragma pop
}

namespace igMacroTextureRegionAttr_fieldInit {
// igMacroTextureRegionAttr: Alchemy class registration (0x800B4F8C..0x800B4FFC). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igMacroTextureRegionAttr)

extern "C" {
}

#pragma push
#pragma auto_inline off
extern "C" {

void igMacroTextureRegionAttr_fieldInit()
{
    Meta::igMetaObject *meta = igMacroTextureRegionAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igMacroTextureRegionAttr_fieldTypes, 4);
    meta_setupFields(meta, igMacroTextureRegionAttr_fieldNames, igMacroTextureRegionAttr_fieldStorage, igMacroTextureRegionAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace igLineWidthAttr {
// igLineWidthAttr: Alchemy class registration (0x800B4FFC..0x800B51C4). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igLineWidthAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_8004D4BC(void *,float);
void fn_800ABC8C();
void *fn_800AC294();
extern char igLineWidthAttr_fieldNames[4];
extern char igLineWidthAttr_fieldOffsets[4];
extern char igLineWidthAttr_fieldStorage[4];
extern char igLineWidthAttr_fieldTypes[4];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_80566810[4];
}

struct Instance_800B5038_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igLineWidthAttr)

void *igLineWidthAttr_vtableRead()
{
    Instance_800B5038_0 object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igLineWidthAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igLineWidthAttr)

void igLineWidthAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igLineWidthAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igLineWidthAttr_getMetaCall,
                       igLineWidthAttr_className, 0x10,
                       igLineWidthAttr_vtableRead, igLineWidthAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igLineWidthAttr)

void igLineWidthAttr_fieldInit()
{
    Meta::igMetaObject *meta = igLineWidthAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igLineWidthAttr_fieldTypes, 1);
    Meta::igFloatMetaField *widthField = static_cast<Meta::igFloatMetaField *>(meta_field(meta, base));
    fn_8004D4BC(widthField, *reinterpret_cast<float *>(lbl_80566810 + 0));
    meta_setupFields(meta, igLineWidthAttr_fieldNames, igLineWidthAttr_fieldStorage, igLineWidthAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace igLightingStateAttr {
// igLightingStateAttr: Alchemy class registration (0x800B51C4..0x800B51FC). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igLightingStateAttr)

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igLightingStateAttr)

}
#pragma pop
}

namespace unknown800B51FC {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void *meta_newMetaObject(void *);
void fn_8004D4BC(void *,float);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void *fn_800AC294();
void igLightStateAttr_fieldInit();
void igObjectList_register();
void igVisualAttribute_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igLineWidthAttr_vtable[];
extern char igLightingStateAttr_vtable[];
extern char igLightStateAttr_vtable[];
extern char lbl_8047D578[];
extern char igLightStateAttrList_vtable[];
extern char lbl_8047DD44[];
extern char lbl_8047E50C[];
extern char igLineWidthAttr_fieldTypes[4];
extern char igLineWidthAttr_fieldNames[4];
extern char igLineWidthAttr_fieldStorage[4];
extern char igLineWidthAttr_fieldOffsets[4];
extern char igLightingStateAttr_fieldTypes[4];
extern char igLightingStateAttr_fieldNames[4];
extern char igLightingStateAttr_fieldStorage[4];
extern char igLightingStateAttr_fieldOffsets[4];
extern char igLightStateAttrList_dependencies[8];
extern void *lbl_805621F4;
extern void *igLineWidthAttr_meta;
extern void *igLightingStateAttr_meta;
extern void *igLightStateAttrList_meta;
extern void *igLightStateAttr_meta;
extern char lbl_80566810[4];
void *igLineWidthAttr_getMeta();
void *igLineWidthAttr_vtableRead();
void igLineWidthAttr_arkRegister();
void igLineWidthAttr_register();
void *igLineWidthAttr_getMetaCall();
void igLineWidthAttr_fieldInit();
void *igLightingStateAttr_getMeta();
void *igLightingStateAttr_vtableRead();
void igLightingStateAttr_arkRegister();
void igLightingStateAttr_register();
void *igLightingStateAttr_getMetaCall();
void igLightingStateAttr_fieldInit();
void *igLightStateAttrList_getMeta();
void *igLightStateAttrList_vtableRead();
void igLightStateAttrList_arkRegister();
void igLightStateAttrList_register();
void *igLightStateAttrList_getMetaCall();
void *igLightStateAttr_getMeta();
void *igLightStateAttr_vtableRead();
void igLightStateAttr_arkRegister();
void igLightStateAttr_register();
void *igLightStateAttr_getMetaCall();
}
struct UnknownGenObject800B5038_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B5274_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B549C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800B5670 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B5670(){igObject_construct(this);}
};
struct UnknownGenObject800B5670 : UnknownGenRoot800B5670 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject800B5670(){unknown00=igLightStateAttr_vtable;}
};
extern "C" {
void *fn_800B51FC(){
 if(!igLightingStateAttr_meta) igLightingStateAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igLightingStateAttr_meta;
}
}
#pragma pop
}

namespace igLightingStateAttr_2 {
// igLightingStateAttr: Alchemy class registration (0x800B5238..0x800B53EC). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igLightingStateAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_800ABC8C();
void *fn_800AC294();
extern char igLightingStateAttr_fieldNames[4];
extern char igLightingStateAttr_fieldOffsets[4];
extern char igLightingStateAttr_fieldStorage[4];
extern char igLightingStateAttr_fieldTypes[4];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

struct Instance_800B5274_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igLightingStateAttr)

void *igLightingStateAttr_vtableRead()
{
    Instance_800B5274_0 object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igLightingStateAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igLightingStateAttr)

void igLightingStateAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igLightingStateAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igLightingStateAttr_getMetaCall,
                       igLightingStateAttr_className, 0x10,
                       igLightingStateAttr_vtableRead, igLightingStateAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igLightingStateAttr)

void igLightingStateAttr_fieldInit()
{
    Meta::igMetaObject *meta = igLightingStateAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igLightingStateAttr_fieldTypes, 1);
    meta_setupFields(meta, igLightingStateAttr_fieldNames, igLightingStateAttr_fieldStorage, igLightingStateAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace igLightStateAttrList {
// igLightStateAttrList: Alchemy class registration (0x800B53EC..0x800B5424). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igLightStateAttrList)

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igLightStateAttrList)

}
#pragma pop
}

namespace unknown800B5424 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void *meta_newMetaObject(void *);
void fn_8004D4BC(void *,float);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void *fn_800AC294();
void igLightStateAttr_fieldInit();
void igObjectList_register();
void igVisualAttribute_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igLineWidthAttr_vtable[];
extern char igLightingStateAttr_vtable[];
extern char igLightStateAttr_vtable[];
extern char lbl_8047D578[];
extern char igLightStateAttrList_vtable[];
extern char lbl_8047DD44[];
extern char lbl_8047E50C[];
extern char igLineWidthAttr_fieldTypes[4];
extern char igLineWidthAttr_fieldNames[4];
extern char igLineWidthAttr_fieldStorage[4];
extern char igLineWidthAttr_fieldOffsets[4];
extern char igLightingStateAttr_fieldTypes[4];
extern char igLightingStateAttr_fieldNames[4];
extern char igLightingStateAttr_fieldStorage[4];
extern char igLightingStateAttr_fieldOffsets[4];
extern char igLightStateAttrList_dependencies[8];
extern void *lbl_805621F4;
extern void *igLineWidthAttr_meta;
extern void *igLightingStateAttr_meta;
extern void *igLightStateAttrList_meta;
extern void *igLightStateAttr_meta;
extern char lbl_80566810[4];
void *igLineWidthAttr_getMeta();
void *igLineWidthAttr_vtableRead();
void igLineWidthAttr_arkRegister();
void igLineWidthAttr_register();
void *igLineWidthAttr_getMetaCall();
void igLineWidthAttr_fieldInit();
void *igLightingStateAttr_getMeta();
void *igLightingStateAttr_vtableRead();
void igLightingStateAttr_arkRegister();
void igLightingStateAttr_register();
void *igLightingStateAttr_getMetaCall();
void igLightingStateAttr_fieldInit();
void *igLightStateAttrList_getMeta();
void *igLightStateAttrList_vtableRead();
void igLightStateAttrList_arkRegister();
void igLightStateAttrList_register();
void *igLightStateAttrList_getMetaCall();
void *igLightStateAttr_getMeta();
void *igLightStateAttr_vtableRead();
void igLightStateAttr_arkRegister();
void igLightStateAttr_register();
void *igLightStateAttr_getMetaCall();
}
struct UnknownGenObject800B5038_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B5274_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B549C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800B5670 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B5670(){igObject_construct(this);}
};
struct UnknownGenObject800B5670 : UnknownGenRoot800B5670 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject800B5670(){unknown00=igLightStateAttr_vtable;}
};
extern "C" {
void *fn_800B5424(){
 if(!igLightStateAttrList_meta) igLightStateAttrList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igLightStateAttrList_meta;
}
}
#pragma pop
}

namespace igLightStateAttrList_2 {
// igLightStateAttrList: Alchemy class registration (0x800B5460..0x800B55C0). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igLightStateAttrList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_800ABC8C();
extern char igLightStateAttrList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_8047DD44[];
}

struct Instance_800B549C_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igLightStateAttrList)

void *igLightStateAttrList_vtableRead()
{
    Instance_800B549C_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_8047DD44;
    object.__vtable = igLightStateAttrList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igLightStateAttrList)

void igLightStateAttrList_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igLightStateAttrList_meta, igObjectList_register,
                       fn_80024180, igLightStateAttrList_getMetaCall,
                       igLightStateAttrList_className, 0x14,
                       igLightStateAttrList_vtableRead, 0, 0, igLightStateAttrList_dependencies);
}

META_GET_META_CALL(igLightStateAttrList)

}
#pragma pop
}

namespace igLightStateAttr {
// igLightStateAttr: Alchemy class registration (0x800B55C0..0x800B55F8). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igLightStateAttr)

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igLightStateAttr)

}
#pragma pop
}

namespace unknown800B55F8 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void *meta_newMetaObject(void *);
void fn_8004D4BC(void *,float);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void *fn_800AC294();
void igLightStateAttr_fieldInit();
void igObjectList_register();
void igVisualAttribute_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igLineWidthAttr_vtable[];
extern char igLightingStateAttr_vtable[];
extern char igLightStateAttr_vtable[];
extern char lbl_8047D578[];
extern char igLightStateAttrList_vtable[];
extern char lbl_8047DD44[];
extern char lbl_8047E50C[];
extern char igLineWidthAttr_fieldTypes[4];
extern char igLineWidthAttr_fieldNames[4];
extern char igLineWidthAttr_fieldStorage[4];
extern char igLineWidthAttr_fieldOffsets[4];
extern char igLightingStateAttr_fieldTypes[4];
extern char igLightingStateAttr_fieldNames[4];
extern char igLightingStateAttr_fieldStorage[4];
extern char igLightingStateAttr_fieldOffsets[4];
extern char igLightStateAttrList_dependencies[8];
extern void *lbl_805621F4;
extern void *igLineWidthAttr_meta;
extern void *igLightingStateAttr_meta;
extern void *igLightStateAttrList_meta;
extern void *igLightStateAttr_meta;
extern char lbl_80566810[4];
void *igLineWidthAttr_getMeta();
void *igLineWidthAttr_vtableRead();
void igLineWidthAttr_arkRegister();
void igLineWidthAttr_register();
void *igLineWidthAttr_getMetaCall();
void igLineWidthAttr_fieldInit();
void *igLightingStateAttr_getMeta();
void *igLightingStateAttr_vtableRead();
void igLightingStateAttr_arkRegister();
void igLightingStateAttr_register();
void *igLightingStateAttr_getMetaCall();
void igLightingStateAttr_fieldInit();
void *igLightStateAttrList_getMeta();
void *igLightStateAttrList_vtableRead();
void igLightStateAttrList_arkRegister();
void igLightStateAttrList_register();
void *igLightStateAttrList_getMetaCall();
void *igLightStateAttr_getMeta();
void *igLightStateAttr_vtableRead();
void igLightStateAttr_arkRegister();
void igLightStateAttr_register();
void *igLightStateAttr_getMetaCall();
}
struct UnknownGenObject800B5038_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B5274_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B549C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800B5670 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B5670(){igObject_construct(this);}
};
struct UnknownGenObject800B5670 : UnknownGenRoot800B5670 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject800B5670(){unknown00=igLightStateAttr_vtable;}
};
extern "C" {
void *fn_800B55F8(){
 if(!igLightStateAttr_meta) igLightStateAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igLightStateAttr_meta;
}
void *igLightStateAttr_getMeta(){
 if(!igLightStateAttr_meta || !(reinterpret_cast<unsigned int *>(igLightStateAttr_meta)[0x24/4]&4)) igLightStateAttr_arkRegister();
 return igLightStateAttr_meta;
}
void *igLightStateAttr_vtableRead(){
 UnknownGenObject800B5670 object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igLightStateAttr_vtable;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igLightStateAttr_arkRegister(){
 meta_registerNow((int)igLightStateAttr_register);
}
void igLightStateAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igLightStateAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igLightStateAttr_getMetaCall,(int)igLightStateAttr_className,24,(int)igLightStateAttr_vtableRead,(int)igLightStateAttr_fieldInit,0,(int)igLightStateAttr_dependencies);
}
void *igLightStateAttr_getMetaCall(){return igLightStateAttr_getMeta();}
}
#pragma pop
}

namespace igLightStateAttr_fieldInit {
// igLightStateAttr: Alchemy class registration (0x800B5810..0x800B58C8). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igLightStateAttr)
META_DECLARE(igObject)

extern "C" {
void fn_8003EC68(void *, int);
void *fn_800B5A64();
}

#pragma push
#pragma auto_inline off
extern "C" {

void igLightStateAttr_fieldInit()
{
    Meta::igMetaObject *meta = igLightStateAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igLightStateAttr_fieldTypes, 3);
    Meta::igObjectRefMetaField *internalField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_v2 = fn_800B5A64();
    internalField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v2);
    Meta::igObjectRefMetaField *lightField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    fn_8003EC68(lightField, 1);
    Meta::igBoolMetaField *enabledField = static_cast<Meta::igBoolMetaField *>(meta_field(meta, base + 2));
    *reinterpret_cast<void **>(reinterpret_cast<char *>(enabledField) + 0x38) = igObject_meta;
    enabledField->_persistent = false;
    meta_setupFields(meta, igLightStateAttr_fieldNames, igLightStateAttr_fieldStorage, igLightStateAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace unknown800B58C8 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void *fn_800AC294();
void igLightAttr_fieldInit();
void igObjectList_register();
void igVisualAttribute_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igLightAttr_vtable[];
extern char lbl_8047D578[];
extern char igLightList_vtable[];
extern char lbl_8047DC7C[];
extern char lbl_8047E50C[];
extern char igLightList_dependencies[8];
extern char igLightAttr_dependencies[8];
extern void *lbl_805621F4;
extern void *igLightList_meta;
extern void *igLightAttr_meta;
void *igLightList_getMeta();
void *igLightList_vtableRead();
void igLightList_arkRegister();
void igLightList_register();
void *igLightList_getMetaCall();
void *igLightAttr_getMeta();
void *igLightAttr_vtableRead();
void igLightAttr_arkRegister();
void igLightAttr_register();
void *igLightAttr_getMetaCall();
}
struct UnknownGenObject800B5940_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800B5ADC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B5ADC(){igObject_construct(this);}
};
struct UnknownGenObject800B5ADC : UnknownGenRoot800B5ADC {
 char unknown04[136];
 UnknownGenRefMember unknown8C;
 char unknown90[16];
 inline ~UnknownGenObject800B5ADC(){unknown00=igLightAttr_vtable;}
};
extern "C" {
void *fn_800B58C8(){
 if(!igLightList_meta) igLightList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igLightList_meta;
}
}
#pragma pop
}

namespace igLightList {
// igLightList: Alchemy class registration (0x800B5904..0x800B5A64). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igLightList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_800ABC8C();
extern char igLightList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_8047DC7C[];
}

struct Instance_800B5940_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igLightList)

void *igLightList_vtableRead()
{
    Instance_800B5940_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_8047DC7C;
    object.__vtable = igLightList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igLightList)

void igLightList_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igLightList_meta, igObjectList_register,
                       fn_80024180, igLightList_getMetaCall,
                       igLightList_className, 0x14,
                       igLightList_vtableRead, 0, 0, igLightList_dependencies);
}

META_GET_META_CALL(igLightList)

}
#pragma pop
}

namespace unknown800B5A64 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void *fn_800AC294();
void igLightAttr_fieldInit();
void igObjectList_register();
void igVisualAttribute_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igLightAttr_vtable[];
extern char lbl_8047D578[];
extern char igLightList_vtable[];
extern char lbl_8047DC7C[];
extern char lbl_8047E50C[];
extern char igLightList_dependencies[8];
extern char igLightAttr_dependencies[8];
extern void *lbl_805621F4;
extern void *igLightList_meta;
extern void *igLightAttr_meta;
void *igLightList_getMeta();
void *igLightList_vtableRead();
void igLightList_arkRegister();
void igLightList_register();
void *igLightList_getMetaCall();
void *igLightAttr_getMeta();
void *igLightAttr_vtableRead();
void igLightAttr_arkRegister();
void igLightAttr_register();
void *igLightAttr_getMetaCall();
}
struct UnknownGenObject800B5940_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800B5ADC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B5ADC(){igObject_construct(this);}
};
struct UnknownGenObject800B5ADC : UnknownGenRoot800B5ADC {
 char unknown04[136];
 UnknownGenRefMember unknown8C;
 char unknown90[16];
 inline ~UnknownGenObject800B5ADC(){unknown00=igLightAttr_vtable;}
};
extern "C" {
void *fn_800B5A64(){
 if(!igLightAttr_meta) igLightAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igLightAttr_meta;
}
void *igLightAttr_getMeta(){
 if(!igLightAttr_meta || !(reinterpret_cast<unsigned int *>(igLightAttr_meta)[0x24/4]&4)) igLightAttr_arkRegister();
 return igLightAttr_meta;
}
void *igLightAttr_vtableRead(){
 UnknownGenObject800B5ADC object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igLightAttr_vtable;
 object.unknown8C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igLightAttr_arkRegister(){
 meta_registerNow((int)igLightAttr_register);
}
void igLightAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igLightAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igLightAttr_getMetaCall,(int)igLightAttr_className,148,(int)igLightAttr_vtableRead,(int)igLightAttr_fieldInit,0,(int)igLightAttr_dependencies);
}
void *igLightAttr_getMetaCall(){return igLightAttr_getMeta();}
}
#pragma pop
}

namespace igLightAttr_fieldInit {
// igLightAttr: Alchemy class registration (0x800B5C38..0x800B5F74). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igLightAttr)

extern "C" {
void fn_8003EC68(void *, int);
void fn_80046E58(void *, void *);
void fn_8004D4BC(void *, float);
void fn_80053650(void *, int);
void fn_800C0CC8();
void fn_800CE1C8();
void *fn_800CE788();
void fn_80126808(void *, void *);
void fn_80126CF0(void *, void *);
extern char lbl_8055E424[4];
extern const char lbl_80566810[4];
extern const char lbl_80566814[4];
extern const char lbl_80566820[4];
extern const char lbl_80566824[4];
extern const char lbl_80566828[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igLightAttr_fieldInit()
{
    float local0[3];
    float local1[4];
    float local2[4];
    float local3[4];
    float local4[3];
    float local5[3];
    float local6[3];
    float local7[3];
    Meta::igMetaObject *meta = igLightAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igLightAttr_fieldTypes, 16);
    Meta::igEnumMetaField *lightTypeField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base));
    fn_80046E58(lightTypeField, (void *)lbl_8055E424);
    lightTypeField->_invarianceFunction = reinterpret_cast<void *>(fn_800C0CC8);
    lightTypeField->_getMetaEnumFunction = reinterpret_cast<void *>(fn_800CE1C8);
    Meta::igIntMetaField *lightIdField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 1));
    fn_80053650(lightIdField, -1);
    lightIdField->_persistent = false;
    lightIdField->_deepCopyMethod = 4;
    lightIdField->_shallowCopyMethod = 4;
    lightIdField->_isAlikeShallowMethod = 3;
    Meta::igVec3fMetaField *positionField = static_cast<Meta::igVec3fMetaField *>(meta_field(meta, base + 2));
    local0[0] = *reinterpret_cast<const float *>(lbl_80566814);
    local0[1] = *reinterpret_cast<const float *>(lbl_80566814);
    local0[2] = *reinterpret_cast<const float *>(lbl_80566814);
    fn_80126808(positionField, &local0[0]);
    positionField->_invarianceFunction = reinterpret_cast<void *>(fn_800C0CC8);
    Meta::igVec4fMetaField *ambientField = static_cast<Meta::igVec4fMetaField *>(meta_field(meta, base + 3));
    local1[0] = *reinterpret_cast<const float *>(lbl_80566820);
    local1[1] = *reinterpret_cast<const float *>(lbl_80566820);
    local1[2] = *reinterpret_cast<const float *>(lbl_80566820);
    local1[3] = *reinterpret_cast<const float *>(lbl_80566810);
    fn_80126CF0(ambientField, &local1[0]);
    ambientField->_invarianceFunction = reinterpret_cast<void *>(fn_800C0CC8);
    Meta::igVec4fMetaField *diffuseField = static_cast<Meta::igVec4fMetaField *>(meta_field(meta, base + 4));
    local2[0] = *reinterpret_cast<const float *>(lbl_80566810);
    local2[1] = *reinterpret_cast<const float *>(lbl_80566810);
    local2[2] = *reinterpret_cast<const float *>(lbl_80566810);
    local2[3] = *reinterpret_cast<const float *>(lbl_80566810);
    fn_80126CF0(diffuseField, &local2[0]);
    diffuseField->_invarianceFunction = reinterpret_cast<void *>(fn_800C0CC8);
    Meta::igVec4fMetaField *specularField = static_cast<Meta::igVec4fMetaField *>(meta_field(meta, base + 5));
    local3[0] = *reinterpret_cast<const float *>(lbl_80566814);
    local3[1] = *reinterpret_cast<const float *>(lbl_80566814);
    local3[2] = *reinterpret_cast<const float *>(lbl_80566814);
    local3[3] = *reinterpret_cast<const float *>(lbl_80566810);
    fn_80126CF0(specularField, &local3[0]);
    specularField->_invarianceFunction = reinterpret_cast<void *>(fn_800C0CC8);
    Meta::igVec3fMetaField *directionField = static_cast<Meta::igVec3fMetaField *>(meta_field(meta, base + 6));
    local4[0] = *reinterpret_cast<const float *>(lbl_80566814);
    local4[1] = *reinterpret_cast<const float *>(lbl_80566814);
    local4[2] = *reinterpret_cast<const float *>(lbl_80566810);
    fn_80126808(directionField, &local4[0]);
    directionField->_invarianceFunction = reinterpret_cast<void *>(fn_800C0CC8);
    Meta::igFloatMetaField *falloffField = static_cast<Meta::igFloatMetaField *>(meta_field(meta, base + 7));
    falloffField->_invarianceFunction = reinterpret_cast<void *>(fn_800C0CC8);
    Meta::igFloatMetaField *cutoffField = static_cast<Meta::igFloatMetaField *>(meta_field(meta, base + 8));
    fn_8004D4BC(cutoffField, *reinterpret_cast<const float *>(lbl_80566824));
    cutoffField->_invarianceFunction = reinterpret_cast<void *>(fn_800C0CC8);
    Meta::igVec3fMetaField *attenuationField = static_cast<Meta::igVec3fMetaField *>(meta_field(meta, base + 9));
    local5[0] = *reinterpret_cast<const float *>(lbl_80566810);
    local5[1] = *reinterpret_cast<const float *>(lbl_80566814);
    local5[2] = *reinterpret_cast<const float *>(lbl_80566814);
    fn_80126808(attenuationField, &local5[0]);
    attenuationField->_invarianceFunction = reinterpret_cast<void *>(fn_800C0CC8);
    Meta::igFloatMetaField *shininessField = static_cast<Meta::igFloatMetaField *>(meta_field(meta, base + 10));
    shininessField->_invarianceFunction = reinterpret_cast<void *>(fn_800C0CC8);
    Meta::igVec3fMetaField *cachedPositionField = static_cast<Meta::igVec3fMetaField *>(meta_field(meta, base + 11));
    local6[0] = *reinterpret_cast<const float *>(lbl_80566814);
    local6[1] = *reinterpret_cast<const float *>(lbl_80566814);
    local6[2] = *reinterpret_cast<const float *>(lbl_80566814);
    fn_80126808(cachedPositionField, &local6[0]);
    Meta::igVec3fMetaField *cachedDirectionField = static_cast<Meta::igVec3fMetaField *>(meta_field(meta, base + 12));
    local7[0] = *reinterpret_cast<const float *>(lbl_80566814);
    local7[1] = *reinterpret_cast<const float *>(lbl_80566814);
    local7[2] = *reinterpret_cast<const float *>(lbl_80566828);
    fn_80126808(cachedDirectionField, &local7[0]);
    Meta::igObjectRefMetaField *vcField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 13));
    void *value_v15 = fn_800CE788();
    vcField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v15);
    vcField->_persistent = false;
    vcField->_deepCopyMethod = 1;
    vcField->_shallowCopyMethod = 1;
    vcField->_isAlikeShallowMethod = 3;
    Meta::igBoolMetaField *changedField = static_cast<Meta::igBoolMetaField *>(meta_field(meta, base + 14));
    fn_8003EC68(changedField, 1);
    changedField->_persistent = false;
    Meta::igBoolMetaField *cacheableField = static_cast<Meta::igBoolMetaField *>(meta_field(meta, base + 15));
    fn_8003EC68(cacheableField, 1);
    cacheableField->_persistent = false;
    meta_setupFields(meta, igLightAttr_fieldNames, igLightAttr_fieldStorage, igLightAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace unknown800B5F74 {
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void *fn_800635C8(void *,void *,void *,int);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void *fn_800AC294();
void igGeometrySetAttr_fieldInit();
void igVisualAttribute_register();
extern char igGeometrySetAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *lbl_80562838;
extern void *igGeometrySetAttr_meta;
void *igGeometrySetAttr_getMeta();
void *igGeometrySetAttr_vtableRead();
void igGeometrySetAttr_arkRegister();
void igGeometrySetAttr_register();
void *igGeometrySetAttr_getMetaCall();
}
struct UnknownGenRoot800B5FFC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B5FFC(){igObject_construct(this);}
};
struct UnknownGenObject800B5FFC : UnknownGenRoot800B5FFC {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 char unknown10[4];
 UnknownGenRefMember unknown14;
 char unknown18[8];
 inline ~UnknownGenObject800B5FFC(){unknown00=igGeometrySetAttr_vtable;}
};
extern "C" {
void *fn_800B5F74(){
 char *data=igVisualContextAttrDefaultManager_className;
 if(!lbl_80562838) lbl_80562838=fn_800635C8(data+0x17E0,data+0x17C8,data+0x17D4,0x3);
 return lbl_80562838;
}
}
#pragma pop
}

namespace igGeometrySetAttr {
// igGeometrySetAttr: Alchemy class registration (0x800B5FC0..0x800B60DC). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igGeometrySetAttr)

extern "C" {
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

struct igGeometrySetAttrInstance : igObjectInstance {
    char unknown04[8];
    igObjectRefMember _vc;
    char unknown10[4];
    igObjectRefMember _geometryAttrList;
    char unknown18[8];
    inline ~igGeometrySetAttrInstance() { __vtable = igGeometrySetAttr_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igGeometrySetAttr)

void *igGeometrySetAttr_vtableRead()
{
    igGeometrySetAttrInstance object;
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igGeometrySetAttr_vtable;
    object._vc._value = 0;
    object._geometryAttrList._value = 0;
    return meta_vtableOf(&object);
}

}
#pragma pop
}

namespace unknown800B60DC {
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void *fn_800635C8(void *,void *,void *,int);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void *fn_800AC294();
void igGeometrySetAttr_fieldInit();
void igVisualAttribute_register();
extern char igGeometrySetAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *lbl_80562838;
extern void *igGeometrySetAttr_meta;
void *igGeometrySetAttr_getMeta();
void *igGeometrySetAttr_vtableRead();
void igGeometrySetAttr_arkRegister();
void igGeometrySetAttr_register();
void *igGeometrySetAttr_getMetaCall();
}
struct UnknownGenRoot800B5FFC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B5FFC(){igObject_construct(this);}
};
struct UnknownGenObject800B5FFC : UnknownGenRoot800B5FFC {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 char unknown10[4];
 UnknownGenRefMember unknown14;
 char unknown18[8];
 inline ~UnknownGenObject800B5FFC(){unknown00=igGeometrySetAttr_vtable;}
};
extern "C" {
UnknownGenHolder *fn_800B60DC(UnknownGenHolder *object,short flags){
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
void igGeometrySetAttr_arkRegister(){
 meta_registerNow((int)igGeometrySetAttr_register);
}
void igGeometrySetAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igGeometrySetAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igGeometrySetAttr_getMetaCall,(int)igGeometrySetAttr_className,32,(int)igGeometrySetAttr_vtableRead,(int)igGeometrySetAttr_fieldInit,0,(int)igGeometrySetAttr_dependencies);
}
void *igGeometrySetAttr_getMetaCall(){return igGeometrySetAttr_getMeta();}
}
#pragma pop
}

namespace igGeometrySetAttr_fieldInit {
// igGeometrySetAttr: Alchemy class registration (0x800B6210..0x800B6340). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igGeometrySetAttr)

extern "C" {
void fn_8003EC68(void *, int);
void fn_80046E58(void *, void *);
void fn_80053650(void *, int);
void fn_800B5F74();
void *fn_800BAC98();
void *fn_800CE788();
extern char lbl_8055E428[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igGeometrySetAttr_fieldInit()
{
    Meta::igMetaObject *meta = igGeometrySetAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igGeometrySetAttr_fieldTypes, 5);
    Meta::igObjectRefMetaField *vcField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_v2 = fn_800CE788();
    vcField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v2);
    vcField->_persistent = false;
    vcField->_deepCopyMethod = 1;
    vcField->_shallowCopyMethod = 1;
    vcField->_isAlikeShallowMethod = 3;
    Meta::igIntMetaField *renderListHandleField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 1));
    fn_80053650(renderListHandleField, -1);
    renderListHandleField->_persistent = false;
    renderListHandleField->_deepCopyMethod = 4;
    renderListHandleField->_shallowCopyMethod = 4;
    renderListHandleField->_isAlikeShallowMethod = 3;
    Meta::igObjectRefMetaField *geometryAttrListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    void *value_v5 = fn_800BAC98();
    geometryAttrListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v5);
    Meta::igEnumMetaField *renderListStateField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base + 3));
    fn_80046E58(renderListStateField, (void *)lbl_8055E428);
    renderListStateField->_persistent = false;
    renderListStateField->_getMetaEnumFunction = reinterpret_cast<void *>(fn_800B5F74);
    Meta::igBoolMetaField *drawStateField = static_cast<Meta::igBoolMetaField *>(meta_field(meta, base + 4));
    fn_8003EC68(drawStateField, 1);
    meta_setupFields(meta, igGeometrySetAttr_fieldNames, igGeometrySetAttr_fieldStorage, igGeometrySetAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace igGeometryMaskAttr {
// igGeometryMaskAttr: Alchemy class registration (0x800B6340..0x800B6540). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igGeometryMaskAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_80075AC4(void *,int);
void fn_800ABC8C();
void *fn_800AC294();
extern char igGeometryMaskAttr_fieldNames[4];
extern char igGeometryMaskAttr_fieldOffsets[4];
extern char igGeometryMaskAttr_fieldStorage[4];
extern char igGeometryMaskAttr_fieldTypes[4];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

struct Instance_800B63B4_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igGeometryMaskAttr)

META_GET_META(igGeometryMaskAttr)

void *igGeometryMaskAttr_vtableRead()
{
    Instance_800B63B4_0 object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igGeometryMaskAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igGeometryMaskAttr)

void igGeometryMaskAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igGeometryMaskAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igGeometryMaskAttr_getMetaCall,
                       igGeometryMaskAttr_className, 0x10,
                       igGeometryMaskAttr_vtableRead, igGeometryMaskAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igGeometryMaskAttr)

void igGeometryMaskAttr_fieldInit()
{
    Meta::igMetaObject *meta = igGeometryMaskAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igGeometryMaskAttr_fieldTypes, 1);
    Meta::igUnsignedIntMetaField *maskField = static_cast<Meta::igUnsignedIntMetaField *>(meta_field(meta, base));
    fn_80075AC4(maskField, -1);
    meta_setupFields(meta, igGeometryMaskAttr_fieldNames, igGeometryMaskAttr_fieldStorage, igGeometryMaskAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace igGeometryAttr2 {
// igGeometryAttr2: Alchemy class registration (0x800B6540..0x800B6694). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igGeometryAttr2)

extern "C" {
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

struct igGeometryAttr2Instance : igObjectInstance {
    char unknown04[8];
    igObjectRefMember _vertexArray;
    igObjectRefMember _indexArray;
    igObjectRefMember _stripLengths;
    char unknown18[32];
    inline ~igGeometryAttr2Instance() { __vtable = igGeometryAttr2_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igGeometryAttr2)

void *igGeometryAttr2_vtableRead()
{
    igGeometryAttr2Instance object;
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igGeometryAttr2_vtable;
    object._vertexArray._value = 0;
    object._indexArray._value = 0;
    object._stripLengths._value = 0;
    return meta_vtableOf(&object);
}

}
#pragma pop
}

namespace unknown800B6694 {
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_80075AC4(void *,int);
void fn_800ABC8C();
void *fn_800AC294();
void igGeometryAttr2_fieldInit();
void igVisualAttribute_register();
extern char igGeometryMaskAttr_vtable[];
extern char igGeometryAttr2_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char igGeometryMaskAttr_fieldTypes[4];
extern char igGeometryMaskAttr_fieldNames[4];
extern char igGeometryMaskAttr_fieldStorage[4];
extern char igGeometryMaskAttr_fieldOffsets[4];
extern void *igGeometryMaskAttr_meta;
extern void *igGeometryAttr2_meta;
void *igGeometryMaskAttr_getMeta();
void *igGeometryMaskAttr_vtableRead();
void igGeometryMaskAttr_arkRegister();
void igGeometryMaskAttr_register();
void *igGeometryMaskAttr_getMetaCall();
void igGeometryMaskAttr_fieldInit();
void *igGeometryAttr2_getMeta();
void *igGeometryAttr2_vtableRead();
void igGeometryAttr2_arkRegister();
void igGeometryAttr2_register();
void *igGeometryAttr2_getMetaCall();
}
struct UnknownGenObject800B63B4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800B657C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B657C(){igObject_construct(this);}
};
struct UnknownGenObject800B657C : UnknownGenRoot800B657C {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 char unknown18[32];
 inline ~UnknownGenObject800B657C(){unknown00=igGeometryAttr2_vtable;}
};
extern "C" {
UnknownGenHolder *fn_800B6694(UnknownGenHolder *object,short flags){
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
void igGeometryAttr2_arkRegister(){
 meta_registerNow((int)igGeometryAttr2_register);
}
void igGeometryAttr2_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igGeometryAttr2_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igGeometryAttr2_getMetaCall,(int)igGeometryAttr2_className,44,(int)igGeometryAttr2_vtableRead,(int)igGeometryAttr2_fieldInit,0,(int)igGeometryAttr2_dependencies);
}
void *igGeometryAttr2_getMetaCall(){return igGeometryAttr2_getMeta();}
}
#pragma pop
}

namespace igGeometryAttr2_fieldInit {
// igGeometryAttr2: Alchemy class registration (0x800B67C8..0x800B68D0). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igGeometryAttr2)

extern "C" {
void fn_8003EC68(void *, int);
void fn_80046E58(void *, void *);
void fn_800C0044();
void fn_800CE214();
void *fn_800CEEF4();
void *fn_800D06E0();
void *fn_800D1A68();
extern char lbl_8055E444[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igGeometryAttr2_fieldInit()
{
    Meta::igMetaObject *meta = igGeometryAttr2_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igGeometryAttr2_fieldTypes, 8);
    Meta::igObjectRefMetaField *vertexArrayField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_v2 = fn_800CEEF4();
    vertexArrayField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v2);
    Meta::igObjectRefMetaField *indexArrayField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_v4 = fn_800D1A68();
    indexArrayField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v4);
    Meta::igObjectRefMetaField *stripLengthsField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    void *value_v6 = fn_800D06E0();
    stripLengthsField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v6);
    Meta::igEnumMetaField *primTypeField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base + 3));
    fn_80046E58(primTypeField, (void *)lbl_8055E444);
    primTypeField->_getMetaEnumFunction = reinterpret_cast<void *>(fn_800CE214);
    Meta::igUnsignedIntMetaField *unitIDField = static_cast<Meta::igUnsignedIntMetaField *>(meta_field(meta, base + 6));
    unitIDField->_invarianceFunction = reinterpret_cast<void *>(fn_800C0044);
    Meta::igBoolMetaField *drawStateField = static_cast<Meta::igBoolMetaField *>(meta_field(meta, base + 7));
    fn_8003EC68(drawStateField, 1);
    meta_setupFields(meta, igGeometryAttr2_fieldNames, igGeometryAttr2_fieldStorage, igGeometryAttr2_fieldOffsets, base);
}

}
#pragma pop
}

namespace igGeometryAttr1_5 {
// igGeometryAttr1_5: Alchemy class registration (0x800B68D0..0x800B6BA0). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igGeometryAttr1_5)
META_DECLARE(igGeometryAttr)

extern "C" {
void fn_800ABC8C();
extern char igGeometryAttr1_5_dependencies[8];
void *igGeometryAttr1_5_parentMeta();
extern char lbl_8047C5AC[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

struct Instance_8047C5AC : igObjectInstance {
    char unknown04[8];
    igObjectRefMember _vertexArray;
    igObjectRefMember _indexArray;
    char unknown14[12];
    igObjectRefMember _primLengths;
    char unknown24[4];
    igObjectRefMember _dPds;
    igObjectRefMember _dPdt;
    inline ~Instance_8047C5AC() { __vtable = lbl_8047C5AC; }
};

struct igGeometryAttr1_5Instance : Instance_8047C5AC {
    igObjectRefMember _stripLengths;
    char unknown34[12];
    inline ~igGeometryAttr1_5Instance() { __vtable = igGeometryAttr1_5_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igGeometryAttr1_5)

void *igGeometryAttr1_5_vtableRead()
{
    igGeometryAttr1_5Instance object;
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = lbl_8047C5AC;
    object._vertexArray._value = 0;
    object._indexArray._value = 0;
    object._primLengths._value = 0;
    object._dPds._value = 0;
    object._dPdt._value = 0;
    object.__vtable = igGeometryAttr1_5_vtable;
    object._stripLengths._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igGeometryAttr1_5)

void igGeometryAttr1_5_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igGeometryAttr1_5_meta, igGeometryAttr_register,
                       igGeometryAttr1_5_parentMeta, igGeometryAttr1_5_getMetaCall,
                       igGeometryAttr1_5_className, 0x34,
                       igGeometryAttr1_5_vtableRead, igGeometryAttr1_5_fieldInit, 0, igGeometryAttr1_5_dependencies);
}

META_GET_META_CALL(igGeometryAttr1_5)

}
#pragma pop
}

namespace unknown800B6BA0 {
#pragma push
#pragma auto_inline off
extern "C" {
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
void fn_800ABC8C();
void *fn_800AC294();
void *fn_800D06E0();
void *igGeometryAttr_fieldInit();
void igVisualAttribute_register();
extern char igGeometryAttr1_5_vtable[];
extern char lbl_8047C5AC[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char igGeometryAttr1_5_dependencies[8];
extern char igGeometryAttr1_5_fieldTypes[4];
extern char igGeometryAttr1_5_fieldNames[4];
extern char igGeometryAttr1_5_fieldStorage[4];
extern char igGeometryAttr1_5_fieldOffsets[4];
extern void *lbl_805621F4;
extern void *igGeometryAttr1_5_meta;
extern void *igGeometryAttr_meta;
void *igGeometryAttr1_5_getMeta();
void *igGeometryAttr1_5_vtableRead();
void igGeometryAttr1_5_arkRegister();
void igGeometryAttr1_5_register();
void *igGeometryAttr1_5_getMetaCall();
void *igGeometryAttr1_5_parentMeta();
void igGeometryAttr1_5_fieldInit();
void *igGeometryAttr_getMeta();
void igGeometryAttr_arkRegister();
void igGeometryAttr_register();
void *igGeometryAttr_getMetaCall();
}
struct UnknownGenRoot800B690C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B690C(){igObject_construct(this);}
};
struct UnknownGenObject800B690C_0 : UnknownGenRoot800B690C {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[12];
 UnknownGenRefMember unknown20;
 char unknown24[4];
 UnknownGenRefMember unknown28;
 UnknownGenRefMember unknown2C;
 inline ~UnknownGenObject800B690C_0(){unknown00=lbl_8047C5AC;}
};
struct UnknownGenObject800B690C : UnknownGenObject800B690C_0 {
 UnknownGenRefMember unknown30;
 char unknown34[12];
 inline ~UnknownGenObject800B690C(){unknown00=igGeometryAttr1_5_vtable;}
};
extern "C" {
void *igGeometryAttr1_5_parentMeta(){return igGeometryAttr_meta;}
}
#pragma pop
}

namespace igGeometryAttr1_2 {
// igGeometryAttr1_5: Alchemy class registration (0x800B6BA8..0x800B6C28). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igGeometryAttr1_5)

extern "C" {
void *fn_800D06E0();
extern char igGeometryAttr1_5_fieldNames[4];
extern char igGeometryAttr1_5_fieldOffsets[4];
extern char igGeometryAttr1_5_fieldStorage[4];
extern char igGeometryAttr1_5_fieldTypes[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igGeometryAttr1_5_fieldInit()
{
    Meta::igMetaObject *meta = igGeometryAttr1_5_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igGeometryAttr1_5_fieldTypes, 1);
    Meta::igObjectRefMetaField *stripLengthsField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_800D06E0();
    stripLengthsField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    meta_setupFields(meta, igGeometryAttr1_5_fieldNames, igGeometryAttr1_5_fieldStorage, igGeometryAttr1_5_fieldOffsets, base);
}

}
#pragma pop
}

namespace igGeometryAttr {
// igGeometryAttr: Alchemy class registration (0x800B6C28..0x800B6C60). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igGeometryAttr)

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igGeometryAttr)

}
#pragma pop
}

namespace unknown800B6C60 {
#pragma push
#pragma auto_inline off
extern "C" {
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
void fn_800ABC8C();
void *fn_800AC294();
void *fn_800D06E0();
void *igGeometryAttr_fieldInit();
void igVisualAttribute_register();
extern char igGeometryAttr1_5_vtable[];
extern char lbl_8047C5AC[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char igGeometryAttr1_5_dependencies[8];
extern char igGeometryAttr1_5_fieldTypes[4];
extern char igGeometryAttr1_5_fieldNames[4];
extern char igGeometryAttr1_5_fieldStorage[4];
extern char igGeometryAttr1_5_fieldOffsets[4];
extern void *lbl_805621F4;
extern void *igGeometryAttr1_5_meta;
extern void *igGeometryAttr_meta;
void *igGeometryAttr1_5_getMeta();
void *igGeometryAttr1_5_vtableRead();
void igGeometryAttr1_5_arkRegister();
void igGeometryAttr1_5_register();
void *igGeometryAttr1_5_getMetaCall();
void *igGeometryAttr1_5_parentMeta();
void igGeometryAttr1_5_fieldInit();
void *igGeometryAttr_getMeta();
void igGeometryAttr_arkRegister();
void igGeometryAttr_register();
void *igGeometryAttr_getMetaCall();
}
struct UnknownGenRoot800B690C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B690C(){igObject_construct(this);}
};
struct UnknownGenObject800B690C_0 : UnknownGenRoot800B690C {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[12];
 UnknownGenRefMember unknown20;
 char unknown24[4];
 UnknownGenRefMember unknown28;
 UnknownGenRefMember unknown2C;
 inline ~UnknownGenObject800B690C_0(){unknown00=lbl_8047C5AC;}
};
struct UnknownGenObject800B690C : UnknownGenObject800B690C_0 {
 UnknownGenRefMember unknown30;
 char unknown34[12];
 inline ~UnknownGenObject800B690C(){unknown00=igGeometryAttr1_5_vtable;}
};
extern "C" {
void *fn_800B6C60(){
 if(!igGeometryAttr_meta) igGeometryAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igGeometryAttr_meta;
}
void *igGeometryAttr_getMeta(){
 if(!igGeometryAttr_meta || !(reinterpret_cast<unsigned int *>(igGeometryAttr_meta)[0x24/4]&4)) igGeometryAttr_arkRegister();
 return igGeometryAttr_meta;
}
void igGeometryAttr_arkRegister(){
 meta_registerNow((int)igGeometryAttr_register);
}
void igGeometryAttr_register(){
 fn_800ABC8C();
 meta_registerClass(1,(int)&igGeometryAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igGeometryAttr_getMetaCall,(int)igGeometryAttr_className,48,0,(int)igGeometryAttr_fieldInit,0,(int)igGeometryAttr_dependencies);
}
void *igGeometryAttr_getMetaCall(){return igGeometryAttr_getMeta();}
}
#pragma pop
}

namespace igGeometryAttr_fieldInit {
// igGeometryAttr: Alchemy class registration (0x800B6D94..0x800B6EB0). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igGeometryAttr)
META_DECLARE(igGeometryAttr1_5)

extern "C" {
void *fn_80035CB0();
void fn_80046E58(void *, void *);
void fn_800CE214();
void *fn_800D0068();
void *fn_800D1A68();
void *fn_80122100();
extern char lbl_8055E470[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igGeometryAttr_fieldInit()
{
    Meta::igMetaObject *meta = igGeometryAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igGeometryAttr_fieldTypes, 9);
    Meta::igObjectRefMetaField *vertexArrayField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_v2 = fn_800D0068();
    vertexArrayField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v2);
    Meta::igObjectRefMetaField *indexArrayField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_v4 = fn_800D1A68();
    indexArrayField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v4);
    Meta::igEnumMetaField *primTypeField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base + 2));
    fn_80046E58(primTypeField, (void *)lbl_8055E470);
    primTypeField->_getMetaEnumFunction = reinterpret_cast<void *>(fn_800CE214);
    Meta::igObjectRefMetaField *primLengthsField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 5));
    void *value_v7 = fn_80035CB0();
    primLengthsField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v7);
    Meta::igObjectRefMetaField *dPdsField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 7));
    void *value_v9 = fn_80122100();
    dPdsField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v9);
    Meta::igObjectRefMetaField *dPdtField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 8));
    void *value_v11 = fn_80122100();
    dPdtField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v11);
    meta_setupFields(meta, igGeometryAttr_fieldNames, igGeometryAttr_fieldStorage, igGeometryAttr_fieldOffsets, base);
    igGeometryAttr_meta->_abstractProxy = reinterpret_cast<void *>(igGeometryAttr1_5_getMetaCall);
}

}
#pragma pop
}

namespace igGenericAttrDefaultManager {
// igGenericAttrDefaultManager: Alchemy class registration (0x800B6EB0..0x800B7020). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igGenericAttrDefaultManager)
META_DECLARE(igAttrDefaultManager)

extern "C" {
void fn_800ABC8C();
void *fn_800ABEF8();
extern char lbl_8047D514[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igGenericAttrDefaultManager)

META_GET_META(igGenericAttrDefaultManager)

void *igGenericAttrDefaultManager_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[4];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D514;
    object.__vtable = igGenericAttrDefaultManager_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igGenericAttrDefaultManager)

void igGenericAttrDefaultManager_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igGenericAttrDefaultManager_meta, igAttrDefaultManager_register,
                       fn_800ABEF8, igGenericAttrDefaultManager_getMetaCall,
                       igGenericAttrDefaultManager_className, 0x8,
                       igGenericAttrDefaultManager_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igGenericAttrDefaultManager)

}
#pragma pop
}

namespace igFogStateAttr {
// igFogStateAttr: Alchemy class registration (0x800B7020..0x800B71D4). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igFogStateAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_800ABC8C();
void *fn_800AC294();
extern char igFogStateAttr_fieldNames[4];
extern char igFogStateAttr_fieldOffsets[4];
extern char igFogStateAttr_fieldStorage[4];
extern char igFogStateAttr_fieldTypes[4];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igFogStateAttr)

void *igFogStateAttr_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igFogStateAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igFogStateAttr)

void igFogStateAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igFogStateAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igFogStateAttr_getMetaCall,
                       igFogStateAttr_className, 0x10,
                       igFogStateAttr_vtableRead, igFogStateAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igFogStateAttr)

void igFogStateAttr_fieldInit()
{
    Meta::igMetaObject *meta = igFogStateAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igFogStateAttr_fieldTypes, 1);
    meta_setupFields(meta, igFogStateAttr_fieldNames, igFogStateAttr_fieldStorage, igFogStateAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace unknown800B71D4 {
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void *fn_800ABEF8();
void *fn_800AC294();
void igAttrDefaultManager_register();
void igFogAttr_fieldInit();
void igVisualAttribute_register();
extern char igGenericAttrDefaultManager_vtable[];
extern char igFogStateAttr_vtable[];
extern char igFogAttr_vtable[];
extern char lbl_8047D514[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char igFogStateAttr_fieldTypes[4];
extern char igFogStateAttr_fieldNames[4];
extern char igFogStateAttr_fieldStorage[4];
extern char igFogStateAttr_fieldOffsets[4];
extern void *igGenericAttrDefaultManager_meta;
extern void *igFogStateAttr_meta;
extern void *igFogAttr_meta;
void *igGenericAttrDefaultManager_getMeta();
void *igGenericAttrDefaultManager_vtableRead();
void igGenericAttrDefaultManager_arkRegister();
void igGenericAttrDefaultManager_register();
void *igGenericAttrDefaultManager_getMetaCall();
void *igFogStateAttr_getMeta();
void *igFogStateAttr_vtableRead();
void igFogStateAttr_arkRegister();
void igFogStateAttr_register();
void *igFogStateAttr_getMetaCall();
void igFogStateAttr_fieldInit();
void *igFogAttr_getMeta();
void *igFogAttr_vtableRead();
void igFogAttr_arkRegister();
void igFogAttr_register();
void *igFogAttr_getMetaCall();
}
struct UnknownGenObject800B6F24_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenObject800B705C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B7210_0 {
 void *unknown00;
 char unknown04[52];
};
extern "C" {
void *igFogAttr_getMeta(){
 if(!igFogAttr_meta || !(reinterpret_cast<unsigned int *>(igFogAttr_meta)[0x24/4]&4)) igFogAttr_arkRegister();
 return igFogAttr_meta;
}
void *igFogAttr_vtableRead(){
 UnknownGenObject800B7210_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igFogAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igFogAttr_arkRegister(){
 meta_registerNow((int)igFogAttr_register);
}
void igFogAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igFogAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igFogAttr_getMetaCall,(int)igFogAttr_className,44,(int)igFogAttr_vtableRead,(int)igFogAttr_fieldInit,0,0);
}
void *igFogAttr_getMetaCall(){return igFogAttr_getMeta();}
}
#pragma pop
}

namespace igFogAttr_fieldInit {
// igFogAttr: Alchemy class registration (0x800B7320..0x800B73F4). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igFogAttr)

extern "C" {
void fn_80046E58(void *, void *);
void fn_8004D4BC(void *, float);
void fn_800CDC7C();
void fn_80126CF0(void *, void *);
extern char lbl_8055E48C[4];
extern const char lbl_80566810[4];
extern const char lbl_80566814[4];
extern const char lbl_8056682C[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igFogAttr_fieldInit()
{
    float local[4];
    Meta::igMetaObject *meta = igFogAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igFogAttr_fieldTypes, 5);
    Meta::igEnumMetaField *modeField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base));
    fn_80046E58(modeField, (void *)lbl_8055E48C);
    modeField->_getMetaEnumFunction = reinterpret_cast<void *>(fn_800CDC7C);
    Meta::igFloatMetaField *farValField = static_cast<Meta::igFloatMetaField *>(meta_field(meta, base + 2));
    fn_8004D4BC(farValField, *reinterpret_cast<const float *>(lbl_8056682C));
    Meta::igVec4fMetaField *colorField = static_cast<Meta::igVec4fMetaField *>(meta_field(meta, base + 4));
    local[0] = *reinterpret_cast<const float *>(lbl_80566814);
    local[1] = *reinterpret_cast<const float *>(lbl_80566814);
    local[2] = *reinterpret_cast<const float *>(lbl_80566814);
    local[3] = *reinterpret_cast<const float *>(lbl_80566810);
    fn_80126CF0(colorField, &local[0]);
    meta_setupFields(meta, igFogAttr_fieldNames, igFogAttr_fieldStorage, igFogAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace igFloatConstantAttr {
// igFloatConstantAttr: Alchemy class registration (0x800B73F4..0x800B75CC). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igFloatConstantAttr)
META_DECLARE(igCustomStateCollectionAttr)

extern "C" {
void fn_800ABC8C();
void *fn_800AD708();
void *fn_800BE528(int);
extern char igFloatConstantAttr_fieldNames[8];
extern char igFloatConstantAttr_fieldOffsets[8];
extern char igFloatConstantAttr_fieldStorage[8];
extern char igFloatConstantAttr_fieldTypes[8];
extern char lbl_8047CD74[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igFloatConstantAttr)

void *igFloatConstantAttr_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = lbl_8047CD74;
    object.__vtable = igFloatConstantAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igFloatConstantAttr)

void igFloatConstantAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igFloatConstantAttr_meta, igCustomStateCollectionAttr_register,
                       fn_800AD708, igFloatConstantAttr_getMetaCall,
                       igFloatConstantAttr_className, 0x14,
                       igFloatConstantAttr_vtableRead, igFloatConstantAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igFloatConstantAttr)

void igFloatConstantAttr_fieldInit()
{
    Meta::igMetaObject *meta = igFloatConstantAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igFloatConstantAttr_fieldTypes, 2);
    Meta::igIntMetaField *unitIDField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 1));
    unitIDField->_invarianceFunction = reinterpret_cast<void *>((void *)fn_800BE528);
    meta_setupFields(meta, igFloatConstantAttr_fieldNames, igFloatConstantAttr_fieldStorage, igFloatConstantAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace igFileAttrDefaultManager {
// igFileAttrDefaultManager: Alchemy class registration (0x800B75CC..0x800B7704). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igFileAttrDefaultManager)
META_DECLARE(igAttrDefaultManager)

extern "C" {
void fn_800ABC8C();
void *fn_800ABEF8();
extern char lbl_8047D514[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igFileAttrDefaultManager)

void *igFileAttrDefaultManager_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[4];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D514;
    object.__vtable = igFileAttrDefaultManager_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igFileAttrDefaultManager)

void igFileAttrDefaultManager_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igFileAttrDefaultManager_meta, igAttrDefaultManager_register,
                       fn_800ABEF8, igFileAttrDefaultManager_getMetaCall,
                       igFileAttrDefaultManager_className, 0x8,
                       igFileAttrDefaultManager_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igFileAttrDefaultManager)

}
#pragma pop
}

namespace igDitherStateAttr {
// igDitherStateAttr: Alchemy class registration (0x800B7704..0x800B78D8). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igDitherStateAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_80075D1C(void *, long long);
void fn_800ABC8C();
void *fn_800AC294();
extern char igDitherStateAttr_fieldNames[8];
extern char igDitherStateAttr_fieldOffsets[8];
extern char igDitherStateAttr_fieldStorage[8];
extern char igDitherStateAttr_fieldTypes[8];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igDitherStateAttr)

void *igDitherStateAttr_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igDitherStateAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igDitherStateAttr)

void igDitherStateAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igDitherStateAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igDitherStateAttr_getMetaCall,
                       igDitherStateAttr_className, 0x18,
                       igDitherStateAttr_vtableRead, igDitherStateAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igDitherStateAttr)

void igDitherStateAttr_fieldInit()
{
    Meta::igMetaObject *meta = igDitherStateAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igDitherStateAttr_fieldTypes, 2);
    Meta::igUnsignedLongMetaField *matrixField = static_cast<Meta::igUnsignedLongMetaField *>(meta_field(meta, base + 1));
    fn_80075D1C(matrixField, 0x4071263571603524LL);
    meta_setupFields(meta, igDitherStateAttr_fieldNames, igDitherStateAttr_fieldStorage, igDitherStateAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace igDisplayListAttr {
// igDisplayListAttr: Alchemy class registration (0x800B78D8..0x800B7910). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igDisplayListAttr)

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igDisplayListAttr)

}
#pragma pop
}

namespace unknown800B7910 {
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void fn_8003EC68(void *,int);
void fn_80046E58(void *,void *);
void fn_8004D4BC(void *,float);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_80075874(void *,int);
void fn_800ABC8C();
void *fn_800AC0B8();
void *fn_800AC294();
void *fn_800BB448();
void fn_800CDD14();
void *fn_800CDD60();
void igAttr_register();
void igCopyRenderDestinationAttr_fieldInit();
void igVisualAttribute_register();
extern char igDisplayListAttr_vtable[];
extern char igDestinationAlphaStateAttr_vtable[];
extern char igDestinationAlphaFunctionAttr_vtable[];
extern char igDestinationAlphaAttr_vtable[];
extern char igDepthWriteStateAttr_vtable[];
extern char igDepthStateAttr_vtable[];
extern char igDepthFunctionAttr_vtable[];
extern char igDecalAttr_vtable[];
extern char igCullFaceAttr_vtable[];
extern char igCopyRenderDestinationAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char igDisplayListAttr_dependencies[8];
extern char igDisplayListAttr_fieldTypes[4];
extern char igDisplayListAttr_fieldNames[4];
extern char igDisplayListAttr_fieldStorage[4];
extern char igDisplayListAttr_fieldOffsets[4];
extern char igDestinationAlphaStateAttr_fieldTypes[4];
extern char igDestinationAlphaStateAttr_fieldNames[4];
extern char igDestinationAlphaStateAttr_fieldStorage[4];
extern char igDestinationAlphaStateAttr_fieldOffsets[4];
extern char igDestinationAlphaFunctionAttr_fieldTypes[4];
extern char igDestinationAlphaFunctionAttr_fieldNames[4];
extern char igDestinationAlphaFunctionAttr_fieldStorage[4];
extern char igDestinationAlphaFunctionAttr_fieldOffsets[4];
extern char igDestinationAlphaAttr_fieldTypes[8];
extern char igDestinationAlphaAttr_fieldNames[8];
extern char igDestinationAlphaAttr_fieldStorage[8];
extern char igDestinationAlphaAttr_fieldOffsets[8];
extern char igDepthWriteStateAttr_fieldTypes[4];
extern char igDepthWriteStateAttr_fieldNames[4];
extern char igDepthWriteStateAttr_fieldStorage[4];
extern char igDepthWriteStateAttr_fieldOffsets[4];
extern char igDepthStateAttr_fieldTypes[4];
extern char igDepthStateAttr_fieldNames[4];
extern char igDepthStateAttr_fieldStorage[4];
extern char igDepthStateAttr_fieldOffsets[4];
extern char igDepthFunctionAttr_fieldTypes[4];
extern char igDepthFunctionAttr_fieldNames[4];
extern char igDepthFunctionAttr_fieldStorage[4];
extern char igDepthFunctionAttr_fieldOffsets[4];
extern char lbl_8055E568[4];
extern char igDecalAttr_fieldTypes[4];
extern char igDecalAttr_fieldNames[4];
extern char igDecalAttr_fieldStorage[4];
extern char igDecalAttr_fieldOffsets[4];
extern char igCullFaceAttr_fieldTypes[8];
extern char igCullFaceAttr_fieldNames[8];
extern char igCullFaceAttr_fieldStorage[8];
extern char igCullFaceAttr_fieldOffsets[8];
extern char lbl_8055E59C[4];
extern void *lbl_805621F4;
extern void *igDisplayListAttr_meta;
extern void *igDestinationAlphaStateAttr_meta;
extern void *igDestinationAlphaFunctionAttr_meta;
extern void *igDestinationAlphaAttr_meta;
extern void *igDepthWriteStateAttr_meta;
extern void *igDepthStateAttr_meta;
extern void *igDepthFunctionAttr_meta;
extern void *igDecalAttr_meta;
extern void *igCustomStateCollectionAttr_meta;
extern void *igCullFaceAttr_meta;
extern void *lbl_80562944;
extern void *igCopyRenderDestinationAttr_meta;
extern char lbl_80566810[4];
void *igDisplayListAttr_getMeta();
void *igDisplayListAttr_vtableRead();
void igDisplayListAttr_arkRegister();
void igDisplayListAttr_register();
void *igDisplayListAttr_getMetaCall();
void igDisplayListAttr_fieldInit();
void *igDestinationAlphaStateAttr_getMeta();
void *igDestinationAlphaStateAttr_vtableRead();
void igDestinationAlphaStateAttr_arkRegister();
void igDestinationAlphaStateAttr_register();
void *igDestinationAlphaStateAttr_getMetaCall();
void igDestinationAlphaStateAttr_fieldInit();
void *igDestinationAlphaFunctionAttr_getMeta();
void *igDestinationAlphaFunctionAttr_vtableRead();
void igDestinationAlphaFunctionAttr_arkRegister();
void igDestinationAlphaFunctionAttr_register();
void *igDestinationAlphaFunctionAttr_getMetaCall();
void igDestinationAlphaFunctionAttr_fieldInit();
void *igDestinationAlphaAttr_getMeta();
void *igDestinationAlphaAttr_vtableRead();
void igDestinationAlphaAttr_arkRegister();
void igDestinationAlphaAttr_register();
void *igDestinationAlphaAttr_getMetaCall();
void igDestinationAlphaAttr_fieldInit();
void *igDepthWriteStateAttr_getMeta();
void *igDepthWriteStateAttr_vtableRead();
void igDepthWriteStateAttr_arkRegister();
void igDepthWriteStateAttr_register();
void *igDepthWriteStateAttr_getMetaCall();
void igDepthWriteStateAttr_fieldInit();
void *igDepthStateAttr_getMeta();
void *igDepthStateAttr_vtableRead();
void igDepthStateAttr_arkRegister();
void igDepthStateAttr_register();
void *igDepthStateAttr_getMetaCall();
void igDepthStateAttr_fieldInit();
void *igDepthFunctionAttr_getMeta();
void *igDepthFunctionAttr_vtableRead();
void igDepthFunctionAttr_arkRegister();
void igDepthFunctionAttr_register();
void *igDepthFunctionAttr_getMetaCall();
void igDepthFunctionAttr_fieldInit();
void *igDecalAttr_getMeta();
void *igDecalAttr_vtableRead();
void igDecalAttr_arkRegister();
void igDecalAttr_register();
void *igDecalAttr_getMetaCall();
void igDecalAttr_fieldInit();
void *igCustomStateCollectionAttr_getMeta();
void igCustomStateCollectionAttr_arkRegister();
void igCustomStateCollectionAttr_register();
void *igCustomStateCollectionAttr_getMetaCall();
void *igCullFaceAttr_getMeta();
void *igCullFaceAttr_vtableRead();
void igCullFaceAttr_arkRegister();
void igCullFaceAttr_register();
void *igCullFaceAttr_getMetaCall();
void igCullFaceAttr_fieldInit();
void *igCopyRenderDestinationAttr_getMeta();
void *igCopyRenderDestinationAttr_vtableRead();
void igCopyRenderDestinationAttr_arkRegister();
void igCopyRenderDestinationAttr_register();
void *igCopyRenderDestinationAttr_getMetaCall();
}
struct UnknownGenRoot800B7988 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B7988(){igObject_construct(this);}
};
struct UnknownGenObject800B7988 : UnknownGenRoot800B7988 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject800B7988(){unknown00=igDisplayListAttr_vtable;}
};
struct UnknownGenObject800B7B9C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B7D64_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B7F2C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B8130_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B8330_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B84F8_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B86D0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B89E0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800B8C40 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B8C40(){igObject_construct(this);}
};
struct UnknownGenObject800B8C40 : UnknownGenRoot800B8C40 {
 char unknown04[12];
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 char unknown1C[28];
 inline ~UnknownGenObject800B8C40(){unknown00=igCopyRenderDestinationAttr_vtable;}
};
extern "C" {
void *fn_800B7910(){
 if(!igDisplayListAttr_meta) igDisplayListAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igDisplayListAttr_meta;
}
}
#pragma pop
}

namespace igDisplayListAttr_2 {
// igDisplayListAttr: Alchemy class registration (0x800B794C..0x800B7B60). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igDisplayListAttr)
META_DECLARE(igAttr)

extern "C" {
void fn_800ABC8C();
void *fn_800AC0B8();
void *fn_800BB448();
extern char igDisplayListAttr_dependencies[8];
extern char igDisplayListAttr_fieldNames[4];
extern char igDisplayListAttr_fieldOffsets[4];
extern char igDisplayListAttr_fieldStorage[4];
extern char igDisplayListAttr_fieldTypes[4];
extern char lbl_8047D578[];
}

struct igDisplayListAttrInstance : igObjectInstance {
    char unknown04[8];
    igObjectRefMember _contents;
    inline ~igDisplayListAttrInstance() { __vtable = igDisplayListAttr_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igDisplayListAttr)

void *igDisplayListAttr_vtableRead()
{
    igDisplayListAttrInstance object;
    object.__vtable = lbl_8047D578;
    object.__vtable = igDisplayListAttr_vtable;
    object._contents._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igDisplayListAttr)

void igDisplayListAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igDisplayListAttr_meta, igAttr_register,
                       fn_800AC0B8, igDisplayListAttr_getMetaCall,
                       igDisplayListAttr_className, 0x10,
                       igDisplayListAttr_vtableRead, igDisplayListAttr_fieldInit, 0, igDisplayListAttr_dependencies);
}

META_GET_META_CALL(igDisplayListAttr)

void igDisplayListAttr_fieldInit()
{
    Meta::igMetaObject *meta = igDisplayListAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igDisplayListAttr_fieldTypes, 1);
    Meta::igObjectRefMetaField *contentsField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_800BB448();
    contentsField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    contentsField->_construct = true;
    meta_setupFields(meta, igDisplayListAttr_fieldNames, igDisplayListAttr_fieldStorage, igDisplayListAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace igDestinationAlphaStateAttr {
// igDestinationAlphaStateAttr: Alchemy class registration (0x800B7B60..0x800B7D28). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igDestinationAlphaStateAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_8003EC68(void *,int);
void fn_800ABC8C();
void *fn_800AC294();
extern char igDestinationAlphaStateAttr_fieldNames[4];
extern char igDestinationAlphaStateAttr_fieldOffsets[4];
extern char igDestinationAlphaStateAttr_fieldStorage[4];
extern char igDestinationAlphaStateAttr_fieldTypes[4];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

struct Instance_800B7B9C_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igDestinationAlphaStateAttr)

void *igDestinationAlphaStateAttr_vtableRead()
{
    Instance_800B7B9C_0 object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igDestinationAlphaStateAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igDestinationAlphaStateAttr)

void igDestinationAlphaStateAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igDestinationAlphaStateAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igDestinationAlphaStateAttr_getMetaCall,
                       igDestinationAlphaStateAttr_className, 0x10,
                       igDestinationAlphaStateAttr_vtableRead, igDestinationAlphaStateAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igDestinationAlphaStateAttr)

void igDestinationAlphaStateAttr_fieldInit()
{
    Meta::igMetaObject *meta = igDestinationAlphaStateAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igDestinationAlphaStateAttr_fieldTypes, 1);
    fn_8003EC68(meta_field(meta, base), 1);
    meta_setupFields(meta, igDestinationAlphaStateAttr_fieldNames, igDestinationAlphaStateAttr_fieldStorage, igDestinationAlphaStateAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace igDestinationAlphaFunctionAttr {
// igDestinationAlphaFunctionAttr: Alchemy class registration (0x800B7D28..0x800B7EF0). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igDestinationAlphaFunctionAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_8004D4BC(void *,float);
void fn_800ABC8C();
void *fn_800AC294();
extern char igDestinationAlphaFunctionAttr_fieldNames[4];
extern char igDestinationAlphaFunctionAttr_fieldOffsets[4];
extern char igDestinationAlphaFunctionAttr_fieldStorage[4];
extern char igDestinationAlphaFunctionAttr_fieldTypes[4];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_80566810[4];
}

struct Instance_800B7D64_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igDestinationAlphaFunctionAttr)

void *igDestinationAlphaFunctionAttr_vtableRead()
{
    Instance_800B7D64_0 object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igDestinationAlphaFunctionAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igDestinationAlphaFunctionAttr)

void igDestinationAlphaFunctionAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igDestinationAlphaFunctionAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igDestinationAlphaFunctionAttr_getMetaCall,
                       igDestinationAlphaFunctionAttr_className, 0x10,
                       igDestinationAlphaFunctionAttr_vtableRead, igDestinationAlphaFunctionAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igDestinationAlphaFunctionAttr)

void igDestinationAlphaFunctionAttr_fieldInit()
{
    Meta::igMetaObject *meta = igDestinationAlphaFunctionAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igDestinationAlphaFunctionAttr_fieldTypes, 1);
    Meta::igFloatMetaField *refValueField = static_cast<Meta::igFloatMetaField *>(meta_field(meta, base));
    fn_8004D4BC(refValueField, *reinterpret_cast<float *>(lbl_80566810 + 0));
    meta_setupFields(meta, igDestinationAlphaFunctionAttr_fieldNames, igDestinationAlphaFunctionAttr_fieldStorage, igDestinationAlphaFunctionAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace igDestinationAlphaAttr {
// igDestinationAlphaAttr: Alchemy class registration (0x800B7EF0..0x800B80B8). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igDestinationAlphaAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_80075874(void *,int);
void fn_800ABC8C();
void *fn_800AC294();
extern char igDestinationAlphaAttr_fieldNames[8];
extern char igDestinationAlphaAttr_fieldOffsets[8];
extern char igDestinationAlphaAttr_fieldStorage[8];
extern char igDestinationAlphaAttr_fieldTypes[8];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

struct Instance_800B7F2C_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igDestinationAlphaAttr)

void *igDestinationAlphaAttr_vtableRead()
{
    Instance_800B7F2C_0 object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igDestinationAlphaAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igDestinationAlphaAttr)

void igDestinationAlphaAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igDestinationAlphaAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igDestinationAlphaAttr_getMetaCall,
                       igDestinationAlphaAttr_className, 0x10,
                       igDestinationAlphaAttr_vtableRead, igDestinationAlphaAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igDestinationAlphaAttr)

void igDestinationAlphaAttr_fieldInit()
{
    Meta::igMetaObject *meta = igDestinationAlphaAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igDestinationAlphaAttr_fieldTypes, 2);
    Meta::igUnsignedCharMetaField *alphaField = static_cast<Meta::igUnsignedCharMetaField *>(meta_field(meta, base + 1));
    fn_80075874(alphaField, 255);
    meta_setupFields(meta, igDestinationAlphaAttr_fieldNames, igDestinationAlphaAttr_fieldStorage, igDestinationAlphaAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace unknown800B80B8 {
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void fn_8003EC68(void *,int);
void fn_80046E58(void *,void *);
void fn_8004D4BC(void *,float);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_80075874(void *,int);
void fn_800ABC8C();
void *fn_800AC0B8();
void *fn_800AC294();
void *fn_800BB448();
void fn_800CDD14();
void *fn_800CDD60();
void igAttr_register();
void igCopyRenderDestinationAttr_fieldInit();
void igVisualAttribute_register();
extern char igDisplayListAttr_vtable[];
extern char igDestinationAlphaStateAttr_vtable[];
extern char igDestinationAlphaFunctionAttr_vtable[];
extern char igDestinationAlphaAttr_vtable[];
extern char igDepthWriteStateAttr_vtable[];
extern char igDepthStateAttr_vtable[];
extern char igDepthFunctionAttr_vtable[];
extern char igDecalAttr_vtable[];
extern char igCullFaceAttr_vtable[];
extern char igCopyRenderDestinationAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char igDisplayListAttr_dependencies[8];
extern char igDisplayListAttr_fieldTypes[4];
extern char igDisplayListAttr_fieldNames[4];
extern char igDisplayListAttr_fieldStorage[4];
extern char igDisplayListAttr_fieldOffsets[4];
extern char igDestinationAlphaStateAttr_fieldTypes[4];
extern char igDestinationAlphaStateAttr_fieldNames[4];
extern char igDestinationAlphaStateAttr_fieldStorage[4];
extern char igDestinationAlphaStateAttr_fieldOffsets[4];
extern char igDestinationAlphaFunctionAttr_fieldTypes[4];
extern char igDestinationAlphaFunctionAttr_fieldNames[4];
extern char igDestinationAlphaFunctionAttr_fieldStorage[4];
extern char igDestinationAlphaFunctionAttr_fieldOffsets[4];
extern char igDestinationAlphaAttr_fieldTypes[8];
extern char igDestinationAlphaAttr_fieldNames[8];
extern char igDestinationAlphaAttr_fieldStorage[8];
extern char igDestinationAlphaAttr_fieldOffsets[8];
extern char igDepthWriteStateAttr_fieldTypes[4];
extern char igDepthWriteStateAttr_fieldNames[4];
extern char igDepthWriteStateAttr_fieldStorage[4];
extern char igDepthWriteStateAttr_fieldOffsets[4];
extern char igDepthStateAttr_fieldTypes[4];
extern char igDepthStateAttr_fieldNames[4];
extern char igDepthStateAttr_fieldStorage[4];
extern char igDepthStateAttr_fieldOffsets[4];
extern char igDepthFunctionAttr_fieldTypes[4];
extern char igDepthFunctionAttr_fieldNames[4];
extern char igDepthFunctionAttr_fieldStorage[4];
extern char igDepthFunctionAttr_fieldOffsets[4];
extern char lbl_8055E568[4];
extern char igDecalAttr_fieldTypes[4];
extern char igDecalAttr_fieldNames[4];
extern char igDecalAttr_fieldStorage[4];
extern char igDecalAttr_fieldOffsets[4];
extern char igCullFaceAttr_fieldTypes[8];
extern char igCullFaceAttr_fieldNames[8];
extern char igCullFaceAttr_fieldStorage[8];
extern char igCullFaceAttr_fieldOffsets[8];
extern char lbl_8055E59C[4];
extern void *lbl_805621F4;
extern void *igDisplayListAttr_meta;
extern void *igDestinationAlphaStateAttr_meta;
extern void *igDestinationAlphaFunctionAttr_meta;
extern void *igDestinationAlphaAttr_meta;
extern void *igDepthWriteStateAttr_meta;
extern void *igDepthStateAttr_meta;
extern void *igDepthFunctionAttr_meta;
extern void *igDecalAttr_meta;
extern void *igCustomStateCollectionAttr_meta;
extern void *igCullFaceAttr_meta;
extern void *lbl_80562944;
extern void *igCopyRenderDestinationAttr_meta;
extern char lbl_80566810[4];
void *igDisplayListAttr_getMeta();
void *igDisplayListAttr_vtableRead();
void igDisplayListAttr_arkRegister();
void igDisplayListAttr_register();
void *igDisplayListAttr_getMetaCall();
void igDisplayListAttr_fieldInit();
void *igDestinationAlphaStateAttr_getMeta();
void *igDestinationAlphaStateAttr_vtableRead();
void igDestinationAlphaStateAttr_arkRegister();
void igDestinationAlphaStateAttr_register();
void *igDestinationAlphaStateAttr_getMetaCall();
void igDestinationAlphaStateAttr_fieldInit();
void *igDestinationAlphaFunctionAttr_getMeta();
void *igDestinationAlphaFunctionAttr_vtableRead();
void igDestinationAlphaFunctionAttr_arkRegister();
void igDestinationAlphaFunctionAttr_register();
void *igDestinationAlphaFunctionAttr_getMetaCall();
void igDestinationAlphaFunctionAttr_fieldInit();
void *igDestinationAlphaAttr_getMeta();
void *igDestinationAlphaAttr_vtableRead();
void igDestinationAlphaAttr_arkRegister();
void igDestinationAlphaAttr_register();
void *igDestinationAlphaAttr_getMetaCall();
void igDestinationAlphaAttr_fieldInit();
void *igDepthWriteStateAttr_getMeta();
void *igDepthWriteStateAttr_vtableRead();
void igDepthWriteStateAttr_arkRegister();
void igDepthWriteStateAttr_register();
void *igDepthWriteStateAttr_getMetaCall();
void igDepthWriteStateAttr_fieldInit();
void *igDepthStateAttr_getMeta();
void *igDepthStateAttr_vtableRead();
void igDepthStateAttr_arkRegister();
void igDepthStateAttr_register();
void *igDepthStateAttr_getMetaCall();
void igDepthStateAttr_fieldInit();
void *igDepthFunctionAttr_getMeta();
void *igDepthFunctionAttr_vtableRead();
void igDepthFunctionAttr_arkRegister();
void igDepthFunctionAttr_register();
void *igDepthFunctionAttr_getMetaCall();
void igDepthFunctionAttr_fieldInit();
void *igDecalAttr_getMeta();
void *igDecalAttr_vtableRead();
void igDecalAttr_arkRegister();
void igDecalAttr_register();
void *igDecalAttr_getMetaCall();
void igDecalAttr_fieldInit();
void *igCustomStateCollectionAttr_getMeta();
void igCustomStateCollectionAttr_arkRegister();
void igCustomStateCollectionAttr_register();
void *igCustomStateCollectionAttr_getMetaCall();
void *igCullFaceAttr_getMeta();
void *igCullFaceAttr_vtableRead();
void igCullFaceAttr_arkRegister();
void igCullFaceAttr_register();
void *igCullFaceAttr_getMetaCall();
void igCullFaceAttr_fieldInit();
void *igCopyRenderDestinationAttr_getMeta();
void *igCopyRenderDestinationAttr_vtableRead();
void igCopyRenderDestinationAttr_arkRegister();
void igCopyRenderDestinationAttr_register();
void *igCopyRenderDestinationAttr_getMetaCall();
}
struct UnknownGenRoot800B7988 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B7988(){igObject_construct(this);}
};
struct UnknownGenObject800B7988 : UnknownGenRoot800B7988 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject800B7988(){unknown00=igDisplayListAttr_vtable;}
};
struct UnknownGenObject800B7B9C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B7D64_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B7F2C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B8130_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B8330_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B84F8_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B86D0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B89E0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800B8C40 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B8C40(){igObject_construct(this);}
};
struct UnknownGenObject800B8C40 : UnknownGenRoot800B8C40 {
 char unknown04[12];
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 char unknown1C[28];
 inline ~UnknownGenObject800B8C40(){unknown00=igCopyRenderDestinationAttr_vtable;}
};
extern "C" {
void *fn_800B80B8(){
 if(!igDepthWriteStateAttr_meta) igDepthWriteStateAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igDepthWriteStateAttr_meta;
}
}
#pragma pop
}

namespace igDepthWriteStateAttr {
// igDepthWriteStateAttr: Alchemy class registration (0x800B80F4..0x800B82BC). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igDepthWriteStateAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_8003EC68(void *,int);
void fn_800ABC8C();
void *fn_800AC294();
extern char igDepthWriteStateAttr_fieldNames[4];
extern char igDepthWriteStateAttr_fieldOffsets[4];
extern char igDepthWriteStateAttr_fieldStorage[4];
extern char igDepthWriteStateAttr_fieldTypes[4];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

struct Instance_800B8130_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igDepthWriteStateAttr)

void *igDepthWriteStateAttr_vtableRead()
{
    Instance_800B8130_0 object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igDepthWriteStateAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igDepthWriteStateAttr)

void igDepthWriteStateAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igDepthWriteStateAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igDepthWriteStateAttr_getMetaCall,
                       igDepthWriteStateAttr_className, 0x10,
                       igDepthWriteStateAttr_vtableRead, igDepthWriteStateAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igDepthWriteStateAttr)

void igDepthWriteStateAttr_fieldInit()
{
    Meta::igMetaObject *meta = igDepthWriteStateAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igDepthWriteStateAttr_fieldTypes, 1);
    fn_8003EC68(meta_field(meta, base), 1);
    meta_setupFields(meta, igDepthWriteStateAttr_fieldNames, igDepthWriteStateAttr_fieldStorage, igDepthWriteStateAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace igDepthStateAttr {
// igDepthStateAttr: Alchemy class registration (0x800B82BC..0x800B84BC). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igDepthStateAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_8003EC68(void *,int);
void fn_800ABC8C();
void *fn_800AC294();
extern char igDepthStateAttr_fieldNames[4];
extern char igDepthStateAttr_fieldOffsets[4];
extern char igDepthStateAttr_fieldStorage[4];
extern char igDepthStateAttr_fieldTypes[4];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

struct Instance_800B8330_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igDepthStateAttr)

META_GET_META(igDepthStateAttr)

void *igDepthStateAttr_vtableRead()
{
    Instance_800B8330_0 object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igDepthStateAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igDepthStateAttr)

void igDepthStateAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igDepthStateAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igDepthStateAttr_getMetaCall,
                       igDepthStateAttr_className, 0x10,
                       igDepthStateAttr_vtableRead, igDepthStateAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igDepthStateAttr)

void igDepthStateAttr_fieldInit()
{
    Meta::igMetaObject *meta = igDepthStateAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igDepthStateAttr_fieldTypes, 1);
    fn_8003EC68(meta_field(meta, base), 1);
    meta_setupFields(meta, igDepthStateAttr_fieldNames, igDepthStateAttr_fieldStorage, igDepthStateAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace igDepthFunctionAttr {
// igDepthFunctionAttr: Alchemy class registration (0x800B84BC..0x800B8694). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igDepthFunctionAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_80046E58(void *,void *);
void fn_800ABC8C();
void *fn_800AC294();
void fn_800CDD14();
extern char igDepthFunctionAttr_fieldNames[4];
extern char igDepthFunctionAttr_fieldOffsets[4];
extern char igDepthFunctionAttr_fieldStorage[4];
extern char igDepthFunctionAttr_fieldTypes[4];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055E568[4];
}

struct Instance_800B84F8_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igDepthFunctionAttr)

void *igDepthFunctionAttr_vtableRead()
{
    Instance_800B84F8_0 object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igDepthFunctionAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igDepthFunctionAttr)

void igDepthFunctionAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igDepthFunctionAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igDepthFunctionAttr_getMetaCall,
                       igDepthFunctionAttr_className, 0x10,
                       igDepthFunctionAttr_vtableRead, igDepthFunctionAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igDepthFunctionAttr)

void igDepthFunctionAttr_fieldInit()
{
    Meta::igMetaObject *meta = igDepthFunctionAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igDepthFunctionAttr_fieldTypes, 1);
    Meta::igEnumMetaField *funcField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base));
    fn_80046E58(funcField, lbl_8055E568);
    funcField->_getMetaEnumFunction = reinterpret_cast<void *>((void *)fn_800CDD14);
    meta_setupFields(meta, igDepthFunctionAttr_fieldNames, igDepthFunctionAttr_fieldStorage, igDepthFunctionAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace igDecalAttr {
// igDecalAttr: Alchemy class registration (0x800B8694..0x800B8848). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igDecalAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_800ABC8C();
void *fn_800AC294();
extern char igDecalAttr_fieldNames[4];
extern char igDecalAttr_fieldOffsets[4];
extern char igDecalAttr_fieldStorage[4];
extern char igDecalAttr_fieldTypes[4];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

struct Instance_800B86D0_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igDecalAttr)

void *igDecalAttr_vtableRead()
{
    Instance_800B86D0_0 object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igDecalAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igDecalAttr)

void igDecalAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igDecalAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igDecalAttr_getMetaCall,
                       igDecalAttr_className, 0x10,
                       igDecalAttr_vtableRead, igDecalAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igDecalAttr)

void igDecalAttr_fieldInit()
{
    Meta::igMetaObject *meta = igDecalAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igDecalAttr_fieldTypes, 1);
    meta_setupFields(meta, igDecalAttr_fieldNames, igDecalAttr_fieldStorage, igDecalAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace igCustomStateCollectionAttr {
// igCustomStateCollectionAttr: Alchemy class registration (0x800B8848..0x800B8930). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igCustomStateCollectionAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_800ABC8C();
void *fn_800AC294();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igCustomStateCollectionAttr)

META_ARK_REGISTER(igCustomStateCollectionAttr)

void igCustomStateCollectionAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(1, &igCustomStateCollectionAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igCustomStateCollectionAttr_getMetaCall,
                       igCustomStateCollectionAttr_className, 0xC,
                       0, 0, 0, 0);
}

META_GET_META_CALL(igCustomStateCollectionAttr)

}
#pragma pop
}

namespace igCullFaceAttr {
// igCullFaceAttr: Alchemy class registration (0x800B8930..0x800B8968). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igCullFaceAttr)

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igCullFaceAttr)

}
#pragma pop
}

namespace unknown800B8968 {
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void fn_8003EC68(void *,int);
void fn_80046E58(void *,void *);
void fn_8004D4BC(void *,float);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_80075874(void *,int);
void fn_800ABC8C();
void *fn_800AC0B8();
void *fn_800AC294();
void *fn_800BB448();
void fn_800CDD14();
void *fn_800CDD60();
void igAttr_register();
void igCopyRenderDestinationAttr_fieldInit();
void igVisualAttribute_register();
extern char igDisplayListAttr_vtable[];
extern char igDestinationAlphaStateAttr_vtable[];
extern char igDestinationAlphaFunctionAttr_vtable[];
extern char igDestinationAlphaAttr_vtable[];
extern char igDepthWriteStateAttr_vtable[];
extern char igDepthStateAttr_vtable[];
extern char igDepthFunctionAttr_vtable[];
extern char igDecalAttr_vtable[];
extern char igCullFaceAttr_vtable[];
extern char igCopyRenderDestinationAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char igDisplayListAttr_dependencies[8];
extern char igDisplayListAttr_fieldTypes[4];
extern char igDisplayListAttr_fieldNames[4];
extern char igDisplayListAttr_fieldStorage[4];
extern char igDisplayListAttr_fieldOffsets[4];
extern char igDestinationAlphaStateAttr_fieldTypes[4];
extern char igDestinationAlphaStateAttr_fieldNames[4];
extern char igDestinationAlphaStateAttr_fieldStorage[4];
extern char igDestinationAlphaStateAttr_fieldOffsets[4];
extern char igDestinationAlphaFunctionAttr_fieldTypes[4];
extern char igDestinationAlphaFunctionAttr_fieldNames[4];
extern char igDestinationAlphaFunctionAttr_fieldStorage[4];
extern char igDestinationAlphaFunctionAttr_fieldOffsets[4];
extern char igDestinationAlphaAttr_fieldTypes[8];
extern char igDestinationAlphaAttr_fieldNames[8];
extern char igDestinationAlphaAttr_fieldStorage[8];
extern char igDestinationAlphaAttr_fieldOffsets[8];
extern char igDepthWriteStateAttr_fieldTypes[4];
extern char igDepthWriteStateAttr_fieldNames[4];
extern char igDepthWriteStateAttr_fieldStorage[4];
extern char igDepthWriteStateAttr_fieldOffsets[4];
extern char igDepthStateAttr_fieldTypes[4];
extern char igDepthStateAttr_fieldNames[4];
extern char igDepthStateAttr_fieldStorage[4];
extern char igDepthStateAttr_fieldOffsets[4];
extern char igDepthFunctionAttr_fieldTypes[4];
extern char igDepthFunctionAttr_fieldNames[4];
extern char igDepthFunctionAttr_fieldStorage[4];
extern char igDepthFunctionAttr_fieldOffsets[4];
extern char lbl_8055E568[4];
extern char igDecalAttr_fieldTypes[4];
extern char igDecalAttr_fieldNames[4];
extern char igDecalAttr_fieldStorage[4];
extern char igDecalAttr_fieldOffsets[4];
extern char igCullFaceAttr_fieldTypes[8];
extern char igCullFaceAttr_fieldNames[8];
extern char igCullFaceAttr_fieldStorage[8];
extern char igCullFaceAttr_fieldOffsets[8];
extern char lbl_8055E59C[4];
extern void *lbl_805621F4;
extern void *igDisplayListAttr_meta;
extern void *igDestinationAlphaStateAttr_meta;
extern void *igDestinationAlphaFunctionAttr_meta;
extern void *igDestinationAlphaAttr_meta;
extern void *igDepthWriteStateAttr_meta;
extern void *igDepthStateAttr_meta;
extern void *igDepthFunctionAttr_meta;
extern void *igDecalAttr_meta;
extern void *igCustomStateCollectionAttr_meta;
extern void *igCullFaceAttr_meta;
extern void *lbl_80562944;
extern void *igCopyRenderDestinationAttr_meta;
extern char lbl_80566810[4];
void *igDisplayListAttr_getMeta();
void *igDisplayListAttr_vtableRead();
void igDisplayListAttr_arkRegister();
void igDisplayListAttr_register();
void *igDisplayListAttr_getMetaCall();
void igDisplayListAttr_fieldInit();
void *igDestinationAlphaStateAttr_getMeta();
void *igDestinationAlphaStateAttr_vtableRead();
void igDestinationAlphaStateAttr_arkRegister();
void igDestinationAlphaStateAttr_register();
void *igDestinationAlphaStateAttr_getMetaCall();
void igDestinationAlphaStateAttr_fieldInit();
void *igDestinationAlphaFunctionAttr_getMeta();
void *igDestinationAlphaFunctionAttr_vtableRead();
void igDestinationAlphaFunctionAttr_arkRegister();
void igDestinationAlphaFunctionAttr_register();
void *igDestinationAlphaFunctionAttr_getMetaCall();
void igDestinationAlphaFunctionAttr_fieldInit();
void *igDestinationAlphaAttr_getMeta();
void *igDestinationAlphaAttr_vtableRead();
void igDestinationAlphaAttr_arkRegister();
void igDestinationAlphaAttr_register();
void *igDestinationAlphaAttr_getMetaCall();
void igDestinationAlphaAttr_fieldInit();
void *igDepthWriteStateAttr_getMeta();
void *igDepthWriteStateAttr_vtableRead();
void igDepthWriteStateAttr_arkRegister();
void igDepthWriteStateAttr_register();
void *igDepthWriteStateAttr_getMetaCall();
void igDepthWriteStateAttr_fieldInit();
void *igDepthStateAttr_getMeta();
void *igDepthStateAttr_vtableRead();
void igDepthStateAttr_arkRegister();
void igDepthStateAttr_register();
void *igDepthStateAttr_getMetaCall();
void igDepthStateAttr_fieldInit();
void *igDepthFunctionAttr_getMeta();
void *igDepthFunctionAttr_vtableRead();
void igDepthFunctionAttr_arkRegister();
void igDepthFunctionAttr_register();
void *igDepthFunctionAttr_getMetaCall();
void igDepthFunctionAttr_fieldInit();
void *igDecalAttr_getMeta();
void *igDecalAttr_vtableRead();
void igDecalAttr_arkRegister();
void igDecalAttr_register();
void *igDecalAttr_getMetaCall();
void igDecalAttr_fieldInit();
void *igCustomStateCollectionAttr_getMeta();
void igCustomStateCollectionAttr_arkRegister();
void igCustomStateCollectionAttr_register();
void *igCustomStateCollectionAttr_getMetaCall();
void *igCullFaceAttr_getMeta();
void *igCullFaceAttr_vtableRead();
void igCullFaceAttr_arkRegister();
void igCullFaceAttr_register();
void *igCullFaceAttr_getMetaCall();
void igCullFaceAttr_fieldInit();
void *igCopyRenderDestinationAttr_getMeta();
void *igCopyRenderDestinationAttr_vtableRead();
void igCopyRenderDestinationAttr_arkRegister();
void igCopyRenderDestinationAttr_register();
void *igCopyRenderDestinationAttr_getMetaCall();
}
struct UnknownGenRoot800B7988 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B7988(){igObject_construct(this);}
};
struct UnknownGenObject800B7988 : UnknownGenRoot800B7988 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject800B7988(){unknown00=igDisplayListAttr_vtable;}
};
struct UnknownGenObject800B7B9C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B7D64_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B7F2C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B8130_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B8330_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B84F8_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B86D0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B89E0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800B8C40 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B8C40(){igObject_construct(this);}
};
struct UnknownGenObject800B8C40 : UnknownGenRoot800B8C40 {
 char unknown04[12];
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 char unknown1C[28];
 inline ~UnknownGenObject800B8C40(){unknown00=igCopyRenderDestinationAttr_vtable;}
};
extern "C" {
void *fn_800B8968(){
 if(!igCullFaceAttr_meta) igCullFaceAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igCullFaceAttr_meta;
}
}
#pragma pop
}

namespace igCullFaceAttr_2 {
// igCullFaceAttr: Alchemy class registration (0x800B89A4..0x800B8B7C). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igCullFaceAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_80046E58(void *,void *);
void fn_800ABC8C();
void *fn_800AC294();
void *fn_800CDD60();
extern char igCullFaceAttr_fieldNames[8];
extern char igCullFaceAttr_fieldOffsets[8];
extern char igCullFaceAttr_fieldStorage[8];
extern char igCullFaceAttr_fieldTypes[8];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055E59C[4];
}

struct Instance_800B89E0_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igCullFaceAttr)

void *igCullFaceAttr_vtableRead()
{
    Instance_800B89E0_0 object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igCullFaceAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igCullFaceAttr)

void igCullFaceAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igCullFaceAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igCullFaceAttr_getMetaCall,
                       igCullFaceAttr_className, 0x14,
                       igCullFaceAttr_vtableRead, igCullFaceAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igCullFaceAttr)

void igCullFaceAttr_fieldInit()
{
    Meta::igMetaObject *meta = igCullFaceAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igCullFaceAttr_fieldTypes, 2);
    Meta::igEnumMetaField *modeField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base + 1));
    fn_80046E58(modeField, lbl_8055E59C);
    modeField->_getMetaEnumFunction = reinterpret_cast<void *>((void *)fn_800CDD60);
    meta_setupFields(meta, igCullFaceAttr_fieldNames, igCullFaceAttr_fieldStorage, igCullFaceAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace unknown800B8B7C {
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void fn_8003EC68(void *,int);
void fn_80046E58(void *,void *);
void fn_8004D4BC(void *,float);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_80075874(void *,int);
void fn_800ABC8C();
void *fn_800AC0B8();
void *fn_800AC294();
void *fn_800BB448();
void fn_800CDD14();
void *fn_800CDD60();
void igAttr_register();
void igCopyRenderDestinationAttr_fieldInit();
void igVisualAttribute_register();
extern char igDisplayListAttr_vtable[];
extern char igDestinationAlphaStateAttr_vtable[];
extern char igDestinationAlphaFunctionAttr_vtable[];
extern char igDestinationAlphaAttr_vtable[];
extern char igDepthWriteStateAttr_vtable[];
extern char igDepthStateAttr_vtable[];
extern char igDepthFunctionAttr_vtable[];
extern char igDecalAttr_vtable[];
extern char igCullFaceAttr_vtable[];
extern char igCopyRenderDestinationAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char igDisplayListAttr_dependencies[8];
extern char igDisplayListAttr_fieldTypes[4];
extern char igDisplayListAttr_fieldNames[4];
extern char igDisplayListAttr_fieldStorage[4];
extern char igDisplayListAttr_fieldOffsets[4];
extern char igDestinationAlphaStateAttr_fieldTypes[4];
extern char igDestinationAlphaStateAttr_fieldNames[4];
extern char igDestinationAlphaStateAttr_fieldStorage[4];
extern char igDestinationAlphaStateAttr_fieldOffsets[4];
extern char igDestinationAlphaFunctionAttr_fieldTypes[4];
extern char igDestinationAlphaFunctionAttr_fieldNames[4];
extern char igDestinationAlphaFunctionAttr_fieldStorage[4];
extern char igDestinationAlphaFunctionAttr_fieldOffsets[4];
extern char igDestinationAlphaAttr_fieldTypes[8];
extern char igDestinationAlphaAttr_fieldNames[8];
extern char igDestinationAlphaAttr_fieldStorage[8];
extern char igDestinationAlphaAttr_fieldOffsets[8];
extern char igDepthWriteStateAttr_fieldTypes[4];
extern char igDepthWriteStateAttr_fieldNames[4];
extern char igDepthWriteStateAttr_fieldStorage[4];
extern char igDepthWriteStateAttr_fieldOffsets[4];
extern char igDepthStateAttr_fieldTypes[4];
extern char igDepthStateAttr_fieldNames[4];
extern char igDepthStateAttr_fieldStorage[4];
extern char igDepthStateAttr_fieldOffsets[4];
extern char igDepthFunctionAttr_fieldTypes[4];
extern char igDepthFunctionAttr_fieldNames[4];
extern char igDepthFunctionAttr_fieldStorage[4];
extern char igDepthFunctionAttr_fieldOffsets[4];
extern char lbl_8055E568[4];
extern char igDecalAttr_fieldTypes[4];
extern char igDecalAttr_fieldNames[4];
extern char igDecalAttr_fieldStorage[4];
extern char igDecalAttr_fieldOffsets[4];
extern char igCullFaceAttr_fieldTypes[8];
extern char igCullFaceAttr_fieldNames[8];
extern char igCullFaceAttr_fieldStorage[8];
extern char igCullFaceAttr_fieldOffsets[8];
extern char lbl_8055E59C[4];
extern void *lbl_805621F4;
extern void *igDisplayListAttr_meta;
extern void *igDestinationAlphaStateAttr_meta;
extern void *igDestinationAlphaFunctionAttr_meta;
extern void *igDestinationAlphaAttr_meta;
extern void *igDepthWriteStateAttr_meta;
extern void *igDepthStateAttr_meta;
extern void *igDepthFunctionAttr_meta;
extern void *igDecalAttr_meta;
extern void *igCustomStateCollectionAttr_meta;
extern void *igCullFaceAttr_meta;
extern void *lbl_80562944;
extern void *igCopyRenderDestinationAttr_meta;
extern char lbl_80566810[4];
void *igDisplayListAttr_getMeta();
void *igDisplayListAttr_vtableRead();
void igDisplayListAttr_arkRegister();
void igDisplayListAttr_register();
void *igDisplayListAttr_getMetaCall();
void igDisplayListAttr_fieldInit();
void *igDestinationAlphaStateAttr_getMeta();
void *igDestinationAlphaStateAttr_vtableRead();
void igDestinationAlphaStateAttr_arkRegister();
void igDestinationAlphaStateAttr_register();
void *igDestinationAlphaStateAttr_getMetaCall();
void igDestinationAlphaStateAttr_fieldInit();
void *igDestinationAlphaFunctionAttr_getMeta();
void *igDestinationAlphaFunctionAttr_vtableRead();
void igDestinationAlphaFunctionAttr_arkRegister();
void igDestinationAlphaFunctionAttr_register();
void *igDestinationAlphaFunctionAttr_getMetaCall();
void igDestinationAlphaFunctionAttr_fieldInit();
void *igDestinationAlphaAttr_getMeta();
void *igDestinationAlphaAttr_vtableRead();
void igDestinationAlphaAttr_arkRegister();
void igDestinationAlphaAttr_register();
void *igDestinationAlphaAttr_getMetaCall();
void igDestinationAlphaAttr_fieldInit();
void *igDepthWriteStateAttr_getMeta();
void *igDepthWriteStateAttr_vtableRead();
void igDepthWriteStateAttr_arkRegister();
void igDepthWriteStateAttr_register();
void *igDepthWriteStateAttr_getMetaCall();
void igDepthWriteStateAttr_fieldInit();
void *igDepthStateAttr_getMeta();
void *igDepthStateAttr_vtableRead();
void igDepthStateAttr_arkRegister();
void igDepthStateAttr_register();
void *igDepthStateAttr_getMetaCall();
void igDepthStateAttr_fieldInit();
void *igDepthFunctionAttr_getMeta();
void *igDepthFunctionAttr_vtableRead();
void igDepthFunctionAttr_arkRegister();
void igDepthFunctionAttr_register();
void *igDepthFunctionAttr_getMetaCall();
void igDepthFunctionAttr_fieldInit();
void *igDecalAttr_getMeta();
void *igDecalAttr_vtableRead();
void igDecalAttr_arkRegister();
void igDecalAttr_register();
void *igDecalAttr_getMetaCall();
void igDecalAttr_fieldInit();
void *igCustomStateCollectionAttr_getMeta();
void igCustomStateCollectionAttr_arkRegister();
void igCustomStateCollectionAttr_register();
void *igCustomStateCollectionAttr_getMetaCall();
void *igCullFaceAttr_getMeta();
void *igCullFaceAttr_vtableRead();
void igCullFaceAttr_arkRegister();
void igCullFaceAttr_register();
void *igCullFaceAttr_getMetaCall();
void igCullFaceAttr_fieldInit();
void *igCopyRenderDestinationAttr_getMeta();
void *igCopyRenderDestinationAttr_vtableRead();
void igCopyRenderDestinationAttr_arkRegister();
void igCopyRenderDestinationAttr_register();
void *igCopyRenderDestinationAttr_getMetaCall();
}
struct UnknownGenRoot800B7988 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B7988(){igObject_construct(this);}
};
struct UnknownGenObject800B7988 : UnknownGenRoot800B7988 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject800B7988(){unknown00=igDisplayListAttr_vtable;}
};
struct UnknownGenObject800B7B9C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B7D64_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B7F2C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B8130_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B8330_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B84F8_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B86D0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B89E0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800B8C40 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B8C40(){igObject_construct(this);}
};
struct UnknownGenObject800B8C40 : UnknownGenRoot800B8C40 {
 char unknown04[12];
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 char unknown1C[28];
 inline ~UnknownGenObject800B8C40(){unknown00=igCopyRenderDestinationAttr_vtable;}
};
extern "C" {
void *fn_800B8B7C(){
 char *data=igVisualContextAttrDefaultManager_className;
 if(!lbl_80562944) lbl_80562944=fn_800635C8(data+0x1D04,data+0x1CDC,data+0x1CF0,0x5);
 return lbl_80562944;
}
void *fn_800B8BC8(){
 if(!igCopyRenderDestinationAttr_meta) igCopyRenderDestinationAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igCopyRenderDestinationAttr_meta;
}
void *igCopyRenderDestinationAttr_getMeta(){
 if(!igCopyRenderDestinationAttr_meta || !(reinterpret_cast<unsigned int *>(igCopyRenderDestinationAttr_meta)[0x24/4]&4)) igCopyRenderDestinationAttr_arkRegister();
 return igCopyRenderDestinationAttr_meta;
}
void *igCopyRenderDestinationAttr_vtableRead(){
 UnknownGenObject800B8C40 object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igCopyRenderDestinationAttr_vtable;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown18.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igCopyRenderDestinationAttr_arkRegister(){
 meta_registerNow((int)igCopyRenderDestinationAttr_register);
}
void igCopyRenderDestinationAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igCopyRenderDestinationAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igCopyRenderDestinationAttr_getMetaCall,(int)igCopyRenderDestinationAttr_className,52,(int)igCopyRenderDestinationAttr_vtableRead,(int)igCopyRenderDestinationAttr_fieldInit,0,(int)igCopyRenderDestinationAttr_dependencies);
}
void *igCopyRenderDestinationAttr_getMetaCall(){return igCopyRenderDestinationAttr_getMeta();}
}
#pragma pop
}

namespace igCopyRenderDestinationAttr_fieldInit {
// igCopyRenderDestinationAttr: Alchemy class registration (0x800B8E18..0x800B8EF4). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igCopyRenderDestinationAttr)

extern "C" {
void fn_80046E58(void *, void *);
void *fn_800AF4A4();
void *fn_800B1738();
void fn_800B8B7C();
void *fn_800D2414();
extern char lbl_8055E5B8[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igCopyRenderDestinationAttr_fieldInit()
{
    Meta::igMetaObject *meta = igCopyRenderDestinationAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igCopyRenderDestinationAttr_fieldTypes, 10);
    Meta::igEnumMetaField *copyTypeField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base));
    fn_80046E58(copyTypeField, (void *)lbl_8055E5B8);
    copyTypeField->_getMetaEnumFunction = reinterpret_cast<void *>(fn_800B8B7C);
    Meta::igObjectRefMetaField *pRDAttrField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_v3 = fn_800B1738();
    pRDAttrField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v3);
    Meta::igObjectRefMetaField *pImageField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    void *value_v5 = fn_800D2414();
    pImageField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v5);
    Meta::igObjectRefMetaField *pTextureAttrField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 3));
    void *value_v7 = fn_800AF4A4();
    pTextureAttrField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v7);
    meta_setupFields(meta, igCopyRenderDestinationAttr_fieldNames, igCopyRenderDestinationAttr_fieldStorage, igCopyRenderDestinationAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace igColorScalerStateAttr {
// igColorScalerStateAttr: Alchemy class registration (0x800B8EF4..0x800B90CC). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igColorScalerStateAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_8003D160();
void fn_80046E58(void *,void *);
void fn_800ABC8C();
void *fn_800AC294();
extern char igColorScalerStateAttr_fieldNames[4];
extern char igColorScalerStateAttr_fieldOffsets[4];
extern char igColorScalerStateAttr_fieldStorage[4];
extern char igColorScalerStateAttr_fieldTypes[4];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055E5D4[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igColorScalerStateAttr)

void *igColorScalerStateAttr_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igColorScalerStateAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igColorScalerStateAttr)

void igColorScalerStateAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igColorScalerStateAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igColorScalerStateAttr_getMetaCall,
                       igColorScalerStateAttr_className, 0x10,
                       igColorScalerStateAttr_vtableRead, igColorScalerStateAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igColorScalerStateAttr)

void igColorScalerStateAttr_fieldInit()
{
    Meta::igMetaObject *meta = igColorScalerStateAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igColorScalerStateAttr_fieldTypes, 1);
    Meta::igEnumMetaField *stateField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base));
    fn_80046E58(stateField, lbl_8055E5D4);
    stateField->_getMetaEnumFunction = reinterpret_cast<void *>((void *)fn_8003D160);
    meta_setupFields(meta, igColorScalerStateAttr_fieldNames, igColorScalerStateAttr_fieldStorage, igColorScalerStateAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace unknown800B90CC {
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8003D160();
void fn_80046E58(void *,void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void *fn_800AC294();
void igColorMaskAttr_fieldInit();
void igVisualAttribute_register();
extern char igColorScalerStateAttr_vtable[];
extern char igColorMaskAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char igColorScalerStateAttr_fieldTypes[4];
extern char igColorScalerStateAttr_fieldNames[4];
extern char igColorScalerStateAttr_fieldStorage[4];
extern char igColorScalerStateAttr_fieldOffsets[4];
extern char lbl_8055E5D4[4];
extern void *igColorScalerStateAttr_meta;
extern void *igColorMaskAttr_meta;
void *igColorScalerStateAttr_getMeta();
void *igColorScalerStateAttr_vtableRead();
void igColorScalerStateAttr_arkRegister();
void igColorScalerStateAttr_register();
void *igColorScalerStateAttr_getMetaCall();
void igColorScalerStateAttr_fieldInit();
void *igColorMaskAttr_getMeta();
void *igColorMaskAttr_vtableRead();
void igColorMaskAttr_arkRegister();
void igColorMaskAttr_register();
void *igColorMaskAttr_getMetaCall();
}
struct UnknownGenObject800B8F30_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B9140_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *igColorMaskAttr_create(void *object){
 igColorMaskAttr_arkRegister();
 return meta_createInstance(igColorMaskAttr_meta,object);
}
void *igColorMaskAttr_getMeta(){
 if(!igColorMaskAttr_meta || !(reinterpret_cast<unsigned int *>(igColorMaskAttr_meta)[0x24/4]&4)) igColorMaskAttr_arkRegister();
 return igColorMaskAttr_meta;
}
void *igColorMaskAttr_vtableRead(){
 UnknownGenObject800B9140_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igColorMaskAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igColorMaskAttr_arkRegister(){
 meta_registerNow((int)igColorMaskAttr_register);
}
void igColorMaskAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igColorMaskAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igColorMaskAttr_getMetaCall,(int)igColorMaskAttr_className,20,(int)igColorMaskAttr_vtableRead,(int)igColorMaskAttr_fieldInit,0,0);
}
void *igColorMaskAttr_getMetaCall(){return igColorMaskAttr_getMeta();}
}
#pragma pop
}

namespace igColorMaskAttr_fieldInit {
// igColorMaskAttr: Alchemy class registration (0x800B9250..0x800B9310). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igColorMaskAttr)

extern "C" {
void fn_8003EC68(void *, int);
}

#pragma push
#pragma auto_inline off
extern "C" {

void igColorMaskAttr_fieldInit()
{
    Meta::igMetaObject *meta = igColorMaskAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igColorMaskAttr_fieldTypes, 5);
    Meta::igBoolMetaField *redField = static_cast<Meta::igBoolMetaField *>(meta_field(meta, base));
    fn_8003EC68(redField, 1);
    Meta::igBoolMetaField *greenField = static_cast<Meta::igBoolMetaField *>(meta_field(meta, base + 1));
    fn_8003EC68(greenField, 1);
    Meta::igBoolMetaField *blueField = static_cast<Meta::igBoolMetaField *>(meta_field(meta, base + 2));
    fn_8003EC68(blueField, 1);
    Meta::igBoolMetaField *alphaField = static_cast<Meta::igBoolMetaField *>(meta_field(meta, base + 3));
    fn_8003EC68(alphaField, 1);
    meta_setupFields(meta, igColorMaskAttr_fieldNames, igColorMaskAttr_fieldStorage, igColorMaskAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace igColorAttr {
// igColorAttr: Alchemy class registration (0x800B9310..0x800B9348). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igColorAttr)

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igColorAttr)

}
#pragma pop
}

namespace unknown800B9348 {
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void *fn_800AC294();
void igColorAttr_fieldInit();
void igVisualAttribute_register();
extern char igColorAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *lbl_805621F4;
extern void *igColorAttr_meta;
void *igColorAttr_getMeta();
void *igColorAttr_vtableRead();
void igColorAttr_arkRegister();
void igColorAttr_register();
void *igColorAttr_getMetaCall();
}
struct UnknownGenObject800B93C0_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *fn_800B9348(){
 if(!igColorAttr_meta) igColorAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igColorAttr_meta;
}
void *igColorAttr_getMeta(){
 if(!igColorAttr_meta || !(reinterpret_cast<unsigned int *>(igColorAttr_meta)[0x24/4]&4)) igColorAttr_arkRegister();
 return igColorAttr_meta;
}
void *igColorAttr_vtableRead(){
 UnknownGenObject800B93C0_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igColorAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igColorAttr_arkRegister(){
 meta_registerNow((int)igColorAttr_register);
}
void igColorAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igColorAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igColorAttr_getMetaCall,(int)igColorAttr_className,32,(int)igColorAttr_vtableRead,(int)igColorAttr_fieldInit,0,0);
}
void *igColorAttr_getMetaCall(){return igColorAttr_getMeta();}
}
#pragma pop
}

namespace unknown800B94D0 {
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void fn_80075AC4(void *,int);
void fn_800BDAB8(int);
void fn_80126CF0(void *,void *);
extern char igColorAttr_fieldTypes[8];
extern char igColorAttr_fieldNames[8];
extern char igColorAttr_fieldStorage[8];
extern char igColorAttr_fieldOffsets[8];
extern void *igColorAttr_meta;
extern char lbl_80566810[4];
}
struct UnknownGenL800B94D0_8 {
 float m08;
 float m0C;
 float m10;
 float m14;
};
extern "C" {
void igColorAttr_fieldInit(){
 UnknownGenL800B94D0_8 local0;
 void *value0=igColorAttr_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,igColorAttr_fieldTypes,2);
 void *value2=meta_field(value0,value1);
 local0.m08=*reinterpret_cast<float *>((lbl_80566810+0));
 local0.m0C=*reinterpret_cast<float *>((lbl_80566810+0));
 local0.m10=*reinterpret_cast<float *>((lbl_80566810+0));
 local0.m14=*reinterpret_cast<float *>((lbl_80566810+0));
 fn_80126CF0(value2,&local0);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+48)=(void *)fn_800BDAB8;
 void *value3=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 fn_80075AC4(value3,-1);
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value3)+38)=0;
 meta_setupFields(value0,igColorAttr_fieldNames,igColorAttr_fieldStorage,igColorAttr_fieldOffsets,value1);
}
}
#pragma pop
}

namespace unknown800B9590 {
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void fn_8003EC68(void *,int);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void *fn_800AC294();
void igClearAttr_fieldInit();
void igVisualAttribute_register();
extern char igClippingStateAttr_vtable[];
extern char igClearAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char igClippingStateAttr_fieldTypes[4];
extern char igClippingStateAttr_fieldNames[4];
extern char igClippingStateAttr_fieldStorage[4];
extern char igClippingStateAttr_fieldOffsets[4];
extern void *lbl_805621F4;
extern void *igClippingStateAttr_meta;
extern void *igClearAttr_meta;
void *igClippingStateAttr_getMeta();
void *igClippingStateAttr_vtableRead();
void igClippingStateAttr_arkRegister();
void igClippingStateAttr_register();
void *igClippingStateAttr_getMetaCall();
void igClippingStateAttr_fieldInit();
void *igClearAttr_getMeta();
void *igClearAttr_vtableRead();
void igClearAttr_arkRegister();
void igClearAttr_register();
void *igClearAttr_getMetaCall();
}
struct UnknownGenObject800B9608_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B9808_0 {
 void *unknown00;
 char unknown04[68];
};
extern "C" {
void *fn_800B9590(){
 if(!igClippingStateAttr_meta) igClippingStateAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igClippingStateAttr_meta;
}
}
#pragma pop
}

namespace igClippingStateAttr {
// igClippingStateAttr: Alchemy class registration (0x800B95CC..0x800B9794). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igClippingStateAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_8003EC68(void *,int);
void fn_800ABC8C();
void *fn_800AC294();
extern char igClippingStateAttr_fieldNames[4];
extern char igClippingStateAttr_fieldOffsets[4];
extern char igClippingStateAttr_fieldStorage[4];
extern char igClippingStateAttr_fieldTypes[4];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igClippingStateAttr)

void *igClippingStateAttr_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igClippingStateAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igClippingStateAttr)

void igClippingStateAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igClippingStateAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igClippingStateAttr_getMetaCall,
                       igClippingStateAttr_className, 0x10,
                       igClippingStateAttr_vtableRead, igClippingStateAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igClippingStateAttr)

void igClippingStateAttr_fieldInit()
{
    Meta::igMetaObject *meta = igClippingStateAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igClippingStateAttr_fieldTypes, 1);
    fn_8003EC68(meta_field(meta, base), 1);
    meta_setupFields(meta, igClippingStateAttr_fieldNames, igClippingStateAttr_fieldStorage, igClippingStateAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace unknown800B9794 {
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void fn_8003EC68(void *,int);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void *fn_800AC294();
void igClearAttr_fieldInit();
void igVisualAttribute_register();
extern char igClippingStateAttr_vtable[];
extern char igClearAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char igClippingStateAttr_fieldTypes[4];
extern char igClippingStateAttr_fieldNames[4];
extern char igClippingStateAttr_fieldStorage[4];
extern char igClippingStateAttr_fieldOffsets[4];
extern void *lbl_805621F4;
extern void *igClippingStateAttr_meta;
extern void *igClearAttr_meta;
void *igClippingStateAttr_getMeta();
void *igClippingStateAttr_vtableRead();
void igClippingStateAttr_arkRegister();
void igClippingStateAttr_register();
void *igClippingStateAttr_getMetaCall();
void igClippingStateAttr_fieldInit();
void *igClearAttr_getMeta();
void *igClearAttr_vtableRead();
void igClearAttr_arkRegister();
void igClearAttr_register();
void *igClearAttr_getMetaCall();
}
struct UnknownGenObject800B9608_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B9808_0 {
 void *unknown00;
 char unknown04[68];
};
extern "C" {
void *igClearAttr_create(void *object){
 igClearAttr_arkRegister();
 return meta_createInstance(igClearAttr_meta,object);
}
void *igClearAttr_getMeta(){
 if(!igClearAttr_meta || !(reinterpret_cast<unsigned int *>(igClearAttr_meta)[0x24/4]&4)) igClearAttr_arkRegister();
 return igClearAttr_meta;
}
void *igClearAttr_vtableRead(){
 UnknownGenObject800B9808_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igClearAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igClearAttr_arkRegister(){
 meta_registerNow((int)igClearAttr_register);
}
void igClearAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igClearAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igClearAttr_getMetaCall,(int)igClearAttr_className,72,(int)igClearAttr_vtableRead,(int)igClearAttr_fieldInit,0,0);
}
void *igClearAttr_getMetaCall(){return igClearAttr_getMeta();}
}
#pragma pop
}

namespace igClearAttr_fieldInit {
// igClearAttr: Alchemy class registration (0x800B9918..0x800B9A30). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igClearAttr)

extern "C" {
void fn_800440F4(void *, double);
void fn_8004D4BC(void *, float);
void fn_80075AC4(void *, int);
void fn_80126CF0(void *, void *);
extern const char lbl_80566810[4];
extern const char lbl_80566814[4];
extern const char lbl_80566830[8];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igClearAttr_fieldInit()
{
    float local[8];
    Meta::igMetaObject *meta = igClearAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igClearAttr_fieldTypes, 7);
    Meta::igVec4fMetaField *colorField = static_cast<Meta::igVec4fMetaField *>(meta_field(meta, base + 1));
    local[4] = *reinterpret_cast<const float *>(lbl_80566814);
    local[5] = *reinterpret_cast<const float *>(lbl_80566814);
    local[6] = *reinterpret_cast<const float *>(lbl_80566814);
    local[7] = *reinterpret_cast<const float *>(lbl_80566810);
    fn_80126CF0(colorField, &local[4]);
    Meta::igVec4fMetaField *accumField = static_cast<Meta::igVec4fMetaField *>(meta_field(meta, base + 2));
    local[0] = *reinterpret_cast<const float *>(lbl_80566814);
    local[1] = *reinterpret_cast<const float *>(lbl_80566814);
    local[2] = *reinterpret_cast<const float *>(lbl_80566814);
    local[3] = *reinterpret_cast<const float *>(lbl_80566814);
    fn_80126CF0(accumField, &local[0]);
    Meta::igDoubleMetaField *depthField = static_cast<Meta::igDoubleMetaField *>(meta_field(meta, base + 3));
    fn_800440F4(depthField, *reinterpret_cast<const double *>(lbl_80566830));
    Meta::igUnsignedIntMetaField *colorPackedField = static_cast<Meta::igUnsignedIntMetaField *>(meta_field(meta, base + 5));
    fn_80075AC4(colorPackedField, -1);
    colorPackedField->_persistent = false;
    Meta::igFloatMetaField *depthFField = static_cast<Meta::igFloatMetaField *>(meta_field(meta, base + 6));
    fn_8004D4BC(depthFField, *reinterpret_cast<const float *>(lbl_80566810));
    depthFField->_persistent = false;
    meta_setupFields(meta, igClearAttr_fieldNames, igClearAttr_fieldStorage, igClearAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace igBlendingCorrectionStateAttr {
// igBlendingCorrectionStateAttr: Alchemy class registration (0x800B9A30..0x800B9BE4). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igBlendingCorrectionStateAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_800ABC8C();
void *fn_800AC294();
extern char igBlendingCorrectionStateAttr_fieldNames[4];
extern char igBlendingCorrectionStateAttr_fieldOffsets[4];
extern char igBlendingCorrectionStateAttr_fieldStorage[4];
extern char igBlendingCorrectionStateAttr_fieldTypes[4];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igBlendingCorrectionStateAttr)

void *igBlendingCorrectionStateAttr_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igBlendingCorrectionStateAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igBlendingCorrectionStateAttr)

void igBlendingCorrectionStateAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igBlendingCorrectionStateAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igBlendingCorrectionStateAttr_getMetaCall,
                       igBlendingCorrectionStateAttr_className, 0x10,
                       igBlendingCorrectionStateAttr_vtableRead, igBlendingCorrectionStateAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igBlendingCorrectionStateAttr)

void igBlendingCorrectionStateAttr_fieldInit()
{
    Meta::igMetaObject *meta = igBlendingCorrectionStateAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igBlendingCorrectionStateAttr_fieldTypes, 1);
    meta_setupFields(meta, igBlendingCorrectionStateAttr_fieldNames, igBlendingCorrectionStateAttr_fieldStorage, igBlendingCorrectionStateAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace igBlendingControlStateAttr {
// igBlendingControlStateAttr: Alchemy class registration (0x800B9BE4..0x800B9D98). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igBlendingControlStateAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_800ABC8C();
void *fn_800AC294();
extern char igBlendingControlStateAttr_fieldNames[4];
extern char igBlendingControlStateAttr_fieldOffsets[4];
extern char igBlendingControlStateAttr_fieldStorage[4];
extern char igBlendingControlStateAttr_fieldTypes[4];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igBlendingControlStateAttr)

void *igBlendingControlStateAttr_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igBlendingControlStateAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igBlendingControlStateAttr)

void igBlendingControlStateAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igBlendingControlStateAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igBlendingControlStateAttr_getMetaCall,
                       igBlendingControlStateAttr_className, 0x10,
                       igBlendingControlStateAttr_vtableRead, igBlendingControlStateAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igBlendingControlStateAttr)

void igBlendingControlStateAttr_fieldInit()
{
    Meta::igMetaObject *meta = igBlendingControlStateAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igBlendingControlStateAttr_fieldTypes, 1);
    meta_setupFields(meta, igBlendingControlStateAttr_fieldNames, igBlendingControlStateAttr_fieldStorage, igBlendingControlStateAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace igBlendStateAttr {
// igBlendStateAttr: Alchemy class registration (0x800B9D98..0x800B9DD0). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igBlendStateAttr)

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igBlendStateAttr)

}
#pragma pop
}

namespace unknown800B9DD0 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void *fn_800AC294();
void igBlendMatrixPaletteAttr_fieldInit();
void igObjectList_register();
void igVisualAttribute_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igBlendingCorrectionStateAttr_vtable[];
extern char igBlendingControlStateAttr_vtable[];
extern char igBlendStateAttr_vtable[];
extern char igBlendMatrixPaletteAttr_vtable[];
extern char lbl_8047D578[];
extern char igBlendMatrixPaletteAttrList_vtable[];
extern char lbl_8047DBB4[];
extern char lbl_8047E50C[];
extern char igBlendingCorrectionStateAttr_fieldTypes[4];
extern char igBlendingCorrectionStateAttr_fieldNames[4];
extern char igBlendingCorrectionStateAttr_fieldStorage[4];
extern char igBlendingCorrectionStateAttr_fieldOffsets[4];
extern char igBlendingControlStateAttr_fieldTypes[4];
extern char igBlendingControlStateAttr_fieldNames[4];
extern char igBlendingControlStateAttr_fieldStorage[4];
extern char igBlendingControlStateAttr_fieldOffsets[4];
extern char igBlendStateAttr_fieldTypes[4];
extern char igBlendStateAttr_fieldNames[4];
extern char igBlendStateAttr_fieldStorage[4];
extern char igBlendStateAttr_fieldOffsets[4];
extern char igBlendMatrixPaletteAttrList_dependencies[8];
extern void *lbl_805621F4;
extern void *igBlendingCorrectionStateAttr_meta;
extern void *igBlendingControlStateAttr_meta;
extern void *igBlendStateAttr_meta;
extern void *igBlendMatrixPaletteAttrList_meta;
extern void *igBlendMatrixPaletteAttr_meta;
void *igBlendingCorrectionStateAttr_getMeta();
void *igBlendingCorrectionStateAttr_vtableRead();
void igBlendingCorrectionStateAttr_arkRegister();
void igBlendingCorrectionStateAttr_register();
void *igBlendingCorrectionStateAttr_getMetaCall();
void igBlendingCorrectionStateAttr_fieldInit();
void *igBlendingControlStateAttr_getMeta();
void *igBlendingControlStateAttr_vtableRead();
void igBlendingControlStateAttr_arkRegister();
void igBlendingControlStateAttr_register();
void *igBlendingControlStateAttr_getMetaCall();
void igBlendingControlStateAttr_fieldInit();
void *igBlendStateAttr_getMeta();
void *igBlendStateAttr_vtableRead();
void igBlendStateAttr_arkRegister();
void igBlendStateAttr_register();
void *igBlendStateAttr_getMetaCall();
void igBlendStateAttr_fieldInit();
void *igBlendMatrixPaletteAttrList_getMeta();
void *igBlendMatrixPaletteAttrList_vtableRead();
void igBlendMatrixPaletteAttrList_arkRegister();
void igBlendMatrixPaletteAttrList_register();
void *igBlendMatrixPaletteAttrList_getMetaCall();
void *igBlendMatrixPaletteAttr_getMeta();
void *igBlendMatrixPaletteAttr_vtableRead();
void igBlendMatrixPaletteAttr_arkRegister();
void igBlendMatrixPaletteAttr_register();
void *igBlendMatrixPaletteAttr_getMetaCall();
}
struct UnknownGenObject800B9A6C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B9C20_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B9E48_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BA038_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BA20C_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *fn_800B9DD0(){
 if(!igBlendStateAttr_meta) igBlendStateAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igBlendStateAttr_meta;
}
}
#pragma pop
}

namespace igBlendStateAttr_2 {
// igBlendStateAttr: Alchemy class registration (0x800B9E0C..0x800B9FC0). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igBlendStateAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_800ABC8C();
void *fn_800AC294();
extern char igBlendStateAttr_fieldNames[4];
extern char igBlendStateAttr_fieldOffsets[4];
extern char igBlendStateAttr_fieldStorage[4];
extern char igBlendStateAttr_fieldTypes[4];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igBlendStateAttr)

void *igBlendStateAttr_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igBlendStateAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igBlendStateAttr)

void igBlendStateAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igBlendStateAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igBlendStateAttr_getMetaCall,
                       igBlendStateAttr_className, 0x10,
                       igBlendStateAttr_vtableRead, igBlendStateAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igBlendStateAttr)

void igBlendStateAttr_fieldInit()
{
    Meta::igMetaObject *meta = igBlendStateAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igBlendStateAttr_fieldTypes, 1);
    meta_setupFields(meta, igBlendStateAttr_fieldNames, igBlendStateAttr_fieldStorage, igBlendStateAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace unknown800B9FC0 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void *fn_800AC294();
void igBlendMatrixPaletteAttr_fieldInit();
void igObjectList_register();
void igVisualAttribute_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igBlendingCorrectionStateAttr_vtable[];
extern char igBlendingControlStateAttr_vtable[];
extern char igBlendStateAttr_vtable[];
extern char igBlendMatrixPaletteAttr_vtable[];
extern char lbl_8047D578[];
extern char igBlendMatrixPaletteAttrList_vtable[];
extern char lbl_8047DBB4[];
extern char lbl_8047E50C[];
extern char igBlendingCorrectionStateAttr_fieldTypes[4];
extern char igBlendingCorrectionStateAttr_fieldNames[4];
extern char igBlendingCorrectionStateAttr_fieldStorage[4];
extern char igBlendingCorrectionStateAttr_fieldOffsets[4];
extern char igBlendingControlStateAttr_fieldTypes[4];
extern char igBlendingControlStateAttr_fieldNames[4];
extern char igBlendingControlStateAttr_fieldStorage[4];
extern char igBlendingControlStateAttr_fieldOffsets[4];
extern char igBlendStateAttr_fieldTypes[4];
extern char igBlendStateAttr_fieldNames[4];
extern char igBlendStateAttr_fieldStorage[4];
extern char igBlendStateAttr_fieldOffsets[4];
extern char igBlendMatrixPaletteAttrList_dependencies[8];
extern void *lbl_805621F4;
extern void *igBlendingCorrectionStateAttr_meta;
extern void *igBlendingControlStateAttr_meta;
extern void *igBlendStateAttr_meta;
extern void *igBlendMatrixPaletteAttrList_meta;
extern void *igBlendMatrixPaletteAttr_meta;
void *igBlendingCorrectionStateAttr_getMeta();
void *igBlendingCorrectionStateAttr_vtableRead();
void igBlendingCorrectionStateAttr_arkRegister();
void igBlendingCorrectionStateAttr_register();
void *igBlendingCorrectionStateAttr_getMetaCall();
void igBlendingCorrectionStateAttr_fieldInit();
void *igBlendingControlStateAttr_getMeta();
void *igBlendingControlStateAttr_vtableRead();
void igBlendingControlStateAttr_arkRegister();
void igBlendingControlStateAttr_register();
void *igBlendingControlStateAttr_getMetaCall();
void igBlendingControlStateAttr_fieldInit();
void *igBlendStateAttr_getMeta();
void *igBlendStateAttr_vtableRead();
void igBlendStateAttr_arkRegister();
void igBlendStateAttr_register();
void *igBlendStateAttr_getMetaCall();
void igBlendStateAttr_fieldInit();
void *igBlendMatrixPaletteAttrList_getMeta();
void *igBlendMatrixPaletteAttrList_vtableRead();
void igBlendMatrixPaletteAttrList_arkRegister();
void igBlendMatrixPaletteAttrList_register();
void *igBlendMatrixPaletteAttrList_getMetaCall();
void *igBlendMatrixPaletteAttr_getMeta();
void *igBlendMatrixPaletteAttr_vtableRead();
void igBlendMatrixPaletteAttr_arkRegister();
void igBlendMatrixPaletteAttr_register();
void *igBlendMatrixPaletteAttr_getMetaCall();
}
struct UnknownGenObject800B9A6C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B9C20_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B9E48_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BA038_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BA20C_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *fn_800B9FC0(){
 if(!igBlendMatrixPaletteAttrList_meta) igBlendMatrixPaletteAttrList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igBlendMatrixPaletteAttrList_meta;
}
}
#pragma pop
}

namespace igBlendMatrixPaletteAttrList {
// igBlendMatrixPaletteAttrList: Alchemy class registration (0x800B9FFC..0x800BA15C). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igBlendMatrixPaletteAttrList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_800ABC8C();
extern char igBlendMatrixPaletteAttrList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_8047DBB4[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igBlendMatrixPaletteAttrList)

void *igBlendMatrixPaletteAttrList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_8047DBB4;
    object.__vtable = igBlendMatrixPaletteAttrList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igBlendMatrixPaletteAttrList)

void igBlendMatrixPaletteAttrList_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igBlendMatrixPaletteAttrList_meta, igObjectList_register,
                       fn_80024180, igBlendMatrixPaletteAttrList_getMetaCall,
                       igBlendMatrixPaletteAttrList_className, 0x14,
                       igBlendMatrixPaletteAttrList_vtableRead, 0, 0, igBlendMatrixPaletteAttrList_dependencies);
}

META_GET_META_CALL(igBlendMatrixPaletteAttrList)

}
#pragma pop
}

namespace igBlendMatrixPaletteAttr {
// igBlendMatrixPaletteAttr: Alchemy class registration (0x800BA15C..0x800BA194). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igBlendMatrixPaletteAttr)

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igBlendMatrixPaletteAttr)

}
#pragma pop
}

namespace unknown800BA194 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void *fn_800AC294();
void igBlendMatrixPaletteAttr_fieldInit();
void igObjectList_register();
void igVisualAttribute_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igBlendingCorrectionStateAttr_vtable[];
extern char igBlendingControlStateAttr_vtable[];
extern char igBlendStateAttr_vtable[];
extern char igBlendMatrixPaletteAttr_vtable[];
extern char lbl_8047D578[];
extern char igBlendMatrixPaletteAttrList_vtable[];
extern char lbl_8047DBB4[];
extern char lbl_8047E50C[];
extern char igBlendingCorrectionStateAttr_fieldTypes[4];
extern char igBlendingCorrectionStateAttr_fieldNames[4];
extern char igBlendingCorrectionStateAttr_fieldStorage[4];
extern char igBlendingCorrectionStateAttr_fieldOffsets[4];
extern char igBlendingControlStateAttr_fieldTypes[4];
extern char igBlendingControlStateAttr_fieldNames[4];
extern char igBlendingControlStateAttr_fieldStorage[4];
extern char igBlendingControlStateAttr_fieldOffsets[4];
extern char igBlendStateAttr_fieldTypes[4];
extern char igBlendStateAttr_fieldNames[4];
extern char igBlendStateAttr_fieldStorage[4];
extern char igBlendStateAttr_fieldOffsets[4];
extern char igBlendMatrixPaletteAttrList_dependencies[8];
extern void *lbl_805621F4;
extern void *igBlendingCorrectionStateAttr_meta;
extern void *igBlendingControlStateAttr_meta;
extern void *igBlendStateAttr_meta;
extern void *igBlendMatrixPaletteAttrList_meta;
extern void *igBlendMatrixPaletteAttr_meta;
void *igBlendingCorrectionStateAttr_getMeta();
void *igBlendingCorrectionStateAttr_vtableRead();
void igBlendingCorrectionStateAttr_arkRegister();
void igBlendingCorrectionStateAttr_register();
void *igBlendingCorrectionStateAttr_getMetaCall();
void igBlendingCorrectionStateAttr_fieldInit();
void *igBlendingControlStateAttr_getMeta();
void *igBlendingControlStateAttr_vtableRead();
void igBlendingControlStateAttr_arkRegister();
void igBlendingControlStateAttr_register();
void *igBlendingControlStateAttr_getMetaCall();
void igBlendingControlStateAttr_fieldInit();
void *igBlendStateAttr_getMeta();
void *igBlendStateAttr_vtableRead();
void igBlendStateAttr_arkRegister();
void igBlendStateAttr_register();
void *igBlendStateAttr_getMetaCall();
void igBlendStateAttr_fieldInit();
void *igBlendMatrixPaletteAttrList_getMeta();
void *igBlendMatrixPaletteAttrList_vtableRead();
void igBlendMatrixPaletteAttrList_arkRegister();
void igBlendMatrixPaletteAttrList_register();
void *igBlendMatrixPaletteAttrList_getMetaCall();
void *igBlendMatrixPaletteAttr_getMeta();
void *igBlendMatrixPaletteAttr_vtableRead();
void igBlendMatrixPaletteAttr_arkRegister();
void igBlendMatrixPaletteAttr_register();
void *igBlendMatrixPaletteAttr_getMetaCall();
}
struct UnknownGenObject800B9A6C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B9C20_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B9E48_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BA038_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BA20C_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *fn_800BA194(){
 if(!igBlendMatrixPaletteAttr_meta) igBlendMatrixPaletteAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igBlendMatrixPaletteAttr_meta;
}
void *igBlendMatrixPaletteAttr_getMeta(){
 if(!igBlendMatrixPaletteAttr_meta || !(reinterpret_cast<unsigned int *>(igBlendMatrixPaletteAttr_meta)[0x24/4]&4)) igBlendMatrixPaletteAttr_arkRegister();
 return igBlendMatrixPaletteAttr_meta;
}
void *igBlendMatrixPaletteAttr_vtableRead(){
 UnknownGenObject800BA20C_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igBlendMatrixPaletteAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igBlendMatrixPaletteAttr_arkRegister(){
 meta_registerNow((int)igBlendMatrixPaletteAttr_register);
}
void igBlendMatrixPaletteAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igBlendMatrixPaletteAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igBlendMatrixPaletteAttr_getMetaCall,(int)igBlendMatrixPaletteAttr_className,28,(int)igBlendMatrixPaletteAttr_vtableRead,(int)igBlendMatrixPaletteAttr_fieldInit,0,0);
}
void *igBlendMatrixPaletteAttr_getMetaCall(){return igBlendMatrixPaletteAttr_getMeta();}
}
#pragma pop
}

namespace igBlendMatrixPaletteAttr_fieldInit {
// igBlendMatrixPaletteAttr: Alchemy class registration (0x800BA31C..0x800BA3DC). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igBlendMatrixPaletteAttr)

extern "C" {
void *fn_80022DF8();
void *fn_8011FFD8();
}

#pragma push
#pragma auto_inline off
extern "C" {

void igBlendMatrixPaletteAttr_fieldInit()
{
    Meta::igMetaObject *meta = igBlendMatrixPaletteAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igBlendMatrixPaletteAttr_fieldTypes, 4);
    Meta::igMemoryRefMetaField *matrixCacheField = static_cast<Meta::igMemoryRefMetaField *>(meta_field(meta, base));
    void *value_v2 = fn_8011FFD8();
    matrixCacheField->_memType = reinterpret_cast<Meta::igMetaField *>(value_v2);
    matrixCacheField->_destruct = true;
    matrixCacheField->_releaseOnCopy = true;
    matrixCacheField->_releaseOnReset = true;
    Meta::igMemoryRefMetaField *matrixIndicesField = static_cast<Meta::igMemoryRefMetaField *>(meta_field(meta, base + 1));
    void *value_v4 = fn_80022DF8();
    matrixIndicesField->_memType = reinterpret_cast<Meta::igMetaField *>(value_v4);
    matrixIndicesField->_destruct = true;
    matrixIndicesField->_releaseOnCopy = true;
    matrixIndicesField->_releaseOnReset = true;
    meta_setupFields(meta, igBlendMatrixPaletteAttr_fieldNames, igBlendMatrixPaletteAttr_fieldStorage, igBlendMatrixPaletteAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace unknown800BA3DC {
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void *fn_800AC294();
void igBlendMatricesAttr_fieldInit();
void igVisualAttribute_register();
extern char igBlendMatricesAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *igBlendMatricesAttr_meta;
void *igBlendMatricesAttr_getMeta();
void *igBlendMatricesAttr_vtableRead();
void igBlendMatricesAttr_arkRegister();
void igBlendMatricesAttr_register();
void *igBlendMatricesAttr_getMetaCall();
}
struct UnknownGenObject800BA450_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *igBlendMatricesAttr_create(void *object){
 igBlendMatricesAttr_arkRegister();
 return meta_createInstance(igBlendMatricesAttr_meta,object);
}
void *igBlendMatricesAttr_getMeta(){
 if(!igBlendMatricesAttr_meta || !(reinterpret_cast<unsigned int *>(igBlendMatricesAttr_meta)[0x24/4]&4)) igBlendMatricesAttr_arkRegister();
 return igBlendMatricesAttr_meta;
}
void *igBlendMatricesAttr_vtableRead(){
 UnknownGenObject800BA450_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igBlendMatricesAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igBlendMatricesAttr_arkRegister(){
 meta_registerNow((int)igBlendMatricesAttr_register);
}
void igBlendMatricesAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igBlendMatricesAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igBlendMatricesAttr_getMetaCall,(int)igBlendMatricesAttr_className,24,(int)igBlendMatricesAttr_vtableRead,(int)igBlendMatricesAttr_fieldInit,0,0);
}
void *igBlendMatricesAttr_getMetaCall(){return igBlendMatricesAttr_getMeta();}
}
#pragma pop
}

namespace igBlendMatricesAttr_fieldInit {
// igBlendMatricesAttr: Alchemy class registration (0x800BA560..0x800BA5F8). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igBlendMatricesAttr)

extern "C" {
void *fn_8011FFD8();
}

#pragma push
#pragma auto_inline off
extern "C" {

void igBlendMatricesAttr_fieldInit()
{
    Meta::igMetaObject *meta = igBlendMatricesAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igBlendMatricesAttr_fieldTypes, 3);
    Meta::igMemoryRefMetaField *matrixCacheField = static_cast<Meta::igMemoryRefMetaField *>(meta_field(meta, base));
    void *value_v2 = fn_8011FFD8();
    matrixCacheField->_memType = reinterpret_cast<Meta::igMetaField *>(value_v2);
    matrixCacheField->_destruct = true;
    matrixCacheField->_releaseOnCopy = true;
    matrixCacheField->_releaseOnReset = true;
    meta_setupFields(meta, igBlendMatricesAttr_fieldNames, igBlendMatricesAttr_fieldStorage, igBlendMatricesAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace unknown800BA5F8 {
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void *fn_800AC294();
void igBlendFunctionAttr_fieldInit();
void igVisualAttribute_register();
extern char igBlendFunctionAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char igBlendFunctionAttr_dependencies[8];
extern void *lbl_805621F4;
extern void *lbl_80562A08;
extern void *lbl_80562A0C;
extern void *igBlendFunctionAttr_meta;
void *igBlendFunctionAttr_getMeta();
void *igBlendFunctionAttr_vtableRead();
void igBlendFunctionAttr_arkRegister();
void igBlendFunctionAttr_register();
void *igBlendFunctionAttr_getMetaCall();
}
struct UnknownGenRoot800BA740 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800BA740(){igObject_construct(this);}
};
struct UnknownGenObject800BA740 : UnknownGenRoot800BA740 {
 char unknown04[20];
 UnknownGenRefMember unknown18;
 char unknown1C[36];
 inline ~UnknownGenObject800BA740(){unknown00=igBlendFunctionAttr_vtable;}
};
extern "C" {
void *fn_800BA5F8(){
 char *data=igVisualContextAttrDefaultManager_className;
 if(!lbl_80562A08) lbl_80562A08=fn_800635C8(data+0x211C,data+0x2104,data+0x2110,0x3);
 return lbl_80562A08;
}
void *fn_800BA644(){
 char *data=igVisualContextAttrDefaultManager_className;
 if(!lbl_80562A0C) lbl_80562A0C=fn_800635C8(data+0x21A8,data+0x2190,data+0x219C,0x3);
 return lbl_80562A0C;
}
}
#pragma pop
}

namespace igBlendFunctionAttr {
// igBlendFunctionAttr: Alchemy class registration (0x800BA690..0x800BA6C8). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igBlendFunctionAttr)

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igBlendFunctionAttr)

}
#pragma pop
}

namespace unknown800BA6C8 {
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void *fn_800AC294();
void igBlendFunctionAttr_fieldInit();
void igVisualAttribute_register();
extern char igBlendFunctionAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char igBlendFunctionAttr_dependencies[8];
extern void *lbl_805621F4;
extern void *lbl_80562A08;
extern void *lbl_80562A0C;
extern void *igBlendFunctionAttr_meta;
void *igBlendFunctionAttr_getMeta();
void *igBlendFunctionAttr_vtableRead();
void igBlendFunctionAttr_arkRegister();
void igBlendFunctionAttr_register();
void *igBlendFunctionAttr_getMetaCall();
}
struct UnknownGenRoot800BA740 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800BA740(){igObject_construct(this);}
};
struct UnknownGenObject800BA740 : UnknownGenRoot800BA740 {
 char unknown04[20];
 UnknownGenRefMember unknown18;
 char unknown1C[36];
 inline ~UnknownGenObject800BA740(){unknown00=igBlendFunctionAttr_vtable;}
};
extern "C" {
void *fn_800BA6C8(){
 if(!igBlendFunctionAttr_meta) igBlendFunctionAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igBlendFunctionAttr_meta;
}
void *igBlendFunctionAttr_getMeta(){
 if(!igBlendFunctionAttr_meta || !(reinterpret_cast<unsigned int *>(igBlendFunctionAttr_meta)[0x24/4]&4)) igBlendFunctionAttr_arkRegister();
 return igBlendFunctionAttr_meta;
}
void *igBlendFunctionAttr_vtableRead(){
 UnknownGenObject800BA740 object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igBlendFunctionAttr_vtable;
 object.unknown18.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igBlendFunctionAttr_arkRegister(){
 meta_registerNow((int)igBlendFunctionAttr_register);
}
void igBlendFunctionAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igBlendFunctionAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igBlendFunctionAttr_getMetaCall,(int)igBlendFunctionAttr_className,52,(int)igBlendFunctionAttr_vtableRead,(int)igBlendFunctionAttr_fieldInit,0,(int)igBlendFunctionAttr_dependencies);
}
void *igBlendFunctionAttr_getMetaCall(){return igBlendFunctionAttr_getMeta();}
}
#pragma pop
}

namespace igBlendFunctionAttr_fieldInit {
// igBlendFunctionAttr: Alchemy class registration (0x800BA89C..0x800BAA8C). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igBlendFunctionAttr)

extern "C" {
void fn_8003D160();
void fn_80046E58(void *, void *);
void fn_8004D4BC(void *, float);
void fn_80075874(void *, int);
void fn_800BA5F8();
void fn_800BA644();
void fn_800BD638();
void fn_800BD6A0();
void fn_800CDE3C();
void *fn_800D598C();
extern char lbl_8055E6AC[4];
extern char lbl_8055E6B0[4];
extern char lbl_8055E6B4[4];
extern char lbl_8055E6B8[4];
extern char lbl_8055E6BC[4];
extern char lbl_8055E6C0[4];
extern char lbl_8055E6C4[4];
extern const char lbl_80566814[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igBlendFunctionAttr_fieldInit()
{
    Meta::igMetaObject *meta = igBlendFunctionAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igBlendFunctionAttr_fieldTypes, 11);
    Meta::igEnumMetaField *srcField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base));
    fn_80046E58(srcField, (void *)lbl_8055E6AC);
    srcField->_getMetaEnumFunction = reinterpret_cast<void *>(fn_800CDE3C);
    Meta::igEnumMetaField *dstField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base + 1));
    fn_80046E58(dstField, (void *)lbl_8055E6B0);
    dstField->_getMetaEnumFunction = reinterpret_cast<void *>(fn_800CDE3C);
    Meta::igEnumMetaField *eqField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base + 2));
    fn_80046E58(eqField, (void *)lbl_8055E6B4);
    eqField->_getMetaEnumFunction = reinterpret_cast<void *>(fn_8003D160);
    Meta::igObjectRefMetaField *blendEquationExtField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 3));
    void *value_v5 = fn_800D598C();
    blendEquationExtField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v5);
    blendEquationExtField->_deepCopyMethod = 1;
    blendEquationExtField->_shallowCopyMethod = 1;
    blendEquationExtField->_isAlikeShallowMethod = 3;
    Meta::igUnsignedCharMetaField *blendConstantField = static_cast<Meta::igUnsignedCharMetaField *>(meta_field(meta, base + 4));
    fn_80075874(blendConstantField, 0);
    Meta::igShortMetaField *blendStageField = static_cast<Meta::igShortMetaField *>(meta_field(meta, base + 5));
    blendStageField->_invarianceFunction = reinterpret_cast<void *>(fn_800BD638);
    Meta::igFloatMetaField *blendConstantFloatField = static_cast<Meta::igFloatMetaField *>(meta_field(meta, base + 6));
    fn_8004D4BC(blendConstantFloatField, *reinterpret_cast<const float *>(lbl_80566814));
    blendConstantFloatField->_persistent = false;
    blendConstantFloatField->_invarianceFunction = reinterpret_cast<void *>(fn_800BD6A0);
    Meta::igEnumMetaField *blendAField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base + 7));
    fn_80046E58(blendAField, (void *)lbl_8055E6B8);
    blendAField->_getMetaEnumFunction = reinterpret_cast<void *>(fn_800BA644);
    Meta::igEnumMetaField *blendBField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base + 8));
    fn_80046E58(blendBField, (void *)lbl_8055E6BC);
    blendBField->_getMetaEnumFunction = reinterpret_cast<void *>(fn_800BA644);
    Meta::igEnumMetaField *blendCField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base + 9));
    fn_80046E58(blendCField, (void *)lbl_8055E6C0);
    blendCField->_getMetaEnumFunction = reinterpret_cast<void *>(fn_800BA5F8);
    Meta::igEnumMetaField *blendDField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base + 10));
    fn_80046E58(blendDField, (void *)lbl_8055E6C4);
    blendDField->_getMetaEnumFunction = reinterpret_cast<void *>(fn_800BA644);
    meta_setupFields(meta, igBlendFunctionAttr_fieldNames, igBlendFunctionAttr_fieldStorage, igBlendFunctionAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace igTextureList {
// igTextureList: Alchemy class registration (0x800BAA8C..0x800BAAC4). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igTextureList)

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igTextureList)

}
#pragma pop
}

namespace unknown800BAAC4 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void fn_800BB148();
void igAttrPool_fieldInit();
void igObjectList_register();
void igObject_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igAttrPool_vtable[];
extern char igGeometryAttrList_vtable[];
extern char lbl_8047DA24[];
extern char igTextureList_vtable[];
extern char lbl_8047DAEC[];
extern char igTextureList_dependencies[8];
extern char igGeometryAttrList_dependencies[8];
extern void *lbl_805621F4;
extern void *igTextureList_meta;
extern void *igGeometryAttrList_meta;
extern void *igAttrPool_meta;
void *igTextureList_getMeta();
void *igTextureList_vtableRead();
void igTextureList_arkRegister();
void igTextureList_register();
void *igTextureList_getMetaCall();
void *igGeometryAttrList_getMeta();
void *igGeometryAttrList_vtableRead();
void igGeometryAttrList_arkRegister();
void igGeometryAttrList_register();
void *igGeometryAttrList_getMetaCall();
void *igAttrPool_getMeta();
void *igAttrPool_vtableRead();
void igAttrPool_arkRegister();
void igAttrPool_register();
void *igAttrPool_getMetaCall();
}
struct UnknownGenObject800BAB3C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BAD10_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800BAEA8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800BAEA8(){igObject_construct(this);}
};
struct UnknownGenObject800BAEA8 : UnknownGenRoot800BAEA8 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[4];
 inline ~UnknownGenObject800BAEA8(){unknown00=igAttrPool_vtable;}
};
extern "C" {
void *fn_800BAAC4(){
 if(!igTextureList_meta) igTextureList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igTextureList_meta;
}
}
#pragma pop
}

namespace igTextureList_2 {
// igTextureList: Alchemy class registration (0x800BAB00..0x800BAC60). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igTextureList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_800ABC8C();
extern char igTextureList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_8047DAEC[];
}

struct Instance_800BAB3C_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igTextureList)

void *igTextureList_vtableRead()
{
    Instance_800BAB3C_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_8047DAEC;
    object.__vtable = igTextureList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igTextureList)

void igTextureList_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igTextureList_meta, igObjectList_register,
                       fn_80024180, igTextureList_getMetaCall,
                       igTextureList_className, 0x14,
                       igTextureList_vtableRead, 0, 0, igTextureList_dependencies);
}

META_GET_META_CALL(igTextureList)

}
#pragma pop
}

namespace igGeometryAttrList {
// igGeometryAttrList: Alchemy class registration (0x800BAC60..0x800BAC98). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igGeometryAttrList)

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igGeometryAttrList)

}
#pragma pop
}

namespace unknown800BAC98 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void fn_800BB148();
void igAttrPool_fieldInit();
void igObjectList_register();
void igObject_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igAttrPool_vtable[];
extern char igGeometryAttrList_vtable[];
extern char lbl_8047DA24[];
extern char igTextureList_vtable[];
extern char lbl_8047DAEC[];
extern char igTextureList_dependencies[8];
extern char igGeometryAttrList_dependencies[8];
extern void *lbl_805621F4;
extern void *igTextureList_meta;
extern void *igGeometryAttrList_meta;
extern void *igAttrPool_meta;
void *igTextureList_getMeta();
void *igTextureList_vtableRead();
void igTextureList_arkRegister();
void igTextureList_register();
void *igTextureList_getMetaCall();
void *igGeometryAttrList_getMeta();
void *igGeometryAttrList_vtableRead();
void igGeometryAttrList_arkRegister();
void igGeometryAttrList_register();
void *igGeometryAttrList_getMetaCall();
void *igAttrPool_getMeta();
void *igAttrPool_vtableRead();
void igAttrPool_arkRegister();
void igAttrPool_register();
void *igAttrPool_getMetaCall();
}
struct UnknownGenObject800BAB3C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BAD10_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800BAEA8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800BAEA8(){igObject_construct(this);}
};
struct UnknownGenObject800BAEA8 : UnknownGenRoot800BAEA8 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[4];
 inline ~UnknownGenObject800BAEA8(){unknown00=igAttrPool_vtable;}
};
extern "C" {
void *fn_800BAC98(){
 if(!igGeometryAttrList_meta) igGeometryAttrList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igGeometryAttrList_meta;
}
}
#pragma pop
}

namespace igGeometryAttrList_2 {
// igGeometryAttrList: Alchemy class registration (0x800BACD4..0x800BAE34). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igGeometryAttrList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_800ABC8C();
extern char igGeometryAttrList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_8047DA24[];
}

struct Instance_800BAD10_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igGeometryAttrList)

void *igGeometryAttrList_vtableRead()
{
    Instance_800BAD10_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_8047DA24;
    object.__vtable = igGeometryAttrList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igGeometryAttrList)

void igGeometryAttrList_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igGeometryAttrList_meta, igObjectList_register,
                       fn_80024180, igGeometryAttrList_getMetaCall,
                       igGeometryAttrList_className, 0x14,
                       igGeometryAttrList_vtableRead, 0, 0, igGeometryAttrList_dependencies);
}

META_GET_META_CALL(igGeometryAttrList)

}
#pragma pop
}

namespace unknown800BAE34 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void fn_800BB148();
void igAttrPool_fieldInit();
void igObjectList_register();
void igObject_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igAttrPool_vtable[];
extern char igGeometryAttrList_vtable[];
extern char lbl_8047DA24[];
extern char igTextureList_vtable[];
extern char lbl_8047DAEC[];
extern char igTextureList_dependencies[8];
extern char igGeometryAttrList_dependencies[8];
extern void *lbl_805621F4;
extern void *igTextureList_meta;
extern void *igGeometryAttrList_meta;
extern void *igAttrPool_meta;
void *igTextureList_getMeta();
void *igTextureList_vtableRead();
void igTextureList_arkRegister();
void igTextureList_register();
void *igTextureList_getMetaCall();
void *igGeometryAttrList_getMeta();
void *igGeometryAttrList_vtableRead();
void igGeometryAttrList_arkRegister();
void igGeometryAttrList_register();
void *igGeometryAttrList_getMetaCall();
void *igAttrPool_getMeta();
void *igAttrPool_vtableRead();
void igAttrPool_arkRegister();
void igAttrPool_register();
void *igAttrPool_getMetaCall();
}
struct UnknownGenObject800BAB3C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BAD10_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800BAEA8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800BAEA8(){igObject_construct(this);}
};
struct UnknownGenObject800BAEA8 : UnknownGenRoot800BAEA8 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[4];
 inline ~UnknownGenObject800BAEA8(){unknown00=igAttrPool_vtable;}
};
extern "C" {
void *igAttrPool_create(void *object){
 igAttrPool_arkRegister();
 return meta_createInstance(igAttrPool_meta,object);
}
void *igAttrPool_getMeta(){
 if(!igAttrPool_meta || !(reinterpret_cast<unsigned int *>(igAttrPool_meta)[0x24/4]&4)) igAttrPool_arkRegister();
 return igAttrPool_meta;
}
void *igAttrPool_vtableRead(){
 UnknownGenObject800BAEA8 object;
 object.unknown00=igAttrPool_vtable;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igAttrPool_arkRegister(){
 meta_registerNow((int)igAttrPool_register);
}
void igAttrPool_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igAttrPool_meta,(int)igObject_register,(int)fn_800237D0,(int)igAttrPool_getMetaCall,(int)igAttrPool_className,20,(int)igAttrPool_vtableRead,(int)igAttrPool_fieldInit,(int)fn_800BB148,(int)igAttrPool_dependencies);
}
void *igAttrPool_getMetaCall(){return igAttrPool_getMeta();}
}
#pragma pop
}

namespace igAttrPool_fieldInit {
// igAttrPool: Alchemy class registration (0x800BB06C..0x800BB148). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igAttrPool)

extern "C" {
void *fn_800343B8();
void fn_80065D94(void *);
void fn_800BB168();
void *fn_800BB2AC();
}

#pragma push
#pragma auto_inline off
extern "C" {

void igAttrPool_fieldInit()
{
    Meta::igMetaObject *meta = igAttrPool_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igAttrPool_fieldTypes, 3);
    Meta::igObjectRefMetaField *metaListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_v2 = fn_800343B8();
    metaListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v2);
    metaListField->_construct = true;
    Meta::igObjectRefMetaField *nonSharableMetaListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_v4 = fn_800343B8();
    nonSharableMetaListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v4);
    nonSharableMetaListField->_construct = true;
    Meta::igObjectRefMetaField *attributeListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    void *value_v6 = fn_800BB2AC();
    attributeListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v6);
    attributeListField->_construct = true;
    meta_setupFields(meta, igAttrPool_fieldNames, igAttrPool_fieldStorage, igAttrPool_fieldOffsets, base);
    fn_80065D94(fn_800BB168);
}

}
#pragma pop
}

namespace unknown800BB148 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80023FDC();
void *fn_80024180();
void *meta_newMetaObject(void *);
void fn_80046E58(void *,void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void fn_80065DBC(int);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800711A8(void *,int);
void fn_800ABC8C();
void *fn_800AC294();
void fn_800BCB68();
void *fn_800BCC14(int);
void *fn_800BD398();
void fn_800BD3E4();
void fn_800CDDF0();
void igNonRefCountedObjectList_register();
void igObjectList_register();
void igObject_register();
void igTextureSwapTableAttr_fieldInit();
void igVisualAttribute_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char igNonRefCountedObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igTextureSwapTableAttr_vtable[];
extern char lbl_8047D578[];
extern char igAlphaStateAttr_vtable[];
extern char igAlphaFunctionAttr_vtable[];
extern char igAttrList_vtable[];
extern char lbl_8047D768[];
extern char igNonRefCountedAttrList_vtable[];
extern char lbl_8047D830[];
extern char igAttrListList_vtable[];
extern char lbl_8047D95C[];
extern char lbl_8047E50C[];
extern char igAttrListList_dependencies[8];
extern char igNonRefCountedAttrList_dependencies[8];
extern char igAttrList_dependencies[8];
extern char lbl_8055E6F0[7];
extern char igAttr_fieldTypes[8];
extern char igAttr_fieldNames[8];
extern char igAttr_fieldStorage[8];
extern char igAttr_fieldOffsets[8];
extern char igAlphaStateAttr_fieldTypes[4];
extern char igAlphaStateAttr_fieldNames[4];
extern char igAlphaStateAttr_fieldStorage[4];
extern char igAlphaStateAttr_fieldOffsets[4];
extern char igAlphaFunctionAttr_fieldTypes[8];
extern char igAlphaFunctionAttr_fieldNames[8];
extern char igAlphaFunctionAttr_fieldStorage[8];
extern char igAlphaFunctionAttr_fieldOffsets[8];
extern char lbl_8055E748[4];
extern void *lbl_805621F4;
extern void *igAttrDefaultManager_meta;
extern void *igAttrListList_meta;
extern void *igNonRefCountedAttrList_meta;
extern void *igAttrList_meta;
extern void *igAttr_meta;
extern void *igAlphaStateAttr_meta;
extern void *igAlphaFunctionAttr_meta;
extern void *igTextureSwapTableAttr_meta;
void *igAttrDefaultManager_getMeta();
void igAttrDefaultManager_arkRegister();
void igAttrDefaultManager_register();
void *igAttrDefaultManager_getMetaCall();
void *igAttrListList_getMeta();
void *igAttrListList_vtableRead();
void igAttrListList_arkRegister();
void igAttrListList_register();
void *igAttrListList_getMetaCall();
void *igNonRefCountedAttrList_getMeta();
void *igNonRefCountedAttrList_vtableRead();
void igNonRefCountedAttrList_arkRegister();
void igNonRefCountedAttrList_register();
void *igNonRefCountedAttrList_getMetaCall();
void *igAttrList_getMeta();
void *igAttrList_vtableRead();
void igAttrList_arkRegister();
void igAttrList_register();
void *igAttrList_getMetaCall();
void *igAttr_getMeta();
void igAttr_arkRegister();
void igAttr_register();
void *igAttr_getMetaCall();
void igAttr_fieldInit();
void fn_800BB970();
void *igAlphaStateAttr_getMeta();
void *igAlphaStateAttr_vtableRead();
void igAlphaStateAttr_arkRegister();
void igAlphaStateAttr_register();
void *igAlphaStateAttr_getMetaCall();
void igAlphaStateAttr_fieldInit();
void *igAlphaFunctionAttr_getMeta();
void *igAlphaFunctionAttr_vtableRead();
void igAlphaFunctionAttr_arkRegister();
void igAlphaFunctionAttr_register();
void *igAlphaFunctionAttr_getMetaCall();
void igAlphaFunctionAttr_fieldInit();
void *igTextureSwapTableAttr_getMeta();
void *igTextureSwapTableAttr_vtableRead();
void igTextureSwapTableAttr_arkRegister();
void igTextureSwapTableAttr_register();
void *igTextureSwapTableAttr_getMetaCall();
}
struct UnknownGenObject800BB324_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BB4C0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BB694_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BBA4C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BBC38_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BBE48_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void fn_800BB148(){return fn_800BD3E4();}
void *fn_800BB168(){return fn_800BD398();}
void *fn_800BB188(){
 if(!igAttrDefaultManager_meta) igAttrDefaultManager_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igAttrDefaultManager_meta;
}
}
#pragma pop
}

namespace igAttrDefaultManager {
// igAttrDefaultManager: Alchemy class registration (0x800BB1C4..0x800BB2AC). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igAttrDefaultManager)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_800ABC8C();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igAttrDefaultManager)

META_ARK_REGISTER(igAttrDefaultManager)

void igAttrDefaultManager_register()
{
    fn_800ABC8C();
    meta_registerClass(1, &igAttrDefaultManager_meta, igObject_register,
                       fn_800237D0, igAttrDefaultManager_getMetaCall,
                       igAttrDefaultManager_className, 0x8,
                       0, 0, 0, 0);
}

META_GET_META_CALL(igAttrDefaultManager)

}
#pragma pop
}

namespace unknown800BB2AC {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80023FDC();
void *fn_80024180();
void *meta_newMetaObject(void *);
void fn_80046E58(void *,void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void fn_80065DBC(int);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800711A8(void *,int);
void fn_800ABC8C();
void *fn_800AC294();
void fn_800BCB68();
void *fn_800BCC14(int);
void *fn_800BD398();
void fn_800BD3E4();
void fn_800CDDF0();
void igNonRefCountedObjectList_register();
void igObjectList_register();
void igObject_register();
void igTextureSwapTableAttr_fieldInit();
void igVisualAttribute_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char igNonRefCountedObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igTextureSwapTableAttr_vtable[];
extern char lbl_8047D578[];
extern char igAlphaStateAttr_vtable[];
extern char igAlphaFunctionAttr_vtable[];
extern char igAttrList_vtable[];
extern char lbl_8047D768[];
extern char igNonRefCountedAttrList_vtable[];
extern char lbl_8047D830[];
extern char igAttrListList_vtable[];
extern char lbl_8047D95C[];
extern char lbl_8047E50C[];
extern char igAttrListList_dependencies[8];
extern char igNonRefCountedAttrList_dependencies[8];
extern char igAttrList_dependencies[8];
extern char lbl_8055E6F0[7];
extern char igAttr_fieldTypes[8];
extern char igAttr_fieldNames[8];
extern char igAttr_fieldStorage[8];
extern char igAttr_fieldOffsets[8];
extern char igAlphaStateAttr_fieldTypes[4];
extern char igAlphaStateAttr_fieldNames[4];
extern char igAlphaStateAttr_fieldStorage[4];
extern char igAlphaStateAttr_fieldOffsets[4];
extern char igAlphaFunctionAttr_fieldTypes[8];
extern char igAlphaFunctionAttr_fieldNames[8];
extern char igAlphaFunctionAttr_fieldStorage[8];
extern char igAlphaFunctionAttr_fieldOffsets[8];
extern char lbl_8055E748[4];
extern void *lbl_805621F4;
extern void *igAttrDefaultManager_meta;
extern void *igAttrListList_meta;
extern void *igNonRefCountedAttrList_meta;
extern void *igAttrList_meta;
extern void *igAttr_meta;
extern void *igAlphaStateAttr_meta;
extern void *igAlphaFunctionAttr_meta;
extern void *igTextureSwapTableAttr_meta;
void *igAttrDefaultManager_getMeta();
void igAttrDefaultManager_arkRegister();
void igAttrDefaultManager_register();
void *igAttrDefaultManager_getMetaCall();
void *igAttrListList_getMeta();
void *igAttrListList_vtableRead();
void igAttrListList_arkRegister();
void igAttrListList_register();
void *igAttrListList_getMetaCall();
void *igNonRefCountedAttrList_getMeta();
void *igNonRefCountedAttrList_vtableRead();
void igNonRefCountedAttrList_arkRegister();
void igNonRefCountedAttrList_register();
void *igNonRefCountedAttrList_getMetaCall();
void *igAttrList_getMeta();
void *igAttrList_vtableRead();
void igAttrList_arkRegister();
void igAttrList_register();
void *igAttrList_getMetaCall();
void *igAttr_getMeta();
void igAttr_arkRegister();
void igAttr_register();
void *igAttr_getMetaCall();
void igAttr_fieldInit();
void fn_800BB970();
void *igAlphaStateAttr_getMeta();
void *igAlphaStateAttr_vtableRead();
void igAlphaStateAttr_arkRegister();
void igAlphaStateAttr_register();
void *igAlphaStateAttr_getMetaCall();
void igAlphaStateAttr_fieldInit();
void *igAlphaFunctionAttr_getMeta();
void *igAlphaFunctionAttr_vtableRead();
void igAlphaFunctionAttr_arkRegister();
void igAlphaFunctionAttr_register();
void *igAlphaFunctionAttr_getMetaCall();
void igAlphaFunctionAttr_fieldInit();
void *igTextureSwapTableAttr_getMeta();
void *igTextureSwapTableAttr_vtableRead();
void igTextureSwapTableAttr_arkRegister();
void igTextureSwapTableAttr_register();
void *igTextureSwapTableAttr_getMetaCall();
}
struct UnknownGenObject800BB324_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BB4C0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BB694_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BBA4C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BBC38_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BBE48_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *fn_800BB2AC(){
 if(!igAttrListList_meta) igAttrListList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igAttrListList_meta;
}
}
#pragma pop
}

namespace igAttrListList {
// igAttrListList: Alchemy class registration (0x800BB2E8..0x800BB448). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igAttrListList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_800ABC8C();
extern char igAttrListList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_8047D95C[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igAttrListList)

void *igAttrListList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_8047D95C;
    object.__vtable = igAttrListList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igAttrListList)

void igAttrListList_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igAttrListList_meta, igObjectList_register,
                       fn_80024180, igAttrListList_getMetaCall,
                       igAttrListList_className, 0x14,
                       igAttrListList_vtableRead, 0, 0, igAttrListList_dependencies);
}

META_GET_META_CALL(igAttrListList)

}
#pragma pop
}

namespace unknown800BB448 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80023FDC();
void *fn_80024180();
void *meta_newMetaObject(void *);
void fn_80046E58(void *,void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void fn_80065DBC(int);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800711A8(void *,int);
void fn_800ABC8C();
void *fn_800AC294();
void fn_800BCB68();
void *fn_800BCC14(int);
void *fn_800BD398();
void fn_800BD3E4();
void fn_800CDDF0();
void igNonRefCountedObjectList_register();
void igObjectList_register();
void igObject_register();
void igTextureSwapTableAttr_fieldInit();
void igVisualAttribute_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char igNonRefCountedObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igTextureSwapTableAttr_vtable[];
extern char lbl_8047D578[];
extern char igAlphaStateAttr_vtable[];
extern char igAlphaFunctionAttr_vtable[];
extern char igAttrList_vtable[];
extern char lbl_8047D768[];
extern char igNonRefCountedAttrList_vtable[];
extern char lbl_8047D830[];
extern char igAttrListList_vtable[];
extern char lbl_8047D95C[];
extern char lbl_8047E50C[];
extern char igAttrListList_dependencies[8];
extern char igNonRefCountedAttrList_dependencies[8];
extern char igAttrList_dependencies[8];
extern char lbl_8055E6F0[7];
extern char igAttr_fieldTypes[8];
extern char igAttr_fieldNames[8];
extern char igAttr_fieldStorage[8];
extern char igAttr_fieldOffsets[8];
extern char igAlphaStateAttr_fieldTypes[4];
extern char igAlphaStateAttr_fieldNames[4];
extern char igAlphaStateAttr_fieldStorage[4];
extern char igAlphaStateAttr_fieldOffsets[4];
extern char igAlphaFunctionAttr_fieldTypes[8];
extern char igAlphaFunctionAttr_fieldNames[8];
extern char igAlphaFunctionAttr_fieldStorage[8];
extern char igAlphaFunctionAttr_fieldOffsets[8];
extern char lbl_8055E748[4];
extern void *lbl_805621F4;
extern void *igAttrDefaultManager_meta;
extern void *igAttrListList_meta;
extern void *igNonRefCountedAttrList_meta;
extern void *igAttrList_meta;
extern void *igAttr_meta;
extern void *igAlphaStateAttr_meta;
extern void *igAlphaFunctionAttr_meta;
extern void *igTextureSwapTableAttr_meta;
void *igAttrDefaultManager_getMeta();
void igAttrDefaultManager_arkRegister();
void igAttrDefaultManager_register();
void *igAttrDefaultManager_getMetaCall();
void *igAttrListList_getMeta();
void *igAttrListList_vtableRead();
void igAttrListList_arkRegister();
void igAttrListList_register();
void *igAttrListList_getMetaCall();
void *igNonRefCountedAttrList_getMeta();
void *igNonRefCountedAttrList_vtableRead();
void igNonRefCountedAttrList_arkRegister();
void igNonRefCountedAttrList_register();
void *igNonRefCountedAttrList_getMetaCall();
void *igAttrList_getMeta();
void *igAttrList_vtableRead();
void igAttrList_arkRegister();
void igAttrList_register();
void *igAttrList_getMetaCall();
void *igAttr_getMeta();
void igAttr_arkRegister();
void igAttr_register();
void *igAttr_getMetaCall();
void igAttr_fieldInit();
void fn_800BB970();
void *igAlphaStateAttr_getMeta();
void *igAlphaStateAttr_vtableRead();
void igAlphaStateAttr_arkRegister();
void igAlphaStateAttr_register();
void *igAlphaStateAttr_getMetaCall();
void igAlphaStateAttr_fieldInit();
void *igAlphaFunctionAttr_getMeta();
void *igAlphaFunctionAttr_vtableRead();
void igAlphaFunctionAttr_arkRegister();
void igAlphaFunctionAttr_register();
void *igAlphaFunctionAttr_getMetaCall();
void igAlphaFunctionAttr_fieldInit();
void *igTextureSwapTableAttr_getMeta();
void *igTextureSwapTableAttr_vtableRead();
void igTextureSwapTableAttr_arkRegister();
void igTextureSwapTableAttr_register();
void *igTextureSwapTableAttr_getMetaCall();
}
struct UnknownGenObject800BB324_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BB4C0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BB694_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BBA4C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BBC38_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BBE48_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *fn_800BB448(){
 if(!igNonRefCountedAttrList_meta) igNonRefCountedAttrList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igNonRefCountedAttrList_meta;
}
}
#pragma pop
}

namespace igNonRefCountedAttrList {
// igNonRefCountedAttrList: Alchemy class registration (0x800BB484..0x800BB5E4). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igNonRefCountedAttrList)
META_DECLARE(igDataList)
META_DECLARE(igNonRefCountedObjectList)

extern "C" {
void *fn_80023FDC();
void fn_800ABC8C();
extern char igNonRefCountedAttrList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_8047D830[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igNonRefCountedAttrList)

void *igNonRefCountedAttrList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igNonRefCountedObjectList_vtable;
    object.__vtable = lbl_8047D830;
    object.__vtable = igNonRefCountedAttrList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igNonRefCountedAttrList)

void igNonRefCountedAttrList_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igNonRefCountedAttrList_meta, igNonRefCountedObjectList_register,
                       fn_80023FDC, igNonRefCountedAttrList_getMetaCall,
                       igNonRefCountedAttrList_className, 0x14,
                       igNonRefCountedAttrList_vtableRead, 0, 0, igNonRefCountedAttrList_dependencies);
}

META_GET_META_CALL(igNonRefCountedAttrList)

}
#pragma pop
}

namespace igAttrList {
// igAttrList: Alchemy class registration (0x800BB5E4..0x800BB61C). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igAttrList)

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igAttrList)

}
#pragma pop
}

namespace unknown800BB61C {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80023FDC();
void *fn_80024180();
void *meta_newMetaObject(void *);
void fn_80046E58(void *,void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void fn_80065DBC(int);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800711A8(void *,int);
void fn_800ABC8C();
void *fn_800AC294();
void fn_800BCB68();
void *fn_800BCC14(int);
void *fn_800BD398();
void fn_800BD3E4();
void fn_800CDDF0();
void igNonRefCountedObjectList_register();
void igObjectList_register();
void igObject_register();
void igTextureSwapTableAttr_fieldInit();
void igVisualAttribute_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char igNonRefCountedObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igTextureSwapTableAttr_vtable[];
extern char lbl_8047D578[];
extern char igAlphaStateAttr_vtable[];
extern char igAlphaFunctionAttr_vtable[];
extern char igAttrList_vtable[];
extern char lbl_8047D768[];
extern char igNonRefCountedAttrList_vtable[];
extern char lbl_8047D830[];
extern char igAttrListList_vtable[];
extern char lbl_8047D95C[];
extern char lbl_8047E50C[];
extern char igAttrListList_dependencies[8];
extern char igNonRefCountedAttrList_dependencies[8];
extern char igAttrList_dependencies[8];
extern char lbl_8055E6F0[7];
extern char igAttr_fieldTypes[8];
extern char igAttr_fieldNames[8];
extern char igAttr_fieldStorage[8];
extern char igAttr_fieldOffsets[8];
extern char igAlphaStateAttr_fieldTypes[4];
extern char igAlphaStateAttr_fieldNames[4];
extern char igAlphaStateAttr_fieldStorage[4];
extern char igAlphaStateAttr_fieldOffsets[4];
extern char igAlphaFunctionAttr_fieldTypes[8];
extern char igAlphaFunctionAttr_fieldNames[8];
extern char igAlphaFunctionAttr_fieldStorage[8];
extern char igAlphaFunctionAttr_fieldOffsets[8];
extern char lbl_8055E748[4];
extern void *lbl_805621F4;
extern void *igAttrDefaultManager_meta;
extern void *igAttrListList_meta;
extern void *igNonRefCountedAttrList_meta;
extern void *igAttrList_meta;
extern void *igAttr_meta;
extern void *igAlphaStateAttr_meta;
extern void *igAlphaFunctionAttr_meta;
extern void *igTextureSwapTableAttr_meta;
void *igAttrDefaultManager_getMeta();
void igAttrDefaultManager_arkRegister();
void igAttrDefaultManager_register();
void *igAttrDefaultManager_getMetaCall();
void *igAttrListList_getMeta();
void *igAttrListList_vtableRead();
void igAttrListList_arkRegister();
void igAttrListList_register();
void *igAttrListList_getMetaCall();
void *igNonRefCountedAttrList_getMeta();
void *igNonRefCountedAttrList_vtableRead();
void igNonRefCountedAttrList_arkRegister();
void igNonRefCountedAttrList_register();
void *igNonRefCountedAttrList_getMetaCall();
void *igAttrList_getMeta();
void *igAttrList_vtableRead();
void igAttrList_arkRegister();
void igAttrList_register();
void *igAttrList_getMetaCall();
void *igAttr_getMeta();
void igAttr_arkRegister();
void igAttr_register();
void *igAttr_getMetaCall();
void igAttr_fieldInit();
void fn_800BB970();
void *igAlphaStateAttr_getMeta();
void *igAlphaStateAttr_vtableRead();
void igAlphaStateAttr_arkRegister();
void igAlphaStateAttr_register();
void *igAlphaStateAttr_getMetaCall();
void igAlphaStateAttr_fieldInit();
void *igAlphaFunctionAttr_getMeta();
void *igAlphaFunctionAttr_vtableRead();
void igAlphaFunctionAttr_arkRegister();
void igAlphaFunctionAttr_register();
void *igAlphaFunctionAttr_getMetaCall();
void igAlphaFunctionAttr_fieldInit();
void *igTextureSwapTableAttr_getMeta();
void *igTextureSwapTableAttr_vtableRead();
void igTextureSwapTableAttr_arkRegister();
void igTextureSwapTableAttr_register();
void *igTextureSwapTableAttr_getMetaCall();
}
struct UnknownGenObject800BB324_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BB4C0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BB694_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BBA4C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BBC38_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BBE48_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *fn_800BB61C(){
 if(!igAttrList_meta) igAttrList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igAttrList_meta;
}
}
#pragma pop
}

namespace igAttrList_2 {
// igAttrList: Alchemy class registration (0x800BB658..0x800BB7B8). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igAttrList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_800ABC8C();
extern char igAttrList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_8047D768[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igAttrList)

void *igAttrList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_8047D768;
    object.__vtable = igAttrList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igAttrList)

void igAttrList_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igAttrList_meta, igObjectList_register,
                       fn_80024180, igAttrList_getMetaCall,
                       igAttrList_className, 0x14,
                       igAttrList_vtableRead, 0, 0, igAttrList_dependencies);
}

META_GET_META_CALL(igAttrList)

}
#pragma pop
}

namespace unknown800BB7B8 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80023FDC();
void *fn_80024180();
void *meta_newMetaObject(void *);
void fn_80046E58(void *,void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void fn_80065DBC(int);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800711A8(void *,int);
void fn_800ABC8C();
void *fn_800AC294();
void fn_800BCB68();
void *fn_800BCC14(int);
void *fn_800BD398();
void fn_800BD3E4();
void fn_800CDDF0();
void igNonRefCountedObjectList_register();
void igObjectList_register();
void igObject_register();
void igTextureSwapTableAttr_fieldInit();
void igVisualAttribute_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char igNonRefCountedObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igTextureSwapTableAttr_vtable[];
extern char lbl_8047D578[];
extern char igAlphaStateAttr_vtable[];
extern char igAlphaFunctionAttr_vtable[];
extern char igAttrList_vtable[];
extern char lbl_8047D768[];
extern char igNonRefCountedAttrList_vtable[];
extern char lbl_8047D830[];
extern char igAttrListList_vtable[];
extern char lbl_8047D95C[];
extern char lbl_8047E50C[];
extern char igAttrListList_dependencies[8];
extern char igNonRefCountedAttrList_dependencies[8];
extern char igAttrList_dependencies[8];
extern char lbl_8055E6F0[7];
extern char igAttr_fieldTypes[8];
extern char igAttr_fieldNames[8];
extern char igAttr_fieldStorage[8];
extern char igAttr_fieldOffsets[8];
extern char igAlphaStateAttr_fieldTypes[4];
extern char igAlphaStateAttr_fieldNames[4];
extern char igAlphaStateAttr_fieldStorage[4];
extern char igAlphaStateAttr_fieldOffsets[4];
extern char igAlphaFunctionAttr_fieldTypes[8];
extern char igAlphaFunctionAttr_fieldNames[8];
extern char igAlphaFunctionAttr_fieldStorage[8];
extern char igAlphaFunctionAttr_fieldOffsets[8];
extern char lbl_8055E748[4];
extern void *lbl_805621F4;
extern void *igAttrDefaultManager_meta;
extern void *igAttrListList_meta;
extern void *igNonRefCountedAttrList_meta;
extern void *igAttrList_meta;
extern void *igAttr_meta;
extern void *igAlphaStateAttr_meta;
extern void *igAlphaFunctionAttr_meta;
extern void *igTextureSwapTableAttr_meta;
void *igAttrDefaultManager_getMeta();
void igAttrDefaultManager_arkRegister();
void igAttrDefaultManager_register();
void *igAttrDefaultManager_getMetaCall();
void *igAttrListList_getMeta();
void *igAttrListList_vtableRead();
void igAttrListList_arkRegister();
void igAttrListList_register();
void *igAttrListList_getMetaCall();
void *igNonRefCountedAttrList_getMeta();
void *igNonRefCountedAttrList_vtableRead();
void igNonRefCountedAttrList_arkRegister();
void igNonRefCountedAttrList_register();
void *igNonRefCountedAttrList_getMetaCall();
void *igAttrList_getMeta();
void *igAttrList_vtableRead();
void igAttrList_arkRegister();
void igAttrList_register();
void *igAttrList_getMetaCall();
void *igAttr_getMeta();
void igAttr_arkRegister();
void igAttr_register();
void *igAttr_getMetaCall();
void igAttr_fieldInit();
void fn_800BB970();
void *igAlphaStateAttr_getMeta();
void *igAlphaStateAttr_vtableRead();
void igAlphaStateAttr_arkRegister();
void igAlphaStateAttr_register();
void *igAlphaStateAttr_getMetaCall();
void igAlphaStateAttr_fieldInit();
void *igAlphaFunctionAttr_getMeta();
void *igAlphaFunctionAttr_vtableRead();
void igAlphaFunctionAttr_arkRegister();
void igAlphaFunctionAttr_register();
void *igAlphaFunctionAttr_getMetaCall();
void igAlphaFunctionAttr_fieldInit();
void *igTextureSwapTableAttr_getMeta();
void *igTextureSwapTableAttr_vtableRead();
void igTextureSwapTableAttr_arkRegister();
void igTextureSwapTableAttr_register();
void *igTextureSwapTableAttr_getMetaCall();
}
struct UnknownGenObject800BB324_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BB4C0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BB694_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BBA4C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BBC38_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BBE48_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *fn_800BB7B8(){
 if(!igAttr_meta) igAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igAttr_meta;
}
}
#pragma pop
}

namespace igAttr {
// igAttr: Alchemy class registration (0x800BB7F4..0x800BB970). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igAttr)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_800711A8(void *,int);
void fn_800ABC8C();
void fn_800BB970();
extern char igAttr_fieldNames[8];
extern char igAttr_fieldOffsets[8];
extern char igAttr_fieldStorage[8];
extern char igAttr_fieldTypes[8];
extern char lbl_8055E6F0[7];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igAttr)

META_ARK_REGISTER(igAttr)

void igAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(1, &igAttr_meta, igObject_register,
                       fn_800237D0, igAttr_getMetaCall,
                       lbl_8055E6F0, 0xC,
                       0, igAttr_fieldInit, fn_800BB970, 0);
}

META_GET_META_CALL(igAttr)

void igAttr_fieldInit()
{
    Meta::igMetaObject *meta = igAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igAttr_fieldTypes, 2);
    Meta::igShortMetaField *cachedUnitIDField = static_cast<Meta::igShortMetaField *>(meta_field(meta, base + 1));
    fn_800711A8(cachedUnitIDField, -1);
    cachedUnitIDField->_persistent = false;
    meta_setupFields(meta, igAttr_fieldNames, igAttr_fieldStorage, igAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace unknown800BB970 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80023FDC();
void *fn_80024180();
void *meta_newMetaObject(void *);
void fn_80046E58(void *,void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void fn_80065DBC(int);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800711A8(void *,int);
void fn_800ABC8C();
void *fn_800AC294();
void fn_800BCB68();
void *fn_800BCC14(int);
void *fn_800BD398();
void fn_800BD3E4();
void fn_800CDDF0();
void igNonRefCountedObjectList_register();
void igObjectList_register();
void igObject_register();
void igTextureSwapTableAttr_fieldInit();
void igVisualAttribute_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char igNonRefCountedObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igTextureSwapTableAttr_vtable[];
extern char lbl_8047D578[];
extern char igAlphaStateAttr_vtable[];
extern char igAlphaFunctionAttr_vtable[];
extern char igAttrList_vtable[];
extern char lbl_8047D768[];
extern char igNonRefCountedAttrList_vtable[];
extern char lbl_8047D830[];
extern char igAttrListList_vtable[];
extern char lbl_8047D95C[];
extern char lbl_8047E50C[];
extern char igAttrListList_dependencies[8];
extern char igNonRefCountedAttrList_dependencies[8];
extern char igAttrList_dependencies[8];
extern char lbl_8055E6F0[7];
extern char igAttr_fieldTypes[8];
extern char igAttr_fieldNames[8];
extern char igAttr_fieldStorage[8];
extern char igAttr_fieldOffsets[8];
extern char igAlphaStateAttr_fieldTypes[4];
extern char igAlphaStateAttr_fieldNames[4];
extern char igAlphaStateAttr_fieldStorage[4];
extern char igAlphaStateAttr_fieldOffsets[4];
extern char igAlphaFunctionAttr_fieldTypes[8];
extern char igAlphaFunctionAttr_fieldNames[8];
extern char igAlphaFunctionAttr_fieldStorage[8];
extern char igAlphaFunctionAttr_fieldOffsets[8];
extern char lbl_8055E748[4];
extern void *lbl_805621F4;
extern void *igAttrDefaultManager_meta;
extern void *igAttrListList_meta;
extern void *igNonRefCountedAttrList_meta;
extern void *igAttrList_meta;
extern void *igAttr_meta;
extern void *igAlphaStateAttr_meta;
extern void *igAlphaFunctionAttr_meta;
extern void *igTextureSwapTableAttr_meta;
void *igAttrDefaultManager_getMeta();
void igAttrDefaultManager_arkRegister();
void igAttrDefaultManager_register();
void *igAttrDefaultManager_getMetaCall();
void *igAttrListList_getMeta();
void *igAttrListList_vtableRead();
void igAttrListList_arkRegister();
void igAttrListList_register();
void *igAttrListList_getMetaCall();
void *igNonRefCountedAttrList_getMeta();
void *igNonRefCountedAttrList_vtableRead();
void igNonRefCountedAttrList_arkRegister();
void igNonRefCountedAttrList_register();
void *igNonRefCountedAttrList_getMetaCall();
void *igAttrList_getMeta();
void *igAttrList_vtableRead();
void igAttrList_arkRegister();
void igAttrList_register();
void *igAttrList_getMetaCall();
void *igAttr_getMeta();
void igAttr_arkRegister();
void igAttr_register();
void *igAttr_getMetaCall();
void igAttr_fieldInit();
void fn_800BB970();
void *igAlphaStateAttr_getMeta();
void *igAlphaStateAttr_vtableRead();
void igAlphaStateAttr_arkRegister();
void igAlphaStateAttr_register();
void *igAlphaStateAttr_getMetaCall();
void igAlphaStateAttr_fieldInit();
void *igAlphaFunctionAttr_getMeta();
void *igAlphaFunctionAttr_vtableRead();
void igAlphaFunctionAttr_arkRegister();
void igAlphaFunctionAttr_register();
void *igAlphaFunctionAttr_getMetaCall();
void igAlphaFunctionAttr_fieldInit();
void *igTextureSwapTableAttr_getMeta();
void *igTextureSwapTableAttr_vtableRead();
void igTextureSwapTableAttr_arkRegister();
void igTextureSwapTableAttr_register();
void *igTextureSwapTableAttr_getMetaCall();
}
struct UnknownGenObject800BB324_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BB4C0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BB694_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BBA4C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BBC38_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BBE48_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void fn_800BB970(){
 fn_800BCB68();
 fn_80065DBC((int)fn_800BCC14);
}
}
#pragma pop
}

namespace igAlphaStateAttr {
// igAlphaStateAttr: Alchemy class registration (0x800BB99C..0x800BB9D4). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igAlphaStateAttr)

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igAlphaStateAttr)

}
#pragma pop
}

namespace unknown800BB9D4 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80023FDC();
void *fn_80024180();
void *meta_newMetaObject(void *);
void fn_80046E58(void *,void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void fn_80065DBC(int);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800711A8(void *,int);
void fn_800ABC8C();
void *fn_800AC294();
void fn_800BCB68();
void *fn_800BCC14(int);
void *fn_800BD398();
void fn_800BD3E4();
void fn_800CDDF0();
void igNonRefCountedObjectList_register();
void igObjectList_register();
void igObject_register();
void igTextureSwapTableAttr_fieldInit();
void igVisualAttribute_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char igNonRefCountedObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igTextureSwapTableAttr_vtable[];
extern char lbl_8047D578[];
extern char igAlphaStateAttr_vtable[];
extern char igAlphaFunctionAttr_vtable[];
extern char igAttrList_vtable[];
extern char lbl_8047D768[];
extern char igNonRefCountedAttrList_vtable[];
extern char lbl_8047D830[];
extern char igAttrListList_vtable[];
extern char lbl_8047D95C[];
extern char lbl_8047E50C[];
extern char igAttrListList_dependencies[8];
extern char igNonRefCountedAttrList_dependencies[8];
extern char igAttrList_dependencies[8];
extern char lbl_8055E6F0[7];
extern char igAttr_fieldTypes[8];
extern char igAttr_fieldNames[8];
extern char igAttr_fieldStorage[8];
extern char igAttr_fieldOffsets[8];
extern char igAlphaStateAttr_fieldTypes[4];
extern char igAlphaStateAttr_fieldNames[4];
extern char igAlphaStateAttr_fieldStorage[4];
extern char igAlphaStateAttr_fieldOffsets[4];
extern char igAlphaFunctionAttr_fieldTypes[8];
extern char igAlphaFunctionAttr_fieldNames[8];
extern char igAlphaFunctionAttr_fieldStorage[8];
extern char igAlphaFunctionAttr_fieldOffsets[8];
extern char lbl_8055E748[4];
extern void *lbl_805621F4;
extern void *igAttrDefaultManager_meta;
extern void *igAttrListList_meta;
extern void *igNonRefCountedAttrList_meta;
extern void *igAttrList_meta;
extern void *igAttr_meta;
extern void *igAlphaStateAttr_meta;
extern void *igAlphaFunctionAttr_meta;
extern void *igTextureSwapTableAttr_meta;
void *igAttrDefaultManager_getMeta();
void igAttrDefaultManager_arkRegister();
void igAttrDefaultManager_register();
void *igAttrDefaultManager_getMetaCall();
void *igAttrListList_getMeta();
void *igAttrListList_vtableRead();
void igAttrListList_arkRegister();
void igAttrListList_register();
void *igAttrListList_getMetaCall();
void *igNonRefCountedAttrList_getMeta();
void *igNonRefCountedAttrList_vtableRead();
void igNonRefCountedAttrList_arkRegister();
void igNonRefCountedAttrList_register();
void *igNonRefCountedAttrList_getMetaCall();
void *igAttrList_getMeta();
void *igAttrList_vtableRead();
void igAttrList_arkRegister();
void igAttrList_register();
void *igAttrList_getMetaCall();
void *igAttr_getMeta();
void igAttr_arkRegister();
void igAttr_register();
void *igAttr_getMetaCall();
void igAttr_fieldInit();
void fn_800BB970();
void *igAlphaStateAttr_getMeta();
void *igAlphaStateAttr_vtableRead();
void igAlphaStateAttr_arkRegister();
void igAlphaStateAttr_register();
void *igAlphaStateAttr_getMetaCall();
void igAlphaStateAttr_fieldInit();
void *igAlphaFunctionAttr_getMeta();
void *igAlphaFunctionAttr_vtableRead();
void igAlphaFunctionAttr_arkRegister();
void igAlphaFunctionAttr_register();
void *igAlphaFunctionAttr_getMetaCall();
void igAlphaFunctionAttr_fieldInit();
void *igTextureSwapTableAttr_getMeta();
void *igTextureSwapTableAttr_vtableRead();
void igTextureSwapTableAttr_arkRegister();
void igTextureSwapTableAttr_register();
void *igTextureSwapTableAttr_getMetaCall();
}
struct UnknownGenObject800BB324_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BB4C0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BB694_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BBA4C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BBC38_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BBE48_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *fn_800BB9D4(){
 if(!igAlphaStateAttr_meta) igAlphaStateAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igAlphaStateAttr_meta;
}
}
#pragma pop
}

namespace igAlphaStateAttr_2 {
// igAlphaStateAttr: Alchemy class registration (0x800BBA10..0x800BBBC4). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igAlphaStateAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_800ABC8C();
void *fn_800AC294();
extern char igAlphaStateAttr_fieldNames[4];
extern char igAlphaStateAttr_fieldOffsets[4];
extern char igAlphaStateAttr_fieldStorage[4];
extern char igAlphaStateAttr_fieldTypes[4];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igAlphaStateAttr)

void *igAlphaStateAttr_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igAlphaStateAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igAlphaStateAttr)

void igAlphaStateAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igAlphaStateAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igAlphaStateAttr_getMetaCall,
                       igAlphaStateAttr_className, 0x10,
                       igAlphaStateAttr_vtableRead, igAlphaStateAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igAlphaStateAttr)

void igAlphaStateAttr_fieldInit()
{
    Meta::igMetaObject *meta = igAlphaStateAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igAlphaStateAttr_fieldTypes, 1);
    meta_setupFields(meta, igAlphaStateAttr_fieldNames, igAlphaStateAttr_fieldStorage, igAlphaStateAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace igAlphaFunctionAttr {
// igAlphaFunctionAttr: Alchemy class registration (0x800BBBC4..0x800BBDD4). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igAlphaFunctionAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_80046E58(void *,void *);
void fn_800ABC8C();
void *fn_800AC294();
void fn_800CDDF0();
extern char igAlphaFunctionAttr_fieldNames[8];
extern char igAlphaFunctionAttr_fieldOffsets[8];
extern char igAlphaFunctionAttr_fieldStorage[8];
extern char igAlphaFunctionAttr_fieldTypes[8];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055E748[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igAlphaFunctionAttr)

META_GET_META(igAlphaFunctionAttr)

void *igAlphaFunctionAttr_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igAlphaFunctionAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igAlphaFunctionAttr)

void igAlphaFunctionAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igAlphaFunctionAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igAlphaFunctionAttr_getMetaCall,
                       igAlphaFunctionAttr_className, 0x14,
                       igAlphaFunctionAttr_vtableRead, igAlphaFunctionAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igAlphaFunctionAttr)

void igAlphaFunctionAttr_fieldInit()
{
    Meta::igMetaObject *meta = igAlphaFunctionAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igAlphaFunctionAttr_fieldTypes, 2);
    Meta::igEnumMetaField *funcField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base));
    fn_80046E58(funcField, lbl_8055E748);
    funcField->_getMetaEnumFunction = reinterpret_cast<void *>((void *)fn_800CDDF0);
    meta_setupFields(meta, igAlphaFunctionAttr_fieldNames, igAlphaFunctionAttr_fieldStorage, igAlphaFunctionAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace unknown800BBDD4 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80023FDC();
void *fn_80024180();
void *meta_newMetaObject(void *);
void fn_80046E58(void *,void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void fn_80065DBC(int);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800711A8(void *,int);
void fn_800ABC8C();
void *fn_800AC294();
void fn_800BCB68();
void *fn_800BCC14(int);
void *fn_800BD398();
void fn_800BD3E4();
void fn_800CDDF0();
void igNonRefCountedObjectList_register();
void igObjectList_register();
void igObject_register();
void igTextureSwapTableAttr_fieldInit();
void igVisualAttribute_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char igNonRefCountedObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igTextureSwapTableAttr_vtable[];
extern char lbl_8047D578[];
extern char igAlphaStateAttr_vtable[];
extern char igAlphaFunctionAttr_vtable[];
extern char igAttrList_vtable[];
extern char lbl_8047D768[];
extern char igNonRefCountedAttrList_vtable[];
extern char lbl_8047D830[];
extern char igAttrListList_vtable[];
extern char lbl_8047D95C[];
extern char lbl_8047E50C[];
extern char igAttrListList_dependencies[8];
extern char igNonRefCountedAttrList_dependencies[8];
extern char igAttrList_dependencies[8];
extern char lbl_8055E6F0[7];
extern char igAttr_fieldTypes[8];
extern char igAttr_fieldNames[8];
extern char igAttr_fieldStorage[8];
extern char igAttr_fieldOffsets[8];
extern char igAlphaStateAttr_fieldTypes[4];
extern char igAlphaStateAttr_fieldNames[4];
extern char igAlphaStateAttr_fieldStorage[4];
extern char igAlphaStateAttr_fieldOffsets[4];
extern char igAlphaFunctionAttr_fieldTypes[8];
extern char igAlphaFunctionAttr_fieldNames[8];
extern char igAlphaFunctionAttr_fieldStorage[8];
extern char igAlphaFunctionAttr_fieldOffsets[8];
extern char lbl_8055E748[4];
extern void *lbl_805621F4;
extern void *igAttrDefaultManager_meta;
extern void *igAttrListList_meta;
extern void *igNonRefCountedAttrList_meta;
extern void *igAttrList_meta;
extern void *igAttr_meta;
extern void *igAlphaStateAttr_meta;
extern void *igAlphaFunctionAttr_meta;
extern void *igTextureSwapTableAttr_meta;
void *igAttrDefaultManager_getMeta();
void igAttrDefaultManager_arkRegister();
void igAttrDefaultManager_register();
void *igAttrDefaultManager_getMetaCall();
void *igAttrListList_getMeta();
void *igAttrListList_vtableRead();
void igAttrListList_arkRegister();
void igAttrListList_register();
void *igAttrListList_getMetaCall();
void *igNonRefCountedAttrList_getMeta();
void *igNonRefCountedAttrList_vtableRead();
void igNonRefCountedAttrList_arkRegister();
void igNonRefCountedAttrList_register();
void *igNonRefCountedAttrList_getMetaCall();
void *igAttrList_getMeta();
void *igAttrList_vtableRead();
void igAttrList_arkRegister();
void igAttrList_register();
void *igAttrList_getMetaCall();
void *igAttr_getMeta();
void igAttr_arkRegister();
void igAttr_register();
void *igAttr_getMetaCall();
void igAttr_fieldInit();
void fn_800BB970();
void *igAlphaStateAttr_getMeta();
void *igAlphaStateAttr_vtableRead();
void igAlphaStateAttr_arkRegister();
void igAlphaStateAttr_register();
void *igAlphaStateAttr_getMetaCall();
void igAlphaStateAttr_fieldInit();
void *igAlphaFunctionAttr_getMeta();
void *igAlphaFunctionAttr_vtableRead();
void igAlphaFunctionAttr_arkRegister();
void igAlphaFunctionAttr_register();
void *igAlphaFunctionAttr_getMetaCall();
void igAlphaFunctionAttr_fieldInit();
void *igTextureSwapTableAttr_getMeta();
void *igTextureSwapTableAttr_vtableRead();
void igTextureSwapTableAttr_arkRegister();
void igTextureSwapTableAttr_register();
void *igTextureSwapTableAttr_getMetaCall();
}
struct UnknownGenObject800BB324_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BB4C0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BB694_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BBA4C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BBC38_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BBE48_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *igTextureSwapTableAttr_create(void *object){
 igTextureSwapTableAttr_arkRegister();
 return meta_createInstance(igTextureSwapTableAttr_meta,object);
}
void *igTextureSwapTableAttr_getMeta(){
 if(!igTextureSwapTableAttr_meta || !(reinterpret_cast<unsigned int *>(igTextureSwapTableAttr_meta)[0x24/4]&4)) igTextureSwapTableAttr_arkRegister();
 return igTextureSwapTableAttr_meta;
}
void *igTextureSwapTableAttr_vtableRead(){
 UnknownGenObject800BBE48_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igTextureSwapTableAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igTextureSwapTableAttr_arkRegister(){
 meta_registerNow((int)igTextureSwapTableAttr_register);
}
void igTextureSwapTableAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igTextureSwapTableAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igTextureSwapTableAttr_getMetaCall,(int)igTextureSwapTableAttr_className,28,(int)igTextureSwapTableAttr_vtableRead,(int)igTextureSwapTableAttr_fieldInit,0,0);
}
void *igTextureSwapTableAttr_getMetaCall(){return igTextureSwapTableAttr_getMeta();}
}
#pragma pop
}

namespace igTextureSwapTableAttr_fieldInit {
// igTextureSwapTableAttr: Alchemy class registration (0x800BBF58..0x800BC018). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igTextureSwapTableAttr)

extern "C" {
}

#pragma push
#pragma auto_inline off
extern "C" {

void igTextureSwapTableAttr_fieldInit()
{
    Meta::igMetaObject *meta = igTextureSwapTableAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igTextureSwapTableAttr_fieldTypes, 4);
    Meta::igCharArrayMetaField *redField = static_cast<Meta::igCharArrayMetaField *>(meta_field(meta, base));
    redField->_num = 4;
    Meta::igCharArrayMetaField *greenField = static_cast<Meta::igCharArrayMetaField *>(meta_field(meta, base + 1));
    greenField->_num = 4;
    Meta::igCharArrayMetaField *blueField = static_cast<Meta::igCharArrayMetaField *>(meta_field(meta, base + 2));
    blueField->_num = 4;
    Meta::igCharArrayMetaField *alphaField = static_cast<Meta::igCharArrayMetaField *>(meta_field(meta, base + 3));
    alphaField->_num = 4;
    meta_setupFields(meta, igTextureSwapTableAttr_fieldNames, igTextureSwapTableAttr_fieldStorage, igTextureSwapTableAttr_fieldOffsets, base);
}

}
#pragma pop
}

namespace unknown800BC018 {
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void *fn_800AC294();
void igTextureSwapAttr_fieldInit();
void igVisualAttribute_register();
extern char igTextureSwapAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *igTextureSwapAttr_meta;
void *igTextureSwapAttr_getMeta();
void *igTextureSwapAttr_vtableRead();
void igTextureSwapAttr_arkRegister();
void igTextureSwapAttr_register();
void *igTextureSwapAttr_getMetaCall();
}
struct UnknownGenObject800BC08C_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *igTextureSwapAttr_create(void *object){
 igTextureSwapAttr_arkRegister();
 return meta_createInstance(igTextureSwapAttr_meta,object);
}
void *igTextureSwapAttr_getMeta(){
 if(!igTextureSwapAttr_meta || !(reinterpret_cast<unsigned int *>(igTextureSwapAttr_meta)[0x24/4]&4)) igTextureSwapAttr_arkRegister();
 return igTextureSwapAttr_meta;
}
void *igTextureSwapAttr_vtableRead(){
 UnknownGenObject800BC08C_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igTextureSwapAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igTextureSwapAttr_arkRegister(){
 meta_registerNow((int)igTextureSwapAttr_register);
}
void igTextureSwapAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igTextureSwapAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igTextureSwapAttr_getMetaCall,(int)igTextureSwapAttr_className,20,(int)igTextureSwapAttr_vtableRead,(int)igTextureSwapAttr_fieldInit,0,0);
}
void *igTextureSwapAttr_getMetaCall(){return igTextureSwapAttr_getMeta();}
}
#pragma pop
}

namespace igTextureSwapAttr_fieldInit {
// igTextureSwapAttr: Alchemy class registration (0x800BC19C..0x800BC24C). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igTextureSwapAttr)

extern "C" {
void fn_80040030(void *, int);
void fn_800C5E58();
}

#pragma push
#pragma auto_inline off
extern "C" {

void igTextureSwapAttr_fieldInit()
{
    Meta::igMetaObject *meta = igTextureSwapAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igTextureSwapAttr_fieldTypes, 3);
    Meta::igCharMetaField *rasterSelectField = static_cast<Meta::igCharMetaField *>(meta_field(meta, base));
    fn_80040030(rasterSelectField, 0);
    Meta::igCharMetaField *textureSelectField = static_cast<Meta::igCharMetaField *>(meta_field(meta, base + 1));
    fn_80040030(textureSelectField, 0);
    Meta::igIntMetaField *unitIDField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 2));
    unitIDField->_invarianceFunction = reinterpret_cast<void *>(fn_800C5E58);
    meta_setupFields(meta, igTextureSwapAttr_fieldNames, igTextureSwapAttr_fieldStorage, igTextureSwapAttr_fieldOffsets, base);
}

}
#pragma pop
}
