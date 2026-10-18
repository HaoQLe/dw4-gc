// Written by tools/alchemymeta/poolsrc.py: units whose code addresses the data below from its start.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>
#include <unknownGen.h>
#include <meta/igEnumMetaField.h>
#include <meta/igFloatMetaField.h>
#include <meta/igIntMetaField.h>
#include <meta/igStructMetaField.h>
#include <meta/igStringMetaField.h>
#include <meta/igBoolMetaField.h>
#include <meta/igVec2fMetaField.h>
#include <meta/igVec3fMetaField.h>

// The unit's data.
extern "C" {
void arkRegister__Q33Gap4Core11igStringObjFv();
void fn_800251EC();
void fn_8002879C();
void fn_8002E1AC();
void fn_80031378();
void fn_800385E0();
void igActorList_arkRegister();
void igActorManagerParams_arkRegister();
void igAlphaStateAttr_arkRegister();
void igAppearanceList_arkRegister();
void igAttrList_arkRegister();
void igAttrSet_arkRegister();
void igBasicColorChanger_arkRegister();
void igBitMask_arkRegister();
void igBitmapFont_arkRegister();
void igBoundingBoxRenderer_arkRegister();
void igBoxComponent_arkRegister();
void igCamera_arkRegister();
void igColorAttr_arkRegister();
void igCommonTraversal_arkRegister();
void igCullFaceAttr_arkRegister();
void igDataPumpManager_arkRegister();
void igDefaultAspect_arkRegister();
void igDisableExt_arkRegister();
void igDisplayListAttr_arkRegister();
void igFieldSynchronizer_arkRegister();
void igFloatMetaField_create();
void igFlushRenderer_arkRegister();
void igGeometryAttrList_arkRegister();
void igGeometryAttr_arkRegister();
void igGeometryElement_arkRegister();
void igGraphPathList_arkRegister();
void igGraphPath_arkRegister();
void igGroup_arkRegister();
void igGuiComponentList_arkRegister();
void igGuiComponent_arkRegister();
void igGuiSystem_arkRegister();
void igHotKeyEventReceiver_arkRegister();
void igIntersectTraversal_arkRegister();
void igLightAttr_arkRegister();
void igLightList_arkRegister();
void igLightSet_arkRegister();
void igLightStateAttrList_arkRegister();
void igLightStateAttr_arkRegister();
void igLightingStateAttr_arkRegister();
void igLongMetaField_create();
void igMatrix44fMetaField_create();
void igMetaFieldList_arkRegister();
void igMetaObjectList_arkRegister();
void igModelViewMatrixAttr_arkRegister();
void igMouseCursor_arkRegister();
void igNodeList_arkRegister();
void igNormalsRenderer_arkRegister();
void igObjectList_arkRegister();
void igOnOffColorChanger_arkRegister();
void igOverrideAttrSet_arkRegister();
void igPointerList_arkRegister();
void igPolygonModeAttr_arkRegister();
void igRadioGroup_arkRegister();
void igRay_arkRegister();
void igShadeModelAttr_arkRegister();
void igStatisticsItemList_arkRegister();
void igStatisticsItem_arkRegister();
void igStructMetaField_create();
void igTextElement_arkRegister();
void igTextureList_arkRegister();
void igTransform_arkRegister();
void igVec2fMetaField_create();
void igVec3fMetaField_create();
void igVec4fMetaField_create();
void igViewManager_arkRegister();
void igViewMode_arkRegister();
void igViewModel_arkRegister();
void igViewerGuiFactory_arkRegister();
void igViewerModeChangeMessage_arkRegister();
void igViewerParameters_arkRegister();
void igViewerRenderer_arkRegister();
void igViewerSceneInfoManagerController_arkRegister();
void igViewerSceneInfoManager_arkRegister();
void igViewerStatisticsManager_arkRegister();
void igViewportAttr_arkRegister();
void igVisualContext_arkRegister();
void igWindow_arkRegister();
extern char lbl_80461C3C[7];
extern char lbl_80461C44[15];
extern char lbl_80461C54[12];
extern char lbl_80461C60[6];
extern char lbl_80461C68[14];
extern char lbl_80461C78[8];
extern char lbl_80461C80[24];
extern char lbl_80461C98[17];
extern char lbl_80461CAC[19];
extern char lbl_80461CC0[11];
extern char lbl_80461CCC[22];
extern char lbl_80461CE4[18];
extern char lbl_80461CF8[19];
extern char lbl_80461D0C[22];
extern char lbl_80461D24[14];
extern char lbl_80461D60[7];
extern char lbl_80461D68[14];
extern char lbl_80461D78[15];
extern char lbl_80461D88[6];
extern char lbl_80461D90[14];
extern char lbl_80461DA0[9];
extern char lbl_80461DAC[18];
extern char lbl_80461DC0[8];
extern char lbl_80461DC8[13];
extern char lbl_80461DD8[9];
extern char lbl_80461DE4[8];
extern char lbl_80461DEC[9];
extern char lbl_80461E10[5];
extern char lbl_80461E18[10];
extern char lbl_80461E24[12];
extern char lbl_80461E30[11];
extern char lbl_80461E3C[11];
extern char lbl_80461E74[23];
extern char lbl_80461E8C[12];
extern char lbl_80461E98[16];
extern char lbl_80461EA8[14];
extern char lbl_80461EB8[17];
extern char lbl_80461ECC[15];
extern char lbl_80461EDC[20];
extern char lbl_80461EF0[5];
extern char lbl_80461EF8[15];
extern char lbl_80461F08[12];
extern char lbl_80461F14[20];
extern char lbl_80461F28[14];
extern char lbl_80461F38[15];
extern char lbl_80461F48[9];
extern char lbl_80461F54[9];
extern char lbl_80461F60[10];
extern char lbl_80461F6C[14];
extern char lbl_80461F7C[12];
extern char lbl_80461F88[19];
extern char lbl_80461F9C[12];
extern char lbl_80461FA8[13];
extern char lbl_80461FB8[10];
extern char lbl_80461FC4[10];
extern char lbl_80461FD0[13];
extern char lbl_80461FE0[15];
extern char lbl_80461FF0[16];
extern char lbl_80462000[20];
extern char lbl_80462014[19];
extern char lbl_80462028[16];
extern char lbl_80462038[13];
extern char lbl_80462048[13];
extern char lbl_80462058[19];
extern char lbl_8046206C[14];
extern char lbl_8046207C[20];
extern char lbl_80462090[12];
extern char lbl_8046209C[8];
extern char lbl_804620A4[14];
extern char lbl_804620B4[15];
extern char lbl_804620C4[13];
extern char lbl_804620D4[12];
extern char lbl_804620E0[19];
extern char lbl_804620F4[27];
extern char lbl_8046214C[7];
extern char lbl_80462154[6];
extern char lbl_80462178[9];
extern char lbl_80462184[10];
extern char lbl_80462190[14];
extern char lbl_804621C4[13];
extern char lbl_804621D4[12];
extern char lbl_804621E0[20];
extern char lbl_804621F4[15];
extern char lbl_80462204[12];
extern char lbl_80462224[21];
extern char lbl_8046223C[15];
extern char lbl_8046224C[16];
extern char lbl_8046225C[17];
extern char lbl_80462270[14];
extern char lbl_80462280[15];
extern char lbl_80462290[20];
extern char lbl_804622A4[9];
extern char lbl_804622B0[17];
extern char lbl_804622C4[20];
extern char lbl_804622D8[14];
extern char lbl_804622E8[11];
extern char lbl_804622F4[16];
extern char lbl_80462304[15];
extern char lbl_80462314[16];
extern char lbl_80462324[13];
extern char lbl_80462334[16];
extern char lbl_80462344[13];
extern char lbl_80462354[18];
extern char lbl_80462368[5];
extern char lbl_80462370[7];
extern char lbl_80462378[11];
extern char lbl_80462384[5];
extern char lbl_8046238C[5];
extern char lbl_80462394[10];
extern char lbl_804623A0[5];
extern char lbl_804623A8[7];
extern char lbl_804623B0[4];
extern char lbl_804623B4[5];
extern char lbl_804623D0[7];
extern char lbl_804623D8[10];
extern char lbl_804623E4[7];
extern char lbl_804623EC[6];
extern char lbl_804623F4[11];
extern char lbl_80462400[10];
extern char lbl_8046240C[18];
extern char lbl_80462420[12];
extern char lbl_8046242C[10];
extern char lbl_80462438[13];
extern char lbl_80462448[17];
extern char lbl_8046245C[25];
extern char lbl_80462478[18];
extern char lbl_8046248C[16];
extern char lbl_8046249C[14];
extern char lbl_804624AC[22];
extern char lbl_804624C4[11];
extern char lbl_804624D0[16];
extern char lbl_804624E0[17];
extern char lbl_804624F4[22];
extern char lbl_8046250C[11];
extern char lbl_80462518[16];
extern char lbl_80462528[13];
extern char lbl_80462538[18];
extern char lbl_8046254C[10];
extern char lbl_80462558[9];
extern char lbl_80462564[17];
extern char lbl_80462578[13];
extern char lbl_80462588[13];
extern char lbl_80462598[15];
extern char lbl_804625A8[17];
extern char lbl_804625BC[9];
extern char lbl_804625C8[11];
extern char lbl_804625D4[9];
extern char lbl_804625E0[16];
extern char lbl_804625F0[15];
extern char lbl_80462600[10];
extern char lbl_8046260C[7];
extern char lbl_80462614[16];
extern char lbl_80462630[14];
extern char lbl_80462640[12];
extern char lbl_8046264C[11];
extern char lbl_80462658[10];
extern char lbl_80462664[13];
extern char lbl_80462674[9];
extern char lbl_80462680[10];
extern char lbl_804626A0[15];
extern char lbl_804626B0[19];
extern char lbl_804626C4[15];
extern char lbl_804626D4[15];
extern char lbl_804626E4[14];
extern char lbl_804626F4[23];
extern char lbl_8046270C[21];
extern char lbl_80462724[6];
extern char lbl_80462744[17];
extern char lbl_80462780[11];
extern char lbl_8046278C[8];
extern char lbl_80462794[13];
extern char lbl_804627A4[18];
extern char lbl_804627B8[20];
extern char lbl_804627CC[5];
extern char lbl_804627D4[14];
extern char lbl_804627E4[5];
extern char lbl_804627EC[9];
extern char lbl_804627F8[25];
extern char lbl_80462814[11];
extern char lbl_80462820[5];
extern char lbl_80462828[13];
extern char lbl_80462838[13];
extern char lbl_80462868[10];
extern char lbl_80462874[14];
extern char lbl_80462884[17];
extern char lbl_80462898[19];
extern char lbl_804628AC[18];
extern char lbl_804628C0[11];
extern char lbl_804628CC[12];
extern char lbl_804628D8[16];
extern char lbl_804628E8[8];
extern char lbl_804628F0[6];
extern char lbl_804628F8[6];
extern char lbl_80462900[6];
extern char lbl_80462908[7];
extern char lbl_80462910[6];
extern char lbl_80462918[13];
extern char lbl_80462934[15];
extern char lbl_80462944[17];
extern char lbl_80462958[14];
extern char lbl_80462968[8];
extern char lbl_80462970[8];
extern char lbl_80462978[10];
extern char lbl_80462984[9];
extern char lbl_80462990[14];
extern char lbl_804629B0[12];
extern char lbl_804629BC[8];
extern char lbl_804629D0[15];
extern char lbl_804629F0[10];
extern char lbl_804629FC[11];
extern char lbl_80462A08[15];
extern char lbl_80462A18[12];
extern char lbl_80462A30[10];
extern char lbl_80462A3C[11];
extern char lbl_80462A48[14];
extern char lbl_80462A58[16];
extern char lbl_80462A68[15];
extern char lbl_80462A78[16];
extern char lbl_80462A88[16];
extern char lbl_80462AAC[10];
extern char lbl_80462AB8[17];
extern char lbl_80462ACC[15];
extern char lbl_80462ADC[11];
extern char lbl_80462AE8[9];
extern char lbl_80462AF4[22];
extern char lbl_80462B0C[6];
extern char lbl_80462B14[6];
extern char lbl_80462B2C[6];
extern char lbl_80462B34[14];
extern char lbl_80462B44[16];
extern char lbl_80462B54[23];
extern char lbl_80462B6C[15];
extern char lbl_80462B7C[13];
extern char lbl_80462B8C[16];
extern char lbl_80462B9C[14];
extern char lbl_80462BAC[14];
extern char lbl_80462BBC[12];
extern char lbl_80462BC8[17];
extern char lbl_80462BDC[15];
extern char lbl_80462BEC[13];
extern char lbl_80462BFC[15];
extern char lbl_80462C24[13];
extern char lbl_80462C34[5];
extern char lbl_80462C3C[8];
extern char lbl_80462C54[11];
extern char lbl_80462C60[14];
extern char lbl_80462C70[8];
extern char lbl_80462C78[8];
extern char lbl_80462C80[11];
extern char lbl_80462C8C[12];
extern char lbl_80462C98[10];
extern char lbl_80462CA4[14];
extern char lbl_80462CB4[6];
extern char lbl_80462CD4[10];
extern char lbl_80462CE0[13];
extern char lbl_8055C704[4];
extern char lbl_8055C708[4];
extern char lbl_8055C70C[4];
extern char lbl_8055C710[4];
extern char lbl_8055C714[4];
extern char lbl_8055C718[4];
extern char lbl_8055C71C[4];
extern char lbl_8055C720[4];
extern char lbl_8055C724[4];
extern char lbl_8055C728[4];
extern char lbl_8055C72C[4];
extern char lbl_8055C730[4];
extern char lbl_8055C734[4];
extern char lbl_8055C738[4];
extern char lbl_8055C73C[4];
extern char lbl_8055C748[4];
extern char lbl_8055C74C[4];
extern char lbl_8055C750[4];
extern char lbl_8055C754[4];
extern char lbl_8055C758[4];
extern char lbl_8055C75C[4];
extern char lbl_8055C760[4];
extern char lbl_8055C764[4];
extern char lbl_8055C768[4];
extern char lbl_8055C76C[4];
extern char lbl_8055C770[4];
extern char lbl_8055C774[4];
extern char lbl_8055C77C[4];
extern char lbl_8055C780[4];
extern char lbl_8055C790[4];
extern char lbl_8055C794[4];
extern char lbl_8055C798[4];
extern char lbl_8055C79C[4];
extern char lbl_8055C7A0[4];
extern char lbl_8055C7A4[4];
extern char lbl_8055C7A8[4];
extern char lbl_8055C7AC[4];
extern char lbl_8055C7B0[4];
extern char lbl_8055C7B4[4];
extern char lbl_8055C7B8[4];
extern char lbl_8055C7BC[4];
extern char lbl_8055C7C0[4];
extern char lbl_8055C7C4[4];
extern char lbl_8055C7C8[4];
extern char lbl_8055C7CC[4];
extern char lbl_8055C7D0[4];
extern char lbl_8055C7D4[4];
extern char lbl_8055C7D8[4];
extern char lbl_8055C7DC[4];
extern char lbl_8055C7E0[4];
extern char lbl_8055C7E4[4];
extern char lbl_8055C7E8[4];
extern char lbl_8055C7EC[4];
extern char lbl_8055C7F0[4];
extern char lbl_8055C7F4[4];
extern char lbl_8055C7F8[4];
extern char lbl_8055C7FC[4];
extern char lbl_8055C800[4];
extern char lbl_8055C804[4];
extern char lbl_8055C808[4];
extern char lbl_8055C80C[4];
extern char lbl_8055C810[4];
extern char lbl_8055C814[4];
extern char lbl_8055C818[4];
extern char lbl_8055C81C[4];
extern char lbl_8055C820[4];
extern char lbl_8055C824[4];
extern char lbl_8055C828[4];
extern char lbl_8055C82C[4];
extern char lbl_8055C830[4];
extern char lbl_8055C834[4];
extern char lbl_8055C838[4];
extern char lbl_8055C840[4];
extern char lbl_8055C844[4];
extern char lbl_8055C84C[4];
extern char lbl_8055C850[4];
extern char lbl_8055C858[4];
extern char lbl_8055C85C[4];
extern char lbl_8055C864[4];
extern char lbl_8055C868[4];
extern char lbl_8055C86C[4];
extern char lbl_8055C870[4];
extern char lbl_8055C874[4];
extern char lbl_8055C87C[4];
extern char lbl_8055C884[4];
extern char lbl_8055C888[4];
extern char lbl_8055C88C[4];
extern char lbl_8055C890[4];
extern char lbl_8055C894[4];
extern char lbl_8055C898[4];
extern char lbl_8055C89C[4];
extern char lbl_8055C8A0[4];
extern char lbl_8055C8A4[4];
extern char lbl_8055C8A8[4];
extern char lbl_8055C8AC[4];
extern char lbl_8055C8B0[4];
extern char lbl_8055C8B4[4];
extern char lbl_8055C8B8[4];
extern char lbl_8055C8BC[4];
extern char lbl_8055C8C0[4];
extern char lbl_8055C8C4[4];
extern char lbl_8055C8C8[4];
extern char lbl_8055C8CC[4];
extern char lbl_8055C8D0[4];
extern char lbl_8055C8D8[4];
extern char lbl_8055C8DC[4];
extern char lbl_8055C8E0[4];
extern char lbl_8055C8E4[4];
extern char lbl_8055C8E8[4];
extern char lbl_8055C8EC[4];
extern char lbl_8055C8F0[4];
extern char lbl_8055C8F4[4];
extern char lbl_8055C8F8[4];
extern char lbl_8055C8FC[4];
extern char lbl_8055C900[4];
extern char lbl_8055C904[4];
extern char lbl_8055C908[4];
extern char lbl_8055C90C[4];
extern char lbl_8055C910[4];
extern char lbl_8055C914[4];
extern char lbl_8055C918[4];
extern char lbl_8055C91C[4];
extern char lbl_8055C920[4];
extern char lbl_8055C924[4];
extern char lbl_8055C928[4];
extern char lbl_8055C92C[4];
extern char lbl_8055C930[4];
extern char lbl_8055C934[4];
extern char lbl_8055C938[4];
extern char lbl_8055C93C[4];
extern char lbl_8055C940[4];
extern char lbl_8055C944[4];
extern char lbl_8055C948[4];
extern char lbl_8055C94C[4];
extern char lbl_8055C950[4];
extern char lbl_8055C954[4];
extern char lbl_8055C958[4];
extern char lbl_8055C95C[4];
extern char lbl_8055C960[4];
extern char lbl_8055C964[4];
extern char lbl_8055C968[4];
extern char lbl_8055C96C[4];
extern char lbl_8055C970[4];
extern char lbl_8055C978[4];
extern char lbl_8055C97C[4];
extern char lbl_8055C980[4];
extern char lbl_8055C984[4];
extern char lbl_8055C988[4];
extern char lbl_8055C98C[4];
extern char lbl_8055C990[4];
extern char lbl_8055C994[4];
extern char lbl_8055C9A0[4];
extern char lbl_8055C9A8[4];
extern char lbl_8055C9AC[4];
extern char lbl_8055C9B0[4];
extern char lbl_8055C9B4[4];
extern char lbl_8055C9B8[4];
extern char lbl_8055C9BC[4];
extern char lbl_8055C9C0[4];
extern char lbl_8055C9C4[4];
extern char lbl_8055C9C8[4];
extern char lbl_8055C9CC[4];
extern char lbl_8055C9D0[4];
extern char lbl_8055C9D4[4];
extern char lbl_8055C9E0[4];
extern char lbl_8055C9E4[4];
extern char lbl_8055C9E8[4];
extern char lbl_8055C9EC[4];
extern char lbl_8055C9F0[4];
extern char lbl_8055C9F4[4];
extern char lbl_8055C9F8[4];
extern char lbl_8055C9FC[4];
extern char lbl_8055CA00[4];
extern char lbl_8055CA04[4];
extern char lbl_8055CA08[4];
extern char lbl_8055CA0C[4];
extern char lbl_8055CA10[4];
extern char lbl_8055CA14[4];
extern char lbl_8055CA18[4];
extern char lbl_8055CA1C[4];
extern char lbl_8055CA24[4];
extern char lbl_8055CA28[4];
extern char lbl_8055CA2C[4];
extern char lbl_8055CA30[4];
extern char lbl_8055CA34[4];
extern char lbl_8055CA38[4];
extern char lbl_8055CA3C[4];
extern char lbl_8055CA40[4];
extern char lbl_8055CA44[4];
extern char lbl_8055CA48[4];
extern char lbl_8055CA4C[4];
extern char lbl_8055CA54[4];
extern char lbl_8055CA58[4];
extern char lbl_8055CA60[4];
extern char lbl_8055CA68[4];
extern char lbl_8055CA6C[4];
extern char lbl_8055CA70[4];
extern char lbl_8055CA74[4];
extern char lbl_8055CA7C[4];
extern char lbl_8055CA80[4];
extern char lbl_8055CA84[4];
extern char lbl_8055CA88[4];
extern char lbl_8055CA8C[4];
extern char lbl_8055CA90[4];
extern char lbl_8055CA94[4];
extern char lbl_8055CA98[4];
extern char lbl_8055CA9C[4];
extern char lbl_8055CAA0[4];
extern char lbl_8055CAA4[4];
extern char lbl_8055CAA8[4];
extern char lbl_8055CAAC[4];
extern char lbl_8055CAB4[4];
extern char lbl_8055CAB8[4];
extern char lbl_8055CABC[4];
extern char lbl_8055CAC0[4];
extern char lbl_8055CAC4[4];
extern char lbl_8055CAC8[4];
extern char lbl_8055CACC[4];
extern char lbl_8055CAD0[4];
extern char lbl_8055CAD4[4];
extern char lbl_8055CADC[4];
extern char lbl_8055CAE0[4];
extern char lbl_8055CAE4[4];
extern char lbl_8055CAE8[4];
extern char lbl_8055CAEC[4];
extern char lbl_8055CAF0[4];
extern char lbl_8055CAF4[4];
extern char lbl_8055CAF8[4];
extern char lbl_8055CAFC[4];
extern char lbl_8055CB00[4];
extern char lbl_8055CB04[4];
extern char lbl_8055CB08[4];
extern char lbl_8055CB0C[4];
extern char lbl_8055CB10[4];
extern char lbl_8055CB14[4];
extern char lbl_8055CB18[4];
extern char lbl_8055CB20[4];
extern char lbl_8055CB24[4];
extern char lbl_8055CB28[4];
extern char lbl_8055CB2C[4];
extern char lbl_8055CB30[4];
extern char lbl_8055CB34[4];
extern char lbl_8055CB38[4];
extern char lbl_8055CB3C[4];
extern char lbl_8055CB44[4];
extern char lbl_8055CB48[4];
extern char lbl_8055CB4C[4];
extern char lbl_8055CB50[4];
extern char lbl_8055CB54[4];
extern char lbl_8055CB58[4];
extern char lbl_8055CB5C[4];
extern char lbl_8055CB60[4];
extern char lbl_8055CB64[4];
extern char lbl_8055CB68[4];
extern char lbl_8055CB70[4];
extern char lbl_8055CB74[4];
void *igViewerStatisticsManager_dependencies[8] = {(void *)igStatisticsItemList_arkRegister, (void *)igVisualContext_arkRegister, (void *)igViewerGuiFactory_arkRegister, (void *)igBoxComponent_arkRegister, (void *)arkRegister__Q33Gap4Core11igStringObjFv, (void *)igMetaObjectList_arkRegister, (void *)igMetaFieldList_arkRegister, 0};
void *igViewerStatisticsManager_fieldTypes[15] = {(void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_800385E0, (void *)fn_8002879C, (void *)fn_8002879C, (void *)igFloatMetaField_create, (void *)igFloatMetaField_create, (void *)igFloatMetaField_create, (void *)igFloatMetaField_create, (void *)igFloatMetaField_create, (void *)igFloatMetaField_create};
void *igViewerStatisticsManager_fieldNames[15] = {(void *)lbl_80461C3C, (void *)lbl_80461C44, (void *)lbl_80461C54, (void *)lbl_80461C60, (void *)lbl_80461C68, (void *)lbl_80461C78, (void *)lbl_80461C80, (void *)lbl_80461C98, (void *)lbl_80461CAC, (void *)lbl_80461CC0, (void *)lbl_80461CCC, (void *)lbl_80461CE4, (void *)lbl_80461CF8, (void *)lbl_80461D0C, (void *)lbl_80461D24};
void *igViewerStatisticsManager_fieldStorage[15] = {(void *)lbl_8055C704, (void *)lbl_8055C708, (void *)lbl_8055C70C, (void *)lbl_8055C710, (void *)lbl_8055C714, (void *)lbl_8055C718, (void *)lbl_8055C71C, (void *)lbl_8055C720, (void *)lbl_8055C724, (void *)lbl_8055C728, (void *)lbl_8055C72C, (void *)lbl_8055C730, (void *)lbl_8055C734, (void *)lbl_8055C738, (void *)lbl_8055C73C};
void *igViewerStatisticsManager_fieldOffsets[15] = {(void *)0x8, (void *)0xC, (void *)0x10, (void *)0x14, (void *)0x18, (void *)0x1C, (void *)0x20, (void *)0x24, (void *)0x28, (void *)0x2C, (void *)0x30, (void *)0x34, (void *)0x38, (void *)0x3C, (void *)0x40};
void *igStatisticsItemList_dependencies[2] = {(void *)igStatisticsItem_arkRegister, 0};
void *igStatisticsItem_dependencies[5] = {(void *)igGuiComponent_arkRegister, (void *)igDefaultAspect_arkRegister, (void *)igTextElement_arkRegister, (void *)igViewerStatisticsManager_arkRegister, 0};
void *igStatisticsItem_fieldTypes[12] = {(void *)igFloatMetaField_create, (void *)igFloatMetaField_create, (void *)fn_800385E0, (void *)fn_800251EC, (void *)fn_800251EC, (void *)fn_800385E0, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_80031378, (void *)fn_8002E1AC};
void *igStatisticsItem_fieldNames[12] = {(void *)lbl_80461D60, (void *)lbl_80461D68, (void *)lbl_80461D78, (void *)lbl_80461D88, (void *)lbl_80461D90, (void *)lbl_80461DA0, (void *)lbl_80461DAC, (void *)lbl_80461DC0, (void *)lbl_80461DC8, (void *)lbl_80461DD8, (void *)lbl_80461DE4, (void *)lbl_80461DEC};
void *igStatisticsItem_fieldStorage[12] = {(void *)lbl_8055C748, (void *)lbl_8055C74C, (void *)lbl_8055C750, (void *)lbl_8055C754, (void *)lbl_8055C758, (void *)lbl_8055C75C, (void *)lbl_8055C760, (void *)lbl_8055C764, (void *)lbl_8055C768, (void *)lbl_8055C76C, (void *)lbl_8055C770, (void *)lbl_8055C774};
void *igStatisticsItem_fieldOffsets[12] = {(void *)0xC, (void *)0x10, (void *)0x14, (void *)0x18, (void *)0x1C, (void *)0x20, (void *)0x24, (void *)0x28, (void *)0x2C, (void *)0x30, (void *)0x34, (void *)0x38};
void *lbl_804F0034[1] = {(void *)0xFFFFFFFF};
void *igViewerAction_dependencies[2] = {(void *)igViewerSceneInfoManager_arkRegister, 0};
void *igViewerAction_fieldTypes[2] = {(void *)fn_8002879C, (void *)igStructMetaField_create};
void *igViewerAction_fieldNames[2] = {(void *)lbl_80461E10, (void *)lbl_80461E18};
void *igViewerAction_fieldStorage[2] = {(void *)lbl_8055C77C, (void *)lbl_8055C780};
void *igViewerAction_fieldOffsets[2] = {(void *)0x8, (void *)0xC};
void *lbl_804F0060[3] = {(void *)lbl_80461E24, (void *)lbl_80461E30, (void *)lbl_80461E3C};
void *lbl_804F006C[3] = {0, (void *)0x1, (void *)0x2};
void *igViewerSceneInfoManager_dependencies[20] = {(void *)igViewerSceneInfoManagerController_arkRegister, (void *)igViewerParameters_arkRegister, (void *)igViewerRenderer_arkRegister, (void *)igBoundingBoxRenderer_arkRegister, (void *)igNormalsRenderer_arkRegister, (void *)igFlushRenderer_arkRegister, (void *)igGuiSystem_arkRegister, (void *)igViewerGuiFactory_arkRegister, (void *)igBoxComponent_arkRegister, (void *)igGuiComponent_arkRegister, (void *)igStatisticsItem_arkRegister, (void *)igHotKeyEventReceiver_arkRegister, (void *)igViewManager_arkRegister, (void *)igViewerStatisticsManager_arkRegister, (void *)igGuiComponentList_arkRegister, (void *)igObjectList_arkRegister, (void *)igRadioGroup_arkRegister, (void *)igTextureList_arkRegister, (void *)igViewerModeChangeMessage_arkRegister, 0};
void *igViewerSceneInfoManager_fieldTypes[43] = {(void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002E1AC, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002E1AC, (void *)igLongMetaField_create, (void *)fn_80031378, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_800385E0, (void *)fn_8002879C};
void *igViewerSceneInfoManager_fieldNames[43] = {(void *)lbl_80461E74, (void *)lbl_80461E8C, (void *)lbl_80461E98, (void *)lbl_80461EA8, (void *)lbl_80461EB8, (void *)lbl_80461ECC, (void *)lbl_80461EDC, (void *)lbl_80461EF0, (void *)lbl_80461C54, (void *)lbl_80461EF8, (void *)lbl_80461F08, (void *)lbl_80461F14, (void *)lbl_80461F28, (void *)lbl_80461F38, (void *)lbl_80461F48, (void *)lbl_80461F54, (void *)lbl_80461F60, (void *)lbl_80461F6C, (void *)lbl_80461F7C, (void *)lbl_80461F88, (void *)lbl_80461F9C, (void *)lbl_80461FA8, (void *)lbl_80461FB8, (void *)lbl_80461FC4, (void *)lbl_80461FD0, (void *)lbl_80461FE0, (void *)lbl_80461FF0, (void *)lbl_80462000, (void *)lbl_80462014, (void *)lbl_80462028, (void *)lbl_80462038, (void *)lbl_80462048, (void *)lbl_80462058, (void *)lbl_8046206C, (void *)lbl_8046207C, (void *)lbl_80462090, (void *)lbl_8046209C, (void *)lbl_804620A4, (void *)lbl_804620B4, (void *)lbl_804620C4, (void *)lbl_804620D4, (void *)lbl_804620E0, (void *)lbl_804620F4};
void *igViewerSceneInfoManager_fieldStorage[43] = {(void *)lbl_8055C790, (void *)lbl_8055C794, (void *)lbl_8055C798, (void *)lbl_8055C79C, (void *)lbl_8055C7A0, (void *)lbl_8055C7A4, (void *)lbl_8055C7A8, (void *)lbl_8055C7AC, (void *)lbl_8055C7B0, (void *)lbl_8055C7B4, (void *)lbl_8055C7B8, (void *)lbl_8055C7BC, (void *)lbl_8055C7C0, (void *)lbl_8055C7C4, (void *)lbl_8055C7C8, (void *)lbl_8055C7CC, (void *)lbl_8055C7D0, (void *)lbl_8055C7D4, (void *)lbl_8055C7D8, (void *)lbl_8055C7DC, (void *)lbl_8055C7E0, (void *)lbl_8055C7E4, (void *)lbl_8055C7E8, (void *)lbl_8055C7EC, (void *)lbl_8055C7F0, (void *)lbl_8055C7F4, (void *)lbl_8055C7F8, (void *)lbl_8055C7FC, (void *)lbl_8055C800, (void *)lbl_8055C804, (void *)lbl_8055C808, (void *)lbl_8055C80C, (void *)lbl_8055C810, (void *)lbl_8055C814, (void *)lbl_8055C818, (void *)lbl_8055C81C, (void *)lbl_8055C820, (void *)lbl_8055C824, (void *)lbl_8055C828, (void *)lbl_8055C82C, (void *)lbl_8055C830, (void *)lbl_8055C834, (void *)lbl_8055C838};
void *igViewerSceneInfoManager_fieldOffsets[43] = {(void *)0x10, (void *)0x14, (void *)0x18, (void *)0x1C, (void *)0x20, (void *)0x24, (void *)0x28, (void *)0x2C, (void *)0x30, (void *)0x34, (void *)0x38, (void *)0x3C, (void *)0x40, (void *)0x44, (void *)0x48, (void *)0x4C, (void *)0x50, (void *)0x54, (void *)0x58, (void *)0x5C, (void *)0x60, (void *)0x64, (void *)0x68, (void *)0x6C, (void *)0x70, (void *)0x74, (void *)0x78, (void *)0x7C, (void *)0x80, (void *)0x84, (void *)0x88, (void *)0x8C, (void *)0x90, (void *)0x94, (void *)0x98, (void *)0x9C, (void *)0xA0, (void *)0xA8, (void *)0xB0, (void *)0xB4, (void *)0xB8, (void *)0xBC, (void *)0xC0};
void *lbl_804F0378[1] = {0};
void *igViewerModeChangeMessage_fieldTypes[2] = {(void *)fn_800385E0, (void *)fn_800251EC};
void *igViewerModeChangeMessage_fieldNames[2] = {(void *)lbl_8046214C, (void *)lbl_80462154};
void *igViewerModeChangeMessage_fieldStorage[2] = {(void *)lbl_8055C840, (void *)lbl_8055C844};
void *igViewerModeChangeMessage_fieldOffsets[2] = {(void *)0x8, (void *)0xC};
void *igViewerLoadingFileMessage_fieldTypes[2] = {(void *)fn_800385E0, (void *)fn_800251EC};
void *igViewerLoadingFileMessage_fieldNames[2] = {(void *)lbl_80462178, (void *)lbl_80462184};
void *igViewerLoadingFileMessage_fieldStorage[2] = {(void *)lbl_8055C84C, (void *)lbl_8055C850};
void *igViewerLoadingFileMessage_fieldOffsets[2] = {(void *)0x8, (void *)0xC};
void *lbl_804F03BC[10] = {(void *)igViewerParameters_arkRegister, 0, (void *)fn_8002879C, (void *)fn_8002E1AC, (void *)lbl_80461E8C, (void *)lbl_80462190, (void *)lbl_8055C858, (void *)lbl_8055C85C, (void *)0xC, (void *)0x10};
void *igViewerSceneInfoManagerController_dependencies[3] = {(void *)igViewerSceneInfoManager_arkRegister, (void *)igViewerRenderer_arkRegister, 0};
void *igViewerSceneInfoManagerController_fieldTypes[2] = {(void *)fn_8002879C, (void *)fn_8002879C};
void *igViewerSceneInfoManagerController_fieldNames[2] = {(void *)lbl_804621C4, (void *)lbl_80461E98};
void *igViewerSceneInfoManagerController_fieldStorage[2] = {(void *)lbl_8055C864, (void *)lbl_8055C868};
void *igViewerSceneInfoManagerController_fieldOffsets[2] = {(void *)0xC, (void *)0x10};
void *lbl_804F0410[16] = {(void *)igVec3fMetaField_create, (void *)igVec3fMetaField_create, (void *)igVec3fMetaField_create, (void *)lbl_804621D4, (void *)lbl_804621E0, (void *)lbl_804621F4, (void *)lbl_8055C86C, (void *)lbl_8055C870, (void *)lbl_8055C874, (void *)0x34, (void *)0x40, (void *)0x4C, (void *)igVec2fMetaField_create, (void *)lbl_80462204, (void *)lbl_8055C87C, (void *)0x28};
void *igViewerRenderer_dependencies[18] = {(void *)igViewerParameters_arkRegister, (void *)igCullFaceAttr_arkRegister, (void *)igAlphaStateAttr_arkRegister, (void *)igShadeModelAttr_arkRegister, (void *)igPolygonModeAttr_arkRegister, (void *)igLightingStateAttr_arkRegister, (void *)igLightAttr_arkRegister, (void *)igLightStateAttr_arkRegister, (void *)igAttrSet_arkRegister, (void *)igOverrideAttrSet_arkRegister, (void *)igTransform_arkRegister, (void *)igLightSet_arkRegister, (void *)igLightList_arkRegister, (void *)igLightStateAttrList_arkRegister, (void *)igCommonTraversal_arkRegister, (void *)igDisplayListAttr_arkRegister, (void *)igDisableExt_arkRegister, 0};
void *igViewerRenderer_fieldTypes[20] = {(void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_800385E0, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C};
void *igViewerRenderer_fieldNames[20] = {(void *)lbl_80461E8C, (void *)lbl_80462224, (void *)lbl_8046223C, (void *)lbl_8046224C, (void *)lbl_8046225C, (void *)lbl_80462270, (void *)lbl_80462280, (void *)lbl_80462290, (void *)lbl_804622A4, (void *)lbl_804622B0, (void *)lbl_804622C4, (void *)lbl_804622D8, (void *)lbl_804622E8, (void *)lbl_804622F4, (void *)lbl_80462304, (void *)lbl_80462314, (void *)lbl_80462324, (void *)lbl_80462334, (void *)lbl_80462344, (void *)lbl_80462354};
void *igViewerRenderer_fieldStorage[20] = {(void *)lbl_8055C884, (void *)lbl_8055C888, (void *)lbl_8055C88C, (void *)lbl_8055C890, (void *)lbl_8055C894, (void *)lbl_8055C898, (void *)lbl_8055C89C, (void *)lbl_8055C8A0, (void *)lbl_8055C8A4, (void *)lbl_8055C8A8, (void *)lbl_8055C8AC, (void *)lbl_8055C8B0, (void *)lbl_8055C8B4, (void *)lbl_8055C8B8, (void *)lbl_8055C8BC, (void *)lbl_8055C8C0, (void *)lbl_8055C8C4, (void *)lbl_8055C8C8, (void *)lbl_8055C8CC, (void *)lbl_8055C8D0};
void *igViewerRenderer_fieldOffsets[20] = {(void *)0xC, (void *)0x10, (void *)0x14, (void *)0x18, (void *)0x1C, (void *)0x20, (void *)0x24, (void *)0x28, (void *)0x2C, (void *)0x30, (void *)0x34, (void *)0x38, (void *)0x3C, (void *)0x40, (void *)0x44, (void *)0x48, (void *)0x4C, (void *)0x50, (void *)0x54, (void *)0x58};
void *lbl_804F05D8[20] = {(void *)lbl_80462368, (void *)lbl_80462370, (void *)lbl_80462378, 0, (void *)0x1, (void *)0x2, (void *)lbl_80462384, (void *)lbl_8046238C, (void *)lbl_80462394, 0, (void *)0x1, (void *)0x2, (void *)lbl_804623A0, (void *)lbl_804623A8, (void *)lbl_804623B0, (void *)lbl_804623B4, 0, (void *)0x1, (void *)0x2, (void *)0x3};
void *igViewerParameters_dependencies[5] = {(void *)igGroup_arkRegister, (void *)igBitMask_arkRegister, (void *)igGraphPathList_arkRegister, (void *)igGraphPath_arkRegister, 0};
void *igViewerParameters_fieldTypes[39] = {(void *)fn_8002879C, (void *)igVec3fMetaField_create, (void *)igFloatMetaField_create, (void *)igFloatMetaField_create, (void *)igFloatMetaField_create, (void *)igFloatMetaField_create, (void *)igMatrix44fMetaField_create, (void *)igMatrix44fMetaField_create, (void *)igLongMetaField_create, (void *)fn_800385E0, (void *)fn_800385E0, (void *)fn_800385E0, (void *)fn_8002E1AC, (void *)fn_800385E0, (void *)fn_800385E0, (void *)fn_800385E0, (void *)fn_800385E0, (void *)fn_800385E0, (void *)fn_800385E0, (void *)fn_800385E0, (void *)fn_800385E0, (void *)fn_800385E0, (void *)fn_800385E0, (void *)fn_800385E0, (void *)fn_8002879C, (void *)fn_800385E0, (void *)fn_800385E0, (void *)fn_800385E0, (void *)fn_800385E0, (void *)fn_8002E1AC, (void *)fn_8002E1AC, (void *)fn_8002879C, (void *)igLongMetaField_create, (void *)igLongMetaField_create, (void *)fn_8002879C, (void *)fn_8002E1AC, (void *)fn_8002E1AC, (void *)igFloatMetaField_create, (void *)igVec2fMetaField_create};
void *igViewerParameters_fieldNames[39] = {(void *)lbl_804623D0, (void *)lbl_804623D8, (void *)lbl_804623E4, (void *)lbl_804623EC, (void *)lbl_804623F4, (void *)lbl_80462400, (void *)lbl_8046240C, (void *)lbl_80462420, (void *)lbl_8046242C, (void *)lbl_80462438, (void *)lbl_80462448, (void *)lbl_8046245C, (void *)lbl_80462478, (void *)lbl_8046248C, (void *)lbl_8046249C, (void *)lbl_804624AC, (void *)lbl_804624C4, (void *)lbl_804624D0, (void *)lbl_804624E0, (void *)lbl_804624F4, (void *)lbl_8046250C, (void *)lbl_80462518, (void *)lbl_80462528, (void *)lbl_80462538, (void *)lbl_8046254C, (void *)lbl_80462558, (void *)lbl_80462564, (void *)lbl_80462578, (void *)lbl_80462588, (void *)lbl_80462598, (void *)lbl_804625A8, (void *)lbl_804625BC, (void *)lbl_804625C8, (void *)lbl_804625D4, (void *)lbl_804625E0, (void *)lbl_804625F0, (void *)lbl_80462600, (void *)lbl_8046260C, (void *)lbl_80462614};
void *igViewerParameters_fieldStorage[39] = {(void *)lbl_8055C8D8, (void *)lbl_8055C8DC, (void *)lbl_8055C8E0, (void *)lbl_8055C8E4, (void *)lbl_8055C8E8, (void *)lbl_8055C8EC, (void *)lbl_8055C8F0, (void *)lbl_8055C8F4, (void *)lbl_8055C8F8, (void *)lbl_8055C8FC, (void *)lbl_8055C900, (void *)lbl_8055C904, (void *)lbl_8055C908, (void *)lbl_8055C90C, (void *)lbl_8055C910, (void *)lbl_8055C914, (void *)lbl_8055C918, (void *)lbl_8055C91C, (void *)lbl_8055C920, (void *)lbl_8055C924, (void *)lbl_8055C928, (void *)lbl_8055C92C, (void *)lbl_8055C930, (void *)lbl_8055C934, (void *)lbl_8055C938, (void *)lbl_8055C93C, (void *)lbl_8055C940, (void *)lbl_8055C944, (void *)lbl_8055C948, (void *)lbl_8055C94C, (void *)lbl_8055C950, (void *)lbl_8055C954, (void *)lbl_8055C958, (void *)lbl_8055C95C, (void *)lbl_8055C960, (void *)lbl_8055C964, (void *)lbl_8055C968, (void *)lbl_8055C96C, (void *)lbl_8055C970};
void *igViewerParameters_fieldOffsets[39] = {(void *)0xC, (void *)0x10, (void *)0x1C, (void *)0x20, (void *)0x24, (void *)0x28, (void *)0x2C, (void *)0x6C, (void *)0xB0, (void *)0xB8, (void *)0xB9, (void *)0xBA, (void *)0xBC, (void *)0xC0, (void *)0xC1, (void *)0xC2, (void *)0xC3, (void *)0xC4, (void *)0xC5, (void *)0xC6, (void *)0xC7, (void *)0xC8, (void *)0xC9, (void *)0xCA, (void *)0xCC, (void *)0xD0, (void *)0xD1, (void *)0xD2, (void *)0xD3, (void *)0xD4, (void *)0xD8, (void *)0xDC, (void *)0xE0, (void *)0xE8, (void *)0xF0, (void *)0xF4, (void *)0xF8, (void *)0xFC, (void *)0x100};
void *lbl_804F08AC[26] = {(void *)lbl_80462630, (void *)lbl_80462640, 0, (void *)0x1, (void *)lbl_8046264C, (void *)lbl_80462658, (void *)lbl_80462394, (void *)lbl_80462384, (void *)lbl_8046238C, (void *)lbl_80462664, (void *)lbl_80462674, 0, (void *)0x1, (void *)0x2, (void *)0x3, (void *)0x4, (void *)0x5, (void *)0x6, (void *)lbl_804623A0, (void *)lbl_804623A8, (void *)lbl_804623B4, (void *)lbl_80462680, 0, (void *)0x1, (void *)0x2, (void *)0x3};
void *igViewerGuiFactory_dependencies[4] = {(void *)igBasicColorChanger_arkRegister, (void *)igOnOffColorChanger_arkRegister, (void *)igBitmapFont_arkRegister, 0};
void *igViewerGuiFactory_fieldTypes[8] = {(void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C};
void *igViewerGuiFactory_fieldNames[8] = {(void *)lbl_804626A0, (void *)lbl_804626B0, (void *)lbl_804626C4, (void *)lbl_804626D4, (void *)lbl_804626E4, (void *)lbl_804626F4, (void *)lbl_8046270C, (void *)lbl_80462724};
void *igViewerGuiFactory_fieldStorage[8] = {(void *)lbl_8055C978, (void *)lbl_8055C97C, (void *)lbl_8055C980, (void *)lbl_8055C984, (void *)lbl_8055C988, (void *)lbl_8055C98C, (void *)lbl_8055C990, (void *)lbl_8055C994};
void *igViewerGuiFactory_fieldOffsets[8] = {(void *)0x8, (void *)0xC, (void *)0x10, (void *)0x14, (void *)0x18, (void *)0x1C, (void *)0x20, (void *)0x24};
void *igViewerDataPumpManager_dependencies[2] = {(void *)igDataPumpManager_arkRegister, 0};
void *igViewerDataPumpManager_fieldTypes[1] = {(void *)fn_8002879C};
void *igViewerDataPumpManager_fieldNames[1] = {(void *)lbl_80462744};
void *igViewerDataPumpManager_fieldStorage[1] = {(void *)lbl_8055C9A0};
void *igViewerDataPumpManager_fieldOffsets[1] = {(void *)0x10};
void *igPickMode_dependencies[7] = {(void *)igViewerParameters_arkRegister, (void *)igGuiSystem_arkRegister, (void *)igMouseCursor_arkRegister, (void *)igIntersectTraversal_arkRegister, (void *)igRay_arkRegister, (void *)igGraphPath_arkRegister, 0};
void *igPickMode_fieldTypes[12] = {(void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_800385E0, (void *)fn_8002879C, (void *)fn_8002879C, (void *)igFloatMetaField_create, (void *)fn_800385E0, (void *)fn_8002879C, (void *)igMatrix44fMetaField_create, (void *)igVec2fMetaField_create};
void *igPickMode_fieldNames[12] = {(void *)lbl_80461E8C, (void *)lbl_80462780, (void *)lbl_8046278C, (void *)lbl_80462794, (void *)lbl_804627A4, (void *)lbl_804627B8, (void *)lbl_804627CC, (void *)lbl_804627D4, (void *)lbl_804627E4, (void *)lbl_804627EC, (void *)lbl_804627F8, (void *)lbl_80462814};
void *igPickMode_fieldStorage[12] = {(void *)lbl_8055C9A8, (void *)lbl_8055C9AC, (void *)lbl_8055C9B0, (void *)lbl_8055C9B4, (void *)lbl_8055C9B8, (void *)lbl_8055C9BC, (void *)lbl_8055C9C0, (void *)lbl_8055C9C4, (void *)lbl_8055C9C8, (void *)lbl_8055C9CC, (void *)lbl_8055C9D0, (void *)lbl_8055C9D4};
void *igPickMode_fieldOffsets[12] = {(void *)0x4C, (void *)0x50, (void *)0x54, (void *)0x58, (void *)0x5C, (void *)0x60, (void *)0x64, (void *)0x68, (void *)0x6C, (void *)0x70, (void *)0x74, (void *)0xB4};
void *lbl_804F0A98[3] = {(void *)lbl_80462820, (void *)lbl_80462828, (void *)lbl_80462838};
void *lbl_804F0AA4[3] = {0, (void *)0x1, (void *)0x2};
void *igRotateMode_fieldTypes[16] = {(void *)igFloatMetaField_create, (void *)igVec2fMetaField_create, (void *)fn_800385E0, (void *)fn_800385E0, (void *)fn_800385E0, (void *)igVec2fMetaField_create, (void *)igVec2fMetaField_create, (void *)fn_800385E0, (void *)fn_80031378, (void *)fn_800385E0, (void *)fn_800385E0, (void *)igFloatMetaField_create, (void *)igFloatMetaField_create, (void *)igFloatMetaField_create, (void *)igFloatMetaField_create, (void *)igVec3fMetaField_create};
void *igRotateMode_fieldNames[16] = {(void *)lbl_80462868, (void *)lbl_80462874, (void *)lbl_80462884, (void *)lbl_80462898, (void *)lbl_804628AC, (void *)lbl_80462814, (void *)lbl_804628C0, (void *)lbl_804628CC, (void *)lbl_804628D8, (void *)lbl_804628E8, (void *)lbl_804628F0, (void *)lbl_804628F8, (void *)lbl_80462900, (void *)lbl_80462908, (void *)lbl_80462910, (void *)lbl_80462918};
void *igRotateMode_fieldStorage[16] = {(void *)lbl_8055C9E0, (void *)lbl_8055C9E4, (void *)lbl_8055C9E8, (void *)lbl_8055C9EC, (void *)lbl_8055C9F0, (void *)lbl_8055C9F4, (void *)lbl_8055C9F8, (void *)lbl_8055C9FC, (void *)lbl_8055CA00, (void *)lbl_8055CA04, (void *)lbl_8055CA08, (void *)lbl_8055CA0C, (void *)lbl_8055CA10, (void *)lbl_8055CA14, (void *)lbl_8055CA18, (void *)lbl_8055CA1C};
void *igRotateMode_fieldOffsets[16] = {(void *)0x4C, (void *)0x50, (void *)0x58, (void *)0x59, (void *)0x5A, (void *)0x5C, (void *)0x64, (void *)0x6C, (void *)0x70, (void *)0x74, (void *)0x75, (void *)0x78, (void *)0x7C, (void *)0x80, (void *)0x84, (void *)0x88};
void *lbl_804F0BB0[1] = {0};
void *igFlyMode_dependencies[2] = {(void *)igWindow_arkRegister, 0};
void *igFlyMode_fieldTypes[11] = {(void *)igVec3fMetaField_create, (void *)igVec3fMetaField_create, (void *)igVec2fMetaField_create, (void *)igVec3fMetaField_create, (void *)igVec2fMetaField_create, (void *)igFloatMetaField_create, (void *)fn_800385E0, (void *)fn_8002879C, (void *)igVec2fMetaField_create, (void *)igVec2fMetaField_create, (void *)fn_800385E0};
void *igFlyMode_fieldNames[11] = {(void *)lbl_80462934, (void *)lbl_80462814, (void *)lbl_804628C0, (void *)lbl_80462944, (void *)lbl_80462958, (void *)lbl_8046260C, (void *)lbl_80462968, (void *)lbl_80462970, (void *)lbl_80462978, (void *)lbl_80462984, (void *)lbl_80462990};
void *igFlyMode_fieldStorage[11] = {(void *)lbl_8055CA24, (void *)lbl_8055CA28, (void *)lbl_8055CA2C, (void *)lbl_8055CA30, (void *)lbl_8055CA34, (void *)lbl_8055CA38, (void *)lbl_8055CA3C, (void *)lbl_8055CA40, (void *)lbl_8055CA44, (void *)lbl_8055CA48, (void *)lbl_8055CA4C};
void *igFlyMode_fieldOffsets[11] = {(void *)0x4C, (void *)0x58, (void *)0x64, (void *)0x6C, (void *)0x78, (void *)0x80, (void *)0x84, (void *)0x88, (void *)0x8C, (void *)0x94, (void *)0x9C};
void *igCameraMode_dependencies[3] = {(void *)igGraphPath_arkRegister, (void *)igCamera_arkRegister, 0};
void *igCameraMode_fieldTypes[2] = {(void *)fn_8002879C, (void *)fn_8002879C};
void *igCameraMode_fieldNames[2] = {(void *)lbl_804629B0, (void *)lbl_804629BC};
void *igCameraMode_fieldStorage[2] = {(void *)lbl_8055CA54, (void *)lbl_8055CA58};
void *igCameraMode_fieldOffsets[2] = {(void *)0x4C, (void *)0x50};
void *igViewMode_fieldTypes[1] = {(void *)igMatrix44fMetaField_create};
void *igViewMode_fieldNames[1] = {(void *)lbl_804629D0};
void *igViewMode_fieldStorage[1] = {(void *)lbl_8055CA60};
void *igViewMode_fieldOffsets[1] = {(void *)0xC};
void *igViewManager_dependencies[4] = {(void *)igViewMode_arkRegister, (void *)igViewModel_arkRegister, (void *)igObjectList_arkRegister, 0};
void *igViewManager_fieldTypes[4] = {(void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)igMatrix44fMetaField_create};
void *igViewManager_fieldNames[4] = {(void *)lbl_804629F0, (void *)lbl_804629FC, (void *)lbl_80462A08, (void *)lbl_80462A18};
void *igViewManager_fieldStorage[4] = {(void *)lbl_8055CA68, (void *)lbl_8055CA6C, (void *)lbl_8055CA70, (void *)lbl_8055CA74};
void *igViewManager_fieldOffsets[4] = {(void *)0x8, (void *)0xC, (void *)0x10, (void *)0x14};
void *igViewModel_fieldTypes[13] = {(void *)igMatrix44fMetaField_create, (void *)igFloatMetaField_create, (void *)igFloatMetaField_create, (void *)igFloatMetaField_create, (void *)igFloatMetaField_create, (void *)igVec3fMetaField_create, (void *)igVec3fMetaField_create, (void *)igVec3fMetaField_create, (void *)igVec3fMetaField_create, (void *)igVec3fMetaField_create, (void *)igLongMetaField_create, (void *)igVec3fMetaField_create, (void *)igFloatMetaField_create};
void *igViewModel_fieldNames[13] = {(void *)lbl_80462420, (void *)lbl_804623E4, (void *)lbl_804623EC, (void *)lbl_804623F4, (void *)lbl_80462400, (void *)lbl_80462A30, (void *)lbl_80462A3C, (void *)lbl_80462A48, (void *)lbl_80462A58, (void *)lbl_80462A68, (void *)lbl_8046242C, (void *)lbl_80462A78, (void *)lbl_80462A88};
void *igViewModel_fieldStorage[13] = {(void *)lbl_8055CA7C, (void *)lbl_8055CA80, (void *)lbl_8055CA84, (void *)lbl_8055CA88, (void *)lbl_8055CA8C, (void *)lbl_8055CA90, (void *)lbl_8055CA94, (void *)lbl_8055CA98, (void *)lbl_8055CA9C, (void *)lbl_8055CAA0, (void *)lbl_8055CAA4, (void *)lbl_8055CAA8, (void *)lbl_8055CAAC};
void *igViewModel_fieldOffsets[13] = {(void *)0xC, (void *)0x4C, (void *)0x50, (void *)0x54, (void *)0x58, (void *)0x5C, (void *)0x68, (void *)0x74, (void *)0x80, (void *)0x8C, (void *)0x98, (void *)0xA0, (void *)0xAC};
void *igNormalsRenderer_dependencies[7] = {(void *)igViewerParameters_arkRegister, (void *)igAttrList_arkRegister, (void *)igModelViewMatrixAttr_arkRegister, (void *)igColorAttr_arkRegister, (void *)igGeometryAttrList_arkRegister, (void *)igGraphPath_arkRegister, 0};
void *igNormalsRenderer_fieldTypes[9] = {(void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_800385E0, (void *)fn_8002879C, (void *)fn_800385E0};
void *igNormalsRenderer_fieldNames[9] = {(void *)lbl_80461E8C, (void *)lbl_80462AAC, (void *)lbl_80462AB8, (void *)lbl_80462ACC, (void *)lbl_80462ADC, (void *)lbl_80462AE8, (void *)lbl_80462AF4, (void *)lbl_80462B0C, (void *)lbl_80462B14};
void *igNormalsRenderer_fieldStorage[9] = {(void *)lbl_8055CAB4, (void *)lbl_8055CAB8, (void *)lbl_8055CABC, (void *)lbl_8055CAC0, (void *)lbl_8055CAC4, (void *)lbl_8055CAC8, (void *)lbl_8055CACC, (void *)lbl_8055CAD0, (void *)lbl_8055CAD4};
void *igNormalsRenderer_fieldOffsets[9] = {(void *)0xC, (void *)0x10, (void *)0x14, (void *)0x18, (void *)0x1C, (void *)0x20, (void *)0x24, (void *)0x28, (void *)0x2C};
void *igLogoRenderer_dependencies[4] = {(void *)igGeometryAttr_arkRegister, (void *)igColorAttr_arkRegister, (void *)igAttrList_arkRegister, 0};
void *igLogoRenderer_fieldTypes[4] = {(void *)igLongMetaField_create, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C};
void *igLogoRenderer_fieldNames[4] = {(void *)lbl_80462B2C, (void *)lbl_80462B34, (void *)lbl_80462ADC, (void *)lbl_80462AAC};
void *igLogoRenderer_fieldStorage[4] = {(void *)lbl_8055CADC, (void *)lbl_8055CAE0, (void *)lbl_8055CAE4, (void *)lbl_8055CAE8};
void *igLogoRenderer_fieldOffsets[4] = {(void *)0x10, (void *)0x18, (void *)0x1C, (void *)0x20};
void *lbl_804F0EC4[52] = {(void *)igTransform_arkRegister, (void *)igFieldSynchronizer_arkRegister, (void *)igGeometryElement_arkRegister, 0, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)igVec4fMetaField_create, (void *)igVec4fMetaField_create, (void *)lbl_80462B44, (void *)lbl_80462B54, (void *)lbl_80462B6C, (void *)lbl_80462B7C, (void *)lbl_80462B8C, (void *)lbl_80462B9C, (void *)lbl_80462BAC, (void *)lbl_80462BBC, (void *)lbl_80462BC8, (void *)lbl_80462BDC, (void *)lbl_80462BEC, (void *)lbl_80462BFC, (void *)lbl_8055CAEC, (void *)lbl_8055CAF0, (void *)lbl_8055CAF4, (void *)lbl_8055CAF8, (void *)lbl_8055CAFC, (void *)lbl_8055CB00, (void *)lbl_8055CB04, (void *)lbl_8055CB08, (void *)lbl_8055CB0C, (void *)lbl_8055CB10, (void *)lbl_8055CB14, (void *)lbl_8055CB18, (void *)0x28, (void *)0x2C, (void *)0x30, (void *)0x34, (void *)0x38, (void *)0x3C, (void *)0x40, (void *)0x44, (void *)0x48, (void *)0x4C, (void *)0x50, (void *)0x60};
void *igBoundingBoxRenderer_dependencies[7] = {(void *)igViewerParameters_arkRegister, (void *)igDisplayListAttr_arkRegister, (void *)igAttrList_arkRegister, (void *)igModelViewMatrixAttr_arkRegister, (void *)igGeometryAttr_arkRegister, (void *)igGraphPath_arkRegister, 0};
void *igBoundingBoxRenderer_fieldTypes[8] = {(void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_800385E0};
void *igBoundingBoxRenderer_fieldNames[8] = {(void *)lbl_80461E8C, (void *)lbl_80462C24, (void *)lbl_80462AAC, (void *)lbl_80462ACC, (void *)lbl_80462C34, (void *)lbl_80462C3C, (void *)lbl_80462B0C, (void *)lbl_80462B14};
void *igBoundingBoxRenderer_fieldStorage[8] = {(void *)lbl_8055CB20, (void *)lbl_8055CB24, (void *)lbl_8055CB28, (void *)lbl_8055CB2C, (void *)lbl_8055CB30, (void *)lbl_8055CB34, (void *)lbl_8055CB38, (void *)lbl_8055CB3C};
void *igBoundingBoxRenderer_fieldOffsets[8] = {(void *)0xC, (void *)0x10, (void *)0x14, (void *)0x18, (void *)0x1C, (void *)0x20, (void *)0x24, (void *)0x28};
void *igActorManager_dependencies[10] = {(void *)igAppearanceList_arkRegister, (void *)igNodeList_arkRegister, (void *)igActorList_arkRegister, (void *)igActorManagerParams_arkRegister, (void *)igPointerList_arkRegister, (void *)igMetaObjectList_arkRegister, (void *)igViewportAttr_arkRegister, (void *)igViewerSceneInfoManager_arkRegister, (void *)igObjectList_arkRegister, 0};
void *igActorManager_fieldTypes[10] = {(void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C};
void *igActorManager_fieldNames[10] = {(void *)lbl_80462C54, (void *)lbl_80462C60, (void *)lbl_80462C70, (void *)lbl_80462C78, (void *)lbl_80462C80, (void *)lbl_80462C8C, (void *)lbl_80462C98, (void *)lbl_80462CA4, (void *)lbl_80462CB4, (void *)lbl_80462090};
void *igActorManager_fieldStorage[10] = {(void *)lbl_8055CB44, (void *)lbl_8055CB48, (void *)lbl_8055CB4C, (void *)lbl_8055CB50, (void *)lbl_8055CB54, (void *)lbl_8055CB58, (void *)lbl_8055CB5C, (void *)lbl_8055CB60, (void *)lbl_8055CB64, (void *)lbl_8055CB68};
void *igActorManager_fieldOffsets[10] = {(void *)0x10, (void *)0x14, (void *)0x18, (void *)0x1C, (void *)0x20, (void *)0x24, (void *)0x28, (void *)0x2C, (void *)0x30, (void *)0x34};
void *igActorManagerParams_fieldTypes[2] = {(void *)fn_800385E0, (void *)fn_800385E0};
void *igActorManagerParams_fieldNames[2] = {(void *)lbl_80462CD4, (void *)lbl_80462CE0};
void *igActorManagerParams_fieldStorage[2] = {(void *)lbl_8055CB70, (void *)lbl_8055CB74};
void *igActorManagerParams_fieldOffsets[2] = {(void *)0xC, (void *)0xD};
}

#pragma push
#pragma optimize_for_size off
namespace igViewerStatisticsManager_fieldInit {
// igViewerStatisticsManager: Alchemy class registration (0x80403214..0x8040337C). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igViewerStatisticsManager)
META_DECLARE(igStatisticsItemList)
META_DECLARE(igViewerGuiFactory)

extern "C" {
void *fn_80024FEC();
void *fn_80034048();
void *fn_800343B8();
void *fn_800CE788();
void *fn_80113DC0();
}

#pragma push
#pragma auto_inline off
extern "C" {

void igViewerStatisticsManager_fieldInit()
{
    Meta::igMetaObject *meta = igViewerStatisticsManager_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igViewerStatisticsManager_fieldTypes, 15);
    Meta::igObjectRefMetaField *itemsField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    itemsField->_metaObject = igStatisticsItemList_metaObject();
    itemsField->_construct = true;
    Meta::igObjectRefMetaField *visualContextField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_v4 = fn_800CE788();
    visualContextField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v4);
    Meta::igObjectRefMetaField *guiFactoryField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    guiFactoryField->_metaObject = igViewerGuiFactory_metaObject();
    Meta::igObjectRefMetaField *menuField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 3));
    void *value_v8 = fn_80113DC0();
    menuField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v8);
    Meta::igObjectRefMetaField *boxComponentField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 4));
    void *value_v10 = fn_80113DC0();
    boxComponentField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v10);
    Meta::igObjectRefMetaField *stringField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 5));
    void *value_v12 = fn_80024FEC();
    stringField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v12);
    stringField->_construct = true;
    Meta::igObjectRefMetaField *attrMetaObjectsField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 7));
    void *value_v14 = fn_800343B8();
    attrMetaObjectsField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v14);
    attrMetaObjectsField->_construct = true;
    Meta::igObjectRefMetaField *extraSgStatisticsField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 8));
    void *value_v16 = fn_80034048();
    extraSgStatisticsField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v16);
    extraSgStatisticsField->_construct = true;
    meta_setupFields(meta, igViewerStatisticsManager_fieldNames, igViewerStatisticsManager_fieldStorage, igViewerStatisticsManager_fieldOffsets, base);
}

}
#pragma pop
}
#pragma pop

#pragma push
#pragma use_lmw_stmw on
namespace igStatisticsItemList {
// igStatisticsItemList: Alchemy class registration (0x8040337C..0x8040354C). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igStatisticsItemList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_80402E28();
extern char lbl_80476E0C[];
extern char lbl_804F16E4[];
}

struct Instance_8040341C_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_METAOBJECT(igStatisticsItemList)

META_GET_META(igStatisticsItemList)

void *igStatisticsItemList_vtableRead()
{
    Instance_8040341C_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804F16E4;
    object.__vtable = igStatisticsItemList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igStatisticsItemList)

void igStatisticsItemList_register()
{
    fn_80402E28();
    meta_registerClass(0, &igStatisticsItemList_meta, igObjectList_register,
                       fn_80024180, igStatisticsItemList_getMetaCall,
                       igStatisticsItemList_className, 0x14,
                       igStatisticsItemList_vtableRead, 0, 0, igStatisticsItemList_dependencies);
}

META_GET_META_CALL(igStatisticsItemList)

}
#pragma pop
}
#pragma pop

#pragma push
#pragma use_lmw_stmw on
namespace unknown8040354C {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *fn_8010E6DC();
void fn_80402E28();
void igObjectList_register();
void igStatisticsItem_fieldInit();
void igView_register();
extern char igStatisticsItemList_className[];
extern char igStatisticsItem_className[];
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char lbl_80495AD8[];
extern char igStatisticsItemList_vtable[];
extern char lbl_804F16E4[];
extern char igStatisticsItem_vtable[];
extern void *igStatisticsItemList_meta;
extern void *igStatisticsItem_meta;
extern void *lbl_805621F4;
void *igStatisticsItemList_getMeta();
void *igStatisticsItemList_vtableRead();
void igStatisticsItemList_arkRegister();
void igStatisticsItemList_register();
void *igStatisticsItemList_getMetaCall();
void *igStatisticsItem_getMeta();
void *igStatisticsItem_vtableRead();
void igStatisticsItem_arkRegister();
void igStatisticsItem_register();
void *igStatisticsItem_getMetaCall();
}
struct UnknownGenObject8040341C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot804035EC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot804035EC(){igObject_construct(this);}
};
struct UnknownGenObject804035EC : UnknownGenRoot804035EC {
 char unknown04[20];
 UnknownGenString unknown18;
 UnknownGenString unknown1C;
 char unknown20[4];
 UnknownGenRefMember unknown24;
 UnknownGenRefMember unknown28;
 UnknownGenRefMember unknown2C;
 char unknown30[16];
 inline ~UnknownGenObject804035EC(){unknown00=igStatisticsItem_vtable;}
};
extern "C" {
void *igStatisticsItem_metaObject(){
 if(!igStatisticsItem_meta) igStatisticsItem_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igStatisticsItem_meta;
}
void *igStatisticsItem_getMeta(){
 if(!igStatisticsItem_meta || !(reinterpret_cast<unsigned int *>(igStatisticsItem_meta)[0x24/4]&4)) igStatisticsItem_arkRegister();
 return igStatisticsItem_meta;
}
void *igStatisticsItem_vtableRead(){
 UnknownGenObject804035EC object;
 object.unknown00=lbl_80495AD8;
 object.unknown00=igStatisticsItem_vtable;
 object.unknown18.value=0;
 object.unknown1C.value=0;
 object.unknown24.value=0;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igStatisticsItem_arkRegister(){
 meta_registerNow((int)igStatisticsItem_register);
}
void igStatisticsItem_register(){
 fn_80402E28();
 meta_registerClass(0,(int)&igStatisticsItem_meta,(int)igView_register,(int)fn_8010E6DC,(int)igStatisticsItem_getMetaCall,(int)igStatisticsItem_className,60,(int)igStatisticsItem_vtableRead,(int)igStatisticsItem_fieldInit,0,(int)igStatisticsItem_dependencies);
}
void *igStatisticsItem_getMetaCall(){return igStatisticsItem_getMeta();}
}
#pragma pop
}
#pragma pop

#pragma push
#pragma optimize_for_size off
namespace igStatisticsItem_fieldInit {
// igStatisticsItem: Alchemy class registration (0x80403828..0x80403988). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igStatisticsItem)
META_DECLARE(igViewerStatisticsManager)

extern "C" {
void fn_80046E58(void *, void *);
void fn_8004D4BC(void *, float);
void fn_80053650(void *, int);
void fn_800CE2AC();
void *fn_8010D0B8();
void *fn_80111CD4();
void *fn_80113170();
extern char lbl_80461DF8[4];
extern char lbl_80461DFC[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igStatisticsItem_fieldInit()
{
    Meta::igMetaObject *meta = igStatisticsItem_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igStatisticsItem_fieldTypes, 12);
    Meta::igFloatMetaField *valueField = static_cast<Meta::igFloatMetaField *>(meta_field(meta, base));
    fn_8004D4BC(valueField, *reinterpret_cast<float *>(lbl_80461DF8));
    Meta::igFloatMetaField *maximumValueField = static_cast<Meta::igFloatMetaField *>(meta_field(meta, base + 1));
    fn_8004D4BC(maximumValueField, *reinterpret_cast<float *>(lbl_80461DFC));
    Meta::igObjectRefMetaField *displayComponentField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 6));
    void *value_v4 = fn_80111CD4();
    displayComponentField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v4);
    Meta::igObjectRefMetaField *aspectField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 7));
    void *value_v6 = fn_80113170();
    aspectField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v6);
    Meta::igObjectRefMetaField *textElementField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 8));
    void *value_v8 = fn_8010D0B8();
    textElementField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v8);
    textElementField->_construct = true;
    Meta::igObjectRefMetaField *managerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 9));
    managerField->_metaObject = igViewerStatisticsManager_metaObject();
    managerField->_refCounted = false;
    Meta::igEnumMetaField *statIdField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base + 10));
    fn_80046E58(statIdField, (void *)lbl_804F0034);
    statIdField->_getMetaEnumFunction = reinterpret_cast<void *>(fn_800CE2AC);
    Meta::igIntMetaField *otherIdField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 11));
    fn_80053650(otherIdField, -1);
    meta_setupFields(meta, igStatisticsItem_fieldNames, igStatisticsItem_fieldStorage, igStatisticsItem_fieldOffsets, base);
}

}
#pragma pop
}
#pragma pop

namespace unknown80403988 {
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *fn_801159FC();
void fn_80402E28();
void igAction_register();
void igViewerAction_fieldInit();
extern char igViewerAction_className[];
extern char lbl_80496CB8[];
extern char igViewerAction_vtable[];
extern void *igViewerAction_meta;
void *igViewerAction_getMeta();
void *igViewerAction_vtableRead();
void igViewerAction_arkRegister();
void igViewerAction_register();
void *igViewerAction_getMetaCall();
}
struct UnknownGenObject80403A14_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *igViewerAction_create(void *object){
 igViewerAction_arkRegister();
 return meta_createInstance(igViewerAction_meta,object);
}
void *igViewerAction_getMeta(){
 if(!igViewerAction_meta || !(reinterpret_cast<unsigned int *>(igViewerAction_meta)[0x24/4]&4)) igViewerAction_arkRegister();
 return igViewerAction_meta;
}
void *igViewerAction_vtableRead(){
 UnknownGenObject80403A14_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_80496CB8;
 object.unknown00=igViewerAction_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igViewerAction_arkRegister(){
 meta_registerNow((int)igViewerAction_register);
}
void igViewerAction_register(){
 fn_80402E28();
 meta_registerClass(0,(int)&igViewerAction_meta,(int)igAction_register,(int)fn_801159FC,(int)igViewerAction_getMetaCall,(int)igViewerAction_className,24,(int)igViewerAction_vtableRead,(int)igViewerAction_fieldInit,0,(int)igViewerAction_dependencies);
}
void *igViewerAction_getMetaCall(){return igViewerAction_getMeta();}
}
#pragma pop
}

#pragma push
#pragma optimize_for_size off
namespace igViewerAction_fieldInit {
// igViewerAction: Alchemy class registration (0x80403B2C..0x80403BE8). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igViewerAction)
META_DECLARE(igViewerSceneInfoManager)

extern "C" {
}

#pragma push
#pragma auto_inline off
extern "C" {

void igViewerAction_fieldInit()
{
    Meta::igMetaObject *meta = igViewerAction_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igViewerAction_fieldTypes, 2);
    Meta::igObjectRefMetaField *refField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    refField->_metaObject = igViewerSceneInfoManager_metaObject();
    refField->_refCounted = false;
    Meta::igStructMetaField *functionField = static_cast<Meta::igStructMetaField *>(meta_field(meta, base + 1));
    functionField->_size = 12;
    meta_setupFields(meta, igViewerAction_fieldNames, igViewerAction_fieldStorage, igViewerAction_fieldOffsets, base);
}

}
#pragma pop
}
#pragma pop

namespace unknown80403BE8 {
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void fn_80403D78(void *,short);
void fn_80404544(void *);
void igViewerSceneInfoManager_arkRegister();
extern char lbl_80461E48[];
extern void *lbl_8055C784;
extern void *igViewerSceneInfoManager_meta;
extern void *lbl_805621F4;
}
struct UnknownGenObject80403D28 {
 void *unknown00;
 char unknown04[204];
};
extern "C" {
void *fn_80403BE8(){
 if(!lbl_8055C784) lbl_8055C784=fn_800635C8(lbl_80461E48,lbl_804F0060,lbl_804F006C,0x3);
 return lbl_8055C784;
}
}
#pragma pop
}

namespace igViewerSceneInfoManager {
// igViewerSceneInfoManager: Alchemy class registration (0x80403C48..0x80403D28). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igViewerSceneInfoManager)

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igViewerSceneInfoManager)

META_METAOBJECT(igViewerSceneInfoManager)

META_GET_META(igViewerSceneInfoManager)

}
#pragma pop
}

namespace unknown80403D28 {
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void fn_80403D78(void *,short);
void fn_80404544(void *);
void igViewerSceneInfoManager_arkRegister();
extern char lbl_80461E48[];
extern void *lbl_8055C784;
extern void *igViewerSceneInfoManager_meta;
extern void *lbl_805621F4;
}
struct UnknownGenObject80403D28 {
 void *unknown00;
 char unknown04[204];
};
extern "C" {
void *fn_80403D28(){
 UnknownGenObject80403D28 object;
 fn_80404544(&object);
 void *result=*reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
 fn_80403D78(&object,-1);
 return result;
}
}
#pragma pop
}

namespace fn_80403D78_destructor {
// fn_80403D78: the deleting destructor of lbl_804F1B40. Written by tools/alchemymeta/dtorsrc.py.

META_DECLARE(igNamedObject)
extern "C" {
extern char lbl_804CBA60[];
extern char lbl_804F1B40[];
void fn_80066DFC(void *object);   // frees an object
}

struct igNamedObjectObject {
    void *__vtable;
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectObject() { __vtable = igNamedObject_vtable; }
};
struct Level_804CBA60 : igNamedObjectObject {
    inline ~Level_804CBA60() { __vtable = lbl_804CBA60; }
};
struct Level_804F1B40 : Level_804CBA60 {
    char unknown0C[4];
    igObjectRefMember unknown10;
    igObjectRefMember unknown14;
    igObjectRefMember unknown18;
    igObjectRefMember unknown1C;
    igObjectRefMember unknown20;
    igObjectRefMember unknown24;
    char unknown28[4];
    igObjectRefMember unknown2C;
    igObjectRefMember unknown30;
    igObjectRefMember unknown34;
    igObjectRefMember unknown38;
    igObjectRefMember unknown3C;
    igObjectRefMember unknown40;
    igObjectRefMember unknown44;
    igObjectRefMember unknown48;
    igObjectRefMember unknown4C;
    igObjectRefMember unknown50;
    igObjectRefMember unknown54;
    igObjectRefMember unknown58;
    igObjectRefMember unknown5C;
    igObjectRefMember unknown60;
    igObjectRefMember unknown64;
    igObjectRefMember unknown68;
    igObjectRefMember unknown6C;
    igObjectRefMember unknown70;
    igObjectRefMember unknown74;
    igObjectRefMember unknown78;
    igObjectRefMember unknown7C;
    igObjectRefMember unknown80;
    igObjectRefMember unknown84;
    igObjectRefMember unknown88;
    igObjectRefMember unknown8C;
    igObjectRefMember unknown90;
    igObjectRefMember unknown94;
    igObjectRefMember unknown98;
    igObjectRefMember unknown9C;
    char unknownA0[20];
    igObjectRefMember unknownB4;
    igObjectRefMember unknownB8;
    char unknownBC[4];
    igObjectRefMember unknownC0;
};

extern "C" Level_804F1B40 *fn_80403D78(Level_804F1B40 *self, short flags)
{
    if (self) {
        self->__vtable = lbl_804F1B40;
        self->unknownC0.~igObjectRefMember();
        self->unknownB8.~igObjectRefMember();
        self->unknownB4.~igObjectRefMember();
        self->unknown9C.~igObjectRefMember();
        self->unknown98.~igObjectRefMember();
        self->unknown94.~igObjectRefMember();
        self->unknown90.~igObjectRefMember();
        self->unknown8C.~igObjectRefMember();
        self->unknown88.~igObjectRefMember();
        self->unknown84.~igObjectRefMember();
        self->unknown80.~igObjectRefMember();
        self->unknown7C.~igObjectRefMember();
        self->unknown78.~igObjectRefMember();
        self->unknown74.~igObjectRefMember();
        self->unknown70.~igObjectRefMember();
        self->unknown6C.~igObjectRefMember();
        self->unknown68.~igObjectRefMember();
        self->unknown64.~igObjectRefMember();
        self->unknown60.~igObjectRefMember();
        self->unknown5C.~igObjectRefMember();
        self->unknown58.~igObjectRefMember();
        self->unknown54.~igObjectRefMember();
        self->unknown50.~igObjectRefMember();
        self->unknown4C.~igObjectRefMember();
        self->unknown48.~igObjectRefMember();
        self->unknown44.~igObjectRefMember();
        self->unknown40.~igObjectRefMember();
        self->unknown3C.~igObjectRefMember();
        self->unknown38.~igObjectRefMember();
        self->unknown34.~igObjectRefMember();
        self->unknown30.~igObjectRefMember();
        self->unknown2C.~igObjectRefMember();
        self->unknown24.~igObjectRefMember();
        self->unknown20.~igObjectRefMember();
        self->unknown1C.~igObjectRefMember();
        self->unknown18.~igObjectRefMember();
        self->unknown14.~igObjectRefMember();
        self->unknown10.~igObjectRefMember();
        self->Level_804CBA60::~Level_804CBA60();
        if (flags > 0) fn_80066DFC(self);
    }
    return self;
}
}

namespace unknown80404544 {
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char igNamedObject_vtable[];
extern char lbl_804CBA60[];
extern char lbl_804F1B40[];
}
extern "C" {
void *fn_80404544(int p0){
 igObject_construct((void *)p0);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=igNamedObject_vtable;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+8)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=lbl_804CBA60;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=lbl_804F1B40;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+16)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+20)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+24)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+28)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+32)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+36)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+44)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+48)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+52)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+56)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+60)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+64)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+68)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+72)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+76)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+80)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+84)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+88)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+92)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+96)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+100)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+104)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+108)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+112)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+116)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+120)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+124)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+128)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+132)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+136)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+140)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+144)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+148)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+152)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+156)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+180)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+184)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+192)=(void *)0;
 return (void *)p0;
}
}
#pragma pop
}

namespace unknown80404638 {
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_80284550();
void fn_80402E28();
void fn_80403D28();
void igInfoManager_register();
void igViewerSceneInfoManager_fieldInit();
void *igViewerSceneInfoManager_getMeta();
extern char igViewerSceneInfoManager_className[];
extern char igViewerSceneInfoManager_meta[];
void igViewerSceneInfoManager_register();
void *igViewerSceneInfoManager_getMetaCall();
}
extern "C" {
void igViewerSceneInfoManager_arkRegister(){
 meta_registerNow((int)igViewerSceneInfoManager_register);
}
void igViewerSceneInfoManager_register(){
 fn_80402E28();
 meta_registerClass(0,(int)igViewerSceneInfoManager_meta,(int)igInfoManager_register,(int)fn_80284550,(int)igViewerSceneInfoManager_getMetaCall,(int)igViewerSceneInfoManager_className,200,(int)fn_80403D28,(int)igViewerSceneInfoManager_fieldInit,0,(int)igViewerSceneInfoManager_dependencies);
}
void *igViewerSceneInfoManager_getMetaCall(){return igViewerSceneInfoManager_getMeta();}
}
#pragma pop
}

#pragma push
#pragma use_lmw_stmw on
namespace igViewerSceneInfoManager_fieldInit {
// igViewerSceneInfoManager: Alchemy class registration (0x804046FC..0x80404C4C). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igViewerSceneInfoManager)
META_DECLARE(igBoundingBoxRenderer)
META_DECLARE(igFlushRenderer)
META_DECLARE(igNormalsRenderer)
META_DECLARE(igStatisticsItem)
META_DECLARE(igViewManager)
META_DECLARE(igViewerGuiFactory)
META_DECLARE(igViewerModeChangeMessage)
META_DECLARE(igViewerParameters)
META_DECLARE(igViewerRenderer)
META_DECLARE(igViewerSceneInfoManagerController)
META_DECLARE(igViewerStatisticsManager)

extern "C" {
void *fn_80028F84();
void fn_80046E58(void *, void *);
void fn_80053650(void *, int);
int fn_80053998(void *, void *);
void fn_8006588C(void *, int, void *);
void *fn_800658F8(void *, void *);
void fn_80071694(void *, void *);
void *fn_800BAAC4();
void *fn_8010E974();
void *fn_8010F334();
void *fn_8010F9B0();
void *fn_80111B38();
void *fn_80111CD4();
void *fn_80113DC0();
void fn_80403BE8();
extern char lbl_80462110[6];
extern char lbl_80462118[21];
extern char lbl_8055C78C[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igViewerSceneInfoManager_fieldInit()
{
    Meta::igMetaObject *meta = igViewerSceneInfoManager_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igViewerSceneInfoManager_fieldTypes, 43);
    Meta::igStringMetaField *nameField = static_cast<Meta::igStringMetaField *>(fn_800658F8(meta, lbl_80462110));   // "_name"
    int nameIndex = fn_80053998(meta->_metaFields, nameField);
    nameField = static_cast<Meta::igStringMetaField *>(reinterpret_cast<igMetaFieldVirtuals *>(nameField)->virtual54(1));   // a copy of it
    fn_80071694(nameField, (void *)lbl_80462118);
    nameField->_externalEnumStorage = reinterpret_cast<void *>(lbl_8055C78C);
    fn_8006588C(meta, nameIndex, nameField);
    meta_release(nameField);
    Meta::igObjectRefMetaField *applicationControllerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    applicationControllerField->_metaObject = igViewerSceneInfoManagerController_metaObject();
    applicationControllerField->_construct = true;
    Meta::igObjectRefMetaField *parametersField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    parametersField->_metaObject = igViewerParameters_metaObject();
    parametersField->_construct = true;
    Meta::igObjectRefMetaField *viewerRendererField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    viewerRendererField->_metaObject = igViewerRenderer_metaObject();
    viewerRendererField->_construct = true;
    Meta::igObjectRefMetaField *bboxRendererField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 3));
    bboxRendererField->_metaObject = igBoundingBoxRenderer_metaObject();
    bboxRendererField->_construct = true;
    Meta::igObjectRefMetaField *normalsRendererField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 4));
    normalsRendererField->_metaObject = igNormalsRenderer_metaObject();
    normalsRendererField->_construct = true;
    Meta::igObjectRefMetaField *flushRendererField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 5));
    flushRendererField->_metaObject = igFlushRenderer_metaObject();
    flushRendererField->_construct = true;
    Meta::igIntMetaField *clippingCheckFrameField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 6));
    fn_80053650(clippingCheckFrameField, -1);
    Meta::igObjectRefMetaField *guiField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 7));
    void *value_v17 = fn_8010F9B0();
    guiField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v17);
    guiField->_construct = true;
    Meta::igObjectRefMetaField *guiFactoryField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 8));
    guiFactoryField->_metaObject = igViewerGuiFactory_metaObject();
    guiFactoryField->_construct = true;
    Meta::igObjectRefMetaField *rootComponentField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 9));
    void *value_v21 = fn_80113DC0();
    rootComponentField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v21);
    Meta::igObjectRefMetaField *menuHolderField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 10));
    void *value_v23 = fn_80111CD4();
    menuHolderField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v23);
    Meta::igObjectRefMetaField *operationBoxHolderField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 11));
    void *value_v25 = fn_80111CD4();
    operationBoxHolderField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v25);
    Meta::igObjectRefMetaField *operationBoxField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 12));
    void *value_v27 = fn_80113DC0();
    operationBoxField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v27);
    Meta::igObjectRefMetaField *timeBoxHolderField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 13));
    void *value_v29 = fn_80111CD4();
    timeBoxHolderField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v29);
    Meta::igObjectRefMetaField *timeBoxField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 14));
    void *value_v31 = fn_80113DC0();
    timeBoxField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v31);
    Meta::igObjectRefMetaField *menuBarField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 15));
    void *value_v33 = fn_80113DC0();
    menuBarField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v33);
    Meta::igObjectRefMetaField *viewMenuField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 16));
    void *value_v35 = fn_80113DC0();
    viewMenuField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v35);
    Meta::igObjectRefMetaField *viewportMenuField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 17));
    void *value_v37 = fn_80113DC0();
    viewportMenuField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v37);
    Meta::igObjectRefMetaField *cameraMenuField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 18));
    void *value_v39 = fn_80113DC0();
    cameraMenuField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v39);
    Meta::igObjectRefMetaField *cameraMenuActiverField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 19));
    void *value_v41 = fn_80111CD4();
    cameraMenuActiverField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v41);
    Meta::igObjectRefMetaField *optionMenuField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 20));
    void *value_v43 = fn_80113DC0();
    optionMenuField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v43);
    Meta::igObjectRefMetaField *disableMenuField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 21));
    void *value_v45 = fn_80113DC0();
    disableMenuField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v45);
    Meta::igObjectRefMetaField *statMenuField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 22));
    void *value_v47 = fn_80113DC0();
    statMenuField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v47);
    Meta::igObjectRefMetaField *timeMenuField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 23));
    void *value_v49 = fn_80113DC0();
    timeMenuField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v49);
    Meta::igObjectRefMetaField *alchemyMenuField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 24));
    void *value_v51 = fn_80113DC0();
    alchemyMenuField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v51);
    Meta::igObjectRefMetaField *timeStatisticField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 25));
    timeStatisticField->_metaObject = igStatisticsItem_metaObject();
    Meta::igObjectRefMetaField *speedStatisticField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 26));
    Meta::igMetaObject *igStatisticsItemMeta_ = igStatisticsItem_metaObject();
    speedStatisticField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(igStatisticsItemMeta_);
    Meta::igObjectRefMetaField *nearPlaneStatisticField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 27));
    Meta::igMetaObject *igStatisticsItemMeta__ = igStatisticsItem_metaObject();
    nearPlaneStatisticField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(igStatisticsItemMeta__);
    Meta::igObjectRefMetaField *farPlaneStatisticField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 28));
    Meta::igMetaObject *igStatisticsItemMeta___ = igStatisticsItem_metaObject();
    farPlaneStatisticField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(igStatisticsItemMeta___);
    Meta::igObjectRefMetaField *hotKeyReceiverField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 29));
    void *value_v61 = fn_8010F334();
    hotKeyReceiverField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v61);
    hotKeyReceiverField->_construct = true;
    Meta::igObjectRefMetaField *viewManagerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 30));
    viewManagerField->_metaObject = igViewManager_metaObject();
    viewManagerField->_construct = true;
    Meta::igObjectRefMetaField *statManagerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 31));
    statManagerField->_metaObject = igViewerStatisticsManager_metaObject();
    statManagerField->_construct = true;
    Meta::igObjectRefMetaField *disableComponentsField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 32));
    void *value_v67 = fn_80111B38();
    disableComponentsField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v67);
    disableComponentsField->_construct = true;
    Meta::igObjectRefMetaField *disableViewsField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 33));
    void *value_v69 = fn_80028F84();
    disableViewsField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v69);
    disableViewsField->_construct = true;
    Meta::igObjectRefMetaField *operationModeGroupField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 34));
    void *value_v71 = fn_8010E974();
    operationModeGroupField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v71);
    operationModeGroupField->_construct = true;
    Meta::igObjectRefMetaField *referencesField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 35));
    void *value_v73 = fn_80028F84();
    referencesField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v73);
    referencesField->_construct = true;
    Meta::igEnumMetaField *guiVisibilityField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base + 38));
    fn_80046E58(guiVisibilityField, (void *)lbl_804F0378);
    guiVisibilityField->_getMetaEnumFunction = reinterpret_cast<void *>(fn_80403BE8);
    Meta::igObjectRefMetaField *textureListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 39));
    void *value_v76 = fn_800BAAC4();
    textureListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v76);
    textureListField->_construct = true;
    Meta::igObjectRefMetaField *modeChangeField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 40));
    modeChangeField->_metaObject = igViewerModeChangeMessage_metaObject();
    modeChangeField->_construct = true;
    Meta::igObjectRefMetaField *hideAllStatisticsMenuItemField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 42));
    void *value_v80 = fn_80111CD4();
    hideAllStatisticsMenuItemField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v80);
    meta_setupFields(meta, igViewerSceneInfoManager_fieldNames, igViewerSceneInfoManager_fieldStorage, igViewerSceneInfoManager_fieldOffsets, base);
}

}
#pragma pop
}
#pragma pop

namespace unknown80404C4C {
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *fn_80284540();
void fn_80402E28();
void igMessage_register();
void igViewerModeChangeMessage_fieldInit();
extern char igViewerModeChangeMessage_className[];
extern char igMessage_vtable[];
extern char igViewerModeChangeMessage_vtable[];
extern void *igViewerModeChangeMessage_meta;
extern void *lbl_805621F4;
void *igViewerModeChangeMessage_getMeta();
void *igViewerModeChangeMessage_vtableRead();
void igViewerModeChangeMessage_arkRegister();
void igViewerModeChangeMessage_register();
void *igViewerModeChangeMessage_getMetaCall();
}
struct UnknownGenRoot80404CEC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80404CEC(){igObject_construct(this);}
};
struct UnknownGenObject80404CEC : UnknownGenRoot80404CEC {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject80404CEC(){unknown00=igViewerModeChangeMessage_vtable;}
};
extern "C" {
void *igViewerModeChangeMessage_metaObject(){
 if(!igViewerModeChangeMessage_meta) igViewerModeChangeMessage_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igViewerModeChangeMessage_meta;
}
void *igViewerModeChangeMessage_getMeta(){
 if(!igViewerModeChangeMessage_meta || !(reinterpret_cast<unsigned int *>(igViewerModeChangeMessage_meta)[0x24/4]&4)) igViewerModeChangeMessage_arkRegister();
 return igViewerModeChangeMessage_meta;
}
void *igViewerModeChangeMessage_vtableRead(){
 UnknownGenObject80404CEC object;
 object.unknown00=igMessage_vtable;
 object.unknown00=igViewerModeChangeMessage_vtable;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igViewerModeChangeMessage_arkRegister(){
 meta_registerNow((int)igViewerModeChangeMessage_register);
}
void igViewerModeChangeMessage_register(){
 fn_80402E28();
 meta_registerClass(0,(int)&igViewerModeChangeMessage_meta,(int)igMessage_register,(int)fn_80284540,(int)igViewerModeChangeMessage_getMetaCall,(int)igViewerModeChangeMessage_className,16,(int)igViewerModeChangeMessage_vtableRead,(int)igViewerModeChangeMessage_fieldInit,0,0);
}
void *igViewerModeChangeMessage_getMetaCall(){return igViewerModeChangeMessage_getMeta();}
}
#pragma pop
}

#pragma push
#pragma optimize_for_size off
namespace igViewerModeChangeMessage_fieldInit {
// igViewerModeChangeMessage: Alchemy class registration (0x80404E40..0x80404EC0). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igViewerModeChangeMessage)

extern "C" {
}

#pragma push
#pragma auto_inline off
extern "C" {

void igViewerModeChangeMessage_fieldInit()
{
    Meta::igMetaObject *meta = igViewerModeChangeMessage_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igViewerModeChangeMessage_fieldTypes, 2);
    meta_setupFields(meta, igViewerModeChangeMessage_fieldNames, igViewerModeChangeMessage_fieldStorage, igViewerModeChangeMessage_fieldOffsets, base);
}

}
#pragma pop
}
#pragma pop

namespace unknown80404EC0 {
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *fn_80284540();
void fn_80402E28();
void igMessage_register();
void igViewerLoadingFileMessage_fieldInit();
extern char igViewerLoadingFileMessage_className[];
extern char igMessage_vtable[];
extern char igViewerLoadingFileMessage_vtable[];
extern void *igViewerLoadingFileMessage_meta;
void *igViewerLoadingFileMessage_getMeta();
void *igViewerLoadingFileMessage_vtableRead();
void igViewerLoadingFileMessage_arkRegister();
void igViewerLoadingFileMessage_register();
void *igViewerLoadingFileMessage_getMetaCall();
}
struct UnknownGenRoot80404F4C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80404F4C(){igObject_construct(this);}
};
struct UnknownGenObject80404F4C : UnknownGenRoot80404F4C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject80404F4C(){unknown00=igViewerLoadingFileMessage_vtable;}
};
extern "C" {
void *igViewerLoadingFileMessage_create(void *object){
 igViewerLoadingFileMessage_arkRegister();
 return meta_createInstance(igViewerLoadingFileMessage_meta,object);
}
void *igViewerLoadingFileMessage_getMeta(){
 if(!igViewerLoadingFileMessage_meta || !(reinterpret_cast<unsigned int *>(igViewerLoadingFileMessage_meta)[0x24/4]&4)) igViewerLoadingFileMessage_arkRegister();
 return igViewerLoadingFileMessage_meta;
}
void *igViewerLoadingFileMessage_vtableRead(){
 UnknownGenObject80404F4C object;
 object.unknown00=igMessage_vtable;
 object.unknown00=igViewerLoadingFileMessage_vtable;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igViewerLoadingFileMessage_arkRegister(){
 meta_registerNow((int)igViewerLoadingFileMessage_register);
}
void igViewerLoadingFileMessage_register(){
 fn_80402E28();
 meta_registerClass(0,(int)&igViewerLoadingFileMessage_meta,(int)igMessage_register,(int)fn_80284540,(int)igViewerLoadingFileMessage_getMetaCall,(int)igViewerLoadingFileMessage_className,16,(int)igViewerLoadingFileMessage_vtableRead,(int)igViewerLoadingFileMessage_fieldInit,0,0);
}
void *igViewerLoadingFileMessage_getMetaCall(){return igViewerLoadingFileMessage_getMeta();}
}
#pragma pop
}

#pragma push
#pragma optimize_for_size off
namespace igViewerLoadingFileMessage_fieldInit {
// igViewerLoadingFileMessage: Alchemy class registration (0x804050A0..0x80405134). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igViewerLoadingFileMessage)

extern "C" {
void fn_80071694(void *, void *);
}

#pragma push
#pragma auto_inline off
extern "C" {

void igViewerLoadingFileMessage_fieldInit()
{
    Meta::igMetaObject *meta = igViewerLoadingFileMessage_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igViewerLoadingFileMessage_fieldTypes, 2);
    Meta::igStringMetaField *filenameField = static_cast<Meta::igStringMetaField *>(meta_field(meta, base + 1));
    fn_80071694(filenameField, (void *)"");
    meta_setupFields(meta, igViewerLoadingFileMessage_fieldNames, igViewerLoadingFileMessage_fieldStorage, igViewerLoadingFileMessage_fieldOffsets, base);
}

}
#pragma pop
}
#pragma pop

namespace unknown80405134 {
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *fn_8010E6DC();
void fn_80402E28();
void igView_register();
void igViewerSceneInfoManagerController_fieldInit();
extern char igViewerSceneInfoManagerController_className[];
extern char lbl_80495AD8[];
extern char igViewerSceneInfoManagerController_vtable[];
extern void *igViewerSceneInfoManagerController_meta;
extern void *lbl_805621F4;
void *igViewerSceneInfoManagerController_getMeta();
void *igViewerSceneInfoManagerController_vtableRead();
void igViewerSceneInfoManagerController_arkRegister();
void igViewerSceneInfoManagerController_register();
void *igViewerSceneInfoManagerController_getMetaCall();
}
struct UnknownGenObject804051D4_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *igViewerSceneInfoManagerController_metaObject(){
 if(!igViewerSceneInfoManagerController_meta) igViewerSceneInfoManagerController_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igViewerSceneInfoManagerController_meta;
}
void *igViewerSceneInfoManagerController_getMeta(){
 if(!igViewerSceneInfoManagerController_meta || !(reinterpret_cast<unsigned int *>(igViewerSceneInfoManagerController_meta)[0x24/4]&4)) igViewerSceneInfoManagerController_arkRegister();
 return igViewerSceneInfoManagerController_meta;
}
void *igViewerSceneInfoManagerController_vtableRead(){
 UnknownGenObject804051D4_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_80495AD8;
 object.unknown00=igViewerSceneInfoManagerController_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igViewerSceneInfoManagerController_arkRegister(){
 meta_registerNow((int)igViewerSceneInfoManagerController_register);
}
void igViewerSceneInfoManagerController_register(){
 fn_80402E28();
 meta_registerClass(0,(int)&igViewerSceneInfoManagerController_meta,(int)igView_register,(int)fn_8010E6DC,(int)igViewerSceneInfoManagerController_getMetaCall,(int)igViewerSceneInfoManagerController_className,20,(int)igViewerSceneInfoManagerController_vtableRead,(int)igViewerSceneInfoManagerController_fieldInit,0,(int)igViewerSceneInfoManagerController_dependencies);
}
void *igViewerSceneInfoManagerController_getMetaCall(){return igViewerSceneInfoManagerController_getMeta();}
}
#pragma pop
}

#pragma push
#pragma optimize_for_size off
namespace igViewerSceneInfoManagerController_fieldInit {
// igViewerSceneInfoManagerController: Alchemy class registration (0x804052EC..0x804053B4). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igViewerSceneInfoManagerController)
META_DECLARE(igViewerRenderer)
META_DECLARE(igViewerSceneInfoManager)

extern "C" {
}

#pragma push
#pragma auto_inline off
extern "C" {

void igViewerSceneInfoManagerController_fieldInit()
{
    Meta::igMetaObject *meta = igViewerSceneInfoManagerController_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igViewerSceneInfoManagerController_fieldTypes, 2);
    Meta::igObjectRefMetaField *applicationField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    applicationField->_metaObject = igViewerSceneInfoManager_metaObject();
    applicationField->_refCounted = false;
    Meta::igObjectRefMetaField *viewerRendererField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    viewerRendererField->_metaObject = igViewerRenderer_metaObject();
    viewerRendererField->_refCounted = false;
    meta_setupFields(meta, igViewerSceneInfoManagerController_fieldNames, igViewerSceneInfoManagerController_fieldStorage, igViewerSceneInfoManagerController_fieldOffsets, base);
}

}
#pragma pop
}
#pragma pop

namespace igViewerRenderer {
// igViewerRenderer: Alchemy class registration (0x804053B4..0x8040550C). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igViewerRenderer)

extern "C" {
void fn_8040550C(void *, int);
extern char lbl_80497C9C[108];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_METAOBJECT(igViewerRenderer)

META_GET_META(igViewerRenderer)

void *igViewerRenderer_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[4];
        int unknown08;
        int unknown0C;
        int unknown10;
        int unknown14;
        int unknown18;
        int unknown1C;
        int unknown20;
        int unknown24;
        int unknown28;
        int unknown2C;
        int unknown30;
        int unknown34;
        int unknown38;
        int unknown3C;
        int unknown40;
        char unknown44[4];
        int unknown48;
        int unknown4C;
        int unknown50;
        int unknown54;
        int unknown58;
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_80497C9C;
    object.unknown08 = 0;
    object.__vtable = igViewerRenderer_vtable;
    object.unknown0C = 0;
    object.unknown10 = 0;
    object.unknown14 = 0;
    object.unknown18 = 0;
    object.unknown1C = 0;
    object.unknown20 = 0;
    object.unknown24 = 0;
    object.unknown28 = 0;
    object.unknown2C = 0;
    object.unknown30 = 0;
    object.unknown34 = 0;
    object.unknown38 = 0;
    object.unknown3C = 0;
    object.unknown40 = 0;
    object.unknown48 = 0;
    object.unknown4C = 0;
    object.unknown50 = 0;
    object.unknown54 = 0;
    object.unknown58 = 0;
    void *result = meta_vtableOf(&object);
    fn_8040550C(&object, -1);   // the class's destructor
    return result;
}

}
#pragma pop
}

namespace unknown8040550C {
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066DFC(void *);
extern char lbl_80497C9C[];
extern char igViewerRenderer_vtable[];
}
extern "C" {
void *fn_8040550C(int p0,int p1){
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 void *value4;
 void *value5;
 void *value6;
 void *value7;
 void *value8;
 void *value9;
 void *value10;
 void *value11;
 void *value12;
 void *value13;
 void *value14;
 void *value15;
 void *value16;
 void *value17;
 void *value18;
 void *value19;
 void *value20;
 void *value21;
 void *value22;
 void *value23;
 void *value24;
 void *value25;
 void *value26;
 void *value27;
 void *value28;
 void *value29;
 void *value30;
 void *value31;
 void *value32;
 void *value33;
 void *value34;
 void *value35;
 void *value36;
 void *value37;
 void *value38;
 void *value39;
 if((int)p0!=0){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=igViewerRenderer_vtable;
  if((int)(p0+88)!=0){
   value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+88);
   if(value0){
    value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+4)=(reinterpret_cast<char *>(value1)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4)&0x7FFFFF)){
     fn_80066E1C(value0);
    }
   }
  }
  if((int)(p0+84)!=0){
   value2=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+84);
   if(value2){
    value3=*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+4)=(reinterpret_cast<char *>(value3)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+4)&0x7FFFFF)){
     fn_80066E1C(value2);
    }
   }
  }
  if((int)(p0+80)!=0){
   value4=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+80);
   if(value4){
    value5=*reinterpret_cast<void **>(reinterpret_cast<char *>(value4)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+4)=(reinterpret_cast<char *>(value5)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value4)+4)&0x7FFFFF)){
     fn_80066E1C(value4);
    }
   }
  }
  if((int)(p0+76)!=0){
   value6=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+76);
   if(value6){
    value7=*reinterpret_cast<void **>(reinterpret_cast<char *>(value6)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+4)=(reinterpret_cast<char *>(value7)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value6)+4)&0x7FFFFF)){
     fn_80066E1C(value6);
    }
   }
  }
  if((int)(p0+72)!=0){
   value8=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+72);
   if(value8){
    value9=*reinterpret_cast<void **>(reinterpret_cast<char *>(value8)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value8)+4)=(reinterpret_cast<char *>(value9)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value8)+4)&0x7FFFFF)){
     fn_80066E1C(value8);
    }
   }
  }
  if((int)(p0+64)!=0){
   value10=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+64);
   if(value10){
    value11=*reinterpret_cast<void **>(reinterpret_cast<char *>(value10)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value10)+4)=(reinterpret_cast<char *>(value11)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value10)+4)&0x7FFFFF)){
     fn_80066E1C(value10);
    }
   }
  }
  if((int)(p0+60)!=0){
   value12=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+60);
   if(value12){
    value13=*reinterpret_cast<void **>(reinterpret_cast<char *>(value12)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value12)+4)=(reinterpret_cast<char *>(value13)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value12)+4)&0x7FFFFF)){
     fn_80066E1C(value12);
    }
   }
  }
  if((int)(p0+56)!=0){
   value14=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+56);
   if(value14){
    value15=*reinterpret_cast<void **>(reinterpret_cast<char *>(value14)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value14)+4)=(reinterpret_cast<char *>(value15)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value14)+4)&0x7FFFFF)){
     fn_80066E1C(value14);
    }
   }
  }
  if((int)(p0+52)!=0){
   value16=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+52);
   if(value16){
    value17=*reinterpret_cast<void **>(reinterpret_cast<char *>(value16)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value16)+4)=(reinterpret_cast<char *>(value17)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value16)+4)&0x7FFFFF)){
     fn_80066E1C(value16);
    }
   }
  }
  if((int)(p0+48)!=0){
   value18=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+48);
   if(value18){
    value19=*reinterpret_cast<void **>(reinterpret_cast<char *>(value18)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value18)+4)=(reinterpret_cast<char *>(value19)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value18)+4)&0x7FFFFF)){
     fn_80066E1C(value18);
    }
   }
  }
  if((int)(p0+44)!=0){
   value20=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+44);
   if(value20){
    value21=*reinterpret_cast<void **>(reinterpret_cast<char *>(value20)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value20)+4)=(reinterpret_cast<char *>(value21)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value20)+4)&0x7FFFFF)){
     fn_80066E1C(value20);
    }
   }
  }
  if((int)(p0+40)!=0){
   value22=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+40);
   if(value22){
    value23=*reinterpret_cast<void **>(reinterpret_cast<char *>(value22)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value22)+4)=(reinterpret_cast<char *>(value23)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value22)+4)&0x7FFFFF)){
     fn_80066E1C(value22);
    }
   }
  }
  if((int)(p0+36)!=0){
   value24=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+36);
   if(value24){
    value25=*reinterpret_cast<void **>(reinterpret_cast<char *>(value24)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value24)+4)=(reinterpret_cast<char *>(value25)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value24)+4)&0x7FFFFF)){
     fn_80066E1C(value24);
    }
   }
  }
  if((int)(p0+32)!=0){
   value26=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32);
   if(value26){
    value27=*reinterpret_cast<void **>(reinterpret_cast<char *>(value26)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value26)+4)=(reinterpret_cast<char *>(value27)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value26)+4)&0x7FFFFF)){
     fn_80066E1C(value26);
    }
   }
  }
  if((int)(p0+28)!=0){
   value28=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+28);
   if(value28){
    value29=*reinterpret_cast<void **>(reinterpret_cast<char *>(value28)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value28)+4)=(reinterpret_cast<char *>(value29)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value28)+4)&0x7FFFFF)){
     fn_80066E1C(value28);
    }
   }
  }
  if((int)(p0+24)!=0){
   value30=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24);
   if(value30){
    value31=*reinterpret_cast<void **>(reinterpret_cast<char *>(value30)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value30)+4)=(reinterpret_cast<char *>(value31)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value30)+4)&0x7FFFFF)){
     fn_80066E1C(value30);
    }
   }
  }
  if((int)(p0+20)!=0){
   value32=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20);
   if(value32){
    value33=*reinterpret_cast<void **>(reinterpret_cast<char *>(value32)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value32)+4)=(reinterpret_cast<char *>(value33)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value32)+4)&0x7FFFFF)){
     fn_80066E1C(value32);
    }
   }
  }
  if((int)(p0+16)!=0){
   value34=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16);
   if(value34){
    value35=*reinterpret_cast<void **>(reinterpret_cast<char *>(value34)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value34)+4)=(reinterpret_cast<char *>(value35)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value34)+4)&0x7FFFFF)){
     fn_80066E1C(value34);
    }
   }
  }
  if((int)(p0+12)!=0){
   value36=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12);
   if(value36){
    value37=*reinterpret_cast<void **>(reinterpret_cast<char *>(value36)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value36)+4)=(reinterpret_cast<char *>(value37)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value36)+4)&0x7FFFFF)){
     fn_80066E1C(value36);
    }
   }
  }
  if((unsigned int)p0!=0){
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=lbl_80497C9C;
   if((int)(p0+8)!=0){
    value38=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8);
    if(value38){
     value39=*reinterpret_cast<void **>(reinterpret_cast<char *>(value38)+4);
     *reinterpret_cast<void * *>(reinterpret_cast<char *>(value38)+4)=(reinterpret_cast<char *>(value39)+-1);
     if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value38)+4)&0x7FFFFF)){
      fn_80066E1C(value38);
     }
    }
   }
  }
  if((int)(short)p1>0){
   fn_80066DFC((void *)p0);
  }
 }
 return (void *)p0;
}
}
#pragma pop
}

namespace unknown80405938 {
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8010DF8C();
void fn_80402E28();
void igRenderer_register();
void igViewerRenderer_fieldInit();
void *igViewerRenderer_getMeta();
void igViewerRenderer_vtableRead();
extern char igViewerRenderer_className[];
extern char igViewerRenderer_meta[];
void igViewerRenderer_register();
void *igViewerRenderer_getMetaCall();
}
extern "C" {
void igViewerRenderer_arkRegister(){
 meta_registerNow((int)igViewerRenderer_register);
}
void igViewerRenderer_register(){
 fn_80402E28();
 meta_registerClass(0,(int)igViewerRenderer_meta,(int)igRenderer_register,(int)fn_8010DF8C,(int)igViewerRenderer_getMetaCall,(int)igViewerRenderer_className,92,(int)igViewerRenderer_vtableRead,(int)igViewerRenderer_fieldInit,0,(int)igViewerRenderer_dependencies);
}
void *igViewerRenderer_getMetaCall(){return igViewerRenderer_getMeta();}
}
#pragma pop
}

#pragma push
#pragma optimize_for_size off
namespace igViewerRenderer_fieldInit {
// igViewerRenderer: Alchemy class registration (0x804059FC..0x80405CBC). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igViewerRenderer)
META_DECLARE(igViewerParameters)

extern "C" {
void *fn_800B09A4();
void *fn_800B2084();
void *fn_800B51FC();
void *fn_800B5424();
void *fn_800B55F8();
void *fn_800B58C8();
void *fn_800B5A64();
void *fn_800B7910();
void *fn_800B8968();
void *fn_800BB9D4();
void *fn_800D4B40();
void *fn_801AC644();
void *fn_801B67B0();
void *fn_801BB954();
void *fn_801C481C();
void *fn_801C89F0();
}

#pragma push
#pragma auto_inline off
extern "C" {

void igViewerRenderer_fieldInit()
{
    Meta::igMetaObject *meta = igViewerRenderer_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igViewerRenderer_fieldTypes, 20);
    Meta::igObjectRefMetaField *parametersField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    parametersField->_metaObject = igViewerParameters_metaObject();
    Meta::igObjectRefMetaField *backFaceCullingAttrField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_v4 = fn_800B8968();
    backFaceCullingAttrField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v4);
    backFaceCullingAttrField->_construct = true;
    Meta::igObjectRefMetaField *alphaTestAttrField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    void *value_v6 = fn_800BB9D4();
    alphaTestAttrField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v6);
    alphaTestAttrField->_construct = true;
    Meta::igObjectRefMetaField *shadeModelAttrField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 3));
    void *value_v8 = fn_800B09A4();
    shadeModelAttrField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v8);
    shadeModelAttrField->_construct = true;
    Meta::igObjectRefMetaField *polygonModeAttrField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 4));
    void *value_v10 = fn_800B2084();
    polygonModeAttrField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v10);
    polygonModeAttrField->_construct = true;
    Meta::igObjectRefMetaField *lightingAttrField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 5));
    void *value_v12 = fn_800B51FC();
    lightingAttrField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v12);
    lightingAttrField->_construct = true;
    Meta::igObjectRefMetaField *headlightAttrField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 6));
    void *value_v14 = fn_800B5A64();
    headlightAttrField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v14);
    headlightAttrField->_construct = true;
    Meta::igObjectRefMetaField *headlightStateAttrField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 7));
    void *value_v16 = fn_800B55F8();
    headlightStateAttrField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v16);
    headlightStateAttrField->_construct = true;
    Meta::igObjectRefMetaField *attrSetField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 8));
    void *value_v18 = fn_801C89F0();
    attrSetField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v18);
    attrSetField->_construct = true;
    Meta::igObjectRefMetaField *attrSetOverrideField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 9));
    void *value_v20 = fn_801B67B0();
    attrSetOverrideField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v20);
    attrSetOverrideField->_construct = true;
    Meta::igObjectRefMetaField *headlightTransformField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 10));
    void *value_v22 = fn_801AC644();
    headlightTransformField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v22);
    headlightTransformField->_construct = true;
    Meta::igObjectRefMetaField *headlightSetField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 11));
    void *value_v24 = fn_801BB954();
    headlightSetField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v24);
    headlightSetField->_construct = true;
    Meta::igObjectRefMetaField *lightListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 12));
    void *value_v26 = fn_800B58C8();
    lightListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v26);
    lightListField->_construct = true;
    Meta::igObjectRefMetaField *lightStateListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 13));
    void *value_v28 = fn_800B5424();
    lightStateListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v28);
    lightStateListField->_construct = true;
    Meta::igObjectRefMetaField *lightTraversalField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 15));
    void *value_v30 = fn_801C481C();
    lightTraversalField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v30);
    lightTraversalField->_construct = true;
    Meta::igObjectRefMetaField *lightOutputField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 16));
    void *value_v32 = fn_800B7910();
    lightOutputField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v32);
    Meta::igObjectRefMetaField *sceneTraversalField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 17));
    void *value_v34 = fn_801C481C();
    sceneTraversalField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v34);
    Meta::igObjectRefMetaField *sceneOutputField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 18));
    void *value_v36 = fn_800B7910();
    sceneOutputField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v36);
    Meta::igObjectRefMetaField *disableExtensionField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 19));
    void *value_v38 = fn_800D4B40();
    disableExtensionField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v38);
    meta_setupFields(meta, igViewerRenderer_fieldNames, igViewerRenderer_fieldStorage, igViewerRenderer_fieldOffsets, base);
}

}
#pragma pop
}
#pragma pop

namespace igViewerParameters {
// igViewerParameters: Alchemy class registration (0x80405CBC..0x80405FB8). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igViewerParameters)
META_DECLARE(igModel)

extern "C" {
void *fn_8010EE6C();
void fn_801285A0(void *);
void fn_80402E28();
}

struct igModelInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _views;
    inline ~igModelInstance() { __vtable = igModel_vtable; }
};

struct igViewerParametersInstance : igModelInstance {
    igObjectRefMember _scene;
    char unknown10[28];
    char unknown2C[64];
    char unknown6C[96];
    igObjectRefMember _disables;
    char unknownD0[12];
    igObjectRefMember _cameras;
    char unknownE0[16];
    igObjectRefMember _selectedObject;
    char unknownF4[20];
    inline igViewerParametersInstance()
    {
        __vtable = igModel_vtable;
        _views._value = 0;
        __vtable = igViewerParameters_vtable;
        _scene._value = 0;
        fn_801285A0(&unknown2C);
        fn_801285A0(&unknown6C);
        _disables._value = 0;
        _cameras._value = 0;
        _selectedObject._value = 0;
    }
    inline ~igViewerParametersInstance() { __vtable = igViewerParameters_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_METAOBJECT(igViewerParameters)

META_GET_META(igViewerParameters)

void *igViewerParameters_vtableRead()
{
    igViewerParametersInstance object;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igViewerParameters)

void igViewerParameters_register()
{
    fn_80402E28();
    meta_registerClass(0, &igViewerParameters_meta, igModel_register,
                       fn_8010EE6C, igViewerParameters_getMetaCall,
                       igViewerParameters_className, 0x108,
                       igViewerParameters_vtableRead, igViewerParameters_fieldInit, 0, igViewerParameters_dependencies);
}

META_GET_META_CALL(igViewerParameters)

}
#pragma pop
}

#pragma push
#pragma optimize_for_size off
namespace igViewerParameters_fieldInit {
// igViewerParameters: Alchemy class registration (0x80405FB8..0x80406228). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igViewerParameters)

extern "C" {
void fn_8003EC68(void *, int);
void fn_8004D4BC(void *, float);
void fn_80053650(void *, int);
void fn_801264B4(void *, void *);
void fn_80126808(void *, void *);
void *fn_801BF730();
void *fn_801BFAA0();
void *fn_801BFC74();
void *fn_801C7344();
extern char lbl_80461DF8[4];
extern char lbl_80462624[4];
extern char lbl_80462628[4];
extern char lbl_8046262C[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igViewerParameters_fieldInit()
{
    float local[5];
    Meta::igMetaObject *meta = igViewerParameters_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igViewerParameters_fieldTypes, 39);
    Meta::igObjectRefMetaField *sceneField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_v2 = fn_801BF730();
    sceneField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v2);
    sceneField->_construct = true;
    Meta::igVec3fMetaField *upVectorField = static_cast<Meta::igVec3fMetaField *>(meta_field(meta, base + 1));
    local[2] = *reinterpret_cast<float *>(lbl_80461DF8);
    local[3] = *reinterpret_cast<float *>(lbl_80462624);
    local[4] = *reinterpret_cast<float *>(lbl_80461DF8);
    fn_80126808(upVectorField, &local[2]);
    Meta::igFloatMetaField *ratioField = static_cast<Meta::igFloatMetaField *>(meta_field(meta, base + 2));
    fn_8004D4BC(ratioField, *reinterpret_cast<float *>(lbl_80462624));
    Meta::igFloatMetaField *hfovField = static_cast<Meta::igFloatMetaField *>(meta_field(meta, base + 3));
    fn_8004D4BC(hfovField, *reinterpret_cast<float *>(lbl_80462628));
    Meta::igFloatMetaField *nearPlaneField = static_cast<Meta::igFloatMetaField *>(meta_field(meta, base + 4));
    fn_8004D4BC(nearPlaneField, *reinterpret_cast<float *>(lbl_80462624));
    Meta::igFloatMetaField *farPlaneField = static_cast<Meta::igFloatMetaField *>(meta_field(meta, base + 5));
    fn_8004D4BC(farPlaneField, *reinterpret_cast<float *>(lbl_8046262C));
    Meta::igIntMetaField *transparencyModeField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 12));
    fn_80053650(transparencyModeField, 0);
    Meta::igBoolMetaField *alphaTestField = static_cast<Meta::igBoolMetaField *>(meta_field(meta, base + 16));
    fn_8003EC68(alphaTestField, 1);
    Meta::igObjectRefMetaField *disablesField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 24));
    void *value_v11 = fn_801C7344();
    disablesField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v11);
    disablesField->_construct = true;
    Meta::igBoolMetaField *showGuiField = static_cast<Meta::igBoolMetaField *>(meta_field(meta, base + 25));
    fn_8003EC68(showGuiField, 1);
    Meta::igBoolMetaField *showBoundingBoxField = static_cast<Meta::igBoolMetaField *>(meta_field(meta, base + 26));
    fn_8003EC68(showBoundingBoxField, 1);
    Meta::igIntMetaField *operationModeField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 29));
    fn_80053650(operationModeField, 1);
    Meta::igIntMetaField *firstCameraModeField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 30));
    fn_80053650(firstCameraModeField, 4);
    Meta::igObjectRefMetaField *camerasField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 31));
    void *value_v17 = fn_801BFAA0();
    camerasField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v17);
    camerasField->_construct = true;
    Meta::igObjectRefMetaField *selectedObjectField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 34));
    void *value_v19 = fn_801BFC74();
    selectedObjectField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v19);
    Meta::igIntMetaField *timeOperationField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 35));
    fn_80053650(timeOperationField, 1);
    Meta::igIntMetaField *loopModeField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 36));
    fn_80053650(loopModeField, 2);
    Meta::igFloatMetaField *speedField = static_cast<Meta::igFloatMetaField *>(meta_field(meta, base + 37));
    fn_8004D4BC(speedField, *reinterpret_cast<float *>(lbl_80462624));
    Meta::igVec2fMetaField *cursorPositionField = static_cast<Meta::igVec2fMetaField *>(meta_field(meta, base + 38));
    local[0] = *reinterpret_cast<float *>(lbl_80461DF8);
    local[1] = *reinterpret_cast<float *>(lbl_80461DF8);
    fn_801264B4(cursorPositionField, &local[0]);
    meta_setupFields(meta, igViewerParameters_fieldNames, igViewerParameters_fieldStorage, igViewerParameters_fieldOffsets, base);
}

}
#pragma pop
}
#pragma pop

namespace igViewerGuiFactory {
// igViewerGuiFactory: Alchemy class registration (0x80406228..0x80406344). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igViewerGuiFactory)

extern "C" {
void fn_80406344(void *,short);
}

#pragma push
#pragma auto_inline off
extern "C" {

META_METAOBJECT(igViewerGuiFactory)

META_GET_META(igViewerGuiFactory)

void *igViewerGuiFactory_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[4];
        int unknown08;
        int unknown0C;
        int unknown10;
        int unknown14;
        int unknown18;
        int unknown1C;
        int unknown20;
        int unknown24;
        char unknown28[8];
    } object;
    igObject_construct(&object);
    object.__vtable = igViewerGuiFactory_vtable;
    object.unknown08 = 0;
    object.unknown0C = 0;
    object.unknown10 = 0;
    object.unknown14 = 0;
    object.unknown18 = 0;
    object.unknown1C = 0;
    object.unknown20 = 0;
    object.unknown24 = 0;
    void *result = meta_vtableOf(&object);
    fn_80406344(&object, -1);   // the class's destructor
    return result;
}

}
#pragma pop
}

namespace unknown80406344 {
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066DFC(void *);
extern char igViewerGuiFactory_vtable[];
}
extern "C" {
void *fn_80406344(int p0,int p1){
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 void *value4;
 void *value5;
 void *value6;
 void *value7;
 void *value8;
 void *value9;
 void *value10;
 void *value11;
 void *value12;
 void *value13;
 void *value14;
 void *value15;
 if((int)p0!=0){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=igViewerGuiFactory_vtable;
  if((int)(p0+36)!=0){
   value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+36);
   if(value0){
    value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+4)=(reinterpret_cast<char *>(value1)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4)&0x7FFFFF)){
     fn_80066E1C(value0);
    }
   }
  }
  if((int)(p0+32)!=0){
   value2=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32);
   if(value2){
    value3=*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+4)=(reinterpret_cast<char *>(value3)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+4)&0x7FFFFF)){
     fn_80066E1C(value2);
    }
   }
  }
  if((int)(p0+28)!=0){
   value4=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+28);
   if(value4){
    value5=*reinterpret_cast<void **>(reinterpret_cast<char *>(value4)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+4)=(reinterpret_cast<char *>(value5)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value4)+4)&0x7FFFFF)){
     fn_80066E1C(value4);
    }
   }
  }
  if((int)(p0+24)!=0){
   value6=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24);
   if(value6){
    value7=*reinterpret_cast<void **>(reinterpret_cast<char *>(value6)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+4)=(reinterpret_cast<char *>(value7)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value6)+4)&0x7FFFFF)){
     fn_80066E1C(value6);
    }
   }
  }
  if((int)(p0+20)!=0){
   value8=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20);
   if(value8){
    value9=*reinterpret_cast<void **>(reinterpret_cast<char *>(value8)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value8)+4)=(reinterpret_cast<char *>(value9)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value8)+4)&0x7FFFFF)){
     fn_80066E1C(value8);
    }
   }
  }
  if((int)(p0+16)!=0){
   value10=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16);
   if(value10){
    value11=*reinterpret_cast<void **>(reinterpret_cast<char *>(value10)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value10)+4)=(reinterpret_cast<char *>(value11)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value10)+4)&0x7FFFFF)){
     fn_80066E1C(value10);
    }
   }
  }
  if((int)(p0+12)!=0){
   value12=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12);
   if(value12){
    value13=*reinterpret_cast<void **>(reinterpret_cast<char *>(value12)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value12)+4)=(reinterpret_cast<char *>(value13)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value12)+4)&0x7FFFFF)){
     fn_80066E1C(value12);
    }
   }
  }
  if((int)(p0+8)!=0){
   value14=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8);
   if(value14){
    value15=*reinterpret_cast<void **>(reinterpret_cast<char *>(value14)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value14)+4)=(reinterpret_cast<char *>(value15)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value14)+4)&0x7FFFFF)){
     fn_80066E1C(value14);
    }
   }
  }
  if((int)(short)p1>0){
   fn_80066DFC((void *)p0);
  }
 }
 return (void *)p0;
}
}
#pragma pop
}

namespace unknown8040651C {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_80402E28();
void igObject_register();
void igViewerGuiFactory_fieldInit();
void *igViewerGuiFactory_getMeta();
void igViewerGuiFactory_vtableRead();
extern char igViewerGuiFactory_className[];
extern char igViewerGuiFactory_meta[];
void igViewerGuiFactory_register();
void *igViewerGuiFactory_getMetaCall();
}
extern "C" {
void igViewerGuiFactory_arkRegister(){
 meta_registerNow((int)igViewerGuiFactory_register);
}
void igViewerGuiFactory_register(){
 fn_80402E28();
 meta_registerClass(0,(int)igViewerGuiFactory_meta,(int)igObject_register,(int)fn_800237D0,(int)igViewerGuiFactory_getMetaCall,(int)igViewerGuiFactory_className,40,(int)igViewerGuiFactory_vtableRead,(int)igViewerGuiFactory_fieldInit,0,(int)igViewerGuiFactory_dependencies);
}
void *igViewerGuiFactory_getMetaCall(){return igViewerGuiFactory_getMeta();}
}
#pragma pop
}

#pragma push
#pragma optimize_for_size off
namespace igViewerGuiFactory_fieldInit {
// igViewerGuiFactory: Alchemy class registration (0x804065E0..0x80406768). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igViewerGuiFactory)

extern "C" {
void *fn_80113894();
void *fn_80113A3C();
void *fn_80114988();
}

#pragma push
#pragma auto_inline off
extern "C" {

void igViewerGuiFactory_fieldInit()
{
    Meta::igMetaObject *meta = igViewerGuiFactory_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igViewerGuiFactory_fieldTypes, 8);
    Meta::igObjectRefMetaField *menuBackColorField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_v2 = fn_80113A3C();
    menuBackColorField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v2);
    menuBackColorField->_construct = true;
    Meta::igObjectRefMetaField *menuItemForeColorField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_v4 = fn_80113A3C();
    menuItemForeColorField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v4);
    menuItemForeColorField->_construct = true;
    Meta::igObjectRefMetaField *menuMarkColorField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    void *value_v6 = fn_80113894();
    menuMarkColorField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v6);
    menuMarkColorField->_construct = true;
    Meta::igObjectRefMetaField *iconBackColorField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 3));
    void *value_v8 = fn_80113A3C();
    iconBackColorField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v8);
    iconBackColorField->_construct = true;
    Meta::igObjectRefMetaField *bigIconColorField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 4));
    void *value_v10 = fn_80113894();
    bigIconColorField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v10);
    bigIconColorField->_construct = true;
    Meta::igObjectRefMetaField *bigIconHighlightColorField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 5));
    void *value_v12 = fn_80113894();
    bigIconHighlightColorField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v12);
    bigIconHighlightColorField->_construct = true;
    Meta::igObjectRefMetaField *smallIconOnOffColorField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 6));
    void *value_v14 = fn_80113894();
    smallIconOnOffColorField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v14);
    smallIconOnOffColorField->_construct = true;
    Meta::igObjectRefMetaField *fontField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 7));
    void *value_v16 = fn_80114988();
    fontField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v16);
    fontField->_construct = true;
    meta_setupFields(meta, igViewerGuiFactory_fieldNames, igViewerGuiFactory_fieldStorage, igViewerGuiFactory_fieldOffsets, base);
}

}
#pragma pop
}
#pragma pop

namespace unknown80406768 {
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *fn_80284550();
void fn_80402E28();
void igInfoManager_register();
void igViewerDataPumpManager_fieldInit();
extern char igViewerDataPumpManager_className[];
extern char igNamedObject_vtable[];
extern char lbl_804CBA60[];
extern char igViewerDataPumpManager_vtable[];
extern void *igViewerDataPumpManager_meta;
void *igViewerDataPumpManager_getMeta();
void *igViewerDataPumpManager_vtableRead();
void igViewerDataPumpManager_arkRegister();
void igViewerDataPumpManager_register();
void *igViewerDataPumpManager_getMetaCall();
}
struct UnknownGenRoot804067F4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot804067F4(){igObject_construct(this);}
};
struct UnknownGenObject804067F4_0 : UnknownGenRoot804067F4 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject804067F4_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject804067F4_1 : UnknownGenObject804067F4_0 {
 inline ~UnknownGenObject804067F4_1(){unknown00=lbl_804CBA60;}
};
struct UnknownGenObject804067F4 : UnknownGenObject804067F4_1 {
 char unknown0C[4];
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject804067F4(){unknown00=igViewerDataPumpManager_vtable;}
};
extern "C" {
void *igViewerDataPumpManager_create(void *object){
 igViewerDataPumpManager_arkRegister();
 return meta_createInstance(igViewerDataPumpManager_meta,object);
}
void *igViewerDataPumpManager_getMeta(){
 if(!igViewerDataPumpManager_meta || !(reinterpret_cast<unsigned int *>(igViewerDataPumpManager_meta)[0x24/4]&4)) igViewerDataPumpManager_arkRegister();
 return igViewerDataPumpManager_meta;
}
void *igViewerDataPumpManager_vtableRead(){
 UnknownGenObject804067F4 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=lbl_804CBA60;
 object.unknown00=igViewerDataPumpManager_vtable;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igViewerDataPumpManager_arkRegister(){
 meta_registerNow((int)igViewerDataPumpManager_register);
}
void igViewerDataPumpManager_register(){
 fn_80402E28();
 meta_registerClass(0,(int)&igViewerDataPumpManager_meta,(int)igInfoManager_register,(int)fn_80284550,(int)igViewerDataPumpManager_getMetaCall,(int)igViewerDataPumpManager_className,20,(int)igViewerDataPumpManager_vtableRead,(int)igViewerDataPumpManager_fieldInit,0,(int)igViewerDataPumpManager_dependencies);
}
void *igViewerDataPumpManager_getMetaCall(){return igViewerDataPumpManager_getMeta();}
}
#pragma pop
}

#pragma push
#pragma use_lmw_stmw on
namespace igViewerDataPumpManager_fieldInit {
// igViewerDataPumpManager: Alchemy class registration (0x804069B8..0x80406AD8). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igViewerDataPumpManager)

extern "C" {
int fn_80053998(void *, void *);
void fn_8006588C(void *, int, void *);
void *fn_800658F8(void *, void *);
void fn_80071694(void *, void *);
void *fn_80218AC8();
extern char lbl_80462110[6];
extern char lbl_80462758[25];
extern char lbl_8055C99C[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igViewerDataPumpManager_fieldInit()
{
    Meta::igMetaObject *meta = igViewerDataPumpManager_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igViewerDataPumpManager_fieldTypes, 1);
    Meta::igStringMetaField *nameField = static_cast<Meta::igStringMetaField *>(fn_800658F8(meta, lbl_80462110));   // "_name"
    int nameIndex = fn_80053998(meta->_metaFields, nameField);
    nameField = static_cast<Meta::igStringMetaField *>(reinterpret_cast<igMetaFieldVirtuals *>(nameField)->virtual54(1));   // a copy of it
    fn_80071694(nameField, (void *)lbl_80462758);
    nameField->_externalEnumStorage = reinterpret_cast<void *>(lbl_8055C99C);
    fn_8006588C(meta, nameIndex, nameField);
    meta_release(nameField);
    Meta::igObjectRefMetaField *dataPumpManagerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_v4 = fn_80218AC8();
    dataPumpManagerField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v4);
    dataPumpManagerField->_construct = true;
    meta_setupFields(meta, igViewerDataPumpManager_fieldNames, igViewerDataPumpManager_fieldStorage, igViewerDataPumpManager_fieldOffsets, base);
}

}
#pragma pop
}
#pragma pop

namespace igPickMode {
// igPickMode: Alchemy class registration (0x80406AD8..0x80406E24). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igPickMode)
META_DECLARE(igViewMode)

extern "C" {
void fn_801285A0(void *);
void *fn_802E170C();
void fn_80402E28();
extern char lbl_80495AD8[100];
}

struct Instance_LigPickMode_0 : igObjectInstance {
    inline Instance_LigPickMode_0()
    {
        __vtable = lbl_80495AD8;
    }
};

struct Instance_LigPickMode_1 : Instance_LigPickMode_0 {
    char unknown04[8];
    char unknown0C[64];
    inline Instance_LigPickMode_1()
    {
        __vtable = igViewMode_vtable;
        fn_801285A0(&unknown0C);
    }
};

struct igPickModeInstance : Instance_LigPickMode_1 {
    igObjectRefMember _parameters;
    igObjectRefMember _guiSystem;
    igObjectRefMember _cursor;
    igObjectRefMember _savedCursor;
    char unknown5C[4];
    igObjectRefMember _intersectTraversal;
    igObjectRefMember _ray;
    char unknown68[8];
    igObjectRefMember _hitPath;
    char unknown74[72];
    inline igPickModeInstance()
    {
        __vtable = igPickMode_vtable;
        _parameters._value = 0;
        _guiSystem._value = 0;
        _cursor._value = 0;
        _savedCursor._value = 0;
        _intersectTraversal._value = 0;
        _ray._value = 0;
        _hitPath._value = 0;
        fn_801285A0(&unknown74);
    }
    inline ~igPickModeInstance() { __vtable = igPickMode_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igPickMode)

META_GET_META(igPickMode)

void *igPickMode_vtableRead()
{
    igPickModeInstance object;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igPickMode)

void igPickMode_register()
{
    fn_80402E28();
    meta_registerClass(0, &igPickMode_meta, igViewMode_register,
                       fn_802E170C, igPickMode_getMetaCall,
                       igPickMode_className, 0xBC,
                       igPickMode_vtableRead, igPickMode_fieldInit, 0, igPickMode_dependencies);
}

META_GET_META_CALL(igPickMode)

}
#pragma pop
}

#pragma push
#pragma optimize_for_size off
namespace igPickMode_fieldInit {
// igPickMode: Alchemy class registration (0x80406E24..0x80406FA0). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igPickMode)
META_DECLARE(igViewerParameters)

extern "C" {
void fn_8004D4BC(void *, float);
void *fn_8010F9B0();
void *fn_8010FE38();
void *fn_8011F940();
void fn_801264B4(void *, void *);
void *fn_801BD6CC();
void *fn_801BFC74();
extern char lbl_80461DF8[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igPickMode_fieldInit()
{
    float local[2];
    Meta::igMetaObject *meta = igPickMode_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igPickMode_fieldTypes, 12);
    Meta::igObjectRefMetaField *parametersField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    parametersField->_metaObject = igViewerParameters_metaObject();
    Meta::igObjectRefMetaField *guiSystemField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_v4 = fn_8010F9B0();
    guiSystemField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v4);
    Meta::igObjectRefMetaField *cursorField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    void *value_v6 = fn_8010FE38();
    cursorField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v6);
    Meta::igObjectRefMetaField *savedCursorField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 3));
    void *value_v8 = fn_8010FE38();
    savedCursorField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v8);
    Meta::igObjectRefMetaField *intersectTraversalField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 5));
    void *value_v10 = fn_801BD6CC();
    intersectTraversalField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v10);
    intersectTraversalField->_construct = true;
    Meta::igObjectRefMetaField *rayField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 6));
    void *value_v12 = fn_8011F940();
    rayField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v12);
    rayField->_construct = true;
    Meta::igFloatMetaField *impactLengthField = static_cast<Meta::igFloatMetaField *>(meta_field(meta, base + 7));
    fn_8004D4BC(impactLengthField, *reinterpret_cast<float *>(lbl_80461DF8));
    Meta::igObjectRefMetaField *hitPathField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 9));
    void *value_v15 = fn_801BFC74();
    hitPathField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v15);
    Meta::igVec2fMetaField *joystickTField = static_cast<Meta::igVec2fMetaField *>(meta_field(meta, base + 11));
    local[0] = *reinterpret_cast<float *>(lbl_80461DF8);
    local[1] = *reinterpret_cast<float *>(lbl_80461DF8);
    fn_801264B4(joystickTField, &local[0]);
    meta_setupFields(meta, igPickMode_fieldNames, igPickMode_fieldStorage, igPickMode_fieldOffsets, base);
}

}
#pragma pop
}
#pragma pop

namespace unknown80406FA0 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void igRotateMode_arkRegister();
extern char lbl_80462848[];
extern void *lbl_8055C9D8;
extern void *igRotateMode_meta;
}
extern "C" {
void *fn_80406FA0(){
 if(!lbl_8055C9D8) lbl_8055C9D8=fn_800635C8(lbl_80462848,lbl_804F0A98,lbl_804F0AA4,0x3);
 return lbl_8055C9D8;
}
}
#pragma pop
}

namespace igRotateMode {
// igRotateMode: Alchemy class registration (0x80407000..0x804071B0). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igRotateMode)
META_DECLARE(igViewMode)

extern "C" {
void fn_801285A0(void *);
void *fn_802E170C();
void fn_80402E28();
extern char lbl_80495AD8[100];
}

struct Instance_LigRotateMode_0 : igObjectInstance {
};

struct Instance_LigRotateMode_1 : Instance_LigRotateMode_0 {
    char unknown04[8];
    char unknown0C[136];
};

struct Instance_LigRotateMode_2 : Instance_LigRotateMode_1 {
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igRotateMode)

META_GET_META(igRotateMode)

void *igRotateMode_vtableRead()
{
    Instance_LigRotateMode_2 object;
    object.__vtable = lbl_80495AD8;
    object.__vtable = igViewMode_vtable;
    fn_801285A0(&object.unknown0C);
    object.__vtable = igRotateMode_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igRotateMode)

void igRotateMode_register()
{
    fn_80402E28();
    meta_registerClass(0, &igRotateMode_meta, igViewMode_register,
                       fn_802E170C, igRotateMode_getMetaCall,
                       igRotateMode_className, 0x94,
                       igRotateMode_vtableRead, igRotateMode_fieldInit, 0, 0);
}

META_GET_META_CALL(igRotateMode)

}
#pragma pop
}

#pragma push
#pragma optimize_for_size off
namespace igRotateMode_fieldInit {
// igRotateMode: Alchemy class registration (0x804071B0..0x8040737C). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igRotateMode)

extern "C" {
void fn_8003EC68(void *, int);
void fn_80046E58(void *, void *);
void fn_8004D4BC(void *, float);
void fn_801264B4(void *, void *);
void fn_80126808(void *, void *);
void fn_80406FA0();
extern char lbl_80461DF8[4];
extern char lbl_80462624[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igRotateMode_fieldInit()
{
    float local[9];
    Meta::igMetaObject *meta = igRotateMode_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igRotateMode_fieldTypes, 16);
    Meta::igFloatMetaField *distanceField = static_cast<Meta::igFloatMetaField *>(meta_field(meta, base));
    fn_8004D4BC(distanceField, *reinterpret_cast<float *>(lbl_80462624));
    Meta::igVec2fMetaField *lastMousePosField = static_cast<Meta::igVec2fMetaField *>(meta_field(meta, base + 1));
    local[4] = *reinterpret_cast<float *>(lbl_80461DF8);
    local[5] = *reinterpret_cast<float *>(lbl_80461DF8);
    fn_801264B4(lastMousePosField, &local[4]);
    Meta::igVec2fMetaField *joystickTField = static_cast<Meta::igVec2fMetaField *>(meta_field(meta, base + 5));
    local[2] = *reinterpret_cast<float *>(lbl_80461DF8);
    local[3] = *reinterpret_cast<float *>(lbl_80461DF8);
    fn_801264B4(joystickTField, &local[2]);
    Meta::igVec2fMetaField *joystickRField = static_cast<Meta::igVec2fMetaField *>(meta_field(meta, base + 6));
    local[0] = *reinterpret_cast<float *>(lbl_80461DF8);
    local[1] = *reinterpret_cast<float *>(lbl_80461DF8);
    fn_801264B4(joystickRField, &local[0]);
    Meta::igEnumMetaField *constraintAxisField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base + 8));
    fn_80046E58(constraintAxisField, (void *)lbl_804F0BB0);
    constraintAxisField->_getMetaEnumFunction = reinterpret_cast<void *>(fn_80406FA0);
    Meta::igBoolMetaField *activeField = static_cast<Meta::igBoolMetaField *>(meta_field(meta, base + 9));
    fn_8003EC68(activeField, 1);
    Meta::igFloatMetaField *headField = static_cast<Meta::igFloatMetaField *>(meta_field(meta, base + 11));
    fn_8004D4BC(headField, *reinterpret_cast<float *>(lbl_80461DF8));
    Meta::igFloatMetaField *rollField = static_cast<Meta::igFloatMetaField *>(meta_field(meta, base + 12));
    fn_8004D4BC(rollField, *reinterpret_cast<float *>(lbl_80461DF8));
    Meta::igFloatMetaField *pitchField = static_cast<Meta::igFloatMetaField *>(meta_field(meta, base + 13));
    fn_8004D4BC(pitchField, *reinterpret_cast<float *>(lbl_80461DF8));
    Meta::igFloatMetaField *zoomField = static_cast<Meta::igFloatMetaField *>(meta_field(meta, base + 14));
    fn_8004D4BC(zoomField, *reinterpret_cast<float *>(lbl_80462624));
    Meta::igVec3fMetaField *translationField = static_cast<Meta::igVec3fMetaField *>(meta_field(meta, base + 15));
    local[6] = *reinterpret_cast<float *>(lbl_80461DF8);
    local[7] = *reinterpret_cast<float *>(lbl_80461DF8);
    local[8] = *reinterpret_cast<float *>(lbl_80461DF8);
    fn_80126808(translationField, &local[6]);
    meta_setupFields(meta, igRotateMode_fieldNames, igRotateMode_fieldStorage, igRotateMode_fieldOffsets, base);
}

}
#pragma pop
}
#pragma pop

namespace igFlyMode {
// igFlyMode: Alchemy class registration (0x8040737C..0x80407578). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igFlyMode)
META_DECLARE(igViewMode)

extern "C" {
void fn_801285A0(void *);
void *fn_802E170C();
void fn_80402E28();
extern char lbl_80495AD8[100];
}

struct Instance_LigFlyMode_0 : igObjectInstance {
};

struct Instance_LigFlyMode_1 : Instance_LigFlyMode_0 {
    char unknown04[8];
    char unknown0C[124];
};

struct igFlyModeInstance : Instance_LigFlyMode_1 {
    igObjectRefMember _window;
    char unknown8C[20];
    inline ~igFlyModeInstance() { __vtable = igFlyMode_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igFlyMode)

META_GET_META(igFlyMode)

void *igFlyMode_vtableRead()
{
    igFlyModeInstance object;
    object.__vtable = lbl_80495AD8;
    object.__vtable = igViewMode_vtable;
    fn_801285A0(&object.unknown0C);
    object.__vtable = igFlyMode_vtable;
    object._window._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igFlyMode)

void igFlyMode_register()
{
    fn_80402E28();
    meta_registerClass(0, &igFlyMode_meta, igViewMode_register,
                       fn_802E170C, igFlyMode_getMetaCall,
                       igFlyMode_className, 0xA0,
                       igFlyMode_vtableRead, igFlyMode_fieldInit, 0, igFlyMode_dependencies);
}

META_GET_META_CALL(igFlyMode)

}
#pragma pop
}

#pragma push
#pragma optimize_for_size off
namespace igFlyMode_fieldInit {
// igFlyMode: Alchemy class registration (0x80407578..0x80407720). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igFlyMode)

extern "C" {
void *fn_800CAF4C();
void fn_801264B4(void *, void *);
void fn_80126808(void *, void *);
extern char lbl_80461DF8[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igFlyMode_fieldInit()
{
    float local[17];
    Meta::igMetaObject *meta = igFlyMode_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igFlyMode_fieldTypes, 11);
    Meta::igVec3fMetaField *moveDirectionField = static_cast<Meta::igVec3fMetaField *>(meta_field(meta, base));
    local[14] = *reinterpret_cast<float *>(lbl_80461DF8);
    local[15] = *reinterpret_cast<float *>(lbl_80461DF8);
    local[16] = *reinterpret_cast<float *>(lbl_80461DF8);
    fn_80126808(moveDirectionField, &local[14]);
    Meta::igVec3fMetaField *joystickTField = static_cast<Meta::igVec3fMetaField *>(meta_field(meta, base + 1));
    local[11] = *reinterpret_cast<float *>(lbl_80461DF8);
    local[12] = *reinterpret_cast<float *>(lbl_80461DF8);
    local[13] = *reinterpret_cast<float *>(lbl_80461DF8);
    fn_80126808(joystickTField, &local[11]);
    Meta::igVec2fMetaField *joystickRField = static_cast<Meta::igVec2fMetaField *>(meta_field(meta, base + 2));
    local[6] = *reinterpret_cast<float *>(lbl_80461DF8);
    local[7] = *reinterpret_cast<float *>(lbl_80461DF8);
    fn_801264B4(joystickRField, &local[6]);
    Meta::igVec3fMetaField *lastTranslationField = static_cast<Meta::igVec3fMetaField *>(meta_field(meta, base + 3));
    local[8] = *reinterpret_cast<float *>(lbl_80461DF8);
    local[9] = *reinterpret_cast<float *>(lbl_80461DF8);
    local[10] = *reinterpret_cast<float *>(lbl_80461DF8);
    fn_80126808(lastTranslationField, &local[8]);
    Meta::igVec2fMetaField *lastRotationField = static_cast<Meta::igVec2fMetaField *>(meta_field(meta, base + 4));
    local[4] = *reinterpret_cast<float *>(lbl_80461DF8);
    local[5] = *reinterpret_cast<float *>(lbl_80461DF8);
    fn_801264B4(lastRotationField, &local[4]);
    Meta::igObjectRefMetaField *windowField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 7));
    void *value_v7 = fn_800CAF4C();
    windowField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v7);
    Meta::igVec2fMetaField *mousePosField = static_cast<Meta::igVec2fMetaField *>(meta_field(meta, base + 8));
    local[2] = *reinterpret_cast<float *>(lbl_80461DF8);
    local[3] = *reinterpret_cast<float *>(lbl_80461DF8);
    fn_801264B4(mousePosField, &local[2]);
    Meta::igVec2fMetaField *lastAimField = static_cast<Meta::igVec2fMetaField *>(meta_field(meta, base + 9));
    local[0] = *reinterpret_cast<float *>(lbl_80461DF8);
    local[1] = *reinterpret_cast<float *>(lbl_80461DF8);
    fn_801264B4(lastAimField, &local[0]);
    meta_setupFields(meta, igFlyMode_fieldNames, igFlyMode_fieldStorage, igFlyMode_fieldOffsets, base);
}

}
#pragma pop
}
#pragma pop

namespace igCameraMode {
// igCameraMode: Alchemy class registration (0x80407720..0x80407960). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igCameraMode)
META_DECLARE(igViewMode)

extern "C" {
void fn_801285A0(void *);
void *fn_802E170C();
void fn_80402E28();
extern char lbl_80495AD8[100];
}

struct Instance_LigCameraMode_0 : igObjectInstance {
};

struct Instance_LigCameraMode_1 : Instance_LigCameraMode_0 {
    char unknown04[8];
    char unknown0C[64];
};

struct igCameraModeInstance : Instance_LigCameraMode_1 {
    igObjectRefMember _cameraPath;
    igObjectRefMember _camera;
    inline ~igCameraModeInstance() { __vtable = igCameraMode_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igCameraMode)

META_GET_META(igCameraMode)

void *igCameraMode_vtableRead()
{
    igCameraModeInstance object;
    object.__vtable = lbl_80495AD8;
    object.__vtable = igViewMode_vtable;
    fn_801285A0(&object.unknown0C);
    object.__vtable = igCameraMode_vtable;
    object._cameraPath._value = 0;
    object._camera._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igCameraMode)

void igCameraMode_register()
{
    fn_80402E28();
    meta_registerClass(0, &igCameraMode_meta, igViewMode_register,
                       fn_802E170C, igCameraMode_getMetaCall,
                       igCameraMode_className, 0x54,
                       igCameraMode_vtableRead, igCameraMode_fieldInit, 0, igCameraMode_dependencies);
}

META_GET_META_CALL(igCameraMode)

}
#pragma pop
}

#pragma push
#pragma optimize_for_size off
namespace igCameraMode_fieldInit {
// igCameraMode: Alchemy class registration (0x80407960..0x80407A18). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igCameraMode)

extern "C" {
void *fn_801BFC74();
void *fn_801C5E38();
}

#pragma push
#pragma auto_inline off
extern "C" {

void igCameraMode_fieldInit()
{
    Meta::igMetaObject *meta = igCameraMode_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igCameraMode_fieldTypes, 2);
    Meta::igObjectRefMetaField *cameraPathField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_v2 = fn_801BFC74();
    cameraPathField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v2);
    Meta::igObjectRefMetaField *cameraField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_v4 = fn_801C5E38();
    cameraField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v4);
    meta_setupFields(meta, igCameraMode_fieldNames, igCameraMode_fieldStorage, igCameraMode_fieldOffsets, base);
}

}
#pragma pop
}
#pragma pop

namespace igViewMode {
// igViewMode: Alchemy class registration (0x80407A18..0x80407BD0). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igViewMode)
META_DECLARE(igView)

extern "C" {
void *fn_8010E6DC();
void fn_801285A0(void *);
void fn_80402E28();
extern char lbl_80495AD8[100];
}

struct Instance_LigViewMode_0 : igObjectInstance {
};

struct Instance_LigViewMode_1 : Instance_LigViewMode_0 {
    char unknown04[8];
    char unknown0C[64];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_METAOBJECT(igViewMode)

META_GET_META(igViewMode)

void *igViewMode_vtableRead()
{
    Instance_LigViewMode_1 object;
    object.__vtable = lbl_80495AD8;
    object.__vtable = igViewMode_vtable;
    fn_801285A0(&object.unknown0C);
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igViewMode)

void igViewMode_register()
{
    fn_80402E28();
    meta_registerClass(0, &igViewMode_meta, igView_register,
                       fn_8010E6DC, igViewMode_getMetaCall,
                       igViewMode_className, 0x4C,
                       igViewMode_vtableRead, igViewMode_fieldInit, 0, 0);
}

META_GET_META_CALL(igViewMode)

}
#pragma pop
}

#pragma push
#pragma optimize_for_size off
namespace igViewMode_fieldInit {
// igViewMode: Alchemy class registration (0x80407BD0..0x80407C50). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igViewMode)

extern "C" {
}

#pragma push
#pragma auto_inline off
extern "C" {

void igViewMode_fieldInit()
{
    Meta::igMetaObject *meta = igViewMode_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igViewMode_fieldTypes, 1);
    meta_setupFields(meta, igViewMode_fieldNames, igViewMode_fieldStorage, igViewMode_fieldOffsets, base);
}

}
#pragma pop
}
#pragma pop

namespace igViewManager {
// igViewManager: Alchemy class registration (0x80407C50..0x80407ECC). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igViewManager)
META_DECLARE(igEventReceiver)

extern "C" {
void *fn_8010F4FC();
void fn_801285A0(void *);
void fn_80402E28();
}

struct Instance_LigViewManager_0 : igObjectInstance {
    inline Instance_LigViewManager_0()
    {
        __vtable = igEventReceiver_vtable;
    }
};

struct igViewManagerInstance : Instance_LigViewManager_0 {
    char unknown04[4];
    igObjectRefMember _viewMode;
    igObjectRefMember _viewModel;
    igObjectRefMember _synchronizers;
    char unknown14[64];
    inline igViewManagerInstance()
    {
        __vtable = igViewManager_vtable;
        _viewMode._value = 0;
        _viewModel._value = 0;
        _synchronizers._value = 0;
        fn_801285A0(&unknown14);
    }
    inline ~igViewManagerInstance() { __vtable = igViewManager_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_METAOBJECT(igViewManager)

META_GET_META(igViewManager)

void *igViewManager_vtableRead()
{
    igViewManagerInstance object;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igViewManager)

void igViewManager_register()
{
    fn_80402E28();
    meta_registerClass(0, &igViewManager_meta, igEventReceiver_register,
                       fn_8010F4FC, igViewManager_getMetaCall,
                       igViewManager_className, 0x54,
                       igViewManager_vtableRead, igViewManager_fieldInit, 0, igViewManager_dependencies);
}

META_GET_META_CALL(igViewManager)

}
#pragma pop
}

#pragma push
#pragma optimize_for_size off
namespace igViewManager_fieldInit {
// igViewManager: Alchemy class registration (0x80407ECC..0x80407FB4). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igViewManager)
META_DECLARE(igViewMode)
META_DECLARE(igViewModel)

extern "C" {
void *fn_80028F84();
}

#pragma push
#pragma auto_inline off
extern "C" {

void igViewManager_fieldInit()
{
    Meta::igMetaObject *meta = igViewManager_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igViewManager_fieldTypes, 4);
    Meta::igObjectRefMetaField *viewModeField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    viewModeField->_metaObject = igViewMode_metaObject();
    viewModeField->_construct = true;
    Meta::igObjectRefMetaField *viewModelField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    viewModelField->_metaObject = igViewModel_metaObject();
    viewModelField->_construct = true;
    Meta::igObjectRefMetaField *synchronizersField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    void *value_v6 = fn_80028F84();
    synchronizersField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v6);
    synchronizersField->_construct = true;
    meta_setupFields(meta, igViewManager_fieldNames, igViewManager_fieldStorage, igViewManager_fieldOffsets, base);
}

}
#pragma pop
}
#pragma pop

namespace igViewModel {
// igViewModel: Alchemy class registration (0x80407FB4..0x804081CC). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igViewModel)
META_DECLARE(igModel)

extern "C" {
void *fn_8010EE6C();
void fn_801285A0(void *);
void fn_80402E28();
}

struct igModelInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _views;
    inline ~igModelInstance() { __vtable = igModel_vtable; }
};

struct igViewModelInstance : igModelInstance {
    char unknown0C[164];
    inline igViewModelInstance()
    {
        __vtable = igModel_vtable;
        _views._value = 0;
        __vtable = igViewModel_vtable;
        fn_801285A0(&unknown0C);
    }
    inline ~igViewModelInstance() { __vtable = igViewModel_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_METAOBJECT(igViewModel)

META_GET_META(igViewModel)

void *igViewModel_vtableRead()
{
    igViewModelInstance object;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igViewModel)

void igViewModel_register()
{
    fn_80402E28();
    meta_registerClass(0, &igViewModel_meta, igModel_register,
                       fn_8010EE6C, igViewModel_getMetaCall,
                       igViewModel_className, 0xB0,
                       igViewModel_vtableRead, igViewModel_fieldInit, 0, 0);
}

META_GET_META_CALL(igViewModel)

}
#pragma pop
}

#pragma push
#pragma optimize_for_size off
namespace igViewModel_fieldInit {
// igViewModel: Alchemy class registration (0x804081CC..0x804083CC). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igViewModel)

extern "C" {
void fn_8004D4BC(void *, float);
void fn_80126808(void *, void *);
extern char lbl_80461DF8[4];
extern char lbl_80462624[4];
extern char lbl_80462628[4];
extern char lbl_8046262C[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igViewModel_fieldInit()
{
    float local[18];
    Meta::igMetaObject *meta = igViewModel_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igViewModel_fieldTypes, 13);
    Meta::igFloatMetaField *ratioField = static_cast<Meta::igFloatMetaField *>(meta_field(meta, base + 1));
    fn_8004D4BC(ratioField, *reinterpret_cast<float *>(lbl_80462624));
    Meta::igFloatMetaField *hfovField = static_cast<Meta::igFloatMetaField *>(meta_field(meta, base + 2));
    fn_8004D4BC(hfovField, *reinterpret_cast<float *>(lbl_80462628));
    Meta::igFloatMetaField *nearPlaneField = static_cast<Meta::igFloatMetaField *>(meta_field(meta, base + 3));
    fn_8004D4BC(nearPlaneField, *reinterpret_cast<float *>(lbl_80462624));
    Meta::igFloatMetaField *farPlaneField = static_cast<Meta::igFloatMetaField *>(meta_field(meta, base + 4));
    fn_8004D4BC(farPlaneField, *reinterpret_cast<float *>(lbl_8046262C));
    Meta::igVec3fMetaField *positionField = static_cast<Meta::igVec3fMetaField *>(meta_field(meta, base + 5));
    local[15] = *reinterpret_cast<float *>(lbl_80461DF8);
    local[16] = *reinterpret_cast<float *>(lbl_80461DF8);
    local[17] = *reinterpret_cast<float *>(lbl_80461DF8);
    fn_80126808(positionField, &local[15]);
    Meta::igVec3fMetaField *directionField = static_cast<Meta::igVec3fMetaField *>(meta_field(meta, base + 6));
    local[12] = *reinterpret_cast<float *>(lbl_80461DF8);
    local[13] = *reinterpret_cast<float *>(lbl_80461DF8);
    local[14] = *reinterpret_cast<float *>(lbl_80462624);
    fn_80126808(directionField, &local[12]);
    Meta::igVec3fMetaField *viewUpVectorField = static_cast<Meta::igVec3fMetaField *>(meta_field(meta, base + 7));
    local[9] = *reinterpret_cast<float *>(lbl_80461DF8);
    local[10] = *reinterpret_cast<float *>(lbl_80462624);
    local[11] = *reinterpret_cast<float *>(lbl_80461DF8);
    fn_80126808(viewUpVectorField, &local[9]);
    Meta::igVec3fMetaField *viewLeftVectorField = static_cast<Meta::igVec3fMetaField *>(meta_field(meta, base + 8));
    local[6] = *reinterpret_cast<float *>(lbl_80462624);
    local[7] = *reinterpret_cast<float *>(lbl_80461DF8);
    local[8] = *reinterpret_cast<float *>(lbl_80461DF8);
    fn_80126808(viewLeftVectorField, &local[6]);
    Meta::igVec3fMetaField *sceneUpVectorField = static_cast<Meta::igVec3fMetaField *>(meta_field(meta, base + 9));
    local[3] = *reinterpret_cast<float *>(lbl_80461DF8);
    local[4] = *reinterpret_cast<float *>(lbl_80462624);
    local[5] = *reinterpret_cast<float *>(lbl_80461DF8);
    fn_80126808(sceneUpVectorField, &local[3]);
    Meta::igVec3fMetaField *selectedCenterField = static_cast<Meta::igVec3fMetaField *>(meta_field(meta, base + 11));
    local[0] = *reinterpret_cast<float *>(lbl_80461DF8);
    local[1] = *reinterpret_cast<float *>(lbl_80461DF8);
    local[2] = *reinterpret_cast<float *>(lbl_80461DF8);
    fn_80126808(selectedCenterField, &local[0]);
    meta_setupFields(meta, igViewModel_fieldNames, igViewModel_fieldStorage, igViewModel_fieldOffsets, base);
}

}
#pragma pop
}
#pragma pop

namespace igNormalsRenderer {
// igNormalsRenderer: Alchemy class registration (0x804083CC..0x804084F4). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igNormalsRenderer)

extern "C" {
void fn_804084F4(void *, int);
extern char lbl_80497C9C[108];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_METAOBJECT(igNormalsRenderer)

META_GET_META(igNormalsRenderer)

void *igNormalsRenderer_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[4];
        int unknown08;
        int unknown0C;
        int unknown10;
        int unknown14;
        int unknown18;
        int unknown1C;
        int unknown20;
        char unknown24[4];
        int unknown28;
        char unknown2C[4];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_80497C9C;
    object.unknown08 = 0;
    object.__vtable = igNormalsRenderer_vtable;
    object.unknown0C = 0;
    object.unknown10 = 0;
    object.unknown14 = 0;
    object.unknown18 = 0;
    object.unknown1C = 0;
    object.unknown20 = 0;
    object.unknown28 = 0;
    void *result = meta_vtableOf(&object);
    fn_804084F4(&object, -1);   // the class's destructor
    return result;
}

}
#pragma pop
}

namespace unknown804084F4 {
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066DFC(void *);
extern char lbl_80497C9C[];
extern char igNormalsRenderer_vtable[];
}
extern "C" {
void *fn_804084F4(int p0,int p1){
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 void *value4;
 void *value5;
 void *value6;
 void *value7;
 void *value8;
 void *value9;
 void *value10;
 void *value11;
 void *value12;
 void *value13;
 void *value14;
 void *value15;
 if((int)p0!=0){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=igNormalsRenderer_vtable;
  if((int)(p0+40)!=0){
   value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+40);
   if(value0){
    value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+4)=(reinterpret_cast<char *>(value1)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4)&0x7FFFFF)){
     fn_80066E1C(value0);
    }
   }
  }
  if((int)(p0+32)!=0){
   value2=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32);
   if(value2){
    value3=*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+4)=(reinterpret_cast<char *>(value3)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+4)&0x7FFFFF)){
     fn_80066E1C(value2);
    }
   }
  }
  if((int)(p0+28)!=0){
   value4=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+28);
   if(value4){
    value5=*reinterpret_cast<void **>(reinterpret_cast<char *>(value4)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+4)=(reinterpret_cast<char *>(value5)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value4)+4)&0x7FFFFF)){
     fn_80066E1C(value4);
    }
   }
  }
  if((int)(p0+24)!=0){
   value6=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24);
   if(value6){
    value7=*reinterpret_cast<void **>(reinterpret_cast<char *>(value6)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+4)=(reinterpret_cast<char *>(value7)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value6)+4)&0x7FFFFF)){
     fn_80066E1C(value6);
    }
   }
  }
  if((int)(p0+20)!=0){
   value8=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20);
   if(value8){
    value9=*reinterpret_cast<void **>(reinterpret_cast<char *>(value8)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value8)+4)=(reinterpret_cast<char *>(value9)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value8)+4)&0x7FFFFF)){
     fn_80066E1C(value8);
    }
   }
  }
  if((int)(p0+16)!=0){
   value10=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16);
   if(value10){
    value11=*reinterpret_cast<void **>(reinterpret_cast<char *>(value10)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value10)+4)=(reinterpret_cast<char *>(value11)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value10)+4)&0x7FFFFF)){
     fn_80066E1C(value10);
    }
   }
  }
  if((int)(p0+12)!=0){
   value12=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12);
   if(value12){
    value13=*reinterpret_cast<void **>(reinterpret_cast<char *>(value12)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value12)+4)=(reinterpret_cast<char *>(value13)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value12)+4)&0x7FFFFF)){
     fn_80066E1C(value12);
    }
   }
  }
  if((unsigned int)p0!=0){
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=lbl_80497C9C;
   if((int)(p0+8)!=0){
    value14=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8);
    if(value14){
     value15=*reinterpret_cast<void **>(reinterpret_cast<char *>(value14)+4);
     *reinterpret_cast<void * *>(reinterpret_cast<char *>(value14)+4)=(reinterpret_cast<char *>(value15)+-1);
     if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value14)+4)&0x7FFFFF)){
      fn_80066E1C(value14);
     }
    }
   }
  }
  if((int)(short)p1>0){
   fn_80066DFC((void *)p0);
  }
 }
 return (void *)p0;
}
}
#pragma pop
}

namespace unknown804086E0 {
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8010DF8C();
void fn_80402E28();
void igNormalsRenderer_fieldInit();
void *igNormalsRenderer_getMeta();
void igNormalsRenderer_vtableRead();
void igRenderer_register();
extern char igNormalsRenderer_className[];
extern char igNormalsRenderer_meta[];
void igNormalsRenderer_register();
void *igNormalsRenderer_getMetaCall();
}
extern "C" {
void igNormalsRenderer_arkRegister(){
 meta_registerNow((int)igNormalsRenderer_register);
}
void igNormalsRenderer_register(){
 fn_80402E28();
 meta_registerClass(0,(int)igNormalsRenderer_meta,(int)igRenderer_register,(int)fn_8010DF8C,(int)igNormalsRenderer_getMetaCall,(int)igNormalsRenderer_className,48,(int)igNormalsRenderer_vtableRead,(int)igNormalsRenderer_fieldInit,0,(int)igNormalsRenderer_dependencies);
}
void *igNormalsRenderer_getMetaCall(){return igNormalsRenderer_getMeta();}
}
#pragma pop
}

#pragma push
#pragma optimize_for_size off
namespace igNormalsRenderer_fieldInit {
// igNormalsRenderer: Alchemy class registration (0x804087A4..0x804088FC). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igNormalsRenderer)
META_DECLARE(igViewerParameters)

extern "C" {
void *fn_800B4160();
void *fn_800B9348();
void *fn_800BAC98();
void *fn_800BB61C();
void *fn_801BFC74();
}

#pragma push
#pragma auto_inline off
extern "C" {

void igNormalsRenderer_fieldInit()
{
    Meta::igMetaObject *meta = igNormalsRenderer_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igNormalsRenderer_fieldTypes, 9);
    Meta::igObjectRefMetaField *parametersField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    parametersField->_metaObject = igViewerParameters_metaObject();
    Meta::igObjectRefMetaField *attrListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_v4 = fn_800BB61C();
    attrListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v4);
    attrListField->_construct = true;
    Meta::igObjectRefMetaField *defaultAttrListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    void *value_v6 = fn_800BB61C();
    defaultAttrListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v6);
    defaultAttrListField->_construct = true;
    Meta::igObjectRefMetaField *modelViewAttrField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 3));
    void *value_v8 = fn_800B4160();
    modelViewAttrField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v8);
    modelViewAttrField->_construct = true;
    Meta::igObjectRefMetaField *colorAttrField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 4));
    void *value_v10 = fn_800B9348();
    colorAttrField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v10);
    colorAttrField->_construct = true;
    Meta::igObjectRefMetaField *normalsField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 5));
    void *value_v12 = fn_800BAC98();
    normalsField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v12);
    normalsField->_construct = true;
    Meta::igObjectRefMetaField *pathField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 7));
    void *value_v14 = fn_801BFC74();
    pathField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v14);
    meta_setupFields(meta, igNormalsRenderer_fieldNames, igNormalsRenderer_fieldStorage, igNormalsRenderer_fieldOffsets, base);
}

}
#pragma pop
}
#pragma pop

#pragma push
#pragma optimize_for_size off
namespace unknown804088FC {
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *fn_8010DF8C();
void fn_80402E28();
void igLogoRenderer_fieldInit();
void igRenderer_register();
extern char igLogoRenderer_className[];
extern char lbl_80497C9C[];
extern char igLogoRenderer_vtable[];
extern void *igLogoRenderer_meta;
void *igLogoRenderer_getMeta();
void *igLogoRenderer_vtableRead();
void igLogoRenderer_arkRegister();
void igLogoRenderer_register();
void *igLogoRenderer_getMetaCall();
}
struct UnknownGenRoot80408988 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80408988(){igObject_construct(this);}
};
struct UnknownGenObject80408988_0 : UnknownGenRoot80408988 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject80408988_0(){unknown00=lbl_80497C9C;}
};
struct UnknownGenObject80408988 : UnknownGenObject80408988_0 {
 char unknown0C[12];
 UnknownGenRefMember unknown18;
 UnknownGenRefMember unknown1C;
 UnknownGenRefMember unknown20;
 char unknown24[4];
 inline ~UnknownGenObject80408988(){unknown00=igLogoRenderer_vtable;}
};
extern "C" {
void *igLogoRenderer_create(void *object){
 igLogoRenderer_arkRegister();
 return meta_createInstance(igLogoRenderer_meta,object);
}
void *igLogoRenderer_getMeta(){
 if(!igLogoRenderer_meta || !(reinterpret_cast<unsigned int *>(igLogoRenderer_meta)[0x24/4]&4)) igLogoRenderer_arkRegister();
 return igLogoRenderer_meta;
}
void *igLogoRenderer_vtableRead(){
 UnknownGenObject80408988 object;
 object.unknown00=lbl_80497C9C;
 object.unknown08.value=0;
 object.unknown00=igLogoRenderer_vtable;
 object.unknown18.value=0;
 object.unknown1C.value=0;
 object.unknown20.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igLogoRenderer_arkRegister(){
 meta_registerNow((int)igLogoRenderer_register);
}
void igLogoRenderer_register(){
 fn_80402E28();
 meta_registerClass(0,(int)&igLogoRenderer_meta,(int)igRenderer_register,(int)fn_8010DF8C,(int)igLogoRenderer_getMetaCall,(int)igLogoRenderer_className,40,(int)igLogoRenderer_vtableRead,(int)igLogoRenderer_fieldInit,0,(int)igLogoRenderer_dependencies);
}
void *igLogoRenderer_getMetaCall(){return igLogoRenderer_getMeta();}
}
#pragma pop
}
#pragma pop

#pragma push
#pragma optimize_for_size off
namespace igLogoRenderer_fieldInit {
// igLogoRenderer: Alchemy class registration (0x80408BB0..0x80408C90). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igLogoRenderer)

extern "C" {
void *fn_800B6C60();
void *fn_800B9348();
void *fn_800BB61C();
}

#pragma push
#pragma auto_inline off
extern "C" {

void igLogoRenderer_fieldInit()
{
    Meta::igMetaObject *meta = igLogoRenderer_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igLogoRenderer_fieldTypes, 4);
    Meta::igObjectRefMetaField *geometryAttrField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_v2 = fn_800B6C60();
    geometryAttrField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v2);
    Meta::igObjectRefMetaField *colorAttrField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    void *value_v4 = fn_800B9348();
    colorAttrField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v4);
    colorAttrField->_construct = true;
    Meta::igObjectRefMetaField *attrListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 3));
    void *value_v6 = fn_800BB61C();
    attrListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v6);
    attrListField->_construct = true;
    meta_setupFields(meta, igLogoRenderer_fieldNames, igLogoRenderer_fieldStorage, igLogoRenderer_fieldOffsets, base);
}

}
#pragma pop
}
#pragma pop

namespace igBoundingBoxRenderer {
// igBoundingBoxRenderer: Alchemy class registration (0x80408C90..0x80408DB8). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igBoundingBoxRenderer)

extern "C" {
void fn_80408DB8(void *, int);
extern char lbl_80497C9C[108];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_METAOBJECT(igBoundingBoxRenderer)

META_GET_META(igBoundingBoxRenderer)

void *igBoundingBoxRenderer_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[4];
        int unknown08;
        int unknown0C;
        int unknown10;
        int unknown14;
        int unknown18;
        int unknown1C;
        int unknown20;
        int unknown24;
        char unknown28[4];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_80497C9C;
    object.unknown08 = 0;
    object.__vtable = igBoundingBoxRenderer_vtable;
    object.unknown0C = 0;
    object.unknown10 = 0;
    object.unknown14 = 0;
    object.unknown18 = 0;
    object.unknown1C = 0;
    object.unknown20 = 0;
    object.unknown24 = 0;
    void *result = meta_vtableOf(&object);
    fn_80408DB8(&object, -1);   // the class's destructor
    return result;
}

}
#pragma pop
}

namespace unknown80408DB8 {
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066DFC(void *);
extern char lbl_80497C9C[];
extern char igBoundingBoxRenderer_vtable[];
}
extern "C" {
void *fn_80408DB8(int p0,int p1){
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 void *value4;
 void *value5;
 void *value6;
 void *value7;
 void *value8;
 void *value9;
 void *value10;
 void *value11;
 void *value12;
 void *value13;
 void *value14;
 void *value15;
 if((int)p0!=0){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=igBoundingBoxRenderer_vtable;
  if((int)(p0+36)!=0){
   value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+36);
   if(value0){
    value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+4)=(reinterpret_cast<char *>(value1)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4)&0x7FFFFF)){
     fn_80066E1C(value0);
    }
   }
  }
  if((int)(p0+32)!=0){
   value2=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32);
   if(value2){
    value3=*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+4)=(reinterpret_cast<char *>(value3)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+4)&0x7FFFFF)){
     fn_80066E1C(value2);
    }
   }
  }
  if((int)(p0+28)!=0){
   value4=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+28);
   if(value4){
    value5=*reinterpret_cast<void **>(reinterpret_cast<char *>(value4)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+4)=(reinterpret_cast<char *>(value5)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value4)+4)&0x7FFFFF)){
     fn_80066E1C(value4);
    }
   }
  }
  if((int)(p0+24)!=0){
   value6=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24);
   if(value6){
    value7=*reinterpret_cast<void **>(reinterpret_cast<char *>(value6)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+4)=(reinterpret_cast<char *>(value7)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value6)+4)&0x7FFFFF)){
     fn_80066E1C(value6);
    }
   }
  }
  if((int)(p0+20)!=0){
   value8=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20);
   if(value8){
    value9=*reinterpret_cast<void **>(reinterpret_cast<char *>(value8)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value8)+4)=(reinterpret_cast<char *>(value9)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value8)+4)&0x7FFFFF)){
     fn_80066E1C(value8);
    }
   }
  }
  if((int)(p0+16)!=0){
   value10=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16);
   if(value10){
    value11=*reinterpret_cast<void **>(reinterpret_cast<char *>(value10)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value10)+4)=(reinterpret_cast<char *>(value11)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value10)+4)&0x7FFFFF)){
     fn_80066E1C(value10);
    }
   }
  }
  if((int)(p0+12)!=0){
   value12=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12);
   if(value12){
    value13=*reinterpret_cast<void **>(reinterpret_cast<char *>(value12)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value12)+4)=(reinterpret_cast<char *>(value13)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value12)+4)&0x7FFFFF)){
     fn_80066E1C(value12);
    }
   }
  }
  if((unsigned int)p0!=0){
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=lbl_80497C9C;
   if((int)(p0+8)!=0){
    value14=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8);
    if(value14){
     value15=*reinterpret_cast<void **>(reinterpret_cast<char *>(value14)+4);
     *reinterpret_cast<void * *>(reinterpret_cast<char *>(value14)+4)=(reinterpret_cast<char *>(value15)+-1);
     if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value14)+4)&0x7FFFFF)){
      fn_80066E1C(value14);
     }
    }
   }
  }
  if((int)(short)p1>0){
   fn_80066DFC((void *)p0);
  }
 }
 return (void *)p0;
}
}
#pragma pop
}

namespace unknown80408FA4 {
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8010DF8C();
void fn_80402E28();
void igBoundingBoxRenderer_fieldInit();
void *igBoundingBoxRenderer_getMeta();
void igBoundingBoxRenderer_vtableRead();
void igRenderer_register();
extern char igBoundingBoxRenderer_className[];
extern char igBoundingBoxRenderer_meta[];
void igBoundingBoxRenderer_register();
void *igBoundingBoxRenderer_getMetaCall();
}
extern "C" {
void igBoundingBoxRenderer_arkRegister(){
 meta_registerNow((int)igBoundingBoxRenderer_register);
}
void igBoundingBoxRenderer_register(){
 fn_80402E28();
 meta_registerClass(0,(int)igBoundingBoxRenderer_meta,(int)igRenderer_register,(int)fn_8010DF8C,(int)igBoundingBoxRenderer_getMetaCall,(int)igBoundingBoxRenderer_className,44,(int)igBoundingBoxRenderer_vtableRead,(int)igBoundingBoxRenderer_fieldInit,0,(int)igBoundingBoxRenderer_dependencies);
}
void *igBoundingBoxRenderer_getMetaCall(){return igBoundingBoxRenderer_getMeta();}
}
#pragma pop
}

#pragma push
#pragma optimize_for_size off
namespace igBoundingBoxRenderer_fieldInit {
// igBoundingBoxRenderer: Alchemy class registration (0x80409068..0x804091B0). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igBoundingBoxRenderer)
META_DECLARE(igViewerParameters)

extern "C" {
void *fn_800B4160();
void *fn_800B6C60();
void *fn_800B7910();
void *fn_800BB61C();
void *fn_801BFC74();
}

#pragma push
#pragma auto_inline off
extern "C" {

void igBoundingBoxRenderer_fieldInit()
{
    Meta::igMetaObject *meta = igBoundingBoxRenderer_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igBoundingBoxRenderer_fieldTypes, 8);
    Meta::igObjectRefMetaField *parametersField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    parametersField->_metaObject = igViewerParameters_metaObject();
    Meta::igObjectRefMetaField *displayListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_v4 = fn_800B7910();
    displayListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v4);
    displayListField->_construct = true;
    Meta::igObjectRefMetaField *attrListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    void *value_v6 = fn_800BB61C();
    attrListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v6);
    attrListField->_construct = true;
    Meta::igObjectRefMetaField *modelViewAttrField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 3));
    void *value_v8 = fn_800B4160();
    modelViewAttrField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v8);
    modelViewAttrField->_construct = true;
    Meta::igObjectRefMetaField *boxField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 4));
    void *value_v10 = fn_800B6C60();
    boxField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v10);
    Meta::igObjectRefMetaField *borderField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 5));
    void *value_v12 = fn_800B6C60();
    borderField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v12);
    Meta::igObjectRefMetaField *pathField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 6));
    void *value_v14 = fn_801BFC74();
    pathField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v14);
    meta_setupFields(meta, igBoundingBoxRenderer_fieldNames, igBoundingBoxRenderer_fieldStorage, igBoundingBoxRenderer_fieldOffsets, base);
}

}
#pragma pop
}
#pragma pop

namespace igActorManager {
// igActorManager: Alchemy class registration (0x804091B0..0x804092E0). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igActorManager)
META_DECLARE(igNamedObject)

extern "C" {
void fn_804092E0(void *, int);
extern char lbl_804CBA60[304];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igActorManager)

META_GET_META(igActorManager)

void *igActorManager_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[4];
        int unknown08;
        char unknown0C[4];
        int unknown10;
        int unknown14;
        int unknown18;
        int unknown1C;
        int unknown20;
        int unknown24;
        int unknown28;
        int unknown2C;
        int unknown30;
        int unknown34;
    } object;
    igObject_construct(&object);
    object.__vtable = igNamedObject_vtable;
    object.__vtable = lbl_804CBA60;
    object.unknown08 = 0;
    object.__vtable = igActorManager_vtable;
    object.unknown10 = 0;
    object.unknown14 = 0;
    object.unknown18 = 0;
    object.unknown1C = 0;
    object.unknown20 = 0;
    object.unknown24 = 0;
    object.unknown28 = 0;
    object.unknown2C = 0;
    object.unknown30 = 0;
    object.unknown34 = 0;
    void *result = meta_vtableOf(&object);
    fn_804092E0(&object, -1);   // the class's destructor
    return result;
}

}
#pragma pop
}

namespace igActorManager_destructor {
// fn_804092E0: the deleting destructor of igActorManager. Written by tools/alchemymeta/dtorsrc.py.

META_DECLARE(igActorManager)
META_DECLARE(igNamedObject)
extern "C" {
extern char lbl_804CBA60[];
void fn_80066DFC(void *object);   // frees an object
}

struct igNamedObjectObject {
    void *__vtable;
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectObject() { __vtable = igNamedObject_vtable; }
};
struct Level_804CBA60 : igNamedObjectObject {
    inline ~Level_804CBA60() { __vtable = lbl_804CBA60; }
};
struct igActorManagerObject : Level_804CBA60 {
    char unknown0C[4];
    igObjectRefMember _skelOnlys;
    igObjectRefMember _skelAndSkins;
    igObjectRefMember _actors;
    igObjectRefMember _params;
    igObjectRefMember _travFuncs;
    igObjectRefMember _actorMetas;
    igObjectRefMember _viewport;
    igObjectRefMember _skelViewport;
    igObjectRefMember _vsim;
    igObjectRefMember _references;
};

extern "C" igActorManagerObject *fn_804092E0(igActorManagerObject *self, short flags)
{
    if (self) {
        self->__vtable = igActorManager_vtable;
        self->_references.~igObjectRefMember();
        self->_vsim.~igObjectRefMember();
        self->_skelViewport.~igObjectRefMember();
        self->_viewport.~igObjectRefMember();
        self->_actorMetas.~igObjectRefMember();
        self->_travFuncs.~igObjectRefMember();
        self->_params.~igObjectRefMember();
        self->_actors.~igObjectRefMember();
        self->_skelAndSkins.~igObjectRefMember();
        self->_skelOnlys.~igObjectRefMember();
        self->Level_804CBA60::~Level_804CBA60();
        if (flags > 0) fn_80066DFC(self);
    }
    return self;
}
}

namespace unknown8040956C {
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_80284550();
void fn_80402E28();
void igActorManager_fieldInit();
void *igActorManager_getMeta();
void igActorManager_vtableRead();
void igInfoManager_register();
extern char igActorManager_className[];
extern char igActorManager_meta[];
void igActorManager_register();
void *igActorManager_getMetaCall();
}
extern "C" {
void igActorManager_arkRegister(){
 meta_registerNow((int)igActorManager_register);
}
void igActorManager_register(){
 fn_80402E28();
 meta_registerClass(0,(int)igActorManager_meta,(int)igInfoManager_register,(int)fn_80284550,(int)igActorManager_getMetaCall,(int)igActorManager_className,56,(int)igActorManager_vtableRead,(int)igActorManager_fieldInit,0,(int)igActorManager_dependencies);
}
void *igActorManager_getMetaCall(){return igActorManager_getMeta();}
}
#pragma pop
}

#pragma push
#pragma optimize_for_size off
namespace igActorManager_fieldInit {
// igActorManager: Alchemy class registration (0x80409630..0x804097F0). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igActorManager)
META_DECLARE(igActorManagerParams)
META_DECLARE(igViewerSceneInfoManager)

extern "C" {
void *fn_80028F84();
void *fn_800343B8();
void *fn_80034728();
void *fn_800AC0C0();
void *fn_801B7354();
void *fn_801C8D74();
void *fn_801CDCF8();
}

#pragma push
#pragma auto_inline off
extern "C" {

void igActorManager_fieldInit()
{
    Meta::igMetaObject *meta = igActorManager_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igActorManager_fieldTypes, 10);
    Meta::igObjectRefMetaField *skelOnlysField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_v2 = fn_801C8D74();
    skelOnlysField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v2);
    skelOnlysField->_construct = true;
    Meta::igObjectRefMetaField *skelAndSkinsField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_v4 = fn_801B7354();
    skelAndSkinsField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v4);
    skelAndSkinsField->_construct = true;
    Meta::igObjectRefMetaField *actorsField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    void *value_v6 = fn_801CDCF8();
    actorsField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v6);
    actorsField->_construct = true;
    Meta::igObjectRefMetaField *paramsField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 3));
    paramsField->_metaObject = igActorManagerParams_metaObject();
    paramsField->_construct = true;
    Meta::igObjectRefMetaField *travFuncsField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 4));
    void *value_v10 = fn_80034728();
    travFuncsField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v10);
    travFuncsField->_construct = true;
    Meta::igObjectRefMetaField *actorMetasField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 5));
    void *value_v12 = fn_800343B8();
    actorMetasField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v12);
    actorMetasField->_construct = true;
    Meta::igObjectRefMetaField *viewportField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 6));
    void *value_v14 = fn_800AC0C0();
    viewportField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v14);
    viewportField->_construct = true;
    Meta::igObjectRefMetaField *skelViewportField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 7));
    void *value_v16 = fn_800AC0C0();
    skelViewportField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v16);
    skelViewportField->_construct = true;
    Meta::igObjectRefMetaField *vsimField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 8));
    vsimField->_metaObject = igViewerSceneInfoManager_metaObject();
    Meta::igObjectRefMetaField *referencesField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 9));
    void *value_v20 = fn_80028F84();
    referencesField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v20);
    referencesField->_construct = true;
    meta_setupFields(meta, igActorManager_fieldNames, igActorManager_fieldStorage, igActorManager_fieldOffsets, base);
}

}
#pragma pop
}
#pragma pop

namespace unknown804097F0 {
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *fn_8010EE6C();
void fn_80402E28();
void igActorManagerParams_fieldInit();
void igModel_register();
extern char igActorManagerParams_className[];
extern char igModel_vtable[];
extern char igActorManagerParams_vtable[];
extern void *igActorManagerParams_meta;
extern void *lbl_805621F4;
void *igActorManagerParams_getMeta();
void *igActorManagerParams_vtableRead();
void igActorManagerParams_arkRegister();
void igActorManagerParams_register();
void *igActorManagerParams_getMetaCall();
}
struct UnknownGenRoot80409890 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80409890(){igObject_construct(this);}
};
struct UnknownGenObject80409890_0 : UnknownGenRoot80409890 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject80409890_0(){unknown00=igModel_vtable;}
};
struct UnknownGenObject80409890 : UnknownGenObject80409890_0 {
 char unknown0C[4];
 inline ~UnknownGenObject80409890(){unknown00=igActorManagerParams_vtable;}
};
extern "C" {
void *igActorManagerParams_metaObject(){
 if(!igActorManagerParams_meta) igActorManagerParams_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igActorManagerParams_meta;
}
void *igActorManagerParams_getMeta(){
 if(!igActorManagerParams_meta || !(reinterpret_cast<unsigned int *>(igActorManagerParams_meta)[0x24/4]&4)) igActorManagerParams_arkRegister();
 return igActorManagerParams_meta;
}
void *igActorManagerParams_vtableRead(){
 UnknownGenObject80409890 object;
 object.unknown00=igModel_vtable;
 object.unknown08.value=0;
 object.unknown00=igActorManagerParams_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igActorManagerParams_arkRegister(){
 meta_registerNow((int)igActorManagerParams_register);
}
void igActorManagerParams_register(){
 fn_80402E28();
 meta_registerClass(0,(int)&igActorManagerParams_meta,(int)igModel_register,(int)fn_8010EE6C,(int)igActorManagerParams_getMetaCall,(int)igActorManagerParams_className,16,(int)igActorManagerParams_vtableRead,(int)igActorManagerParams_fieldInit,0,0);
}
void *igActorManagerParams_getMetaCall(){return igActorManagerParams_getMeta();}
}
#pragma pop
}

#pragma push
#pragma optimize_for_size off
namespace igActorManagerParams_fieldInit {
// igActorManagerParams: Alchemy class registration (0x804099E8..0x80409A68). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igActorManagerParams)

extern "C" {
}

#pragma push
#pragma auto_inline off
extern "C" {

void igActorManagerParams_fieldInit()
{
    Meta::igMetaObject *meta = igActorManagerParams_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igActorManagerParams_fieldTypes, 2);
    meta_setupFields(meta, igActorManagerParams_fieldNames, igActorManagerParams_fieldStorage, igActorManagerParams_fieldOffsets, base);
}

}
#pragma pop
}
#pragma pop
