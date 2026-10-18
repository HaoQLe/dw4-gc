// Written by tools/alchemymeta/poolsrc.py: units whose code addresses the data below from its start.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>
#include <meta/igStringMetaField.h>
#include <unknownGen.h>
#include <meta/igIntMetaField.h>
#include <meta/igBoolMetaField.h>
#include <meta/igEnumMetaField.h>
#include <meta/igFloatMetaField.h>
#include <meta/igVec2fMetaField.h>
#include <meta/igVec3fMetaField.h>
#include <meta/igVec4fMetaField.h>
#include <meta/igVec4fArrayMetaField.h>
#include <meta/igCharMetricsMetaField.h>

// The unit's data.
extern "C" {
void fn_80022A90();
void fn_800251EC();
void fn_8002879C();
void fn_8002E1AC();
void fn_80031378();
void fn_800385E0();
void igAttrList_arkRegister();
void igAttrSet_arkRegister();
void igCharMetricsList_arkRegister();
void igChildSizeObserverList_arkRegister();
void igColorChanger_arkRegister();
void igCommonTraversal_arkRegister();
void igControllerManager_arkRegister();
void igDisplayListAttr_arkRegister();
void igEventReceiverOrderedList_arkRegister();
void igFieldSynchronizer_arkRegister();
void igFloatMetaField_create();
void igFont_arkRegister();
void igGeometryAttr_arkRegister();
void igGeometryElement_arkRegister();
void igGeometry_arkRegister();
void igGraphPath_arkRegister();
void igGuiComponentAspect_arkRegister();
void igGuiComponentController_arkRegister();
void igGuiComponentList_arkRegister();
void igGuiComponentModel_arkRegister();
void igGuiComponentNode_arkRegister();
void igGuiComponent_arkRegister();
void igGuiSystemModel_arkRegister();
void igGuiSystemRenderer_arkRegister();
void igGuiSystem_arkRegister();
void igIntersectTraversal_arkRegister();
void igMatrix44fMetaField_create();
void igMetaField_arkRegister();
void igMouseCursor_arkRegister();
void igNode_arkRegister();
void igNonRefCountedTransformList_arkRegister();
void igOnOffValueObserverList_arkRegister();
void igRadioGroupModel_arkRegister();
void igRadioGroupSelectedObserver_arkRegister();
void igRay_arkRegister();
void igTextureBindAttr_arkRegister();
void igTransform_arkRegister();
void igVec2fMetaField_create();
void igVec3fMetaField_create();
void igVec4fMetaField_create();
void igViewList_arkRegister();
extern char lbl_8055EED4[7];
extern char lbl_8055EEE8[6];
extern char lbl_8055EEF0[6];
extern char lbl_8055EF2C[7];
extern char lbl_8055F034[5];
extern char lbl_8055F03C[8];
extern char lbl_8055F044[8];
extern char lbl_8055F054[6];
extern char lbl_8055F094[5];
extern char lbl_8055F09C[5];
extern char lbl_8055F0AC[8];
extern char lbl_8055F0D4[8];
extern char lbl_8055F0DC[6];
extern char lbl_8055F0EC[6];
extern char lbl_8055F0FC[8];
extern char lbl_8055F104[8];
extern char lbl_8055F10C[8];
extern char lbl_8055F114[7];
extern char lbl_8055F12C[8];
extern char lbl_8055F1C4[7];
extern char lbl_8055F218[6];
extern char lbl_80563588[4];
extern char lbl_8056358C[4];
extern char lbl_80563590[4];
extern char lbl_805635B0[4];
extern char lbl_805635B4[4];
extern char lbl_805635B8[4];
extern char lbl_805635BC[4];
extern char lbl_805635C0[4];
extern char lbl_80563600[4];
extern char lbl_80563604[4];
extern char lbl_80563608[4];
extern char lbl_8056360C[4];
extern char lbl_80563610[4];
extern char lbl_80563614[4];
extern char lbl_80563644[4];
extern char lbl_80563648[4];
extern char lbl_8056364C[4];
extern char lbl_80563660[4];
extern char lbl_80563664[4];
extern char lbl_80563668[4];
extern char lbl_80563670[4];
extern char lbl_80563674[4];
extern char lbl_80563678[4];
extern char lbl_8056367C[4];
extern char lbl_80563680[4];
extern char lbl_80563684[4];
extern char lbl_80563688[4];
extern char lbl_8056369C[4];
extern char lbl_805636A0[4];
extern char lbl_805636A4[4];
extern char lbl_805636A8[4];
extern char lbl_805636B0[4];
extern char lbl_805636B4[4];
extern char lbl_805636B8[4];
extern char lbl_805636C0[4];
extern char lbl_805636C4[4];
extern char lbl_805636C8[4];
extern char lbl_805636CC[4];
extern char lbl_805636D0[4];
extern char lbl_805636D4[4];
extern char lbl_805636D8[4];
extern char lbl_805636E4[4];
extern char lbl_805636E8[4];
extern char lbl_805636EC[4];
extern char lbl_805636F0[4];
extern char lbl_805636F4[4];
extern char lbl_805636F8[4];
extern char lbl_805636FC[4];
extern char lbl_80563700[4];
extern char lbl_80563704[4];
extern char lbl_80563708[4];
extern char lbl_8056370C[4];
extern char lbl_8056371C[4];
extern char lbl_80563720[4];
extern char lbl_80563724[4];
extern char lbl_80563728[4];
extern char lbl_8056372C[4];
extern char lbl_80563730[4];
extern char lbl_80563734[4];
extern char lbl_80563740[4];
extern char lbl_80563744[4];
extern char lbl_80563748[4];
extern char lbl_80563754[4];
extern char lbl_80563758[4];
extern char lbl_8056375C[4];
extern char lbl_80563760[4];
extern char lbl_80563764[4];
extern char lbl_80563768[4];
extern char lbl_8056376C[4];
extern char lbl_80563774[4];
extern char lbl_80563778[4];
extern char lbl_8056377C[4];
extern char lbl_80563780[4];
extern char lbl_80563788[4];
extern char lbl_8056378C[4];
extern char lbl_80563790[4];
extern char lbl_80563794[4];
extern char lbl_805637DC[4];
extern char lbl_805637E0[4];
extern char lbl_805637E4[4];
extern char lbl_805637E8[4];
extern char lbl_805637EC[4];
extern char lbl_805637F0[4];
extern char lbl_80563820[4];
extern char lbl_80563824[4];
extern char lbl_80563828[4];
char lbl_80494570[] = "IG_DIRECTION_LEFT";
char lbl_80494584[] = "IG_DIRECTION_RIGHT";
char lbl_80494598[] = "IG_DIRECTION_UP";
char lbl_804945A8[] = "IG_DIRECTION_DOWN";
char lbl_804945BC[] = "IG_DIRECTION_NEXT";
char lbl_804945D0[] = "IG_DIRECTION_PREV";
void *lbl_804945E4[12] = {(void *)lbl_80494570, (void *)lbl_80494584, (void *)lbl_80494598, (void *)lbl_804945A8, (void *)lbl_804945BC, (void *)lbl_804945D0, 0, (void *)0x1, (void *)0x2, (void *)0x3, (void *)0x4, (void *)0x5};
char lbl_80494614[] = "IG_DIRECTION";
char igNonRefCountedViewList_className[] = "igNonRefCountedViewList";
char igViewList_className[] = "igViewList";
void *igTextElement_dependencies[3] = {(void *)igFont_arkRegister, (void *)igGeometryAttr_arkRegister, 0};
char igTextElement_className[] = "igTextElement";
void *igTextElement_fieldTypes[3] = {(void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_800251EC};
char lbl_80494670[] = "_geometryAttr";
void *igTextElement_fieldNames[3] = {(void *)lbl_8055EEE8, (void *)lbl_80494670, (void *)lbl_8055EEF0};
void *igTextElement_fieldStorage[3] = {(void *)lbl_80563588, (void *)lbl_8056358C, (void *)lbl_80563590};
void *igTextElement_fieldOffsets[3] = {(void *)0x2C, (void *)0x30, (void *)0x34};
char lbl_804946A4[] = "igSimpleChildHolderController";
char igSimpleChildHolderModel_className[] = "igSimpleChildHolderModel";
char lbl_804946E0[] = "_childSize";
char lbl_804946EC[] = "igScrollListArrowController";
char lbl_80494708[] = "_scrollListModel";
char lbl_8049471C[] = "_increment";
char lbl_80494728[] = "igScrollListComponentController";
char lbl_80494748[] = "_lastDisplayFirst";
void *igScrollListComponentModel_dependencies[3] = {(void *)igGuiComponent_arkRegister, (void *)igGuiComponentList_arkRegister, 0};
char igScrollListComponentModel_className[] = "igScrollListComponentModel";
void *igScrollListComponentModel_fieldTypes[5] = {(void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002E1AC, (void *)fn_8002E1AC};
char lbl_80494798[] = "_upArrow";
char lbl_804947A4[] = "_downArrow";
char lbl_804947B0[] = "_displayFirst";
char lbl_804947C0[] = "_displayCount";
void *igScrollListComponentModel_fieldNames[5] = {(void *)lbl_80494798, (void *)lbl_804947A4, (void *)lbl_8055EF2C, (void *)lbl_804947B0, (void *)lbl_804947C0};
void *igScrollListComponentModel_fieldStorage[5] = {(void *)lbl_805635B0, (void *)lbl_805635B4, (void *)lbl_805635B8, (void *)lbl_805635BC, (void *)lbl_805635C0};
void *igScrollListComponentModel_fieldOffsets[5] = {(void *)0x28, (void *)0x2C, (void *)0x30, (void *)0x34, (void *)0x38};
void *lbl_8049480C[3] = {(void *)igTransform_arkRegister, (void *)igFieldSynchronizer_arkRegister, 0};
char lbl_80494818[] = "igScalerAspect";
char lbl_80494828[] = "_childTransform";
char lbl_80494838[] = "_childSizeSynchronizer";
char igScalerModel_className[] = "igScalerModel";
char igClearRenderer_className[] = "igClearRenderer";
char lbl_80494870[] = "_buffersToClear";
char igRendererOrderedList_className[] = "igRendererOrderedList";
char lbl_80494898[] = "igRendererList";
char igRenderer_className[] = "igRenderer";
char lbl_804948B4[] = "_visualContext";
char igOnOffValueObserverList_className[] = "igOnOffValueObserverList";
char igOnOffValueObserver_className[] = "igOnOffValueObserver";
char igRadioGroupSelectedObserver_className[] = "igRadioGroupSelectedObserver";
void *igRadioGroup_dependencies[4] = {(void *)igRadioGroupModel_arkRegister, (void *)igRadioGroupSelectedObserver_arkRegister, (void *)igOnOffValueObserverList_arkRegister, 0};
char igRadioGroup_className[] = "igRadioGroup";
void *igRadioGroup_fieldTypes[6] = {(void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_800385E0, (void *)fn_8002E1AC, (void *)fn_8002E1AC};
char lbl_80494950[] = "_selectedObserver";
char lbl_80494964[] = "_observerList";
char lbl_80494974[] = "_alwaysSelected";
char lbl_80494984[] = "_lastSelected";
char lbl_80494994[] = "_defaultSelected";
void *igRadioGroup_fieldNames[6] = {(void *)lbl_8055EED4, (void *)lbl_80494950, (void *)lbl_80494964, (void *)lbl_80494974, (void *)lbl_80494984, (void *)lbl_80494994};
void *igRadioGroup_fieldStorage[6] = {(void *)lbl_80563600, (void *)lbl_80563604, (void *)lbl_80563608, (void *)lbl_8056360C, (void *)lbl_80563610, (void *)lbl_80563614};
void *igRadioGroup_fieldOffsets[6] = {(void *)0x8, (void *)0xC, (void *)0x10, (void *)0x14, (void *)0x18, (void *)0x1C};
char igRadioGroupModel_className[] = "igRadioGroupModel";
char lbl_80494A04[] = "_selected";
char lbl_80494A10[] = "igPlainElement";
char lbl_80494A20[] = "igOnOffController";
char igOnOffModel_className[] = "igOnOffModel";
char lbl_80494A44[] = "igModelList";
char lbl_80494A50[] = "igNonRefCountedModelList";
char lbl_80494A6C[] = "igImageElement";
void *lbl_80494A7C[3] = {(void *)fn_8002879C, (void *)fn_8002E1AC, (void *)fn_8002E1AC};
char lbl_80494A88[] = "_textureWidth";
char lbl_80494A98[] = "_textureHeight";
void *lbl_80494AA8[9] = {(void *)lbl_80494670, (void *)lbl_80494A88, (void *)lbl_80494A98, (void *)lbl_80563644, (void *)lbl_80563648, (void *)lbl_8056364C, (void *)0x2C, (void *)0x30, (void *)0x34};
char igHotKeyEventReceiver_className[] = "igHotKeyEventReceiver";
char lbl_80494AE4[] = "_hotKeyList";
char igHotKeyBindingList_className[] = "igHotKeyBindingList";
char igHotKeyBinding_className[] = "igHotKeyBinding";
void *igHotKeyBinding_fieldTypes[3] = {(void *)fn_80031378, (void *)fn_80031378, (void *)fn_8002879C};
void *igHotKeyBinding_fieldNames[3] = {(void *)lbl_8055F034, (void *)lbl_8055F03C, (void *)lbl_8055F044};
void *igHotKeyBinding_fieldStorage[3] = {(void *)lbl_80563660, (void *)lbl_80563664, (void *)lbl_80563668};
void *igHotKeyBinding_fieldOffsets[3] = {(void *)0x8, (void *)0xC, (void *)0x10};
void *igGuiSystem_dependencies[7] = {(void *)igGuiSystemRenderer_arkRegister, (void *)igGuiSystemModel_arkRegister, (void *)igViewList_arkRegister, (void *)igAttrSet_arkRegister, (void *)igMouseCursor_arkRegister, (void *)igTransform_arkRegister, 0};
char igGuiSystem_className[] = "igGuiSystem";
void *igGuiSystem_fieldTypes[7] = {(void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_800385E0};
char lbl_80494B88[] = "_renderer";
char lbl_80494B94[] = "_viewList";
char lbl_80494BA0[] = "_mouseCursor";
char lbl_80494BB0[] = "_mouseCursorTransform";
char lbl_80494BC8[] = "_mouseCursorVisible";
void *igGuiSystem_fieldNames[7] = {(void *)lbl_80494B88, (void *)lbl_8055EED4, (void *)lbl_80494B94, (void *)lbl_8055F054, (void *)lbl_80494BA0, (void *)lbl_80494BB0, (void *)lbl_80494BC8};
void *igGuiSystem_fieldStorage[7] = {(void *)lbl_80563670, (void *)lbl_80563674, (void *)lbl_80563678, (void *)lbl_8056367C, (void *)lbl_80563680, (void *)lbl_80563684, (void *)lbl_80563688};
void *igGuiSystem_fieldOffsets[7] = {(void *)0x8, (void *)0xC, (void *)0x10, (void *)0x14, (void *)0x18, (void *)0x1C, (void *)0x20};
char igMouseCursor_className[] = "igMouseCursor";
char lbl_80494C40[] = "_geometryElement";
void *igGuiSystemRenderer_dependencies[5] = {(void *)igNode_arkRegister, (void *)igGuiSystemModel_arkRegister, (void *)igCommonTraversal_arkRegister, (void *)igDisplayListAttr_arkRegister, 0};
char igGuiSystemRenderer_className[] = "igGuiSystemRenderer";
void *igGuiSystemRenderer_fieldTypes[4] = {(void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C};
char lbl_80494C8C[] = "_commonTraversal";
char lbl_80494CA0[] = "_displayListAttr";
void *igGuiSystemRenderer_fieldNames[4] = {(void *)lbl_8055F054, (void *)lbl_8055EED4, (void *)lbl_80494C8C, (void *)lbl_80494CA0};
void *igGuiSystemRenderer_fieldStorage[4] = {(void *)lbl_8056369C, (void *)lbl_805636A0, (void *)lbl_805636A4, (void *)lbl_805636A8};
void *igGuiSystemRenderer_fieldOffsets[4] = {(void *)0xC, (void *)0x10, (void *)0x14, (void *)0x18};
char igActiveComponentsObserver_className[] = "igActiveComponentsObserver";
void *igActiveComponentsObserver_fieldTypes[3] = {(void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C};
char lbl_80494D0C[] = "_oldComponentUnderMouse";
char lbl_80494D24[] = "_oldFocusedComponent";
char lbl_80494D3C[] = "_oldPushedComponent";
void *igActiveComponentsObserver_fieldNames[3] = {(void *)lbl_80494D0C, (void *)lbl_80494D24, (void *)lbl_80494D3C};
void *igActiveComponentsObserver_fieldStorage[3] = {(void *)lbl_805636B0, (void *)lbl_805636B4, (void *)lbl_805636B8};
void *igActiveComponentsObserver_fieldOffsets[3] = {(void *)0xC, (void *)0x10, (void *)0x14};
void *igMousePosObserver_dependencies[5] = {(void *)igGuiSystem_arkRegister, (void *)igIntersectTraversal_arkRegister, (void *)igRay_arkRegister, (void *)igGraphPath_arkRegister, 0};
char igMousePosObserver_className[] = "igMousePosObserver";
void *igMousePosObserver_fieldTypes[7] = {(void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)igFloatMetaField_create, (void *)fn_800385E0, (void *)fn_8002879C, (void *)igMatrix44fMetaField_create};
char lbl_80494DB8[] = "_guiSystem";
char lbl_80494DC4[] = "_intersectTraversal";
char lbl_80494DD8[] = "_impactLength";
char lbl_80494DE8[] = "_hitPath";
char lbl_80494DF4[] = "_inverseProjectionMatrix";
void *igMousePosObserver_fieldNames[7] = {(void *)lbl_80494DB8, (void *)lbl_80494DC4, (void *)lbl_8055F094, (void *)lbl_80494DD8, (void *)lbl_8055F09C, (void *)lbl_80494DE8, (void *)lbl_80494DF4};
void *igMousePosObserver_fieldStorage[7] = {(void *)lbl_805636C0, (void *)lbl_805636C4, (void *)lbl_805636C8, (void *)lbl_805636CC, (void *)lbl_805636D0, (void *)lbl_805636D4, (void *)lbl_805636D8};
void *igMousePosObserver_fieldOffsets[7] = {(void *)0xC, (void *)0x10, (void *)0x14, (void *)0x18, (void *)0x1C, (void *)0x20, (void *)0x24};
char igWindowSizeObserver_className[] = "igWindowSizeObserver";
char igGuiSystemModel_className[] = "igGuiSystemModel";
void *igGuiSystemModel_fieldTypes[11] = {(void *)igVec2fMetaField_create, (void *)igVec2fMetaField_create, (void *)fn_800385E0, (void *)igMatrix44fMetaField_create, (void *)igMatrix44fMetaField_create, (void *)fn_800385E0, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_800385E0};
char lbl_80494EBC[] = "_windowSize";
char lbl_80494EC8[] = "_mousePosition";
char lbl_80494ED8[] = "_mousePressed";
char lbl_80494EE8[] = "_viewMatrix";
char lbl_80494EF4[] = "_projectionMatrix";
char lbl_80494F08[] = "_rootComponent";
char lbl_80494F18[] = "_focusedComponent";
char lbl_80494F2C[] = "_componentUnderMouse";
char lbl_80494F44[] = "_pushedComponent";
char lbl_80494F58[] = "_windowCloseRequested";
void *igGuiSystemModel_fieldNames[11] = {(void *)lbl_80494EBC, (void *)lbl_80494EC8, (void *)lbl_80494ED8, (void *)lbl_80494EE8, (void *)lbl_80494EF4, (void *)lbl_8055F0AC, (void *)lbl_80494F08, (void *)lbl_80494F18, (void *)lbl_80494F2C, (void *)lbl_80494F44, (void *)lbl_80494F58};
void *igGuiSystemModel_fieldStorage[11] = {(void *)lbl_805636E4, (void *)lbl_805636E8, (void *)lbl_805636EC, (void *)lbl_805636F0, (void *)lbl_805636F4, (void *)lbl_805636F8, (void *)lbl_805636FC, (void *)lbl_80563700, (void *)lbl_80563704, (void *)lbl_80563708, (void *)lbl_8056370C};
void *igGuiSystemModel_fieldOffsets[11] = {(void *)0xC, (void *)0x14, (void *)0x1C, (void *)0x20, (void *)0x60, (void *)0xA0, (void *)0xA4, (void *)0xA8, (void *)0xAC, (void *)0xB0, (void *)0xB4};
char igGuiComponentNode_className[] = "igGuiComponentNode";
char lbl_80495008[] = "_component";
char igGuiComponentModel_className[] = "igGuiComponentModel";
void *igGuiComponentModel_fieldTypes[7] = {(void *)fn_8002879C, (void *)fn_800385E0, (void *)fn_800385E0, (void *)fn_800385E0, (void *)fn_800385E0, (void *)igVec3fMetaField_create, (void *)fn_800385E0};
char lbl_80495044[] = "_enabled";
char lbl_80495050[] = "_hasFocus";
char lbl_8049505C[] = "_mouseOver";
char lbl_80495068[] = "_childHasFocus";
void *igGuiComponentModel_fieldNames[7] = {(void *)lbl_80495008, (void *)lbl_80495044, (void *)lbl_80495050, (void *)lbl_8049505C, (void *)lbl_8055F0D4, (void *)lbl_8055F0DC, (void *)lbl_80495068};
void *igGuiComponentModel_fieldStorage[7] = {(void *)lbl_8056371C, (void *)lbl_80563720, (void *)lbl_80563724, (void *)lbl_80563728, (void *)lbl_8056372C, (void *)lbl_80563730, (void *)lbl_80563734};
void *igGuiComponentModel_fieldOffsets[7] = {(void *)0x20, (void *)0xC, (void *)0xD, (void *)0xE, (void *)0xF, (void *)0x10, (void *)0x1C};
char igGuiComponentController_className[] = "igGuiComponentController";
char igGuiComponentAspect_className[] = "igGuiComponentAspect";
void *igGuiComponentAspect_fieldTypes[3] = {(void *)fn_8002879C, (void *)igVec3fMetaField_create, (void *)igVec3fMetaField_create};
char lbl_8049510C[] = "_minSize";
char lbl_80495118[] = "_maxSize";
void *igGuiComponentAspect_fieldNames[3] = {(void *)lbl_8055F0EC, (void *)lbl_8049510C, (void *)lbl_80495118};
void *igGuiComponentAspect_fieldStorage[3] = {(void *)lbl_80563740, (void *)lbl_80563744, (void *)lbl_80563748};
void *igGuiComponentAspect_fieldOffsets[3] = {(void *)0xC, (void *)0x10, (void *)0x1C};
char igGuiComponentList_className[] = "igGuiComponentList";
void *igGuiComponent_dependencies[6] = {(void *)igGuiComponentController_arkRegister, (void *)igGuiComponentModel_arkRegister, (void *)igGuiComponentAspect_arkRegister, (void *)igGuiSystem_arkRegister, (void *)igGuiComponentNode_arkRegister, 0};
char igGuiComponent_className[] = "igGuiComponent";
void *igGuiComponent_fieldTypes[7] = {(void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_800385E0};
char lbl_804951A0[] = "_controller";
void *igGuiComponent_fieldNames[7] = {(void *)lbl_804951A0, (void *)lbl_8055EED4, (void *)lbl_8055F0FC, (void *)lbl_8055F104, (void *)lbl_80494DB8, (void *)lbl_8055F0EC, (void *)lbl_8055F10C};
void *igGuiComponent_fieldStorage[7] = {(void *)lbl_80563754, (void *)lbl_80563758, (void *)lbl_8056375C, (void *)lbl_80563760, (void *)lbl_80563764, (void *)lbl_80563768, (void *)lbl_8056376C};
void *igGuiComponent_fieldOffsets[7] = {(void *)0xC, (void *)0x10, (void *)0x14, (void *)0x18, (void *)0x8, (void *)0x1C, (void *)0x20};
void *igGeometryElement_dependencies[3] = {(void *)igGeometry_arkRegister, (void *)igAttrList_arkRegister, 0};
char igGeometryElement_className[] = "igGeometryElement";
void *igGeometryElement_fieldTypes[4] = {(void *)fn_8002879C, (void *)igVec3fMetaField_create, (void *)igVec4fMetaField_create, (void *)fn_8002879C};
char lbl_80495230[] = "_geometry";
char lbl_8049523C[] = "_defaultSize";
char lbl_8049524C[] = "_sharableAttrs";
void *igGeometryElement_fieldNames[4] = {(void *)lbl_80495230, (void *)lbl_8049523C, (void *)lbl_8055F114, (void *)lbl_8049524C};
void *igGeometryElement_fieldStorage[4] = {(void *)lbl_80563774, (void *)lbl_80563778, (void *)lbl_8056377C, (void *)lbl_80563780};
void *igGeometryElement_fieldOffsets[4] = {(void *)0x8, (void *)0xC, (void *)0x18, (void *)0x28};
void *igFont_fieldTypes[4] = {(void *)igFloatMetaField_create, (void *)igFloatMetaField_create, (void *)fn_8002879C, (void *)fn_80022A90};
char lbl_8049529C[] = "_baseLine";
char lbl_804952A8[] = "_attrList";
char lbl_804952B4[] = "_vertexFlags";
void *igFont_fieldNames[4] = {(void *)lbl_8055F12C, (void *)lbl_8049529C, (void *)lbl_804952A8, (void *)lbl_804952B4};
void *igFont_fieldStorage[4] = {(void *)lbl_80563788, (void *)lbl_8056378C, (void *)lbl_80563790, (void *)lbl_80563794};
void *igFont_fieldOffsets[4] = {(void *)0xC, (void *)0x10, (void *)0x14, (void *)0x18};
char igFieldSynchronizer_className[] = "igFieldSynchronizer";
char igFieldChangeViewList_className[] = "igFieldChangeViewList";
void *igFieldChangeView_dependencies[3] = {(void *)igFieldSynchronizer_arkRegister, (void *)igMetaField_arkRegister, 0};
char igFieldChangeView_className[] = "igFieldChangeView";
char lbl_80495340[] = "_synchronizer";
char lbl_80495350[] = "igEventReceiverList";
char igEventReceiverOrderedList_className[] = "igEventReceiverOrderedList";
char igEventReceiver_className[] = "igEventReceiver";
void *igEventDispatcher_dependencies[3] = {(void *)igEventReceiverOrderedList_arkRegister, (void *)igControllerManager_arkRegister, 0};
char igEventDispatcher_className[] = "igEventDispatcher";
char lbl_804953B0[] = "_receivers";
char lbl_804953BC[] = "_controllerManager";
char igDefaultAspect_className[] = "igDefaultAspect";
char lbl_804953E0[] = "_elementList";
char igDefaultAspectElementList_className[] = "igDefaultAspectElementList";
char lbl_8049540C[] = "LEFT_ALIGN";
char lbl_80495418[] = "RIGHT_ALIGN";
char lbl_80495424[] = "FIT_TO_PARENT";
void *lbl_80495434[8] = {(void *)lbl_8049540C, (void *)lbl_8055F1C4, (void *)lbl_80495418, (void *)lbl_80495424, 0, (void *)0x1, (void *)0x2, (void *)0x3};
char lbl_80495454[] = "FIT_MODE";
void *igDefaultAspectElement_dependencies[4] = {(void *)igGeometryElement_arkRegister, (void *)igColorChanger_arkRegister, (void *)igTransform_arkRegister, 0};
char igDefaultAspectElement_className[] = "igDefaultAspectElement";
void *igDefaultAspectElement_fieldTypes[6] = {(void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_80031378, (void *)igFloatMetaField_create, (void *)igFloatMetaField_create};
char lbl_804954A0[] = "_colorChanger";
char lbl_804954B0[] = "_transform";
char lbl_804954BC[] = "_fitMode";
char lbl_804954C8[] = "_hMargin";
char lbl_804954D4[] = "_vMargin";
void *igDefaultAspectElement_fieldNames[6] = {(void *)lbl_80494C40, (void *)lbl_804954A0, (void *)lbl_804954B0, (void *)lbl_804954BC, (void *)lbl_804954C8, (void *)lbl_804954D4};
void *igDefaultAspectElement_fieldStorage[6] = {(void *)lbl_805637DC, (void *)lbl_805637E0, (void *)lbl_805637E4, (void *)lbl_805637E8, (void *)lbl_805637EC, (void *)lbl_805637F0};
void *igDefaultAspectElement_fieldOffsets[6] = {(void *)0x8, (void *)0xC, (void *)0x10, (void *)0x14, (void *)0x18, (void *)0x1C};
char igOnOffColorChanger_className[] = "igOnOffColorChanger";
char igBasicColorChanger_className[] = "igBasicColorChanger";
char lbl_80495550[] = "_disabledColor";
char igColorChanger_className[] = "igColorChanger";
char igBoxComponent_className[] = "igBoxComponent";
char igChildSizeObserverList_className[] = "igChildSizeObserverList";
char igChildSizeObserver_className[] = "igChildSizeObserver";
char lbl_804955AC[] = "_boxAspect";
char lbl_804955B8[] = "HORIZONTAL";
char lbl_804955C4[] = "VERTICAL";
void *lbl_804955D0[6] = {(void *)lbl_804955B8, (void *)lbl_804955C4, (void *)lbl_8055F218, 0, (void *)0x1, (void *)0x2};
char lbl_804955E8[] = "ORIENTATION";
void *igBoxAspect_dependencies[3] = {(void *)igNonRefCountedTransformList_arkRegister, (void *)igChildSizeObserverList_arkRegister, 0};
char igBoxAspect_className[] = "igBoxAspect";
void *igBoxAspect_fieldTypes[3] = {(void *)fn_80031378, (void *)fn_8002879C, (void *)fn_8002879C};
char lbl_80495618[] = "_orientation";
char lbl_80495628[] = "_transformList";
char lbl_80495638[] = "_childSizeObserverList";
void *igBoxAspect_fieldNames[3] = {(void *)lbl_80495618, (void *)lbl_80495628, (void *)lbl_80495638};
void *igBoxAspect_fieldStorage[3] = {(void *)lbl_80563820, (void *)lbl_80563824, (void *)lbl_80563828};
void *igBoxAspect_fieldOffsets[3] = {(void *)0x28, (void *)0x30, (void *)0x2C};
char lbl_80495674[] = "igBoxController";
char lbl_80495684[] = "_prevDirection";
char lbl_80495694[] = "_nextDirection";
char igBoxModel_className[] = "igBoxModel";
char lbl_804956B0[] = "_children";
void *igBitmapFont_dependencies[3] = {(void *)igCharMetricsList_arkRegister, (void *)igTextureBindAttr_arkRegister, 0};
char igBitmapFont_className[] = "igBitmapFont";
char lbl_804956D8[] = "_charMetricsList";
char lbl_804956EC[] = "_textureBind";
char igCharMetricsList_className[] = "igCharMetricsList";
char igCharMetricsMetaField_className[] = "igCharMetricsMetaField";
char lbl_80495728[] = "charNumber";
char lbl_80495734[] = "texCoordMin";
char lbl_80495740[] = "texCoordMax";
}

namespace igTextElement_fieldInit {
// igTextElement: Alchemy class registration (0x8010D3F4..0x8010D4B0). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igTextElement)

extern "C" {
void fn_80071694(void *, void *);
void *fn_800B6C60();
void *fn_8011228C();
extern char lbl_8055EEF8[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igTextElement_fieldInit()
{
    Meta::igMetaObject *meta = igTextElement_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igTextElement_fieldTypes, 3);
    Meta::igObjectRefMetaField *fontField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_v2 = fn_8011228C();
    fontField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v2);
    Meta::igObjectRefMetaField *geometryAttrField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_v4 = fn_800B6C60();
    geometryAttrField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v4);
    geometryAttrField->_construct = true;
    Meta::igStringMetaField *textField = static_cast<Meta::igStringMetaField *>(meta_field(meta, base + 2));
    fn_80071694(textField, (void *)lbl_8055EEF8);
    meta_setupFields(meta, igTextElement_fieldNames, igTextElement_fieldStorage, igTextElement_fieldOffsets, base);
}

}
#pragma pop
}

namespace igSimpleChildHolderModel {
// igSimpleChildHolderModel: Alchemy class registration (0x8010D4B0..0x8010D6A0). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igSimpleChildHolderModel)
META_DECLARE(igGuiComponentModel)
META_DECLARE(igModel)

extern "C" {
void fn_8010CBD4();
void *fn_8010D6A0();
extern char igSimpleChildHolderModel_dependencies[8];
}

struct igModelInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _views;
    inline ~igModelInstance() { __vtable = igModel_vtable; }
};

struct igGuiComponentModelInstance : igModelInstance {
    inline ~igGuiComponentModelInstance() { __vtable = igGuiComponentModel_vtable; }
};

struct igSimpleChildHolderModelInstance : igGuiComponentModelInstance {
    char unknown0C[24];
    igObjectRefMember _child;
    char unknown28[24];
    inline ~igSimpleChildHolderModelInstance() { __vtable = igSimpleChildHolderModel_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igSimpleChildHolderModel)

void *igSimpleChildHolderModel_vtableRead()
{
    igSimpleChildHolderModelInstance object;
    object.__vtable = igModel_vtable;
    object._views._value = 0;
    object.__vtable = igGuiComponentModel_vtable;
    object.__vtable = igSimpleChildHolderModel_vtable;
    object._child._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igSimpleChildHolderModel)

void igSimpleChildHolderModel_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igSimpleChildHolderModel_meta, igGuiComponentModel_register,
                       fn_8010D6A0, igSimpleChildHolderModel_getMetaCall,
                       igSimpleChildHolderModel_className, 0x34,
                       igSimpleChildHolderModel_vtableRead, igSimpleChildHolderModel_fieldInit, 0, igSimpleChildHolderModel_dependencies);
}

META_GET_META_CALL(igSimpleChildHolderModel)

}
#pragma pop
}

namespace unknown8010D6A0 {
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8010CBD4();
void *fn_80111CD4();
void igBoxModel_register();
void igGuiComponentModel_register();
void igScrollListComponentModel_fieldInit();
extern char igModel_vtable[];
extern char igScrollListComponentModel_vtable[];
extern char igBoxModel_vtable[];
extern char igSimpleChildHolderModel_vtable[];
extern char igGuiComponentModel_vtable[];
extern char igSimpleChildHolderModel_dependencies[8];
extern char igSimpleChildHolderModel_fieldTypes[8];
extern char igSimpleChildHolderModel_fieldNames[8];
extern char igSimpleChildHolderModel_fieldStorage[8];
extern char igSimpleChildHolderModel_fieldOffsets[8];
extern void *igSimpleChildHolderModel_meta;
extern void *igScrollListComponentModel_meta;
extern void *igGuiComponentModel_meta;
extern void *igBoxModel_meta;
void *igSimpleChildHolderModel_getMeta();
void *igSimpleChildHolderModel_vtableRead();
void igSimpleChildHolderModel_arkRegister();
void igSimpleChildHolderModel_register();
void *igSimpleChildHolderModel_getMetaCall();
void *fn_8010D6A0();
void igSimpleChildHolderModel_fieldInit();
void *igScrollListComponentModel_getMeta();
void *igScrollListComponentModel_vtableRead();
void igScrollListComponentModel_arkRegister();
void igScrollListComponentModel_register();
void *igScrollListComponentModel_getMetaCall();
void *igScrollListComponentModel_parentMeta();
}
struct UnknownGenRoot8010D4EC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010D4EC(){igObject_construct(this);}
};
struct UnknownGenObject8010D4EC_0 : UnknownGenRoot8010D4EC {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject8010D4EC_0(){unknown00=igModel_vtable;}
};
struct UnknownGenObject8010D4EC_1 : UnknownGenObject8010D4EC_0 {
 inline ~UnknownGenObject8010D4EC_1(){unknown00=igGuiComponentModel_vtable;}
};
struct UnknownGenObject8010D4EC : UnknownGenObject8010D4EC_1 {
 char unknown0C[24];
 UnknownGenRefMember unknown24;
 char unknown28[24];
 inline ~UnknownGenObject8010D4EC(){unknown00=igSimpleChildHolderModel_vtable;}
};
struct UnknownGenRoot8010D764 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010D764(){igObject_construct(this);}
};
struct UnknownGenObject8010D764_0 : UnknownGenRoot8010D764 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject8010D764_0(){unknown00=igModel_vtable;}
};
struct UnknownGenObject8010D764_1 : UnknownGenObject8010D764_0 {
 inline ~UnknownGenObject8010D764_1(){unknown00=igGuiComponentModel_vtable;}
};
struct UnknownGenObject8010D764_2 : UnknownGenObject8010D764_1 {
 char unknown0C[24];
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8010D764_2(){unknown00=igBoxModel_vtable;}
};
struct UnknownGenObject8010D764 : UnknownGenObject8010D764_2 {
 UnknownGenRefMember unknown28;
 UnknownGenRefMember unknown2C;
 UnknownGenRefMember unknown30;
 char unknown34[12];
 inline ~UnknownGenObject8010D764(){unknown00=igScrollListComponentModel_vtable;}
};
extern "C" {
void *fn_8010D6A0(){return igGuiComponentModel_meta;}
}
#pragma pop
}

namespace igSimpleChildHolderModel_2 {
// igSimpleChildHolderModel: Alchemy class registration (0x8010D6A8..0x8010D728). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igSimpleChildHolderModel)

extern "C" {
void *fn_80111CD4();
extern char igSimpleChildHolderModel_fieldNames[8];
extern char igSimpleChildHolderModel_fieldOffsets[8];
extern char igSimpleChildHolderModel_fieldStorage[8];
extern char igSimpleChildHolderModel_fieldTypes[8];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igSimpleChildHolderModel_fieldInit()
{
    Meta::igMetaObject *meta = igSimpleChildHolderModel_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igSimpleChildHolderModel_fieldTypes, 2);
    Meta::igObjectRefMetaField *childField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_80111CD4();
    childField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    meta_setupFields(meta, igSimpleChildHolderModel_fieldNames, igSimpleChildHolderModel_fieldStorage, igSimpleChildHolderModel_fieldOffsets, base);
}

}
#pragma pop
}

namespace igScrollListComponentModel {
// igScrollListComponentModel: Alchemy class registration (0x8010D728..0x8010D9DC). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igScrollListComponentModel)
META_DECLARE(igBoxModel)
META_DECLARE(igGuiComponentModel)
META_DECLARE(igModel)

extern "C" {
void fn_8010CBD4();
void *igScrollListComponentModel_parentMeta();
}

struct igModelInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _views;
    inline ~igModelInstance() { __vtable = igModel_vtable; }
};

struct igGuiComponentModelInstance : igModelInstance {
    inline ~igGuiComponentModelInstance() { __vtable = igGuiComponentModel_vtable; }
};

struct igBoxModelInstance : igGuiComponentModelInstance {
    char unknown0C[24];
    igObjectRefMember _children;
    inline ~igBoxModelInstance() { __vtable = igBoxModel_vtable; }
};

struct igScrollListComponentModelInstance : igBoxModelInstance {
    igObjectRefMember _upArrow;
    igObjectRefMember _downArrow;
    igObjectRefMember _items;
    char unknown34[12];
    inline ~igScrollListComponentModelInstance() { __vtable = igScrollListComponentModel_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igScrollListComponentModel)

void *igScrollListComponentModel_vtableRead()
{
    igScrollListComponentModelInstance object;
    object.__vtable = igModel_vtable;
    object._views._value = 0;
    object.__vtable = igGuiComponentModel_vtable;
    object.__vtable = igBoxModel_vtable;
    object._children._value = 0;
    object.__vtable = igScrollListComponentModel_vtable;
    object._upArrow._value = 0;
    object._downArrow._value = 0;
    object._items._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igScrollListComponentModel)

void igScrollListComponentModel_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igScrollListComponentModel_meta, igBoxModel_register,
                       igScrollListComponentModel_parentMeta, igScrollListComponentModel_getMetaCall,
                       igScrollListComponentModel_className, 0x3C,
                       igScrollListComponentModel_vtableRead, igScrollListComponentModel_fieldInit, 0, igScrollListComponentModel_dependencies);
}

META_GET_META_CALL(igScrollListComponentModel)

}
#pragma pop
}

namespace unknown8010D9DC {
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8010CBD4();
void *fn_80111CD4();
void igBoxModel_register();
void igGuiComponentModel_register();
void igScrollListComponentModel_fieldInit();
extern char igModel_vtable[];
extern char igScrollListComponentModel_vtable[];
extern char igBoxModel_vtable[];
extern char igSimpleChildHolderModel_vtable[];
extern char igGuiComponentModel_vtable[];
extern char igSimpleChildHolderModel_dependencies[8];
extern char igSimpleChildHolderModel_fieldTypes[8];
extern char igSimpleChildHolderModel_fieldNames[8];
extern char igSimpleChildHolderModel_fieldStorage[8];
extern char igSimpleChildHolderModel_fieldOffsets[8];
extern void *igSimpleChildHolderModel_meta;
extern void *igScrollListComponentModel_meta;
extern void *igGuiComponentModel_meta;
extern void *igBoxModel_meta;
void *igSimpleChildHolderModel_getMeta();
void *igSimpleChildHolderModel_vtableRead();
void igSimpleChildHolderModel_arkRegister();
void igSimpleChildHolderModel_register();
void *igSimpleChildHolderModel_getMetaCall();
void *fn_8010D6A0();
void igSimpleChildHolderModel_fieldInit();
void *igScrollListComponentModel_getMeta();
void *igScrollListComponentModel_vtableRead();
void igScrollListComponentModel_arkRegister();
void igScrollListComponentModel_register();
void *igScrollListComponentModel_getMetaCall();
void *igScrollListComponentModel_parentMeta();
}
struct UnknownGenRoot8010D4EC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010D4EC(){igObject_construct(this);}
};
struct UnknownGenObject8010D4EC_0 : UnknownGenRoot8010D4EC {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject8010D4EC_0(){unknown00=igModel_vtable;}
};
struct UnknownGenObject8010D4EC_1 : UnknownGenObject8010D4EC_0 {
 inline ~UnknownGenObject8010D4EC_1(){unknown00=igGuiComponentModel_vtable;}
};
struct UnknownGenObject8010D4EC : UnknownGenObject8010D4EC_1 {
 char unknown0C[24];
 UnknownGenRefMember unknown24;
 char unknown28[24];
 inline ~UnknownGenObject8010D4EC(){unknown00=igSimpleChildHolderModel_vtable;}
};
struct UnknownGenRoot8010D764 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010D764(){igObject_construct(this);}
};
struct UnknownGenObject8010D764_0 : UnknownGenRoot8010D764 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject8010D764_0(){unknown00=igModel_vtable;}
};
struct UnknownGenObject8010D764_1 : UnknownGenObject8010D764_0 {
 inline ~UnknownGenObject8010D764_1(){unknown00=igGuiComponentModel_vtable;}
};
struct UnknownGenObject8010D764_2 : UnknownGenObject8010D764_1 {
 char unknown0C[24];
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8010D764_2(){unknown00=igBoxModel_vtable;}
};
struct UnknownGenObject8010D764 : UnknownGenObject8010D764_2 {
 UnknownGenRefMember unknown28;
 UnknownGenRefMember unknown2C;
 UnknownGenRefMember unknown30;
 char unknown34[12];
 inline ~UnknownGenObject8010D764(){unknown00=igScrollListComponentModel_vtable;}
};
extern "C" {
void *igScrollListComponentModel_parentMeta(){return igBoxModel_meta;}
}
#pragma pop
}

namespace igScrollListComponentModel_fieldInit {
// igScrollListComponentModel: Alchemy class registration (0x8010D9E4..0x8010DAB8). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igScrollListComponentModel)

extern "C" {
void fn_80053650(void *, int);
void *fn_80111B38();
void *fn_80111CD4();
}

#pragma push
#pragma auto_inline off
extern "C" {

void igScrollListComponentModel_fieldInit()
{
    Meta::igMetaObject *meta = igScrollListComponentModel_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igScrollListComponentModel_fieldTypes, 5);
    Meta::igObjectRefMetaField *upArrowField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_v2 = fn_80111CD4();
    upArrowField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v2);
    Meta::igObjectRefMetaField *downArrowField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_v4 = fn_80111CD4();
    downArrowField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v4);
    Meta::igObjectRefMetaField *itemsField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    void *value_v6 = fn_80111B38();
    itemsField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v6);
    itemsField->_construct = true;
    Meta::igIntMetaField *displayCountField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 4));
    fn_80053650(displayCountField, 8);
    meta_setupFields(meta, igScrollListComponentModel_fieldNames, igScrollListComponentModel_fieldStorage, igScrollListComponentModel_fieldOffsets, base);
}

}
#pragma pop
}

namespace unknown8010DAB8 {
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8010CBD4();
void igScalerModel_fieldInit();
void igSimpleChildHolderModel_register();
extern char igModel_vtable[];
extern char igScalerModel_vtable[];
extern char igSimpleChildHolderModel_vtable[];
extern char igGuiComponentModel_vtable[];
extern void *igSimpleChildHolderModel_meta;
extern void *igScalerModel_meta;
extern void *igGuiComponentAspect_meta;
void *igScalerModel_getMeta();
void *igScalerModel_vtableRead();
void igScalerModel_arkRegister();
void igScalerModel_register();
void *igScalerModel_getMetaCall();
void *fn_8010DD30();
}
struct UnknownGenRoot8010DB70 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010DB70(){igObject_construct(this);}
};
struct UnknownGenObject8010DB70_0 : UnknownGenRoot8010DB70 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject8010DB70_0(){unknown00=igModel_vtable;}
};
struct UnknownGenObject8010DB70_1 : UnknownGenObject8010DB70_0 {
 inline ~UnknownGenObject8010DB70_1(){unknown00=igGuiComponentModel_vtable;}
};
struct UnknownGenObject8010DB70_2 : UnknownGenObject8010DB70_1 {
 char unknown0C[24];
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8010DB70_2(){unknown00=igSimpleChildHolderModel_vtable;}
};
struct UnknownGenObject8010DB70 : UnknownGenObject8010DB70_2 {
 char unknown28[24];
 inline ~UnknownGenObject8010DB70(){unknown00=igScalerModel_vtable;}
};
extern "C" {
UnknownGenHolder *dtor_8010DAB8(UnknownGenHolder *object,short flags){
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
void *fn_8010DB2C(){return igGuiComponentAspect_meta;}
}
#pragma pop
}

namespace igScalerModel {
// igScalerModel: Alchemy class registration (0x8010DB34..0x8010DD30). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igScalerModel)
META_DECLARE(igGuiComponentModel)
META_DECLARE(igModel)
META_DECLARE(igSimpleChildHolderModel)

extern "C" {
void fn_8010CBD4();
void *fn_8010DD30();
}

struct igModelInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _views;
    inline ~igModelInstance() { __vtable = igModel_vtable; }
};

struct igGuiComponentModelInstance : igModelInstance {
    inline ~igGuiComponentModelInstance() { __vtable = igGuiComponentModel_vtable; }
};

struct igSimpleChildHolderModelInstance : igGuiComponentModelInstance {
    char unknown0C[24];
    igObjectRefMember _child;
    inline ~igSimpleChildHolderModelInstance() { __vtable = igSimpleChildHolderModel_vtable; }
};

struct igScalerModelInstance : igSimpleChildHolderModelInstance {
    char unknown28[24];
    inline ~igScalerModelInstance() { __vtable = igScalerModel_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igScalerModel)

void *igScalerModel_vtableRead()
{
    igScalerModelInstance object;
    object.__vtable = igModel_vtable;
    object._views._value = 0;
    object.__vtable = igGuiComponentModel_vtable;
    object.__vtable = igSimpleChildHolderModel_vtable;
    object._child._value = 0;
    object.__vtable = igScalerModel_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igScalerModel)

void igScalerModel_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igScalerModel_meta, igSimpleChildHolderModel_register,
                       fn_8010DD30, igScalerModel_getMetaCall,
                       igScalerModel_className, 0x40,
                       igScalerModel_vtableRead, igScalerModel_fieldInit, 0, 0);
}

META_GET_META_CALL(igScalerModel)

}
#pragma pop
}

namespace unknown8010DD30 {
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8010CBD4();
void igScalerModel_fieldInit();
void igSimpleChildHolderModel_register();
extern char igModel_vtable[];
extern char igScalerModel_vtable[];
extern char igSimpleChildHolderModel_vtable[];
extern char igGuiComponentModel_vtable[];
extern void *igSimpleChildHolderModel_meta;
extern void *igScalerModel_meta;
extern void *igGuiComponentAspect_meta;
void *igScalerModel_getMeta();
void *igScalerModel_vtableRead();
void igScalerModel_arkRegister();
void igScalerModel_register();
void *igScalerModel_getMetaCall();
void *fn_8010DD30();
}
struct UnknownGenRoot8010DB70 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010DB70(){igObject_construct(this);}
};
struct UnknownGenObject8010DB70_0 : UnknownGenRoot8010DB70 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject8010DB70_0(){unknown00=igModel_vtable;}
};
struct UnknownGenObject8010DB70_1 : UnknownGenObject8010DB70_0 {
 inline ~UnknownGenObject8010DB70_1(){unknown00=igGuiComponentModel_vtable;}
};
struct UnknownGenObject8010DB70_2 : UnknownGenObject8010DB70_1 {
 char unknown0C[24];
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8010DB70_2(){unknown00=igSimpleChildHolderModel_vtable;}
};
struct UnknownGenObject8010DB70 : UnknownGenObject8010DB70_2 {
 char unknown28[24];
 inline ~UnknownGenObject8010DB70(){unknown00=igScalerModel_vtable;}
};
extern "C" {
void *fn_8010DD30(){return igSimpleChildHolderModel_meta;}
}
#pragma pop
}

namespace unknown8010DD38 {
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void fn_80126808(void *,void *);
extern char igScalerModel_fieldTypes[4];
extern char igScalerModel_fieldNames[4];
extern char igScalerModel_fieldStorage[4];
extern char igScalerModel_fieldOffsets[4];
extern void *igScalerModel_meta;
extern char lbl_805669A8[4];
}
struct UnknownGenL8010DD38_8 {
 float m08;
 float m0C;
 float m10;
};
extern "C" {
void igScalerModel_fieldInit(){
 UnknownGenL8010DD38_8 local0;
 void *value0=igScalerModel_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,igScalerModel_fieldTypes,1);
 void *value2=meta_field(value0,value1);
 local0.m08=*reinterpret_cast<float *>((lbl_805669A8+0));
 local0.m0C=*reinterpret_cast<float *>((lbl_805669A8+0));
 local0.m10=*reinterpret_cast<float *>((lbl_805669A8+0));
 fn_80126808(value2,&local0);
 meta_setupFields(value0,igScalerModel_fieldNames,igScalerModel_fieldStorage,igScalerModel_fieldOffsets,value1);
}
}
#pragma pop
}

namespace unknown8010DDC4 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *fn_800CE788();
void fn_8010CBD4();
void igDependencyOrderedList_register();
void igObjectList_register();
void igObject_register();
void igRadioGroup_fieldInit();
void igView_register();
extern char igDataList_vtable[];
extern char igDependencyOrderedList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char lbl_80495AD8[];
extern char igClearRenderer_vtable[];
extern char igOnOffValueObserver_vtable[];
extern char igRadioGroupSelectedObserver_vtable[];
extern char igRadioGroup_vtable[];
extern char igOnOffValueObserverList_vtable[];
extern char lbl_80497A5C[];
extern char igRendererOrderedList_vtable[];
extern char lbl_80497BE4[];
extern char lbl_80497C9C[];
extern char igClearRenderer_fieldTypes[4];
extern char igClearRenderer_fieldNames[4];
extern char igClearRenderer_fieldStorage[4];
extern char igClearRenderer_fieldOffsets[4];
extern char igRendererOrderedList_dependencies[8];
extern char igRenderer_dependencies[8];
extern char igRenderer_fieldTypes[4];
extern char igRenderer_fieldNames[4];
extern char igRenderer_fieldStorage[4];
extern char igRenderer_fieldOffsets[4];
extern char igOnOffValueObserverList_dependencies[8];
extern char igOnOffValueObserver_dependencies[8];
extern char igOnOffValueObserver_fieldTypes[4];
extern char igOnOffValueObserver_fieldNames[4];
extern char igOnOffValueObserver_fieldStorage[4];
extern char igOnOffValueObserver_fieldOffsets[4];
extern char igRadioGroupSelectedObserver_dependencies[8];
extern char igRadioGroupSelectedObserver_fieldTypes[4];
extern char igRadioGroupSelectedObserver_fieldNames[4];
extern char igRadioGroupSelectedObserver_fieldStorage[4];
extern char igRadioGroupSelectedObserver_fieldOffsets[4];
extern void *igDependencyOrderedList_meta;
extern void *lbl_805621F4;
extern void *igView_meta;
extern void *igClearRenderer_meta;
extern void *igRendererOrderedList_meta;
extern void *igRenderer_meta;
extern void *igOnOffValueObserverList_meta;
extern void *igOnOffValueObserver_meta;
extern void *igRadioGroupSelectedObserver_meta;
extern void *igRadioGroup_meta;
void *igClearRenderer_getMeta();
void *igClearRenderer_vtableRead();
void igClearRenderer_arkRegister();
void igClearRenderer_register();
void *igClearRenderer_getMetaCall();
void *fn_8010DF8C();
void igClearRenderer_fieldInit();
void *igRendererOrderedList_getMeta();
void *igRendererOrderedList_vtableRead();
void igRendererOrderedList_arkRegister();
void igRendererOrderedList_register();
void *igRendererOrderedList_getMetaCall();
void *fn_8010E280();
void *igRenderer_getMeta();
void igRenderer_arkRegister();
void igRenderer_register();
void *igRenderer_getMetaCall();
void igRenderer_fieldInit();
void *igOnOffValueObserverList_getMeta();
void *igOnOffValueObserverList_vtableRead();
void igOnOffValueObserverList_arkRegister();
void igOnOffValueObserverList_register();
void *igOnOffValueObserverList_getMetaCall();
void *igOnOffValueObserver_getMeta();
void *igOnOffValueObserver_vtableRead();
void igOnOffValueObserver_arkRegister();
void igOnOffValueObserver_register();
void *igOnOffValueObserver_getMetaCall();
void *fn_8010E6DC();
void igOnOffValueObserver_fieldInit();
void *igRadioGroupSelectedObserver_getMeta();
void *igRadioGroupSelectedObserver_vtableRead();
void igRadioGroupSelectedObserver_arkRegister();
void igRadioGroupSelectedObserver_register();
void *igRadioGroupSelectedObserver_getMetaCall();
void igRadioGroupSelectedObserver_fieldInit();
void *fn_8010E974();
void *igRadioGroup_getMeta();
void *igRadioGroup_vtableRead();
void igRadioGroup_arkRegister();
void igRadioGroup_register();
void *igRadioGroup_getMetaCall();
}
struct UnknownGenRoot8010DE3C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010DE3C(){igObject_construct(this);}
};
struct UnknownGenObject8010DE3C_0 : UnknownGenRoot8010DE3C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject8010DE3C_0(){unknown00=lbl_80497C9C;}
};
struct UnknownGenObject8010DE3C : UnknownGenObject8010DE3C_0 {
 char unknown0C[4];
 inline ~UnknownGenObject8010DE3C(){unknown00=igClearRenderer_vtable;}
};
struct UnknownGenRoot8010E074 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010E074(){igObject_construct(this);}
};
struct UnknownGenObject8010E074_0 : UnknownGenRoot8010E074 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject8010E074_0(){unknown00=igDependencyOrderedList_vtable;}
};
struct UnknownGenObject8010E074_1 : UnknownGenObject8010E074_0 {
 inline ~UnknownGenObject8010E074_1(){unknown00=lbl_80497BE4;}
};
struct UnknownGenObject8010E074 : UnknownGenObject8010E074_1 {
 char unknown18[16];
 inline ~UnknownGenObject8010E074(){unknown00=igRendererOrderedList_vtable;}
};
struct UnknownGenObject8010E474_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8010E5D4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8010E7E4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot8010E9EC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010E9EC(){igObject_construct(this);}
};
struct UnknownGenObject8010E9EC : UnknownGenRoot8010E9EC {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[20];
 inline ~UnknownGenObject8010E9EC(){unknown00=igRadioGroup_vtable;}
};
extern "C" {
void *fn_8010DDC4(){
 if(!igClearRenderer_meta) igClearRenderer_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igClearRenderer_meta;
}
}
#pragma pop
}

namespace igClearRenderer {
// igClearRenderer: Alchemy class registration (0x8010DE00..0x8010DF8C). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igClearRenderer)
META_DECLARE(igRenderer)

extern "C" {
void fn_8010CBD4();
void *fn_8010DF8C();
extern char lbl_80497C9C[];
}

struct Instance_80497C9C : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _visualContext;
    inline ~Instance_80497C9C() { __vtable = lbl_80497C9C; }
};

struct igClearRendererInstance : Instance_80497C9C {
    char unknown0C[4];
    inline ~igClearRendererInstance() { __vtable = igClearRenderer_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igClearRenderer)

void *igClearRenderer_vtableRead()
{
    igClearRendererInstance object;
    object.__vtable = lbl_80497C9C;
    object._visualContext._value = 0;
    object.__vtable = igClearRenderer_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igClearRenderer)

void igClearRenderer_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igClearRenderer_meta, igRenderer_register,
                       fn_8010DF8C, igClearRenderer_getMetaCall,
                       igClearRenderer_className, 0x10,
                       igClearRenderer_vtableRead, igClearRenderer_fieldInit, 0, 0);
}

META_GET_META_CALL(igClearRenderer)

}
#pragma pop
}

namespace unknown8010DF8C {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *fn_800CE788();
void fn_8010CBD4();
void igDependencyOrderedList_register();
void igObjectList_register();
void igObject_register();
void igRadioGroup_fieldInit();
void igView_register();
extern char igDataList_vtable[];
extern char igDependencyOrderedList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char lbl_80495AD8[];
extern char igClearRenderer_vtable[];
extern char igOnOffValueObserver_vtable[];
extern char igRadioGroupSelectedObserver_vtable[];
extern char igRadioGroup_vtable[];
extern char igOnOffValueObserverList_vtable[];
extern char lbl_80497A5C[];
extern char igRendererOrderedList_vtable[];
extern char lbl_80497BE4[];
extern char lbl_80497C9C[];
extern char igClearRenderer_fieldTypes[4];
extern char igClearRenderer_fieldNames[4];
extern char igClearRenderer_fieldStorage[4];
extern char igClearRenderer_fieldOffsets[4];
extern char igRendererOrderedList_dependencies[8];
extern char igRenderer_dependencies[8];
extern char igRenderer_fieldTypes[4];
extern char igRenderer_fieldNames[4];
extern char igRenderer_fieldStorage[4];
extern char igRenderer_fieldOffsets[4];
extern char igOnOffValueObserverList_dependencies[8];
extern char igOnOffValueObserver_dependencies[8];
extern char igOnOffValueObserver_fieldTypes[4];
extern char igOnOffValueObserver_fieldNames[4];
extern char igOnOffValueObserver_fieldStorage[4];
extern char igOnOffValueObserver_fieldOffsets[4];
extern char igRadioGroupSelectedObserver_dependencies[8];
extern char igRadioGroupSelectedObserver_fieldTypes[4];
extern char igRadioGroupSelectedObserver_fieldNames[4];
extern char igRadioGroupSelectedObserver_fieldStorage[4];
extern char igRadioGroupSelectedObserver_fieldOffsets[4];
extern void *igDependencyOrderedList_meta;
extern void *lbl_805621F4;
extern void *igView_meta;
extern void *igClearRenderer_meta;
extern void *igRendererOrderedList_meta;
extern void *igRenderer_meta;
extern void *igOnOffValueObserverList_meta;
extern void *igOnOffValueObserver_meta;
extern void *igRadioGroupSelectedObserver_meta;
extern void *igRadioGroup_meta;
void *igClearRenderer_getMeta();
void *igClearRenderer_vtableRead();
void igClearRenderer_arkRegister();
void igClearRenderer_register();
void *igClearRenderer_getMetaCall();
void *fn_8010DF8C();
void igClearRenderer_fieldInit();
void *igRendererOrderedList_getMeta();
void *igRendererOrderedList_vtableRead();
void igRendererOrderedList_arkRegister();
void igRendererOrderedList_register();
void *igRendererOrderedList_getMetaCall();
void *fn_8010E280();
void *igRenderer_getMeta();
void igRenderer_arkRegister();
void igRenderer_register();
void *igRenderer_getMetaCall();
void igRenderer_fieldInit();
void *igOnOffValueObserverList_getMeta();
void *igOnOffValueObserverList_vtableRead();
void igOnOffValueObserverList_arkRegister();
void igOnOffValueObserverList_register();
void *igOnOffValueObserverList_getMetaCall();
void *igOnOffValueObserver_getMeta();
void *igOnOffValueObserver_vtableRead();
void igOnOffValueObserver_arkRegister();
void igOnOffValueObserver_register();
void *igOnOffValueObserver_getMetaCall();
void *fn_8010E6DC();
void igOnOffValueObserver_fieldInit();
void *igRadioGroupSelectedObserver_getMeta();
void *igRadioGroupSelectedObserver_vtableRead();
void igRadioGroupSelectedObserver_arkRegister();
void igRadioGroupSelectedObserver_register();
void *igRadioGroupSelectedObserver_getMetaCall();
void igRadioGroupSelectedObserver_fieldInit();
void *fn_8010E974();
void *igRadioGroup_getMeta();
void *igRadioGroup_vtableRead();
void igRadioGroup_arkRegister();
void igRadioGroup_register();
void *igRadioGroup_getMetaCall();
}
struct UnknownGenRoot8010DE3C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010DE3C(){igObject_construct(this);}
};
struct UnknownGenObject8010DE3C_0 : UnknownGenRoot8010DE3C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject8010DE3C_0(){unknown00=lbl_80497C9C;}
};
struct UnknownGenObject8010DE3C : UnknownGenObject8010DE3C_0 {
 char unknown0C[4];
 inline ~UnknownGenObject8010DE3C(){unknown00=igClearRenderer_vtable;}
};
struct UnknownGenRoot8010E074 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010E074(){igObject_construct(this);}
};
struct UnknownGenObject8010E074_0 : UnknownGenRoot8010E074 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject8010E074_0(){unknown00=igDependencyOrderedList_vtable;}
};
struct UnknownGenObject8010E074_1 : UnknownGenObject8010E074_0 {
 inline ~UnknownGenObject8010E074_1(){unknown00=lbl_80497BE4;}
};
struct UnknownGenObject8010E074 : UnknownGenObject8010E074_1 {
 char unknown18[16];
 inline ~UnknownGenObject8010E074(){unknown00=igRendererOrderedList_vtable;}
};
struct UnknownGenObject8010E474_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8010E5D4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8010E7E4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot8010E9EC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010E9EC(){igObject_construct(this);}
};
struct UnknownGenObject8010E9EC : UnknownGenRoot8010E9EC {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[20];
 inline ~UnknownGenObject8010E9EC(){unknown00=igRadioGroup_vtable;}
};
extern "C" {
void *fn_8010DF8C(){return igRenderer_meta;}
}
#pragma pop
}

namespace igClearRenderer_2 {
// igClearRenderer: Alchemy class registration (0x8010DF94..0x8010DFFC). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igClearRenderer)

extern "C" {
extern char igClearRenderer_fieldNames[4];
extern char igClearRenderer_fieldOffsets[4];
extern char igClearRenderer_fieldStorage[4];
extern char igClearRenderer_fieldTypes[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igClearRenderer_fieldInit()
{
    Meta::igMetaObject *meta = igClearRenderer_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igClearRenderer_fieldTypes, 1);
    meta_setupFields(meta, igClearRenderer_fieldNames, igClearRenderer_fieldStorage, igClearRenderer_fieldOffsets, base);
}

}
#pragma pop
}

namespace unknown8010DFFC {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *fn_800CE788();
void fn_8010CBD4();
void igDependencyOrderedList_register();
void igObjectList_register();
void igObject_register();
void igRadioGroup_fieldInit();
void igView_register();
extern char igDataList_vtable[];
extern char igDependencyOrderedList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char lbl_80495AD8[];
extern char igClearRenderer_vtable[];
extern char igOnOffValueObserver_vtable[];
extern char igRadioGroupSelectedObserver_vtable[];
extern char igRadioGroup_vtable[];
extern char igOnOffValueObserverList_vtable[];
extern char lbl_80497A5C[];
extern char igRendererOrderedList_vtable[];
extern char lbl_80497BE4[];
extern char lbl_80497C9C[];
extern char igClearRenderer_fieldTypes[4];
extern char igClearRenderer_fieldNames[4];
extern char igClearRenderer_fieldStorage[4];
extern char igClearRenderer_fieldOffsets[4];
extern char igRendererOrderedList_dependencies[8];
extern char igRenderer_dependencies[8];
extern char igRenderer_fieldTypes[4];
extern char igRenderer_fieldNames[4];
extern char igRenderer_fieldStorage[4];
extern char igRenderer_fieldOffsets[4];
extern char igOnOffValueObserverList_dependencies[8];
extern char igOnOffValueObserver_dependencies[8];
extern char igOnOffValueObserver_fieldTypes[4];
extern char igOnOffValueObserver_fieldNames[4];
extern char igOnOffValueObserver_fieldStorage[4];
extern char igOnOffValueObserver_fieldOffsets[4];
extern char igRadioGroupSelectedObserver_dependencies[8];
extern char igRadioGroupSelectedObserver_fieldTypes[4];
extern char igRadioGroupSelectedObserver_fieldNames[4];
extern char igRadioGroupSelectedObserver_fieldStorage[4];
extern char igRadioGroupSelectedObserver_fieldOffsets[4];
extern void *igDependencyOrderedList_meta;
extern void *lbl_805621F4;
extern void *igView_meta;
extern void *igClearRenderer_meta;
extern void *igRendererOrderedList_meta;
extern void *igRenderer_meta;
extern void *igOnOffValueObserverList_meta;
extern void *igOnOffValueObserver_meta;
extern void *igRadioGroupSelectedObserver_meta;
extern void *igRadioGroup_meta;
void *igClearRenderer_getMeta();
void *igClearRenderer_vtableRead();
void igClearRenderer_arkRegister();
void igClearRenderer_register();
void *igClearRenderer_getMetaCall();
void *fn_8010DF8C();
void igClearRenderer_fieldInit();
void *igRendererOrderedList_getMeta();
void *igRendererOrderedList_vtableRead();
void igRendererOrderedList_arkRegister();
void igRendererOrderedList_register();
void *igRendererOrderedList_getMetaCall();
void *fn_8010E280();
void *igRenderer_getMeta();
void igRenderer_arkRegister();
void igRenderer_register();
void *igRenderer_getMetaCall();
void igRenderer_fieldInit();
void *igOnOffValueObserverList_getMeta();
void *igOnOffValueObserverList_vtableRead();
void igOnOffValueObserverList_arkRegister();
void igOnOffValueObserverList_register();
void *igOnOffValueObserverList_getMetaCall();
void *igOnOffValueObserver_getMeta();
void *igOnOffValueObserver_vtableRead();
void igOnOffValueObserver_arkRegister();
void igOnOffValueObserver_register();
void *igOnOffValueObserver_getMetaCall();
void *fn_8010E6DC();
void igOnOffValueObserver_fieldInit();
void *igRadioGroupSelectedObserver_getMeta();
void *igRadioGroupSelectedObserver_vtableRead();
void igRadioGroupSelectedObserver_arkRegister();
void igRadioGroupSelectedObserver_register();
void *igRadioGroupSelectedObserver_getMetaCall();
void igRadioGroupSelectedObserver_fieldInit();
void *fn_8010E974();
void *igRadioGroup_getMeta();
void *igRadioGroup_vtableRead();
void igRadioGroup_arkRegister();
void igRadioGroup_register();
void *igRadioGroup_getMetaCall();
}
struct UnknownGenRoot8010DE3C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010DE3C(){igObject_construct(this);}
};
struct UnknownGenObject8010DE3C_0 : UnknownGenRoot8010DE3C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject8010DE3C_0(){unknown00=lbl_80497C9C;}
};
struct UnknownGenObject8010DE3C : UnknownGenObject8010DE3C_0 {
 char unknown0C[4];
 inline ~UnknownGenObject8010DE3C(){unknown00=igClearRenderer_vtable;}
};
struct UnknownGenRoot8010E074 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010E074(){igObject_construct(this);}
};
struct UnknownGenObject8010E074_0 : UnknownGenRoot8010E074 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject8010E074_0(){unknown00=igDependencyOrderedList_vtable;}
};
struct UnknownGenObject8010E074_1 : UnknownGenObject8010E074_0 {
 inline ~UnknownGenObject8010E074_1(){unknown00=lbl_80497BE4;}
};
struct UnknownGenObject8010E074 : UnknownGenObject8010E074_1 {
 char unknown18[16];
 inline ~UnknownGenObject8010E074(){unknown00=igRendererOrderedList_vtable;}
};
struct UnknownGenObject8010E474_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8010E5D4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8010E7E4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot8010E9EC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010E9EC(){igObject_construct(this);}
};
struct UnknownGenObject8010E9EC : UnknownGenRoot8010E9EC {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[20];
 inline ~UnknownGenObject8010E9EC(){unknown00=igRadioGroup_vtable;}
};
extern "C" {
void *fn_8010DFFC(){
 if(!igRendererOrderedList_meta) igRendererOrderedList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igRendererOrderedList_meta;
}
}
#pragma pop
}

namespace igRendererOrderedList {
// igRendererOrderedList: Alchemy class registration (0x8010E038..0x8010E280). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igRendererOrderedList)
META_DECLARE(igDependencyOrderedList)

extern "C" {
void fn_8010CBD4();
void *fn_8010E280();
extern char igRendererOrderedList_dependencies[8];
extern char lbl_80497BE4[];
}

struct igDependencyOrderedListInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _objectList;
    igObjectRefMember _dependencies;
    igObjectRefMember _order;
    igObjectRefMember _checkPoints;
    inline ~igDependencyOrderedListInstance() { __vtable = igDependencyOrderedList_vtable; }
};

struct Instance_80497BE4 : igDependencyOrderedListInstance {
    inline ~Instance_80497BE4() { __vtable = lbl_80497BE4; }
};

struct igRendererOrderedListInstance : Instance_80497BE4 {
    char unknown18[16];
    inline ~igRendererOrderedListInstance() { __vtable = igRendererOrderedList_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igRendererOrderedList)

void *igRendererOrderedList_vtableRead()
{
    igRendererOrderedListInstance object;
    object.__vtable = igDependencyOrderedList_vtable;
    object._objectList._value = 0;
    object._dependencies._value = 0;
    object._order._value = 0;
    object._checkPoints._value = 0;
    object.__vtable = lbl_80497BE4;
    object.__vtable = igRendererOrderedList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igRendererOrderedList)

void igRendererOrderedList_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igRendererOrderedList_meta, igDependencyOrderedList_register,
                       fn_8010E280, igRendererOrderedList_getMetaCall,
                       igRendererOrderedList_className, 0x1C,
                       igRendererOrderedList_vtableRead, 0, 0, igRendererOrderedList_dependencies);
}

META_GET_META_CALL(igRendererOrderedList)

}
#pragma pop
}

namespace unknown8010E280 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *fn_800CE788();
void fn_8010CBD4();
void igDependencyOrderedList_register();
void igObjectList_register();
void igObject_register();
void igRadioGroup_fieldInit();
void igView_register();
extern char igDataList_vtable[];
extern char igDependencyOrderedList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char lbl_80495AD8[];
extern char igClearRenderer_vtable[];
extern char igOnOffValueObserver_vtable[];
extern char igRadioGroupSelectedObserver_vtable[];
extern char igRadioGroup_vtable[];
extern char igOnOffValueObserverList_vtable[];
extern char lbl_80497A5C[];
extern char igRendererOrderedList_vtable[];
extern char lbl_80497BE4[];
extern char lbl_80497C9C[];
extern char igClearRenderer_fieldTypes[4];
extern char igClearRenderer_fieldNames[4];
extern char igClearRenderer_fieldStorage[4];
extern char igClearRenderer_fieldOffsets[4];
extern char igRendererOrderedList_dependencies[8];
extern char igRenderer_dependencies[8];
extern char igRenderer_fieldTypes[4];
extern char igRenderer_fieldNames[4];
extern char igRenderer_fieldStorage[4];
extern char igRenderer_fieldOffsets[4];
extern char igOnOffValueObserverList_dependencies[8];
extern char igOnOffValueObserver_dependencies[8];
extern char igOnOffValueObserver_fieldTypes[4];
extern char igOnOffValueObserver_fieldNames[4];
extern char igOnOffValueObserver_fieldStorage[4];
extern char igOnOffValueObserver_fieldOffsets[4];
extern char igRadioGroupSelectedObserver_dependencies[8];
extern char igRadioGroupSelectedObserver_fieldTypes[4];
extern char igRadioGroupSelectedObserver_fieldNames[4];
extern char igRadioGroupSelectedObserver_fieldStorage[4];
extern char igRadioGroupSelectedObserver_fieldOffsets[4];
extern void *igDependencyOrderedList_meta;
extern void *lbl_805621F4;
extern void *igView_meta;
extern void *igClearRenderer_meta;
extern void *igRendererOrderedList_meta;
extern void *igRenderer_meta;
extern void *igOnOffValueObserverList_meta;
extern void *igOnOffValueObserver_meta;
extern void *igRadioGroupSelectedObserver_meta;
extern void *igRadioGroup_meta;
void *igClearRenderer_getMeta();
void *igClearRenderer_vtableRead();
void igClearRenderer_arkRegister();
void igClearRenderer_register();
void *igClearRenderer_getMetaCall();
void *fn_8010DF8C();
void igClearRenderer_fieldInit();
void *igRendererOrderedList_getMeta();
void *igRendererOrderedList_vtableRead();
void igRendererOrderedList_arkRegister();
void igRendererOrderedList_register();
void *igRendererOrderedList_getMetaCall();
void *fn_8010E280();
void *igRenderer_getMeta();
void igRenderer_arkRegister();
void igRenderer_register();
void *igRenderer_getMetaCall();
void igRenderer_fieldInit();
void *igOnOffValueObserverList_getMeta();
void *igOnOffValueObserverList_vtableRead();
void igOnOffValueObserverList_arkRegister();
void igOnOffValueObserverList_register();
void *igOnOffValueObserverList_getMetaCall();
void *igOnOffValueObserver_getMeta();
void *igOnOffValueObserver_vtableRead();
void igOnOffValueObserver_arkRegister();
void igOnOffValueObserver_register();
void *igOnOffValueObserver_getMetaCall();
void *fn_8010E6DC();
void igOnOffValueObserver_fieldInit();
void *igRadioGroupSelectedObserver_getMeta();
void *igRadioGroupSelectedObserver_vtableRead();
void igRadioGroupSelectedObserver_arkRegister();
void igRadioGroupSelectedObserver_register();
void *igRadioGroupSelectedObserver_getMetaCall();
void igRadioGroupSelectedObserver_fieldInit();
void *fn_8010E974();
void *igRadioGroup_getMeta();
void *igRadioGroup_vtableRead();
void igRadioGroup_arkRegister();
void igRadioGroup_register();
void *igRadioGroup_getMetaCall();
}
struct UnknownGenRoot8010DE3C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010DE3C(){igObject_construct(this);}
};
struct UnknownGenObject8010DE3C_0 : UnknownGenRoot8010DE3C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject8010DE3C_0(){unknown00=lbl_80497C9C;}
};
struct UnknownGenObject8010DE3C : UnknownGenObject8010DE3C_0 {
 char unknown0C[4];
 inline ~UnknownGenObject8010DE3C(){unknown00=igClearRenderer_vtable;}
};
struct UnknownGenRoot8010E074 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010E074(){igObject_construct(this);}
};
struct UnknownGenObject8010E074_0 : UnknownGenRoot8010E074 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject8010E074_0(){unknown00=igDependencyOrderedList_vtable;}
};
struct UnknownGenObject8010E074_1 : UnknownGenObject8010E074_0 {
 inline ~UnknownGenObject8010E074_1(){unknown00=lbl_80497BE4;}
};
struct UnknownGenObject8010E074 : UnknownGenObject8010E074_1 {
 char unknown18[16];
 inline ~UnknownGenObject8010E074(){unknown00=igRendererOrderedList_vtable;}
};
struct UnknownGenObject8010E474_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8010E5D4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8010E7E4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot8010E9EC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010E9EC(){igObject_construct(this);}
};
struct UnknownGenObject8010E9EC : UnknownGenRoot8010E9EC {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[20];
 inline ~UnknownGenObject8010E9EC(){unknown00=igRadioGroup_vtable;}
};
extern "C" {
void *fn_8010E280(){return igDependencyOrderedList_meta;}
}
#pragma pop
}

namespace igRenderer {
// igRenderer: Alchemy class registration (0x8010E288..0x8010E3FC). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igRenderer)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void *fn_800CE788();
void fn_8010CBD4();
extern char igRenderer_dependencies[8];
extern char igRenderer_fieldNames[4];
extern char igRenderer_fieldOffsets[4];
extern char igRenderer_fieldStorage[4];
extern char igRenderer_fieldTypes[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igRenderer)

META_ARK_REGISTER(igRenderer)

void igRenderer_register()
{
    fn_8010CBD4();
    meta_registerClass(1, &igRenderer_meta, igObject_register,
                       fn_800237D0, igRenderer_getMetaCall,
                       igRenderer_className, 0xC,
                       0, igRenderer_fieldInit, 0, igRenderer_dependencies);
}

META_GET_META_CALL(igRenderer)

void igRenderer_fieldInit()
{
    Meta::igMetaObject *meta = igRenderer_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igRenderer_fieldTypes, 1);
    Meta::igObjectRefMetaField *visualContextField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_800CE788();
    visualContextField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    meta_setupFields(meta, igRenderer_fieldNames, igRenderer_fieldStorage, igRenderer_fieldOffsets, base);
}

}
#pragma pop
}

namespace unknown8010E3FC {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *fn_800CE788();
void fn_8010CBD4();
void igDependencyOrderedList_register();
void igObjectList_register();
void igObject_register();
void igRadioGroup_fieldInit();
void igView_register();
extern char igDataList_vtable[];
extern char igDependencyOrderedList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char lbl_80495AD8[];
extern char igClearRenderer_vtable[];
extern char igOnOffValueObserver_vtable[];
extern char igRadioGroupSelectedObserver_vtable[];
extern char igRadioGroup_vtable[];
extern char igOnOffValueObserverList_vtable[];
extern char lbl_80497A5C[];
extern char igRendererOrderedList_vtable[];
extern char lbl_80497BE4[];
extern char lbl_80497C9C[];
extern char igClearRenderer_fieldTypes[4];
extern char igClearRenderer_fieldNames[4];
extern char igClearRenderer_fieldStorage[4];
extern char igClearRenderer_fieldOffsets[4];
extern char igRendererOrderedList_dependencies[8];
extern char igRenderer_dependencies[8];
extern char igRenderer_fieldTypes[4];
extern char igRenderer_fieldNames[4];
extern char igRenderer_fieldStorage[4];
extern char igRenderer_fieldOffsets[4];
extern char igOnOffValueObserverList_dependencies[8];
extern char igOnOffValueObserver_dependencies[8];
extern char igOnOffValueObserver_fieldTypes[4];
extern char igOnOffValueObserver_fieldNames[4];
extern char igOnOffValueObserver_fieldStorage[4];
extern char igOnOffValueObserver_fieldOffsets[4];
extern char igRadioGroupSelectedObserver_dependencies[8];
extern char igRadioGroupSelectedObserver_fieldTypes[4];
extern char igRadioGroupSelectedObserver_fieldNames[4];
extern char igRadioGroupSelectedObserver_fieldStorage[4];
extern char igRadioGroupSelectedObserver_fieldOffsets[4];
extern void *igDependencyOrderedList_meta;
extern void *lbl_805621F4;
extern void *igView_meta;
extern void *igClearRenderer_meta;
extern void *igRendererOrderedList_meta;
extern void *igRenderer_meta;
extern void *igOnOffValueObserverList_meta;
extern void *igOnOffValueObserver_meta;
extern void *igRadioGroupSelectedObserver_meta;
extern void *igRadioGroup_meta;
void *igClearRenderer_getMeta();
void *igClearRenderer_vtableRead();
void igClearRenderer_arkRegister();
void igClearRenderer_register();
void *igClearRenderer_getMetaCall();
void *fn_8010DF8C();
void igClearRenderer_fieldInit();
void *igRendererOrderedList_getMeta();
void *igRendererOrderedList_vtableRead();
void igRendererOrderedList_arkRegister();
void igRendererOrderedList_register();
void *igRendererOrderedList_getMetaCall();
void *fn_8010E280();
void *igRenderer_getMeta();
void igRenderer_arkRegister();
void igRenderer_register();
void *igRenderer_getMetaCall();
void igRenderer_fieldInit();
void *igOnOffValueObserverList_getMeta();
void *igOnOffValueObserverList_vtableRead();
void igOnOffValueObserverList_arkRegister();
void igOnOffValueObserverList_register();
void *igOnOffValueObserverList_getMetaCall();
void *igOnOffValueObserver_getMeta();
void *igOnOffValueObserver_vtableRead();
void igOnOffValueObserver_arkRegister();
void igOnOffValueObserver_register();
void *igOnOffValueObserver_getMetaCall();
void *fn_8010E6DC();
void igOnOffValueObserver_fieldInit();
void *igRadioGroupSelectedObserver_getMeta();
void *igRadioGroupSelectedObserver_vtableRead();
void igRadioGroupSelectedObserver_arkRegister();
void igRadioGroupSelectedObserver_register();
void *igRadioGroupSelectedObserver_getMetaCall();
void igRadioGroupSelectedObserver_fieldInit();
void *fn_8010E974();
void *igRadioGroup_getMeta();
void *igRadioGroup_vtableRead();
void igRadioGroup_arkRegister();
void igRadioGroup_register();
void *igRadioGroup_getMetaCall();
}
struct UnknownGenRoot8010DE3C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010DE3C(){igObject_construct(this);}
};
struct UnknownGenObject8010DE3C_0 : UnknownGenRoot8010DE3C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject8010DE3C_0(){unknown00=lbl_80497C9C;}
};
struct UnknownGenObject8010DE3C : UnknownGenObject8010DE3C_0 {
 char unknown0C[4];
 inline ~UnknownGenObject8010DE3C(){unknown00=igClearRenderer_vtable;}
};
struct UnknownGenRoot8010E074 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010E074(){igObject_construct(this);}
};
struct UnknownGenObject8010E074_0 : UnknownGenRoot8010E074 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject8010E074_0(){unknown00=igDependencyOrderedList_vtable;}
};
struct UnknownGenObject8010E074_1 : UnknownGenObject8010E074_0 {
 inline ~UnknownGenObject8010E074_1(){unknown00=lbl_80497BE4;}
};
struct UnknownGenObject8010E074 : UnknownGenObject8010E074_1 {
 char unknown18[16];
 inline ~UnknownGenObject8010E074(){unknown00=igRendererOrderedList_vtable;}
};
struct UnknownGenObject8010E474_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8010E5D4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8010E7E4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot8010E9EC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010E9EC(){igObject_construct(this);}
};
struct UnknownGenObject8010E9EC : UnknownGenRoot8010E9EC {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[20];
 inline ~UnknownGenObject8010E9EC(){unknown00=igRadioGroup_vtable;}
};
extern "C" {
void *fn_8010E3FC(){
 if(!igOnOffValueObserverList_meta) igOnOffValueObserverList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igOnOffValueObserverList_meta;
}
}
#pragma pop
}

namespace igOnOffValueObserverList {
// igOnOffValueObserverList: Alchemy class registration (0x8010E438..0x8010E598). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igOnOffValueObserverList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_8010CBD4();
extern char igOnOffValueObserverList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_80497A5C[];
}

struct Instance_8010E474_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igOnOffValueObserverList)

void *igOnOffValueObserverList_vtableRead()
{
    Instance_8010E474_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_80497A5C;
    object.__vtable = igOnOffValueObserverList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igOnOffValueObserverList)

void igOnOffValueObserverList_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igOnOffValueObserverList_meta, igObjectList_register,
                       fn_80024180, igOnOffValueObserverList_getMetaCall,
                       igOnOffValueObserverList_className, 0x14,
                       igOnOffValueObserverList_vtableRead, 0, 0, igOnOffValueObserverList_dependencies);
}

META_GET_META_CALL(igOnOffValueObserverList)

}
#pragma pop
}

namespace igOnOffValueObserver {
// igOnOffValueObserver: Alchemy class registration (0x8010E598..0x8010E6DC). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igOnOffValueObserver)
META_DECLARE(igView)

extern "C" {
void fn_8010CBD4();
void *fn_8010E6DC();
extern char igOnOffValueObserver_dependencies[8];
extern char lbl_80495AD8[];
}

struct Instance_8010E5D4_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igOnOffValueObserver)

void *igOnOffValueObserver_vtableRead()
{
    Instance_8010E5D4_0 object;
    igObject_construct(&object);
    object.__vtable = lbl_80495AD8;
    object.__vtable = igOnOffValueObserver_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igOnOffValueObserver)

void igOnOffValueObserver_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igOnOffValueObserver_meta, igView_register,
                       fn_8010E6DC, igOnOffValueObserver_getMetaCall,
                       igOnOffValueObserver_className, 0x10,
                       igOnOffValueObserver_vtableRead, igOnOffValueObserver_fieldInit, 0, igOnOffValueObserver_dependencies);
}

META_GET_META_CALL(igOnOffValueObserver)

}
#pragma pop
}

namespace unknown8010E6DC {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *fn_800CE788();
void fn_8010CBD4();
void igDependencyOrderedList_register();
void igObjectList_register();
void igObject_register();
void igRadioGroup_fieldInit();
void igView_register();
extern char igDataList_vtable[];
extern char igDependencyOrderedList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char lbl_80495AD8[];
extern char igClearRenderer_vtable[];
extern char igOnOffValueObserver_vtable[];
extern char igRadioGroupSelectedObserver_vtable[];
extern char igRadioGroup_vtable[];
extern char igOnOffValueObserverList_vtable[];
extern char lbl_80497A5C[];
extern char igRendererOrderedList_vtable[];
extern char lbl_80497BE4[];
extern char lbl_80497C9C[];
extern char igClearRenderer_fieldTypes[4];
extern char igClearRenderer_fieldNames[4];
extern char igClearRenderer_fieldStorage[4];
extern char igClearRenderer_fieldOffsets[4];
extern char igRendererOrderedList_dependencies[8];
extern char igRenderer_dependencies[8];
extern char igRenderer_fieldTypes[4];
extern char igRenderer_fieldNames[4];
extern char igRenderer_fieldStorage[4];
extern char igRenderer_fieldOffsets[4];
extern char igOnOffValueObserverList_dependencies[8];
extern char igOnOffValueObserver_dependencies[8];
extern char igOnOffValueObserver_fieldTypes[4];
extern char igOnOffValueObserver_fieldNames[4];
extern char igOnOffValueObserver_fieldStorage[4];
extern char igOnOffValueObserver_fieldOffsets[4];
extern char igRadioGroupSelectedObserver_dependencies[8];
extern char igRadioGroupSelectedObserver_fieldTypes[4];
extern char igRadioGroupSelectedObserver_fieldNames[4];
extern char igRadioGroupSelectedObserver_fieldStorage[4];
extern char igRadioGroupSelectedObserver_fieldOffsets[4];
extern void *igDependencyOrderedList_meta;
extern void *lbl_805621F4;
extern void *igView_meta;
extern void *igClearRenderer_meta;
extern void *igRendererOrderedList_meta;
extern void *igRenderer_meta;
extern void *igOnOffValueObserverList_meta;
extern void *igOnOffValueObserver_meta;
extern void *igRadioGroupSelectedObserver_meta;
extern void *igRadioGroup_meta;
void *igClearRenderer_getMeta();
void *igClearRenderer_vtableRead();
void igClearRenderer_arkRegister();
void igClearRenderer_register();
void *igClearRenderer_getMetaCall();
void *fn_8010DF8C();
void igClearRenderer_fieldInit();
void *igRendererOrderedList_getMeta();
void *igRendererOrderedList_vtableRead();
void igRendererOrderedList_arkRegister();
void igRendererOrderedList_register();
void *igRendererOrderedList_getMetaCall();
void *fn_8010E280();
void *igRenderer_getMeta();
void igRenderer_arkRegister();
void igRenderer_register();
void *igRenderer_getMetaCall();
void igRenderer_fieldInit();
void *igOnOffValueObserverList_getMeta();
void *igOnOffValueObserverList_vtableRead();
void igOnOffValueObserverList_arkRegister();
void igOnOffValueObserverList_register();
void *igOnOffValueObserverList_getMetaCall();
void *igOnOffValueObserver_getMeta();
void *igOnOffValueObserver_vtableRead();
void igOnOffValueObserver_arkRegister();
void igOnOffValueObserver_register();
void *igOnOffValueObserver_getMetaCall();
void *fn_8010E6DC();
void igOnOffValueObserver_fieldInit();
void *igRadioGroupSelectedObserver_getMeta();
void *igRadioGroupSelectedObserver_vtableRead();
void igRadioGroupSelectedObserver_arkRegister();
void igRadioGroupSelectedObserver_register();
void *igRadioGroupSelectedObserver_getMetaCall();
void igRadioGroupSelectedObserver_fieldInit();
void *fn_8010E974();
void *igRadioGroup_getMeta();
void *igRadioGroup_vtableRead();
void igRadioGroup_arkRegister();
void igRadioGroup_register();
void *igRadioGroup_getMetaCall();
}
struct UnknownGenRoot8010DE3C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010DE3C(){igObject_construct(this);}
};
struct UnknownGenObject8010DE3C_0 : UnknownGenRoot8010DE3C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject8010DE3C_0(){unknown00=lbl_80497C9C;}
};
struct UnknownGenObject8010DE3C : UnknownGenObject8010DE3C_0 {
 char unknown0C[4];
 inline ~UnknownGenObject8010DE3C(){unknown00=igClearRenderer_vtable;}
};
struct UnknownGenRoot8010E074 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010E074(){igObject_construct(this);}
};
struct UnknownGenObject8010E074_0 : UnknownGenRoot8010E074 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject8010E074_0(){unknown00=igDependencyOrderedList_vtable;}
};
struct UnknownGenObject8010E074_1 : UnknownGenObject8010E074_0 {
 inline ~UnknownGenObject8010E074_1(){unknown00=lbl_80497BE4;}
};
struct UnknownGenObject8010E074 : UnknownGenObject8010E074_1 {
 char unknown18[16];
 inline ~UnknownGenObject8010E074(){unknown00=igRendererOrderedList_vtable;}
};
struct UnknownGenObject8010E474_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8010E5D4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8010E7E4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot8010E9EC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010E9EC(){igObject_construct(this);}
};
struct UnknownGenObject8010E9EC : UnknownGenRoot8010E9EC {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[20];
 inline ~UnknownGenObject8010E9EC(){unknown00=igRadioGroup_vtable;}
};
extern "C" {
void *fn_8010E6DC(){return igView_meta;}
}
#pragma pop
}

namespace igOnOffValueObserver_2 {
// igOnOffValueObserver: Alchemy class registration (0x8010E6E4..0x8010E76C). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igOnOffValueObserver)

extern "C" {
void *fn_8010E974();
extern char igOnOffValueObserver_fieldNames[4];
extern char igOnOffValueObserver_fieldOffsets[4];
extern char igOnOffValueObserver_fieldStorage[4];
extern char igOnOffValueObserver_fieldTypes[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igOnOffValueObserver_fieldInit()
{
    Meta::igMetaObject *meta = igOnOffValueObserver_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igOnOffValueObserver_fieldTypes, 1);
    Meta::igObjectRefMetaField *groupField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_8010E974();
    groupField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    groupField->_refCounted = false;
    meta_setupFields(meta, igOnOffValueObserver_fieldNames, igOnOffValueObserver_fieldStorage, igOnOffValueObserver_fieldOffsets, base);
}

}
#pragma pop
}

namespace unknown8010E76C {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *fn_800CE788();
void fn_8010CBD4();
void igDependencyOrderedList_register();
void igObjectList_register();
void igObject_register();
void igRadioGroup_fieldInit();
void igView_register();
extern char igDataList_vtable[];
extern char igDependencyOrderedList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char lbl_80495AD8[];
extern char igClearRenderer_vtable[];
extern char igOnOffValueObserver_vtable[];
extern char igRadioGroupSelectedObserver_vtable[];
extern char igRadioGroup_vtable[];
extern char igOnOffValueObserverList_vtable[];
extern char lbl_80497A5C[];
extern char igRendererOrderedList_vtable[];
extern char lbl_80497BE4[];
extern char lbl_80497C9C[];
extern char igClearRenderer_fieldTypes[4];
extern char igClearRenderer_fieldNames[4];
extern char igClearRenderer_fieldStorage[4];
extern char igClearRenderer_fieldOffsets[4];
extern char igRendererOrderedList_dependencies[8];
extern char igRenderer_dependencies[8];
extern char igRenderer_fieldTypes[4];
extern char igRenderer_fieldNames[4];
extern char igRenderer_fieldStorage[4];
extern char igRenderer_fieldOffsets[4];
extern char igOnOffValueObserverList_dependencies[8];
extern char igOnOffValueObserver_dependencies[8];
extern char igOnOffValueObserver_fieldTypes[4];
extern char igOnOffValueObserver_fieldNames[4];
extern char igOnOffValueObserver_fieldStorage[4];
extern char igOnOffValueObserver_fieldOffsets[4];
extern char igRadioGroupSelectedObserver_dependencies[8];
extern char igRadioGroupSelectedObserver_fieldTypes[4];
extern char igRadioGroupSelectedObserver_fieldNames[4];
extern char igRadioGroupSelectedObserver_fieldStorage[4];
extern char igRadioGroupSelectedObserver_fieldOffsets[4];
extern void *igDependencyOrderedList_meta;
extern void *lbl_805621F4;
extern void *igView_meta;
extern void *igClearRenderer_meta;
extern void *igRendererOrderedList_meta;
extern void *igRenderer_meta;
extern void *igOnOffValueObserverList_meta;
extern void *igOnOffValueObserver_meta;
extern void *igRadioGroupSelectedObserver_meta;
extern void *igRadioGroup_meta;
void *igClearRenderer_getMeta();
void *igClearRenderer_vtableRead();
void igClearRenderer_arkRegister();
void igClearRenderer_register();
void *igClearRenderer_getMetaCall();
void *fn_8010DF8C();
void igClearRenderer_fieldInit();
void *igRendererOrderedList_getMeta();
void *igRendererOrderedList_vtableRead();
void igRendererOrderedList_arkRegister();
void igRendererOrderedList_register();
void *igRendererOrderedList_getMetaCall();
void *fn_8010E280();
void *igRenderer_getMeta();
void igRenderer_arkRegister();
void igRenderer_register();
void *igRenderer_getMetaCall();
void igRenderer_fieldInit();
void *igOnOffValueObserverList_getMeta();
void *igOnOffValueObserverList_vtableRead();
void igOnOffValueObserverList_arkRegister();
void igOnOffValueObserverList_register();
void *igOnOffValueObserverList_getMetaCall();
void *igOnOffValueObserver_getMeta();
void *igOnOffValueObserver_vtableRead();
void igOnOffValueObserver_arkRegister();
void igOnOffValueObserver_register();
void *igOnOffValueObserver_getMetaCall();
void *fn_8010E6DC();
void igOnOffValueObserver_fieldInit();
void *igRadioGroupSelectedObserver_getMeta();
void *igRadioGroupSelectedObserver_vtableRead();
void igRadioGroupSelectedObserver_arkRegister();
void igRadioGroupSelectedObserver_register();
void *igRadioGroupSelectedObserver_getMetaCall();
void igRadioGroupSelectedObserver_fieldInit();
void *fn_8010E974();
void *igRadioGroup_getMeta();
void *igRadioGroup_vtableRead();
void igRadioGroup_arkRegister();
void igRadioGroup_register();
void *igRadioGroup_getMetaCall();
}
struct UnknownGenRoot8010DE3C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010DE3C(){igObject_construct(this);}
};
struct UnknownGenObject8010DE3C_0 : UnknownGenRoot8010DE3C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject8010DE3C_0(){unknown00=lbl_80497C9C;}
};
struct UnknownGenObject8010DE3C : UnknownGenObject8010DE3C_0 {
 char unknown0C[4];
 inline ~UnknownGenObject8010DE3C(){unknown00=igClearRenderer_vtable;}
};
struct UnknownGenRoot8010E074 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010E074(){igObject_construct(this);}
};
struct UnknownGenObject8010E074_0 : UnknownGenRoot8010E074 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject8010E074_0(){unknown00=igDependencyOrderedList_vtable;}
};
struct UnknownGenObject8010E074_1 : UnknownGenObject8010E074_0 {
 inline ~UnknownGenObject8010E074_1(){unknown00=lbl_80497BE4;}
};
struct UnknownGenObject8010E074 : UnknownGenObject8010E074_1 {
 char unknown18[16];
 inline ~UnknownGenObject8010E074(){unknown00=igRendererOrderedList_vtable;}
};
struct UnknownGenObject8010E474_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8010E5D4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8010E7E4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot8010E9EC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010E9EC(){igObject_construct(this);}
};
struct UnknownGenObject8010E9EC : UnknownGenRoot8010E9EC {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[20];
 inline ~UnknownGenObject8010E9EC(){unknown00=igRadioGroup_vtable;}
};
extern "C" {
void *fn_8010E76C(){
 if(!igRadioGroupSelectedObserver_meta) igRadioGroupSelectedObserver_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igRadioGroupSelectedObserver_meta;
}
}
#pragma pop
}

namespace igRadioGroupSelectedObserver {
// igRadioGroupSelectedObserver: Alchemy class registration (0x8010E7A8..0x8010E974). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igRadioGroupSelectedObserver)
META_DECLARE(igView)

extern "C" {
void fn_8010CBD4();
void *fn_8010E6DC();
void *fn_8010E974();
extern char igRadioGroupSelectedObserver_dependencies[8];
extern char igRadioGroupSelectedObserver_fieldNames[4];
extern char igRadioGroupSelectedObserver_fieldOffsets[4];
extern char igRadioGroupSelectedObserver_fieldStorage[4];
extern char igRadioGroupSelectedObserver_fieldTypes[4];
extern char lbl_80495AD8[];
}

struct Instance_8010E7E4_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igRadioGroupSelectedObserver)

void *igRadioGroupSelectedObserver_vtableRead()
{
    Instance_8010E7E4_0 object;
    igObject_construct(&object);
    object.__vtable = lbl_80495AD8;
    object.__vtable = igRadioGroupSelectedObserver_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igRadioGroupSelectedObserver)

void igRadioGroupSelectedObserver_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igRadioGroupSelectedObserver_meta, igView_register,
                       fn_8010E6DC, igRadioGroupSelectedObserver_getMetaCall,
                       igRadioGroupSelectedObserver_className, 0x10,
                       igRadioGroupSelectedObserver_vtableRead, igRadioGroupSelectedObserver_fieldInit, 0, igRadioGroupSelectedObserver_dependencies);
}

META_GET_META_CALL(igRadioGroupSelectedObserver)

void igRadioGroupSelectedObserver_fieldInit()
{
    Meta::igMetaObject *meta = igRadioGroupSelectedObserver_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igRadioGroupSelectedObserver_fieldTypes, 1);
    Meta::igObjectRefMetaField *groupField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_8010E974();
    groupField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    groupField->_refCounted = false;
    meta_setupFields(meta, igRadioGroupSelectedObserver_fieldNames, igRadioGroupSelectedObserver_fieldStorage, igRadioGroupSelectedObserver_fieldOffsets, base);
}

}
#pragma pop
}

namespace unknown8010E974 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *fn_800CE788();
void fn_8010CBD4();
void igDependencyOrderedList_register();
void igObjectList_register();
void igObject_register();
void igRadioGroup_fieldInit();
void igView_register();
extern char igDataList_vtable[];
extern char igDependencyOrderedList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char lbl_80495AD8[];
extern char igClearRenderer_vtable[];
extern char igOnOffValueObserver_vtable[];
extern char igRadioGroupSelectedObserver_vtable[];
extern char igRadioGroup_vtable[];
extern char igOnOffValueObserverList_vtable[];
extern char lbl_80497A5C[];
extern char igRendererOrderedList_vtable[];
extern char lbl_80497BE4[];
extern char lbl_80497C9C[];
extern char igClearRenderer_fieldTypes[4];
extern char igClearRenderer_fieldNames[4];
extern char igClearRenderer_fieldStorage[4];
extern char igClearRenderer_fieldOffsets[4];
extern char igRendererOrderedList_dependencies[8];
extern char igRenderer_dependencies[8];
extern char igRenderer_fieldTypes[4];
extern char igRenderer_fieldNames[4];
extern char igRenderer_fieldStorage[4];
extern char igRenderer_fieldOffsets[4];
extern char igOnOffValueObserverList_dependencies[8];
extern char igOnOffValueObserver_dependencies[8];
extern char igOnOffValueObserver_fieldTypes[4];
extern char igOnOffValueObserver_fieldNames[4];
extern char igOnOffValueObserver_fieldStorage[4];
extern char igOnOffValueObserver_fieldOffsets[4];
extern char igRadioGroupSelectedObserver_dependencies[8];
extern char igRadioGroupSelectedObserver_fieldTypes[4];
extern char igRadioGroupSelectedObserver_fieldNames[4];
extern char igRadioGroupSelectedObserver_fieldStorage[4];
extern char igRadioGroupSelectedObserver_fieldOffsets[4];
extern void *igDependencyOrderedList_meta;
extern void *lbl_805621F4;
extern void *igView_meta;
extern void *igClearRenderer_meta;
extern void *igRendererOrderedList_meta;
extern void *igRenderer_meta;
extern void *igOnOffValueObserverList_meta;
extern void *igOnOffValueObserver_meta;
extern void *igRadioGroupSelectedObserver_meta;
extern void *igRadioGroup_meta;
void *igClearRenderer_getMeta();
void *igClearRenderer_vtableRead();
void igClearRenderer_arkRegister();
void igClearRenderer_register();
void *igClearRenderer_getMetaCall();
void *fn_8010DF8C();
void igClearRenderer_fieldInit();
void *igRendererOrderedList_getMeta();
void *igRendererOrderedList_vtableRead();
void igRendererOrderedList_arkRegister();
void igRendererOrderedList_register();
void *igRendererOrderedList_getMetaCall();
void *fn_8010E280();
void *igRenderer_getMeta();
void igRenderer_arkRegister();
void igRenderer_register();
void *igRenderer_getMetaCall();
void igRenderer_fieldInit();
void *igOnOffValueObserverList_getMeta();
void *igOnOffValueObserverList_vtableRead();
void igOnOffValueObserverList_arkRegister();
void igOnOffValueObserverList_register();
void *igOnOffValueObserverList_getMetaCall();
void *igOnOffValueObserver_getMeta();
void *igOnOffValueObserver_vtableRead();
void igOnOffValueObserver_arkRegister();
void igOnOffValueObserver_register();
void *igOnOffValueObserver_getMetaCall();
void *fn_8010E6DC();
void igOnOffValueObserver_fieldInit();
void *igRadioGroupSelectedObserver_getMeta();
void *igRadioGroupSelectedObserver_vtableRead();
void igRadioGroupSelectedObserver_arkRegister();
void igRadioGroupSelectedObserver_register();
void *igRadioGroupSelectedObserver_getMetaCall();
void igRadioGroupSelectedObserver_fieldInit();
void *fn_8010E974();
void *igRadioGroup_getMeta();
void *igRadioGroup_vtableRead();
void igRadioGroup_arkRegister();
void igRadioGroup_register();
void *igRadioGroup_getMetaCall();
}
struct UnknownGenRoot8010DE3C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010DE3C(){igObject_construct(this);}
};
struct UnknownGenObject8010DE3C_0 : UnknownGenRoot8010DE3C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject8010DE3C_0(){unknown00=lbl_80497C9C;}
};
struct UnknownGenObject8010DE3C : UnknownGenObject8010DE3C_0 {
 char unknown0C[4];
 inline ~UnknownGenObject8010DE3C(){unknown00=igClearRenderer_vtable;}
};
struct UnknownGenRoot8010E074 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010E074(){igObject_construct(this);}
};
struct UnknownGenObject8010E074_0 : UnknownGenRoot8010E074 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject8010E074_0(){unknown00=igDependencyOrderedList_vtable;}
};
struct UnknownGenObject8010E074_1 : UnknownGenObject8010E074_0 {
 inline ~UnknownGenObject8010E074_1(){unknown00=lbl_80497BE4;}
};
struct UnknownGenObject8010E074 : UnknownGenObject8010E074_1 {
 char unknown18[16];
 inline ~UnknownGenObject8010E074(){unknown00=igRendererOrderedList_vtable;}
};
struct UnknownGenObject8010E474_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8010E5D4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8010E7E4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot8010E9EC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010E9EC(){igObject_construct(this);}
};
struct UnknownGenObject8010E9EC : UnknownGenRoot8010E9EC {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[20];
 inline ~UnknownGenObject8010E9EC(){unknown00=igRadioGroup_vtable;}
};
extern "C" {
void *fn_8010E974(){
 if(!igRadioGroup_meta) igRadioGroup_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igRadioGroup_meta;
}
void *igRadioGroup_getMeta(){
 if(!igRadioGroup_meta || !(reinterpret_cast<unsigned int *>(igRadioGroup_meta)[0x24/4]&4)) igRadioGroup_arkRegister();
 return igRadioGroup_meta;
}
void *igRadioGroup_vtableRead(){
 UnknownGenObject8010E9EC object;
 object.unknown00=igRadioGroup_vtable;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igRadioGroup_arkRegister(){
 meta_registerNow((int)igRadioGroup_register);
}
void igRadioGroup_register(){
 fn_8010CBD4();
 meta_registerClass(0,(int)&igRadioGroup_meta,(int)igObject_register,(int)fn_800237D0,(int)igRadioGroup_getMetaCall,(int)igRadioGroup_className,32,(int)igRadioGroup_vtableRead,(int)igRadioGroup_fieldInit,0,(int)igRadioGroup_dependencies);
}
void *igRadioGroup_getMetaCall(){return igRadioGroup_getMeta();}
}
#pragma pop
}

namespace igRadioGroup_fieldInit {
// igRadioGroup: Alchemy class registration (0x8010EBAC..0x8010ECA4). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igRadioGroup)

extern "C" {
void fn_8003EC68(void *, int);
void fn_80053650(void *, int);
void *fn_8010E3FC();
void *fn_8010E76C();
void *fn_8010ECA4();
}

#pragma push
#pragma auto_inline off
extern "C" {

void igRadioGroup_fieldInit()
{
    Meta::igMetaObject *meta = igRadioGroup_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igRadioGroup_fieldTypes, 6);
    Meta::igObjectRefMetaField *modelField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_v2 = fn_8010ECA4();
    modelField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v2);
    modelField->_construct = true;
    Meta::igObjectRefMetaField *selectedObserverField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_v4 = fn_8010E76C();
    selectedObserverField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v4);
    selectedObserverField->_construct = true;
    Meta::igObjectRefMetaField *observerListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    void *value_v6 = fn_8010E3FC();
    observerListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v6);
    observerListField->_construct = true;
    Meta::igBoolMetaField *alwaysSelectedField = static_cast<Meta::igBoolMetaField *>(meta_field(meta, base + 3));
    fn_8003EC68(alwaysSelectedField, 1);
    Meta::igIntMetaField *lastSelectedField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 4));
    fn_80053650(lastSelectedField, -1);
    meta_setupFields(meta, igRadioGroup_fieldNames, igRadioGroup_fieldStorage, igRadioGroup_fieldOffsets, base);
}

}
#pragma pop
}

namespace unknown8010ECA4 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void fn_80053650(void *,int);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8010CBD4();
void *fn_8010CC08();
void *fn_8010D6A0();
void igEventReceiver_register();
void igGuiComponentModel_register();
void igHotKeyBinding_fieldInit();
void igObjectList_register();
void igObject_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igModel_vtable[];
extern char igHotKeyEventReceiver_vtable[];
extern char igHotKeyBinding_vtable[];
extern char igHotKeyBindingList_vtable[];
extern char lbl_804976C0[];
extern char igEventReceiver_vtable[];
extern char igOnOffModel_vtable[];
extern char igRadioGroupModel_vtable[];
extern char igGuiComponentModel_vtable[];
extern char igRadioGroupModel_fieldTypes[4];
extern char igRadioGroupModel_fieldNames[4];
extern char igRadioGroupModel_fieldStorage[4];
extern char igRadioGroupModel_fieldOffsets[4];
extern char igOnOffModel_fieldTypes[4];
extern char igOnOffModel_fieldNames[4];
extern char igOnOffModel_fieldStorage[4];
extern char igOnOffModel_fieldOffsets[4];
extern char igModel_dependencies[8];
extern char lbl_8055EFEC[8];
extern char igModel_fieldTypes[4];
extern char igModel_fieldNames[4];
extern char igModel_fieldStorage[4];
extern char igModel_fieldOffsets[4];
extern char igHotKeyEventReceiver_dependencies[8];
extern char igHotKeyEventReceiver_fieldTypes[4];
extern char igHotKeyEventReceiver_fieldNames[4];
extern char igHotKeyEventReceiver_fieldStorage[4];
extern char igHotKeyEventReceiver_fieldOffsets[4];
extern char igHotKeyBindingList_dependencies[8];
extern char igHotKeyBinding_dependencies[8];
extern void *lbl_805621F4;
extern void *igRadioGroupModel_meta;
extern void *igOnOffModel_meta;
extern void *igModel_meta;
extern void *igHotKeyEventReceiver_meta;
extern void *igHotKeyBindingList_meta;
extern void *igHotKeyBinding_meta;
extern void *igEventReceiver_meta;
void *igRadioGroupModel_getMeta();
void *igRadioGroupModel_vtableRead();
void igRadioGroupModel_arkRegister();
void igRadioGroupModel_register();
void *igRadioGroupModel_getMetaCall();
void *fn_8010EE6C();
void igRadioGroupModel_fieldInit();
void *igOnOffModel_getMeta();
void *igOnOffModel_vtableRead();
void igOnOffModel_arkRegister();
void igOnOffModel_register();
void *igOnOffModel_getMetaCall();
void igOnOffModel_fieldInit();
void *igModel_getMeta();
void *igModel_vtableRead();
void igModel_arkRegister();
void igModel_register();
void *igModel_getMetaCall();
void igModel_fieldInit();
void *igHotKeyEventReceiver_getMeta();
void *igHotKeyEventReceiver_vtableRead();
void igHotKeyEventReceiver_arkRegister();
void igHotKeyEventReceiver_register();
void *igHotKeyEventReceiver_getMetaCall();
void *fn_8010F4FC();
void igHotKeyEventReceiver_fieldInit();
void *fn_8010F58C();
void *igHotKeyBindingList_getMeta();
void *igHotKeyBindingList_vtableRead();
void igHotKeyBindingList_arkRegister();
void igHotKeyBindingList_register();
void *igHotKeyBindingList_getMetaCall();
void *igHotKeyBinding_getMeta();
void *igHotKeyBinding_vtableRead();
void igHotKeyBinding_arkRegister();
void igHotKeyBinding_register();
void *igHotKeyBinding_getMetaCall();
}
struct UnknownGenRoot8010ED1C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010ED1C(){igObject_construct(this);}
};
struct UnknownGenObject8010ED1C_0 : UnknownGenRoot8010ED1C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject8010ED1C_0(){unknown00=igModel_vtable;}
};
struct UnknownGenObject8010ED1C : UnknownGenObject8010ED1C_0 {
 char unknown0C[4];
 inline ~UnknownGenObject8010ED1C(){unknown00=igRadioGroupModel_vtable;}
};
struct UnknownGenRoot8010EF2C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010EF2C(){igObject_construct(this);}
};
struct UnknownGenObject8010EF2C_0 : UnknownGenRoot8010EF2C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject8010EF2C_0(){unknown00=igModel_vtable;}
};
struct UnknownGenObject8010EF2C_1 : UnknownGenObject8010EF2C_0 {
 inline ~UnknownGenObject8010EF2C_1(){unknown00=igGuiComponentModel_vtable;}
};
struct UnknownGenObject8010EF2C : UnknownGenObject8010EF2C_1 {
 char unknown0C[36];
 inline ~UnknownGenObject8010EF2C(){unknown00=igOnOffModel_vtable;}
};
struct UnknownGenRoot8010F16C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010F16C(){igObject_construct(this);}
};
struct UnknownGenObject8010F16C : UnknownGenRoot8010F16C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject8010F16C(){unknown00=igModel_vtable;}
};
struct UnknownGenRoot8010F3AC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010F3AC(){igObject_construct(this);}
};
struct UnknownGenObject8010F3AC : UnknownGenRoot8010F3AC {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject8010F3AC(){unknown00=igHotKeyEventReceiver_vtable;}
};
struct UnknownGenObject8010F604_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot8010F79C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010F79C(){igObject_construct(this);}
};
struct UnknownGenObject8010F79C : UnknownGenRoot8010F79C {
 char unknown04[12];
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject8010F79C(){unknown00=igHotKeyBinding_vtable;}
};
extern "C" {
void *fn_8010ECA4(){
 if(!igRadioGroupModel_meta) igRadioGroupModel_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igRadioGroupModel_meta;
}
}
#pragma pop
}

namespace igRadioGroupModel {
// igRadioGroupModel: Alchemy class registration (0x8010ECE0..0x8010EE6C). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igRadioGroupModel)
META_DECLARE(igModel)

extern "C" {
void fn_8010CBD4();
void *fn_8010EE6C();
}

struct igModelInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _views;
    inline ~igModelInstance() { __vtable = igModel_vtable; }
};

struct igRadioGroupModelInstance : igModelInstance {
    char unknown0C[4];
    inline ~igRadioGroupModelInstance() { __vtable = igRadioGroupModel_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igRadioGroupModel)

void *igRadioGroupModel_vtableRead()
{
    igRadioGroupModelInstance object;
    object.__vtable = igModel_vtable;
    object._views._value = 0;
    object.__vtable = igRadioGroupModel_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igRadioGroupModel)

void igRadioGroupModel_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igRadioGroupModel_meta, igModel_register,
                       fn_8010EE6C, igRadioGroupModel_getMetaCall,
                       igRadioGroupModel_className, 0x10,
                       igRadioGroupModel_vtableRead, igRadioGroupModel_fieldInit, 0, 0);
}

META_GET_META_CALL(igRadioGroupModel)

}
#pragma pop
}

namespace unknown8010EE6C {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void fn_80053650(void *,int);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8010CBD4();
void *fn_8010CC08();
void *fn_8010D6A0();
void igEventReceiver_register();
void igGuiComponentModel_register();
void igHotKeyBinding_fieldInit();
void igObjectList_register();
void igObject_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igModel_vtable[];
extern char igHotKeyEventReceiver_vtable[];
extern char igHotKeyBinding_vtable[];
extern char igHotKeyBindingList_vtable[];
extern char lbl_804976C0[];
extern char igEventReceiver_vtable[];
extern char igOnOffModel_vtable[];
extern char igRadioGroupModel_vtable[];
extern char igGuiComponentModel_vtable[];
extern char igRadioGroupModel_fieldTypes[4];
extern char igRadioGroupModel_fieldNames[4];
extern char igRadioGroupModel_fieldStorage[4];
extern char igRadioGroupModel_fieldOffsets[4];
extern char igOnOffModel_fieldTypes[4];
extern char igOnOffModel_fieldNames[4];
extern char igOnOffModel_fieldStorage[4];
extern char igOnOffModel_fieldOffsets[4];
extern char igModel_dependencies[8];
extern char lbl_8055EFEC[8];
extern char igModel_fieldTypes[4];
extern char igModel_fieldNames[4];
extern char igModel_fieldStorage[4];
extern char igModel_fieldOffsets[4];
extern char igHotKeyEventReceiver_dependencies[8];
extern char igHotKeyEventReceiver_fieldTypes[4];
extern char igHotKeyEventReceiver_fieldNames[4];
extern char igHotKeyEventReceiver_fieldStorage[4];
extern char igHotKeyEventReceiver_fieldOffsets[4];
extern char igHotKeyBindingList_dependencies[8];
extern char igHotKeyBinding_dependencies[8];
extern void *lbl_805621F4;
extern void *igRadioGroupModel_meta;
extern void *igOnOffModel_meta;
extern void *igModel_meta;
extern void *igHotKeyEventReceiver_meta;
extern void *igHotKeyBindingList_meta;
extern void *igHotKeyBinding_meta;
extern void *igEventReceiver_meta;
void *igRadioGroupModel_getMeta();
void *igRadioGroupModel_vtableRead();
void igRadioGroupModel_arkRegister();
void igRadioGroupModel_register();
void *igRadioGroupModel_getMetaCall();
void *fn_8010EE6C();
void igRadioGroupModel_fieldInit();
void *igOnOffModel_getMeta();
void *igOnOffModel_vtableRead();
void igOnOffModel_arkRegister();
void igOnOffModel_register();
void *igOnOffModel_getMetaCall();
void igOnOffModel_fieldInit();
void *igModel_getMeta();
void *igModel_vtableRead();
void igModel_arkRegister();
void igModel_register();
void *igModel_getMetaCall();
void igModel_fieldInit();
void *igHotKeyEventReceiver_getMeta();
void *igHotKeyEventReceiver_vtableRead();
void igHotKeyEventReceiver_arkRegister();
void igHotKeyEventReceiver_register();
void *igHotKeyEventReceiver_getMetaCall();
void *fn_8010F4FC();
void igHotKeyEventReceiver_fieldInit();
void *fn_8010F58C();
void *igHotKeyBindingList_getMeta();
void *igHotKeyBindingList_vtableRead();
void igHotKeyBindingList_arkRegister();
void igHotKeyBindingList_register();
void *igHotKeyBindingList_getMetaCall();
void *igHotKeyBinding_getMeta();
void *igHotKeyBinding_vtableRead();
void igHotKeyBinding_arkRegister();
void igHotKeyBinding_register();
void *igHotKeyBinding_getMetaCall();
}
struct UnknownGenRoot8010ED1C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010ED1C(){igObject_construct(this);}
};
struct UnknownGenObject8010ED1C_0 : UnknownGenRoot8010ED1C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject8010ED1C_0(){unknown00=igModel_vtable;}
};
struct UnknownGenObject8010ED1C : UnknownGenObject8010ED1C_0 {
 char unknown0C[4];
 inline ~UnknownGenObject8010ED1C(){unknown00=igRadioGroupModel_vtable;}
};
struct UnknownGenRoot8010EF2C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010EF2C(){igObject_construct(this);}
};
struct UnknownGenObject8010EF2C_0 : UnknownGenRoot8010EF2C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject8010EF2C_0(){unknown00=igModel_vtable;}
};
struct UnknownGenObject8010EF2C_1 : UnknownGenObject8010EF2C_0 {
 inline ~UnknownGenObject8010EF2C_1(){unknown00=igGuiComponentModel_vtable;}
};
struct UnknownGenObject8010EF2C : UnknownGenObject8010EF2C_1 {
 char unknown0C[36];
 inline ~UnknownGenObject8010EF2C(){unknown00=igOnOffModel_vtable;}
};
struct UnknownGenRoot8010F16C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010F16C(){igObject_construct(this);}
};
struct UnknownGenObject8010F16C : UnknownGenRoot8010F16C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject8010F16C(){unknown00=igModel_vtable;}
};
struct UnknownGenRoot8010F3AC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010F3AC(){igObject_construct(this);}
};
struct UnknownGenObject8010F3AC : UnknownGenRoot8010F3AC {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject8010F3AC(){unknown00=igHotKeyEventReceiver_vtable;}
};
struct UnknownGenObject8010F604_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot8010F79C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010F79C(){igObject_construct(this);}
};
struct UnknownGenObject8010F79C : UnknownGenRoot8010F79C {
 char unknown04[12];
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject8010F79C(){unknown00=igHotKeyBinding_vtable;}
};
extern "C" {
void *fn_8010EE6C(){return igModel_meta;}
}
#pragma pop
}

namespace igRadioGroupModel_2 {
// igRadioGroupModel: Alchemy class registration (0x8010EE74..0x8010EEF0). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igRadioGroupModel)

extern "C" {
void fn_80053650(void *,int);
extern char igRadioGroupModel_fieldNames[4];
extern char igRadioGroupModel_fieldOffsets[4];
extern char igRadioGroupModel_fieldStorage[4];
extern char igRadioGroupModel_fieldTypes[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igRadioGroupModel_fieldInit()
{
    Meta::igMetaObject *meta = igRadioGroupModel_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igRadioGroupModel_fieldTypes, 1);
    Meta::igIntMetaField *selectedField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base));
    fn_80053650(selectedField, -1);
    meta_setupFields(meta, igRadioGroupModel_fieldNames, igRadioGroupModel_fieldStorage, igRadioGroupModel_fieldOffsets, base);
}

}
#pragma pop
}

namespace igOnOffModel {
// igOnOffModel: Alchemy class registration (0x8010EEF0..0x8010F0F4). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igOnOffModel)
META_DECLARE(igGuiComponentModel)
META_DECLARE(igModel)

extern "C" {
void fn_8010CBD4();
void *fn_8010D6A0();
extern char igOnOffModel_fieldNames[4];
extern char igOnOffModel_fieldOffsets[4];
extern char igOnOffModel_fieldStorage[4];
extern char igOnOffModel_fieldTypes[4];
}

struct igModelInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _views;
    inline ~igModelInstance() { __vtable = igModel_vtable; }
};

struct igGuiComponentModelInstance : igModelInstance {
    inline ~igGuiComponentModelInstance() { __vtable = igGuiComponentModel_vtable; }
};

struct igOnOffModelInstance : igGuiComponentModelInstance {
    char unknown0C[36];
    inline ~igOnOffModelInstance() { __vtable = igOnOffModel_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igOnOffModel)

void *igOnOffModel_vtableRead()
{
    igOnOffModelInstance object;
    object.__vtable = igModel_vtable;
    object._views._value = 0;
    object.__vtable = igGuiComponentModel_vtable;
    object.__vtable = igOnOffModel_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igOnOffModel)

void igOnOffModel_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igOnOffModel_meta, igGuiComponentModel_register,
                       fn_8010D6A0, igOnOffModel_getMetaCall,
                       igOnOffModel_className, 0x28,
                       igOnOffModel_vtableRead, igOnOffModel_fieldInit, 0, 0);
}

META_GET_META_CALL(igOnOffModel)

void igOnOffModel_fieldInit()
{
    Meta::igMetaObject *meta = igOnOffModel_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igOnOffModel_fieldTypes, 1);
    meta_setupFields(meta, igOnOffModel_fieldNames, igOnOffModel_fieldStorage, igOnOffModel_fieldOffsets, base);
}

}
#pragma pop
}

namespace unknown8010F0F4 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void fn_80053650(void *,int);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8010CBD4();
void *fn_8010CC08();
void *fn_8010D6A0();
void igEventReceiver_register();
void igGuiComponentModel_register();
void igHotKeyBinding_fieldInit();
void igObjectList_register();
void igObject_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igModel_vtable[];
extern char igHotKeyEventReceiver_vtable[];
extern char igHotKeyBinding_vtable[];
extern char igHotKeyBindingList_vtable[];
extern char lbl_804976C0[];
extern char igEventReceiver_vtable[];
extern char igOnOffModel_vtable[];
extern char igRadioGroupModel_vtable[];
extern char igGuiComponentModel_vtable[];
extern char igRadioGroupModel_fieldTypes[4];
extern char igRadioGroupModel_fieldNames[4];
extern char igRadioGroupModel_fieldStorage[4];
extern char igRadioGroupModel_fieldOffsets[4];
extern char igOnOffModel_fieldTypes[4];
extern char igOnOffModel_fieldNames[4];
extern char igOnOffModel_fieldStorage[4];
extern char igOnOffModel_fieldOffsets[4];
extern char igModel_dependencies[8];
extern char lbl_8055EFEC[8];
extern char igModel_fieldTypes[4];
extern char igModel_fieldNames[4];
extern char igModel_fieldStorage[4];
extern char igModel_fieldOffsets[4];
extern char igHotKeyEventReceiver_dependencies[8];
extern char igHotKeyEventReceiver_fieldTypes[4];
extern char igHotKeyEventReceiver_fieldNames[4];
extern char igHotKeyEventReceiver_fieldStorage[4];
extern char igHotKeyEventReceiver_fieldOffsets[4];
extern char igHotKeyBindingList_dependencies[8];
extern char igHotKeyBinding_dependencies[8];
extern void *lbl_805621F4;
extern void *igRadioGroupModel_meta;
extern void *igOnOffModel_meta;
extern void *igModel_meta;
extern void *igHotKeyEventReceiver_meta;
extern void *igHotKeyBindingList_meta;
extern void *igHotKeyBinding_meta;
extern void *igEventReceiver_meta;
void *igRadioGroupModel_getMeta();
void *igRadioGroupModel_vtableRead();
void igRadioGroupModel_arkRegister();
void igRadioGroupModel_register();
void *igRadioGroupModel_getMetaCall();
void *fn_8010EE6C();
void igRadioGroupModel_fieldInit();
void *igOnOffModel_getMeta();
void *igOnOffModel_vtableRead();
void igOnOffModel_arkRegister();
void igOnOffModel_register();
void *igOnOffModel_getMetaCall();
void igOnOffModel_fieldInit();
void *igModel_getMeta();
void *igModel_vtableRead();
void igModel_arkRegister();
void igModel_register();
void *igModel_getMetaCall();
void igModel_fieldInit();
void *igHotKeyEventReceiver_getMeta();
void *igHotKeyEventReceiver_vtableRead();
void igHotKeyEventReceiver_arkRegister();
void igHotKeyEventReceiver_register();
void *igHotKeyEventReceiver_getMetaCall();
void *fn_8010F4FC();
void igHotKeyEventReceiver_fieldInit();
void *fn_8010F58C();
void *igHotKeyBindingList_getMeta();
void *igHotKeyBindingList_vtableRead();
void igHotKeyBindingList_arkRegister();
void igHotKeyBindingList_register();
void *igHotKeyBindingList_getMetaCall();
void *igHotKeyBinding_getMeta();
void *igHotKeyBinding_vtableRead();
void igHotKeyBinding_arkRegister();
void igHotKeyBinding_register();
void *igHotKeyBinding_getMetaCall();
}
struct UnknownGenRoot8010ED1C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010ED1C(){igObject_construct(this);}
};
struct UnknownGenObject8010ED1C_0 : UnknownGenRoot8010ED1C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject8010ED1C_0(){unknown00=igModel_vtable;}
};
struct UnknownGenObject8010ED1C : UnknownGenObject8010ED1C_0 {
 char unknown0C[4];
 inline ~UnknownGenObject8010ED1C(){unknown00=igRadioGroupModel_vtable;}
};
struct UnknownGenRoot8010EF2C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010EF2C(){igObject_construct(this);}
};
struct UnknownGenObject8010EF2C_0 : UnknownGenRoot8010EF2C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject8010EF2C_0(){unknown00=igModel_vtable;}
};
struct UnknownGenObject8010EF2C_1 : UnknownGenObject8010EF2C_0 {
 inline ~UnknownGenObject8010EF2C_1(){unknown00=igGuiComponentModel_vtable;}
};
struct UnknownGenObject8010EF2C : UnknownGenObject8010EF2C_1 {
 char unknown0C[36];
 inline ~UnknownGenObject8010EF2C(){unknown00=igOnOffModel_vtable;}
};
struct UnknownGenRoot8010F16C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010F16C(){igObject_construct(this);}
};
struct UnknownGenObject8010F16C : UnknownGenRoot8010F16C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject8010F16C(){unknown00=igModel_vtable;}
};
struct UnknownGenRoot8010F3AC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010F3AC(){igObject_construct(this);}
};
struct UnknownGenObject8010F3AC : UnknownGenRoot8010F3AC {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject8010F3AC(){unknown00=igHotKeyEventReceiver_vtable;}
};
struct UnknownGenObject8010F604_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot8010F79C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010F79C(){igObject_construct(this);}
};
struct UnknownGenObject8010F79C : UnknownGenRoot8010F79C {
 char unknown04[12];
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject8010F79C(){unknown00=igHotKeyBinding_vtable;}
};
extern "C" {
void *fn_8010F0F4(){
 if(!igModel_meta) igModel_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igModel_meta;
}
}
#pragma pop
}

namespace igModel {
// igModel: Alchemy class registration (0x8010F130..0x8010F334). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igModel)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_8010CBD4();
void *fn_8010CC08();
extern char igModel_dependencies[8];
extern char igModel_fieldNames[4];
extern char igModel_fieldOffsets[4];
extern char igModel_fieldStorage[4];
extern char igModel_fieldTypes[4];
extern char lbl_8055EFEC[8];
}

struct igModelInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _views;
    char unknown0C[4];
    inline ~igModelInstance() { __vtable = igModel_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igModel)

void *igModel_vtableRead()
{
    igModelInstance object;
    object.__vtable = igModel_vtable;
    object._views._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igModel)

void igModel_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igModel_meta, igObject_register,
                       fn_800237D0, igModel_getMetaCall,
                       lbl_8055EFEC, 0xC,
                       igModel_vtableRead, igModel_fieldInit, 0, igModel_dependencies);
}

META_GET_META_CALL(igModel)

void igModel_fieldInit()
{
    Meta::igMetaObject *meta = igModel_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igModel_fieldTypes, 1);
    Meta::igObjectRefMetaField *viewsField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_8010CC08();
    viewsField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    viewsField->_construct = true;
    meta_setupFields(meta, igModel_fieldNames, igModel_fieldStorage, igModel_fieldOffsets, base);
}

}
#pragma pop
}

namespace unknown8010F334 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void fn_80053650(void *,int);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8010CBD4();
void *fn_8010CC08();
void *fn_8010D6A0();
void igEventReceiver_register();
void igGuiComponentModel_register();
void igHotKeyBinding_fieldInit();
void igObjectList_register();
void igObject_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igModel_vtable[];
extern char igHotKeyEventReceiver_vtable[];
extern char igHotKeyBinding_vtable[];
extern char igHotKeyBindingList_vtable[];
extern char lbl_804976C0[];
extern char igEventReceiver_vtable[];
extern char igOnOffModel_vtable[];
extern char igRadioGroupModel_vtable[];
extern char igGuiComponentModel_vtable[];
extern char igRadioGroupModel_fieldTypes[4];
extern char igRadioGroupModel_fieldNames[4];
extern char igRadioGroupModel_fieldStorage[4];
extern char igRadioGroupModel_fieldOffsets[4];
extern char igOnOffModel_fieldTypes[4];
extern char igOnOffModel_fieldNames[4];
extern char igOnOffModel_fieldStorage[4];
extern char igOnOffModel_fieldOffsets[4];
extern char igModel_dependencies[8];
extern char lbl_8055EFEC[8];
extern char igModel_fieldTypes[4];
extern char igModel_fieldNames[4];
extern char igModel_fieldStorage[4];
extern char igModel_fieldOffsets[4];
extern char igHotKeyEventReceiver_dependencies[8];
extern char igHotKeyEventReceiver_fieldTypes[4];
extern char igHotKeyEventReceiver_fieldNames[4];
extern char igHotKeyEventReceiver_fieldStorage[4];
extern char igHotKeyEventReceiver_fieldOffsets[4];
extern char igHotKeyBindingList_dependencies[8];
extern char igHotKeyBinding_dependencies[8];
extern void *lbl_805621F4;
extern void *igRadioGroupModel_meta;
extern void *igOnOffModel_meta;
extern void *igModel_meta;
extern void *igHotKeyEventReceiver_meta;
extern void *igHotKeyBindingList_meta;
extern void *igHotKeyBinding_meta;
extern void *igEventReceiver_meta;
void *igRadioGroupModel_getMeta();
void *igRadioGroupModel_vtableRead();
void igRadioGroupModel_arkRegister();
void igRadioGroupModel_register();
void *igRadioGroupModel_getMetaCall();
void *fn_8010EE6C();
void igRadioGroupModel_fieldInit();
void *igOnOffModel_getMeta();
void *igOnOffModel_vtableRead();
void igOnOffModel_arkRegister();
void igOnOffModel_register();
void *igOnOffModel_getMetaCall();
void igOnOffModel_fieldInit();
void *igModel_getMeta();
void *igModel_vtableRead();
void igModel_arkRegister();
void igModel_register();
void *igModel_getMetaCall();
void igModel_fieldInit();
void *igHotKeyEventReceiver_getMeta();
void *igHotKeyEventReceiver_vtableRead();
void igHotKeyEventReceiver_arkRegister();
void igHotKeyEventReceiver_register();
void *igHotKeyEventReceiver_getMetaCall();
void *fn_8010F4FC();
void igHotKeyEventReceiver_fieldInit();
void *fn_8010F58C();
void *igHotKeyBindingList_getMeta();
void *igHotKeyBindingList_vtableRead();
void igHotKeyBindingList_arkRegister();
void igHotKeyBindingList_register();
void *igHotKeyBindingList_getMetaCall();
void *igHotKeyBinding_getMeta();
void *igHotKeyBinding_vtableRead();
void igHotKeyBinding_arkRegister();
void igHotKeyBinding_register();
void *igHotKeyBinding_getMetaCall();
}
struct UnknownGenRoot8010ED1C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010ED1C(){igObject_construct(this);}
};
struct UnknownGenObject8010ED1C_0 : UnknownGenRoot8010ED1C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject8010ED1C_0(){unknown00=igModel_vtable;}
};
struct UnknownGenObject8010ED1C : UnknownGenObject8010ED1C_0 {
 char unknown0C[4];
 inline ~UnknownGenObject8010ED1C(){unknown00=igRadioGroupModel_vtable;}
};
struct UnknownGenRoot8010EF2C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010EF2C(){igObject_construct(this);}
};
struct UnknownGenObject8010EF2C_0 : UnknownGenRoot8010EF2C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject8010EF2C_0(){unknown00=igModel_vtable;}
};
struct UnknownGenObject8010EF2C_1 : UnknownGenObject8010EF2C_0 {
 inline ~UnknownGenObject8010EF2C_1(){unknown00=igGuiComponentModel_vtable;}
};
struct UnknownGenObject8010EF2C : UnknownGenObject8010EF2C_1 {
 char unknown0C[36];
 inline ~UnknownGenObject8010EF2C(){unknown00=igOnOffModel_vtable;}
};
struct UnknownGenRoot8010F16C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010F16C(){igObject_construct(this);}
};
struct UnknownGenObject8010F16C : UnknownGenRoot8010F16C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject8010F16C(){unknown00=igModel_vtable;}
};
struct UnknownGenRoot8010F3AC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010F3AC(){igObject_construct(this);}
};
struct UnknownGenObject8010F3AC : UnknownGenRoot8010F3AC {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject8010F3AC(){unknown00=igHotKeyEventReceiver_vtable;}
};
struct UnknownGenObject8010F604_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot8010F79C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010F79C(){igObject_construct(this);}
};
struct UnknownGenObject8010F79C : UnknownGenRoot8010F79C {
 char unknown04[12];
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject8010F79C(){unknown00=igHotKeyBinding_vtable;}
};
extern "C" {
void *fn_8010F334(){
 if(!igHotKeyEventReceiver_meta) igHotKeyEventReceiver_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igHotKeyEventReceiver_meta;
}
}
#pragma pop
}

namespace igHotKeyEventReceiver {
// igHotKeyEventReceiver: Alchemy class registration (0x8010F370..0x8010F4FC). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igHotKeyEventReceiver)
META_DECLARE(igEventReceiver)

extern "C" {
void fn_8010CBD4();
void *fn_8010F4FC();
extern char igHotKeyEventReceiver_dependencies[8];
}

struct igHotKeyEventReceiverInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _hotKeyList;
    char unknown0C[4];
    inline ~igHotKeyEventReceiverInstance() { __vtable = igHotKeyEventReceiver_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igHotKeyEventReceiver)

void *igHotKeyEventReceiver_vtableRead()
{
    igHotKeyEventReceiverInstance object;
    object.__vtable = igEventReceiver_vtable;
    object.__vtable = igHotKeyEventReceiver_vtable;
    object._hotKeyList._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igHotKeyEventReceiver)

void igHotKeyEventReceiver_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igHotKeyEventReceiver_meta, igEventReceiver_register,
                       fn_8010F4FC, igHotKeyEventReceiver_getMetaCall,
                       igHotKeyEventReceiver_className, 0xC,
                       igHotKeyEventReceiver_vtableRead, igHotKeyEventReceiver_fieldInit, 0, igHotKeyEventReceiver_dependencies);
}

META_GET_META_CALL(igHotKeyEventReceiver)

}
#pragma pop
}

namespace unknown8010F4FC {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void fn_80053650(void *,int);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8010CBD4();
void *fn_8010CC08();
void *fn_8010D6A0();
void igEventReceiver_register();
void igGuiComponentModel_register();
void igHotKeyBinding_fieldInit();
void igObjectList_register();
void igObject_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igModel_vtable[];
extern char igHotKeyEventReceiver_vtable[];
extern char igHotKeyBinding_vtable[];
extern char igHotKeyBindingList_vtable[];
extern char lbl_804976C0[];
extern char igEventReceiver_vtable[];
extern char igOnOffModel_vtable[];
extern char igRadioGroupModel_vtable[];
extern char igGuiComponentModel_vtable[];
extern char igRadioGroupModel_fieldTypes[4];
extern char igRadioGroupModel_fieldNames[4];
extern char igRadioGroupModel_fieldStorage[4];
extern char igRadioGroupModel_fieldOffsets[4];
extern char igOnOffModel_fieldTypes[4];
extern char igOnOffModel_fieldNames[4];
extern char igOnOffModel_fieldStorage[4];
extern char igOnOffModel_fieldOffsets[4];
extern char igModel_dependencies[8];
extern char lbl_8055EFEC[8];
extern char igModel_fieldTypes[4];
extern char igModel_fieldNames[4];
extern char igModel_fieldStorage[4];
extern char igModel_fieldOffsets[4];
extern char igHotKeyEventReceiver_dependencies[8];
extern char igHotKeyEventReceiver_fieldTypes[4];
extern char igHotKeyEventReceiver_fieldNames[4];
extern char igHotKeyEventReceiver_fieldStorage[4];
extern char igHotKeyEventReceiver_fieldOffsets[4];
extern char igHotKeyBindingList_dependencies[8];
extern char igHotKeyBinding_dependencies[8];
extern void *lbl_805621F4;
extern void *igRadioGroupModel_meta;
extern void *igOnOffModel_meta;
extern void *igModel_meta;
extern void *igHotKeyEventReceiver_meta;
extern void *igHotKeyBindingList_meta;
extern void *igHotKeyBinding_meta;
extern void *igEventReceiver_meta;
void *igRadioGroupModel_getMeta();
void *igRadioGroupModel_vtableRead();
void igRadioGroupModel_arkRegister();
void igRadioGroupModel_register();
void *igRadioGroupModel_getMetaCall();
void *fn_8010EE6C();
void igRadioGroupModel_fieldInit();
void *igOnOffModel_getMeta();
void *igOnOffModel_vtableRead();
void igOnOffModel_arkRegister();
void igOnOffModel_register();
void *igOnOffModel_getMetaCall();
void igOnOffModel_fieldInit();
void *igModel_getMeta();
void *igModel_vtableRead();
void igModel_arkRegister();
void igModel_register();
void *igModel_getMetaCall();
void igModel_fieldInit();
void *igHotKeyEventReceiver_getMeta();
void *igHotKeyEventReceiver_vtableRead();
void igHotKeyEventReceiver_arkRegister();
void igHotKeyEventReceiver_register();
void *igHotKeyEventReceiver_getMetaCall();
void *fn_8010F4FC();
void igHotKeyEventReceiver_fieldInit();
void *fn_8010F58C();
void *igHotKeyBindingList_getMeta();
void *igHotKeyBindingList_vtableRead();
void igHotKeyBindingList_arkRegister();
void igHotKeyBindingList_register();
void *igHotKeyBindingList_getMetaCall();
void *igHotKeyBinding_getMeta();
void *igHotKeyBinding_vtableRead();
void igHotKeyBinding_arkRegister();
void igHotKeyBinding_register();
void *igHotKeyBinding_getMetaCall();
}
struct UnknownGenRoot8010ED1C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010ED1C(){igObject_construct(this);}
};
struct UnknownGenObject8010ED1C_0 : UnknownGenRoot8010ED1C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject8010ED1C_0(){unknown00=igModel_vtable;}
};
struct UnknownGenObject8010ED1C : UnknownGenObject8010ED1C_0 {
 char unknown0C[4];
 inline ~UnknownGenObject8010ED1C(){unknown00=igRadioGroupModel_vtable;}
};
struct UnknownGenRoot8010EF2C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010EF2C(){igObject_construct(this);}
};
struct UnknownGenObject8010EF2C_0 : UnknownGenRoot8010EF2C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject8010EF2C_0(){unknown00=igModel_vtable;}
};
struct UnknownGenObject8010EF2C_1 : UnknownGenObject8010EF2C_0 {
 inline ~UnknownGenObject8010EF2C_1(){unknown00=igGuiComponentModel_vtable;}
};
struct UnknownGenObject8010EF2C : UnknownGenObject8010EF2C_1 {
 char unknown0C[36];
 inline ~UnknownGenObject8010EF2C(){unknown00=igOnOffModel_vtable;}
};
struct UnknownGenRoot8010F16C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010F16C(){igObject_construct(this);}
};
struct UnknownGenObject8010F16C : UnknownGenRoot8010F16C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject8010F16C(){unknown00=igModel_vtable;}
};
struct UnknownGenRoot8010F3AC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010F3AC(){igObject_construct(this);}
};
struct UnknownGenObject8010F3AC : UnknownGenRoot8010F3AC {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject8010F3AC(){unknown00=igHotKeyEventReceiver_vtable;}
};
struct UnknownGenObject8010F604_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot8010F79C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010F79C(){igObject_construct(this);}
};
struct UnknownGenObject8010F79C : UnknownGenRoot8010F79C {
 char unknown04[12];
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject8010F79C(){unknown00=igHotKeyBinding_vtable;}
};
extern "C" {
void *fn_8010F4FC(){return igEventReceiver_meta;}
}
#pragma pop
}

namespace igHotKeyEventReceiver_2 {
// igHotKeyEventReceiver: Alchemy class registration (0x8010F504..0x8010F58C). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igHotKeyEventReceiver)

extern "C" {
void *fn_8010F58C();
extern char igHotKeyEventReceiver_fieldNames[4];
extern char igHotKeyEventReceiver_fieldOffsets[4];
extern char igHotKeyEventReceiver_fieldStorage[4];
extern char igHotKeyEventReceiver_fieldTypes[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igHotKeyEventReceiver_fieldInit()
{
    Meta::igMetaObject *meta = igHotKeyEventReceiver_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igHotKeyEventReceiver_fieldTypes, 1);
    Meta::igObjectRefMetaField *hotKeyListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_8010F58C();
    hotKeyListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    hotKeyListField->_construct = true;
    meta_setupFields(meta, igHotKeyEventReceiver_fieldNames, igHotKeyEventReceiver_fieldStorage, igHotKeyEventReceiver_fieldOffsets, base);
}

}
#pragma pop
}

namespace unknown8010F58C {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void fn_80053650(void *,int);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8010CBD4();
void *fn_8010CC08();
void *fn_8010D6A0();
void igEventReceiver_register();
void igGuiComponentModel_register();
void igHotKeyBinding_fieldInit();
void igObjectList_register();
void igObject_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igModel_vtable[];
extern char igHotKeyEventReceiver_vtable[];
extern char igHotKeyBinding_vtable[];
extern char igHotKeyBindingList_vtable[];
extern char lbl_804976C0[];
extern char igEventReceiver_vtable[];
extern char igOnOffModel_vtable[];
extern char igRadioGroupModel_vtable[];
extern char igGuiComponentModel_vtable[];
extern char igRadioGroupModel_fieldTypes[4];
extern char igRadioGroupModel_fieldNames[4];
extern char igRadioGroupModel_fieldStorage[4];
extern char igRadioGroupModel_fieldOffsets[4];
extern char igOnOffModel_fieldTypes[4];
extern char igOnOffModel_fieldNames[4];
extern char igOnOffModel_fieldStorage[4];
extern char igOnOffModel_fieldOffsets[4];
extern char igModel_dependencies[8];
extern char lbl_8055EFEC[8];
extern char igModel_fieldTypes[4];
extern char igModel_fieldNames[4];
extern char igModel_fieldStorage[4];
extern char igModel_fieldOffsets[4];
extern char igHotKeyEventReceiver_dependencies[8];
extern char igHotKeyEventReceiver_fieldTypes[4];
extern char igHotKeyEventReceiver_fieldNames[4];
extern char igHotKeyEventReceiver_fieldStorage[4];
extern char igHotKeyEventReceiver_fieldOffsets[4];
extern char igHotKeyBindingList_dependencies[8];
extern char igHotKeyBinding_dependencies[8];
extern void *lbl_805621F4;
extern void *igRadioGroupModel_meta;
extern void *igOnOffModel_meta;
extern void *igModel_meta;
extern void *igHotKeyEventReceiver_meta;
extern void *igHotKeyBindingList_meta;
extern void *igHotKeyBinding_meta;
extern void *igEventReceiver_meta;
void *igRadioGroupModel_getMeta();
void *igRadioGroupModel_vtableRead();
void igRadioGroupModel_arkRegister();
void igRadioGroupModel_register();
void *igRadioGroupModel_getMetaCall();
void *fn_8010EE6C();
void igRadioGroupModel_fieldInit();
void *igOnOffModel_getMeta();
void *igOnOffModel_vtableRead();
void igOnOffModel_arkRegister();
void igOnOffModel_register();
void *igOnOffModel_getMetaCall();
void igOnOffModel_fieldInit();
void *igModel_getMeta();
void *igModel_vtableRead();
void igModel_arkRegister();
void igModel_register();
void *igModel_getMetaCall();
void igModel_fieldInit();
void *igHotKeyEventReceiver_getMeta();
void *igHotKeyEventReceiver_vtableRead();
void igHotKeyEventReceiver_arkRegister();
void igHotKeyEventReceiver_register();
void *igHotKeyEventReceiver_getMetaCall();
void *fn_8010F4FC();
void igHotKeyEventReceiver_fieldInit();
void *fn_8010F58C();
void *igHotKeyBindingList_getMeta();
void *igHotKeyBindingList_vtableRead();
void igHotKeyBindingList_arkRegister();
void igHotKeyBindingList_register();
void *igHotKeyBindingList_getMetaCall();
void *igHotKeyBinding_getMeta();
void *igHotKeyBinding_vtableRead();
void igHotKeyBinding_arkRegister();
void igHotKeyBinding_register();
void *igHotKeyBinding_getMetaCall();
}
struct UnknownGenRoot8010ED1C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010ED1C(){igObject_construct(this);}
};
struct UnknownGenObject8010ED1C_0 : UnknownGenRoot8010ED1C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject8010ED1C_0(){unknown00=igModel_vtable;}
};
struct UnknownGenObject8010ED1C : UnknownGenObject8010ED1C_0 {
 char unknown0C[4];
 inline ~UnknownGenObject8010ED1C(){unknown00=igRadioGroupModel_vtable;}
};
struct UnknownGenRoot8010EF2C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010EF2C(){igObject_construct(this);}
};
struct UnknownGenObject8010EF2C_0 : UnknownGenRoot8010EF2C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject8010EF2C_0(){unknown00=igModel_vtable;}
};
struct UnknownGenObject8010EF2C_1 : UnknownGenObject8010EF2C_0 {
 inline ~UnknownGenObject8010EF2C_1(){unknown00=igGuiComponentModel_vtable;}
};
struct UnknownGenObject8010EF2C : UnknownGenObject8010EF2C_1 {
 char unknown0C[36];
 inline ~UnknownGenObject8010EF2C(){unknown00=igOnOffModel_vtable;}
};
struct UnknownGenRoot8010F16C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010F16C(){igObject_construct(this);}
};
struct UnknownGenObject8010F16C : UnknownGenRoot8010F16C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject8010F16C(){unknown00=igModel_vtable;}
};
struct UnknownGenRoot8010F3AC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010F3AC(){igObject_construct(this);}
};
struct UnknownGenObject8010F3AC : UnknownGenRoot8010F3AC {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject8010F3AC(){unknown00=igHotKeyEventReceiver_vtable;}
};
struct UnknownGenObject8010F604_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot8010F79C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010F79C(){igObject_construct(this);}
};
struct UnknownGenObject8010F79C : UnknownGenRoot8010F79C {
 char unknown04[12];
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject8010F79C(){unknown00=igHotKeyBinding_vtable;}
};
extern "C" {
void *fn_8010F58C(){
 if(!igHotKeyBindingList_meta) igHotKeyBindingList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igHotKeyBindingList_meta;
}
}
#pragma pop
}

namespace igHotKeyBindingList {
// igHotKeyBindingList: Alchemy class registration (0x8010F5C8..0x8010F728). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igHotKeyBindingList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_8010CBD4();
extern char igHotKeyBindingList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804976C0[];
}

struct Instance_8010F604_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igHotKeyBindingList)

void *igHotKeyBindingList_vtableRead()
{
    Instance_8010F604_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804976C0;
    object.__vtable = igHotKeyBindingList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igHotKeyBindingList)

void igHotKeyBindingList_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igHotKeyBindingList_meta, igObjectList_register,
                       fn_80024180, igHotKeyBindingList_getMetaCall,
                       igHotKeyBindingList_className, 0x14,
                       igHotKeyBindingList_vtableRead, 0, 0, igHotKeyBindingList_dependencies);
}

META_GET_META_CALL(igHotKeyBindingList)

}
#pragma pop
}

namespace unknown8010F728 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void fn_80053650(void *,int);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8010CBD4();
void *fn_8010CC08();
void *fn_8010D6A0();
void igEventReceiver_register();
void igGuiComponentModel_register();
void igHotKeyBinding_fieldInit();
void igObjectList_register();
void igObject_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igModel_vtable[];
extern char igHotKeyEventReceiver_vtable[];
extern char igHotKeyBinding_vtable[];
extern char igHotKeyBindingList_vtable[];
extern char lbl_804976C0[];
extern char igEventReceiver_vtable[];
extern char igOnOffModel_vtable[];
extern char igRadioGroupModel_vtable[];
extern char igGuiComponentModel_vtable[];
extern char igRadioGroupModel_fieldTypes[4];
extern char igRadioGroupModel_fieldNames[4];
extern char igRadioGroupModel_fieldStorage[4];
extern char igRadioGroupModel_fieldOffsets[4];
extern char igOnOffModel_fieldTypes[4];
extern char igOnOffModel_fieldNames[4];
extern char igOnOffModel_fieldStorage[4];
extern char igOnOffModel_fieldOffsets[4];
extern char igModel_dependencies[8];
extern char lbl_8055EFEC[8];
extern char igModel_fieldTypes[4];
extern char igModel_fieldNames[4];
extern char igModel_fieldStorage[4];
extern char igModel_fieldOffsets[4];
extern char igHotKeyEventReceiver_dependencies[8];
extern char igHotKeyEventReceiver_fieldTypes[4];
extern char igHotKeyEventReceiver_fieldNames[4];
extern char igHotKeyEventReceiver_fieldStorage[4];
extern char igHotKeyEventReceiver_fieldOffsets[4];
extern char igHotKeyBindingList_dependencies[8];
extern char igHotKeyBinding_dependencies[8];
extern void *lbl_805621F4;
extern void *igRadioGroupModel_meta;
extern void *igOnOffModel_meta;
extern void *igModel_meta;
extern void *igHotKeyEventReceiver_meta;
extern void *igHotKeyBindingList_meta;
extern void *igHotKeyBinding_meta;
extern void *igEventReceiver_meta;
void *igRadioGroupModel_getMeta();
void *igRadioGroupModel_vtableRead();
void igRadioGroupModel_arkRegister();
void igRadioGroupModel_register();
void *igRadioGroupModel_getMetaCall();
void *fn_8010EE6C();
void igRadioGroupModel_fieldInit();
void *igOnOffModel_getMeta();
void *igOnOffModel_vtableRead();
void igOnOffModel_arkRegister();
void igOnOffModel_register();
void *igOnOffModel_getMetaCall();
void igOnOffModel_fieldInit();
void *igModel_getMeta();
void *igModel_vtableRead();
void igModel_arkRegister();
void igModel_register();
void *igModel_getMetaCall();
void igModel_fieldInit();
void *igHotKeyEventReceiver_getMeta();
void *igHotKeyEventReceiver_vtableRead();
void igHotKeyEventReceiver_arkRegister();
void igHotKeyEventReceiver_register();
void *igHotKeyEventReceiver_getMetaCall();
void *fn_8010F4FC();
void igHotKeyEventReceiver_fieldInit();
void *fn_8010F58C();
void *igHotKeyBindingList_getMeta();
void *igHotKeyBindingList_vtableRead();
void igHotKeyBindingList_arkRegister();
void igHotKeyBindingList_register();
void *igHotKeyBindingList_getMetaCall();
void *igHotKeyBinding_getMeta();
void *igHotKeyBinding_vtableRead();
void igHotKeyBinding_arkRegister();
void igHotKeyBinding_register();
void *igHotKeyBinding_getMetaCall();
}
struct UnknownGenRoot8010ED1C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010ED1C(){igObject_construct(this);}
};
struct UnknownGenObject8010ED1C_0 : UnknownGenRoot8010ED1C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject8010ED1C_0(){unknown00=igModel_vtable;}
};
struct UnknownGenObject8010ED1C : UnknownGenObject8010ED1C_0 {
 char unknown0C[4];
 inline ~UnknownGenObject8010ED1C(){unknown00=igRadioGroupModel_vtable;}
};
struct UnknownGenRoot8010EF2C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010EF2C(){igObject_construct(this);}
};
struct UnknownGenObject8010EF2C_0 : UnknownGenRoot8010EF2C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject8010EF2C_0(){unknown00=igModel_vtable;}
};
struct UnknownGenObject8010EF2C_1 : UnknownGenObject8010EF2C_0 {
 inline ~UnknownGenObject8010EF2C_1(){unknown00=igGuiComponentModel_vtable;}
};
struct UnknownGenObject8010EF2C : UnknownGenObject8010EF2C_1 {
 char unknown0C[36];
 inline ~UnknownGenObject8010EF2C(){unknown00=igOnOffModel_vtable;}
};
struct UnknownGenRoot8010F16C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010F16C(){igObject_construct(this);}
};
struct UnknownGenObject8010F16C : UnknownGenRoot8010F16C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject8010F16C(){unknown00=igModel_vtable;}
};
struct UnknownGenRoot8010F3AC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010F3AC(){igObject_construct(this);}
};
struct UnknownGenObject8010F3AC : UnknownGenRoot8010F3AC {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject8010F3AC(){unknown00=igHotKeyEventReceiver_vtable;}
};
struct UnknownGenObject8010F604_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot8010F79C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010F79C(){igObject_construct(this);}
};
struct UnknownGenObject8010F79C : UnknownGenRoot8010F79C {
 char unknown04[12];
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject8010F79C(){unknown00=igHotKeyBinding_vtable;}
};
extern "C" {
void *igHotKeyBinding_create(void *object){
 igHotKeyBinding_arkRegister();
 return meta_createInstance(igHotKeyBinding_meta,object);
}
void *igHotKeyBinding_getMeta(){
 if(!igHotKeyBinding_meta || !(reinterpret_cast<unsigned int *>(igHotKeyBinding_meta)[0x24/4]&4)) igHotKeyBinding_arkRegister();
 return igHotKeyBinding_meta;
}
void *igHotKeyBinding_vtableRead(){
 UnknownGenObject8010F79C object;
 object.unknown00=igHotKeyBinding_vtable;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igHotKeyBinding_arkRegister(){
 meta_registerNow((int)igHotKeyBinding_register);
}
void igHotKeyBinding_register(){
 fn_8010CBD4();
 meta_registerClass(0,(int)&igHotKeyBinding_meta,(int)igObject_register,(int)fn_800237D0,(int)igHotKeyBinding_getMetaCall,(int)igHotKeyBinding_className,20,(int)igHotKeyBinding_vtableRead,(int)igHotKeyBinding_fieldInit,0,(int)igHotKeyBinding_dependencies);
}
void *igHotKeyBinding_getMetaCall(){return igHotKeyBinding_getMeta();}
}
#pragma pop
}

namespace igHotKeyBinding_fieldInit {
// igHotKeyBinding: Alchemy class registration (0x8010F8E0..0x8010F9B0). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igHotKeyBinding)

extern "C" {
void fn_80046E58(void *, void *);
void fn_800CB0B4();
void fn_800CBAA0();
void *fn_80115A04();
extern char lbl_8055F04C[4];
extern char lbl_8055F050[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igHotKeyBinding_fieldInit()
{
    Meta::igMetaObject *meta = igHotKeyBinding_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igHotKeyBinding_fieldTypes, 3);
    Meta::igEnumMetaField *keyField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base));
    fn_80046E58(keyField, (void *)lbl_8055F04C);
    keyField->_getMetaEnumFunction = reinterpret_cast<void *>(fn_800CB0B4);
    Meta::igEnumMetaField *buttonField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base + 1));
    fn_80046E58(buttonField, (void *)lbl_8055F050);
    buttonField->_getMetaEnumFunction = reinterpret_cast<void *>(fn_800CBAA0);
    Meta::igObjectRefMetaField *actionField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    void *value_v4 = fn_80115A04();
    actionField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v4);
    meta_setupFields(meta, igHotKeyBinding_fieldNames, igHotKeyBinding_fieldStorage, igHotKeyBinding_fieldOffsets, base);
}

}
#pragma pop
}

namespace unknown8010F9B0 {
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8010CBD4();
void *fn_8010F4FC();
void igEventReceiver_register();
void igGuiSystem_fieldInit();
extern char igGuiSystem_vtable[];
extern char igEventReceiver_vtable[];
extern void *lbl_805621F4;
extern void *igGuiSystem_meta;
void *igGuiSystem_getMeta();
void *igGuiSystem_vtableRead();
void igGuiSystem_arkRegister();
void igGuiSystem_register();
void *igGuiSystem_getMetaCall();
}
struct UnknownGenRoot8010FA28 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010FA28(){igObject_construct(this);}
};
struct UnknownGenObject8010FA28 : UnknownGenRoot8010FA28 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 UnknownGenRefMember unknown1C;
 char unknown20[16];
 inline ~UnknownGenObject8010FA28(){unknown00=igGuiSystem_vtable;}
};
extern "C" {
void *fn_8010F9B0(){
 if(!igGuiSystem_meta) igGuiSystem_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igGuiSystem_meta;
}
}
#pragma pop
}

namespace igGuiSystem {
// igGuiSystem: Alchemy class registration (0x8010F9EC..0x8010FBDC). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igGuiSystem)
META_DECLARE(igEventReceiver)

struct igGuiSystemInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _renderer;
    igObjectRefMember _model;
    igObjectRefMember _viewList;
    igObjectRefMember _root;
    igObjectRefMember _mouseCursor;
    igObjectRefMember _mouseCursorTransform;
    char unknown20[16];
    inline ~igGuiSystemInstance() { __vtable = igGuiSystem_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igGuiSystem)

void *igGuiSystem_vtableRead()
{
    igGuiSystemInstance object;
    object.__vtable = igEventReceiver_vtable;
    object.__vtable = igGuiSystem_vtable;
    object._renderer._value = 0;
    object._model._value = 0;
    object._viewList._value = 0;
    object._root._value = 0;
    object._mouseCursor._value = 0;
    object._mouseCursorTransform._value = 0;
    return meta_vtableOf(&object);
}

}
#pragma pop
}

namespace unknown8010FBDC {
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8010CBD4();
void *fn_8010F4FC();
void igEventReceiver_register();
void igGuiSystem_fieldInit();
extern char igGuiSystem_vtable[];
extern char igEventReceiver_vtable[];
extern void *lbl_805621F4;
extern void *igGuiSystem_meta;
void *igGuiSystem_getMeta();
void *igGuiSystem_vtableRead();
void igGuiSystem_arkRegister();
void igGuiSystem_register();
void *igGuiSystem_getMetaCall();
}
struct UnknownGenRoot8010FA28 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010FA28(){igObject_construct(this);}
};
struct UnknownGenObject8010FA28 : UnknownGenRoot8010FA28 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 UnknownGenRefMember unknown1C;
 char unknown20[16];
 inline ~UnknownGenObject8010FA28(){unknown00=igGuiSystem_vtable;}
};
extern "C" {
UnknownGenHolder *dtor_8010FBDC(UnknownGenHolder *object,short flags){
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
void igGuiSystem_arkRegister(){
 meta_registerNow((int)igGuiSystem_register);
}
void igGuiSystem_register(){
 fn_8010CBD4();
 meta_registerClass(0,(int)&igGuiSystem_meta,(int)igEventReceiver_register,(int)fn_8010F4FC,(int)igGuiSystem_getMetaCall,(int)igGuiSystem_className,36,(int)igGuiSystem_vtableRead,(int)igGuiSystem_fieldInit,0,(int)igGuiSystem_dependencies);
}
void *igGuiSystem_getMetaCall(){return igGuiSystem_getMeta();}
}
#pragma pop
}

namespace igGuiSystem_fieldInit {
// igGuiSystem: Alchemy class registration (0x8010FD10..0x8010FE38). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igGuiSystem)

extern "C" {
void *fn_8010CDA4();
void *fn_8010FE38();
void *fn_80110094();
void *fn_80110CB8();
void *fn_801AC644();
void *fn_801C89F0();
}

#pragma push
#pragma auto_inline off
extern "C" {

void igGuiSystem_fieldInit()
{
    Meta::igMetaObject *meta = igGuiSystem_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igGuiSystem_fieldTypes, 7);
    Meta::igObjectRefMetaField *rendererField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_v2 = fn_80110094();
    rendererField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v2);
    rendererField->_construct = true;
    Meta::igObjectRefMetaField *modelField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_v4 = fn_80110CB8();
    modelField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v4);
    modelField->_construct = true;
    Meta::igObjectRefMetaField *viewListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    void *value_v6 = fn_8010CDA4();
    viewListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v6);
    viewListField->_construct = true;
    Meta::igObjectRefMetaField *rootField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 3));
    void *value_v8 = fn_801C89F0();
    rootField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v8);
    rootField->_construct = true;
    Meta::igObjectRefMetaField *mouseCursorField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 4));
    void *value_v10 = fn_8010FE38();
    mouseCursorField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v10);
    Meta::igObjectRefMetaField *mouseCursorTransformField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 5));
    void *value_v12 = fn_801AC644();
    mouseCursorTransformField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v12);
    mouseCursorTransformField->_construct = true;
    meta_setupFields(meta, igGuiSystem_fieldNames, igGuiSystem_fieldStorage, igGuiSystem_fieldOffsets, base);
}

}
#pragma pop
}

namespace unknown8010FE38 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8010CBD4();
void igMouseCursor_fieldInit();
void igObject_register();
extern char igMouseCursor_vtable[];
extern char igMouseCursor_dependencies[8];
extern void *lbl_805621F4;
extern void *igMouseCursor_meta;
void *igMouseCursor_getMeta();
void *igMouseCursor_vtableRead();
void igMouseCursor_arkRegister();
void igMouseCursor_register();
void *igMouseCursor_getMetaCall();
}
struct UnknownGenRoot8010FEB0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010FEB0(){igObject_construct(this);}
};
struct UnknownGenObject8010FEB0 : UnknownGenRoot8010FEB0 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[20];
 inline ~UnknownGenObject8010FEB0(){unknown00=igMouseCursor_vtable;}
};
extern "C" {
void *fn_8010FE38(){
 if(!igMouseCursor_meta) igMouseCursor_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igMouseCursor_meta;
}
void *igMouseCursor_getMeta(){
 if(!igMouseCursor_meta || !(reinterpret_cast<unsigned int *>(igMouseCursor_meta)[0x24/4]&4)) igMouseCursor_arkRegister();
 return igMouseCursor_meta;
}
void *igMouseCursor_vtableRead(){
 UnknownGenObject8010FEB0 object;
 object.unknown00=igMouseCursor_vtable;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igMouseCursor_arkRegister(){
 meta_registerNow((int)igMouseCursor_register);
}
void igMouseCursor_register(){
 fn_8010CBD4();
 meta_registerClass(0,(int)&igMouseCursor_meta,(int)igObject_register,(int)fn_800237D0,(int)igMouseCursor_getMetaCall,(int)igMouseCursor_className,20,(int)igMouseCursor_vtableRead,(int)igMouseCursor_fieldInit,0,(int)igMouseCursor_dependencies);
}
void *igMouseCursor_getMetaCall(){return igMouseCursor_getMeta();}
}
#pragma pop
}

namespace unknown8010FFF4 {
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *fn_8011205C(void *);
void fn_801264B4(void *,void *);
extern char igMouseCursor_fieldTypes[8];
extern char igMouseCursor_fieldNames[8];
extern char igMouseCursor_fieldStorage[8];
extern char igMouseCursor_fieldOffsets[8];
extern void *igMouseCursor_meta;
extern char lbl_805669AC[4];
}
struct UnknownGenL8010FFF4_8 {
 float m08;
 float m0C;
};
extern "C" {
void igMouseCursor_fieldInit(){
 UnknownGenL8010FFF4_8 local0;
 void *value0=igMouseCursor_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,igMouseCursor_fieldTypes,2);
 void *value2=meta_field(value0,value1);
 void *value3=fn_8011205C(value2);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 local0.m08=*reinterpret_cast<float *>((lbl_805669AC+0));
 local0.m0C=*reinterpret_cast<float *>((lbl_805669AC+0));
 fn_801264B4(value4,&local0);
 meta_setupFields(value0,igMouseCursor_fieldNames,igMouseCursor_fieldStorage,igMouseCursor_fieldOffsets,value1);
}
}
#pragma pop
}

namespace unknown80110094 {
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8010CBD4();
void *fn_8010DF8C();
void igGuiSystemRenderer_fieldInit();
void igRenderer_register();
extern char igGuiSystemRenderer_vtable[];
extern char lbl_80497C9C[];
extern void *lbl_805621F4;
extern void *igGuiSystemRenderer_meta;
void *igGuiSystemRenderer_getMeta();
void *igGuiSystemRenderer_vtableRead();
void igGuiSystemRenderer_arkRegister();
void igGuiSystemRenderer_register();
void *igGuiSystemRenderer_getMetaCall();
}
struct UnknownGenRoot8011010C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011010C(){igObject_construct(this);}
};
struct UnknownGenObject8011010C_0 : UnknownGenRoot8011010C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject8011010C_0(){unknown00=lbl_80497C9C;}
};
struct UnknownGenObject8011010C : UnknownGenObject8011010C_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 char unknown1C[4];
 inline ~UnknownGenObject8011010C(){unknown00=igGuiSystemRenderer_vtable;}
};
extern "C" {
void *fn_80110094(){
 if(!igGuiSystemRenderer_meta) igGuiSystemRenderer_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igGuiSystemRenderer_meta;
}
void *igGuiSystemRenderer_getMeta(){
 if(!igGuiSystemRenderer_meta || !(reinterpret_cast<unsigned int *>(igGuiSystemRenderer_meta)[0x24/4]&4)) igGuiSystemRenderer_arkRegister();
 return igGuiSystemRenderer_meta;
}
void *igGuiSystemRenderer_vtableRead(){
 UnknownGenObject8011010C object;
 object.unknown00=lbl_80497C9C;
 object.unknown08.value=0;
 object.unknown00=igGuiSystemRenderer_vtable;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown18.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igGuiSystemRenderer_arkRegister(){
 meta_registerNow((int)igGuiSystemRenderer_register);
}
void igGuiSystemRenderer_register(){
 fn_8010CBD4();
 meta_registerClass(0,(int)&igGuiSystemRenderer_meta,(int)igRenderer_register,(int)fn_8010DF8C,(int)igGuiSystemRenderer_getMetaCall,(int)igGuiSystemRenderer_className,28,(int)igGuiSystemRenderer_vtableRead,(int)igGuiSystemRenderer_fieldInit,0,(int)igGuiSystemRenderer_dependencies);
}
void *igGuiSystemRenderer_getMetaCall(){return igGuiSystemRenderer_getMeta();}
}
#pragma pop
}

namespace igGuiSystemRenderer_fieldInit {
// igGuiSystemRenderer: Alchemy class registration (0x80110354..0x8011042C). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igGuiSystemRenderer)

extern "C" {
void *fn_800B7910();
void *fn_80110CB8();
void *fn_801B74F0();
void *fn_801C481C();
}

#pragma push
#pragma auto_inline off
extern "C" {

void igGuiSystemRenderer_fieldInit()
{
    Meta::igMetaObject *meta = igGuiSystemRenderer_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igGuiSystemRenderer_fieldTypes, 4);
    Meta::igObjectRefMetaField *rootField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_v2 = fn_801B74F0();
    rootField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v2);
    Meta::igObjectRefMetaField *modelField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_v4 = fn_80110CB8();
    modelField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v4);
    Meta::igObjectRefMetaField *commonTraversalField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    void *value_v6 = fn_801C481C();
    commonTraversalField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v6);
    commonTraversalField->_construct = true;
    Meta::igObjectRefMetaField *displayListAttrField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 3));
    void *value_v8 = fn_800B7910();
    displayListAttrField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v8);
    meta_setupFields(meta, igGuiSystemRenderer_fieldNames, igGuiSystemRenderer_fieldStorage, igGuiSystemRenderer_fieldOffsets, base);
}

}
#pragma pop
}

namespace unknown8011042C {
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8010CBD4();
void *fn_8010E6DC();
void igActiveComponentsObserver_fieldInit();
void igView_register();
extern char lbl_80495AD8[];
extern char igActiveComponentsObserver_vtable[];
extern char igActiveComponentsObserver_dependencies[8];
extern void *igActiveComponentsObserver_meta;
void *igActiveComponentsObserver_getMeta();
void *igActiveComponentsObserver_vtableRead();
void igActiveComponentsObserver_arkRegister();
void igActiveComponentsObserver_register();
void *igActiveComponentsObserver_getMetaCall();
}
struct UnknownGenRoot801104A0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801104A0(){igObject_construct(this);}
};
struct UnknownGenObject801104A0 : UnknownGenRoot801104A0 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject801104A0(){unknown00=igActiveComponentsObserver_vtable;}
};
extern "C" {
void *igActiveComponentsObserver_create(void *object){
 igActiveComponentsObserver_arkRegister();
 return meta_createInstance(igActiveComponentsObserver_meta,object);
}
void *igActiveComponentsObserver_getMeta(){
 if(!igActiveComponentsObserver_meta || !(reinterpret_cast<unsigned int *>(igActiveComponentsObserver_meta)[0x24/4]&4)) igActiveComponentsObserver_arkRegister();
 return igActiveComponentsObserver_meta;
}
void *igActiveComponentsObserver_vtableRead(){
 UnknownGenObject801104A0 object;
 object.unknown00=lbl_80495AD8;
 object.unknown00=igActiveComponentsObserver_vtable;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igActiveComponentsObserver_arkRegister(){
 meta_registerNow((int)igActiveComponentsObserver_register);
}
void igActiveComponentsObserver_register(){
 fn_8010CBD4();
 meta_registerClass(0,(int)&igActiveComponentsObserver_meta,(int)igView_register,(int)fn_8010E6DC,(int)igActiveComponentsObserver_getMetaCall,(int)igActiveComponentsObserver_className,24,(int)igActiveComponentsObserver_vtableRead,(int)igActiveComponentsObserver_fieldInit,0,(int)igActiveComponentsObserver_dependencies);
}
void *igActiveComponentsObserver_getMetaCall(){return igActiveComponentsObserver_getMeta();}
}
#pragma pop
}

namespace igActiveComponentsObserver_fieldInit {
// igActiveComponentsObserver: Alchemy class registration (0x80110668..0x80110720). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igActiveComponentsObserver)

extern "C" {
void *fn_80111CD4();
}

#pragma push
#pragma auto_inline off
extern "C" {

void igActiveComponentsObserver_fieldInit()
{
    Meta::igMetaObject *meta = igActiveComponentsObserver_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igActiveComponentsObserver_fieldTypes, 3);
    Meta::igObjectRefMetaField *oldComponentUnderMouseField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_v2 = fn_80111CD4();
    oldComponentUnderMouseField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v2);
    Meta::igObjectRefMetaField *oldFocusedComponentField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_v4 = fn_80111CD4();
    oldFocusedComponentField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v4);
    Meta::igObjectRefMetaField *oldPushedComponentField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    void *value_v6 = fn_80111CD4();
    oldPushedComponentField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v6);
    meta_setupFields(meta, igActiveComponentsObserver_fieldNames, igActiveComponentsObserver_fieldStorage, igActiveComponentsObserver_fieldOffsets, base);
}

}
#pragma pop
}

namespace igMousePosObserver {
// igMousePosObserver: Alchemy class registration (0x80110720..0x801108A4). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igMousePosObserver)

extern "C" {
void fn_801285A0(void *);
extern char lbl_80495AD8[100];
}

struct Instance_LigMousePosObserver_0 : igObjectInstance {
    inline Instance_LigMousePosObserver_0()
    {
        __vtable = lbl_80495AD8;
    }
};

struct igMousePosObserverInstance : Instance_LigMousePosObserver_0 {
    char unknown04[12];
    igObjectRefMember _intersectTraversal;
    igObjectRefMember _ray;
    char unknown18[8];
    igObjectRefMember _hitPath;
    char unknown24[64];
    inline igMousePosObserverInstance()
    {
        __vtable = igMousePosObserver_vtable;
        _intersectTraversal._value = 0;
        _ray._value = 0;
        _hitPath._value = 0;
        fn_801285A0(&unknown24);
    }
    inline ~igMousePosObserverInstance() { __vtable = igMousePosObserver_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igMousePosObserver)

META_GET_META(igMousePosObserver)

void *igMousePosObserver_vtableRead()
{
    igMousePosObserverInstance object;
    return meta_vtableOf(&object);
}

}
#pragma pop
}

namespace unknown801108A4 {
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8010CBD4();
void *fn_8010E6DC();
void igMousePosObserver_fieldInit();
void *igMousePosObserver_getMeta();
void igMousePosObserver_vtableRead();
void igView_register();
extern void *igMousePosObserver_meta;
void igMousePosObserver_register();
void *igMousePosObserver_getMetaCall();
}
extern "C" {
UnknownGenHolder *fn_801108A4(UnknownGenHolder *object,short flags){
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
UnknownGenHolder *dtor_80110918(UnknownGenHolder *object,short flags){
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
void igMousePosObserver_arkRegister(){
 meta_registerNow((int)igMousePosObserver_register);
}
void igMousePosObserver_register(){
 fn_8010CBD4();
 meta_registerClass(0,(int)&igMousePosObserver_meta,(int)igView_register,(int)fn_8010E6DC,(int)igMousePosObserver_getMetaCall,(int)igMousePosObserver_className,100,(int)igMousePosObserver_vtableRead,(int)igMousePosObserver_fieldInit,0,(int)igMousePosObserver_dependencies);
}
void *igMousePosObserver_getMetaCall(){return igMousePosObserver_getMeta();}
}
#pragma pop
}

namespace igMousePosObserver_fieldInit {
// igMousePosObserver: Alchemy class registration (0x80110A4C..0x80110B48). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igMousePosObserver)

extern "C" {
void fn_8004D4BC(void *, float);
void *fn_8010F9B0();
void *fn_8011F940();
void *fn_801BD6CC();
void *fn_801BFC74();
extern const char lbl_805669AC[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igMousePosObserver_fieldInit()
{
    Meta::igMetaObject *meta = igMousePosObserver_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igMousePosObserver_fieldTypes, 7);
    Meta::igObjectRefMetaField *guiSystemField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_v2 = fn_8010F9B0();
    guiSystemField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v2);
    guiSystemField->_refCounted = false;
    Meta::igObjectRefMetaField *intersectTraversalField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_v4 = fn_801BD6CC();
    intersectTraversalField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v4);
    intersectTraversalField->_construct = true;
    Meta::igObjectRefMetaField *rayField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    void *value_v6 = fn_8011F940();
    rayField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v6);
    rayField->_construct = true;
    Meta::igFloatMetaField *impactLengthField = static_cast<Meta::igFloatMetaField *>(meta_field(meta, base + 3));
    fn_8004D4BC(impactLengthField, *reinterpret_cast<const float *>(lbl_805669AC));
    Meta::igObjectRefMetaField *hitPathField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 5));
    void *value_v9 = fn_801BFC74();
    hitPathField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v9);
    meta_setupFields(meta, igMousePosObserver_fieldNames, igMousePosObserver_fieldStorage, igMousePosObserver_fieldOffsets, base);
}

}
#pragma pop
}

namespace igWindowSizeObserver {
// igWindowSizeObserver: Alchemy class registration (0x80110B48..0x80110CB8). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igWindowSizeObserver)
META_DECLARE(igView)

extern "C" {
void fn_8010CBD4();
void *fn_8010E6DC();
extern char lbl_80495AD8[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igWindowSizeObserver)

META_GET_META(igWindowSizeObserver)

void *igWindowSizeObserver_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_80495AD8;
    object.__vtable = igWindowSizeObserver_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igWindowSizeObserver)

void igWindowSizeObserver_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igWindowSizeObserver_meta, igView_register,
                       fn_8010E6DC, igWindowSizeObserver_getMetaCall,
                       igWindowSizeObserver_className, 0xC,
                       igWindowSizeObserver_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igWindowSizeObserver)

}
#pragma pop
}

namespace unknown80110CB8 {
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8010CBD4();
void *fn_8010E6DC();
void igGuiSystemModel_arkRegister();
void igView_register();
extern char lbl_80495AD8[];
extern char igWindowSizeObserver_vtable[];
extern void *lbl_805621F4;
extern void *igWindowSizeObserver_meta;
extern void *igGuiSystemModel_meta;
void *igWindowSizeObserver_getMeta();
void *igWindowSizeObserver_vtableRead();
void igWindowSizeObserver_arkRegister();
void igWindowSizeObserver_register();
void *igWindowSizeObserver_getMetaCall();
}
struct UnknownGenObject80110BBC_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_80110CB8(){
 if(!igGuiSystemModel_meta) igGuiSystemModel_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igGuiSystemModel_meta;
}
}
#pragma pop
}

namespace igGuiSystemModel {
// igGuiSystemModel: Alchemy class registration (0x80110CF4..0x80110F7C). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igGuiSystemModel)
META_DECLARE(igModel)

extern "C" {
void fn_8010CBD4();
void *fn_8010EE6C();
void fn_801285A0(void *);
extern char igGuiSystemModel_dependencies[8];
}

struct igModelInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _views;
    inline ~igModelInstance() { __vtable = igModel_vtable; }
};

struct igGuiSystemModelInstance : igModelInstance {
    char unknown0C[20];
    char unknown20[64];
    char unknown60[68];
    igObjectRefMember _rootComponent;
    igObjectRefMember _focusedComponent;
    igObjectRefMember _componentUnderMouse;
    igObjectRefMember _pushedComponent;
    char unknownB4[4];
    inline igGuiSystemModelInstance()
    {
        __vtable = igModel_vtable;
        _views._value = 0;
        __vtable = igGuiSystemModel_vtable;
        fn_801285A0(&unknown20);
        fn_801285A0(&unknown60);
        _rootComponent._value = 0;
        _focusedComponent._value = 0;
        _componentUnderMouse._value = 0;
        _pushedComponent._value = 0;
    }
    inline ~igGuiSystemModelInstance() { __vtable = igGuiSystemModel_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igGuiSystemModel)

void *igGuiSystemModel_vtableRead()
{
    igGuiSystemModelInstance object;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igGuiSystemModel)

void igGuiSystemModel_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igGuiSystemModel_meta, igModel_register,
                       fn_8010EE6C, igGuiSystemModel_getMetaCall,
                       igGuiSystemModel_className, 0xB8,
                       igGuiSystemModel_vtableRead, igGuiSystemModel_fieldInit, 0, igGuiSystemModel_dependencies);
}

META_GET_META_CALL(igGuiSystemModel)

}
#pragma pop
}

namespace igGuiSystemModel_fieldInit {
// igGuiSystemModel: Alchemy class registration (0x80110F7C..0x801110A0). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igGuiSystemModel)

extern "C" {
void fn_8003EC68(void *, int);
void *fn_80111CD4();
void fn_801264B4(void *, void *);
extern const char lbl_805669AC[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igGuiSystemModel_fieldInit()
{
    float local[4];
    Meta::igMetaObject *meta = igGuiSystemModel_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igGuiSystemModel_fieldTypes, 11);
    Meta::igVec2fMetaField *windowSizeField = static_cast<Meta::igVec2fMetaField *>(meta_field(meta, base));
    local[2] = *reinterpret_cast<const float *>(lbl_805669AC);
    local[3] = *reinterpret_cast<const float *>(lbl_805669AC);
    fn_801264B4(windowSizeField, &local[2]);
    Meta::igVec2fMetaField *mousePositionField = static_cast<Meta::igVec2fMetaField *>(meta_field(meta, base + 1));
    local[0] = *reinterpret_cast<const float *>(lbl_805669AC);
    local[1] = *reinterpret_cast<const float *>(lbl_805669AC);
    fn_801264B4(mousePositionField, &local[0]);
    Meta::igBoolMetaField *activeField = static_cast<Meta::igBoolMetaField *>(meta_field(meta, base + 5));
    fn_8003EC68(activeField, 1);
    Meta::igObjectRefMetaField *rootComponentField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 6));
    void *value_v5 = fn_80111CD4();
    rootComponentField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v5);
    Meta::igObjectRefMetaField *focusedComponentField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 7));
    void *value_v7 = fn_80111CD4();
    focusedComponentField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v7);
    Meta::igObjectRefMetaField *componentUnderMouseField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 8));
    void *value_v9 = fn_80111CD4();
    componentUnderMouseField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v9);
    Meta::igObjectRefMetaField *pushedComponentField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 9));
    void *value_v11 = fn_80111CD4();
    pushedComponentField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v11);
    meta_setupFields(meta, igGuiSystemModel_fieldNames, igGuiSystemModel_fieldStorage, igGuiSystemModel_fieldOffsets, base);
}

}
#pragma pop
}

namespace unknown801110A0 {
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void igObject_construct(void *);
void igGuiComponentNode_arkRegister();
extern char igNamedObject_vtable[];
extern char igGuiComponentNode_vtable[];
extern char igNode_vtable[];
extern char igGroup_vtable[];
extern void *lbl_805621F4;
extern void *igGuiComponentNode_meta;
}
struct UnknownGenRoot80111118 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80111118(){igObject_construct(this);}
};
struct UnknownGenObject80111118_0 : UnknownGenRoot80111118 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject80111118_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject80111118_1 : UnknownGenObject80111118_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject80111118_1(){unknown00=igNode_vtable;}
};
struct UnknownGenObject80111118_2 : UnknownGenObject80111118_1 {
 char unknown14[8];
 UnknownGenRefMember unknown1C;
 inline ~UnknownGenObject80111118_2(){unknown00=igGroup_vtable;}
};
struct UnknownGenObject80111118 : UnknownGenObject80111118_2 {
 char unknown20[8];
 inline ~UnknownGenObject80111118(){unknown00=igGuiComponentNode_vtable;}
};
extern "C" {
void *fn_801110A0(){
 if(!igGuiComponentNode_meta) igGuiComponentNode_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igGuiComponentNode_meta;
}
}
#pragma pop
}

namespace igGuiComponentNode {
// igGuiComponentNode: Alchemy class registration (0x801110DC..0x80111290). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igGuiComponentNode)
META_DECLARE(igGroup)
META_DECLARE(igNamedObject)
META_DECLARE(igNode)

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct igNodeInstance : igNamedObjectInstance {
    igObjectRefMember _bound;
    igObjectRefMember _parentList;
    inline ~igNodeInstance() { __vtable = igNode_vtable; }
};

struct igGroupInstance : igNodeInstance {
    char unknown14[8];
    igObjectRefMember _childList;
    inline ~igGroupInstance() { __vtable = igGroup_vtable; }
};

struct igGuiComponentNodeInstance : igGroupInstance {
    char unknown20[8];
    inline ~igGuiComponentNodeInstance() { __vtable = igGuiComponentNode_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igGuiComponentNode)

void *igGuiComponentNode_vtableRead()
{
    igGuiComponentNodeInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igNode_vtable;
    object._bound._value = 0;
    object._parentList._value = 0;
    object.__vtable = igGroup_vtable;
    object._childList._value = 0;
    object.__vtable = igGuiComponentNode_vtable;
    return meta_vtableOf(&object);
}

}
#pragma pop
}

namespace igGroup_destructor {
// dtor_80111290: the deleting destructor of igGroup. Written by tools/alchemymeta/dtorsrc.py.

META_DECLARE(igGroup)
META_DECLARE(igNamedObject)
META_DECLARE(igNode)
extern "C" {
void fn_80066DFC(void *object);   // frees an object
}

struct igNamedObjectObject {
    void *__vtable;
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectObject() { __vtable = igNamedObject_vtable; }
};
struct igNodeObject : igNamedObjectObject {
    igObjectRefMember _bound;
    igObjectRefMember _parentList;
    inline ~igNodeObject() { __vtable = igNode_vtable; }
};
struct igGroupObject : igNodeObject {
    char unknown14[8];
    igObjectRefMember _childList;
};

extern "C" igGroupObject *dtor_80111290(igGroupObject *self, short flags)
{
    if (self) {
        self->__vtable = igGroup_vtable;
        self->_childList.~igObjectRefMember();
        self->igNodeObject::~igNodeObject();
        if (flags > 0) fn_80066DFC(self);
    }
    return self;
}
}

namespace igGuiComponentNode_2 {
// igGuiComponentNode: Alchemy class registration (0x801113D0..0x8011148C). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igGuiComponentNode)
META_DECLARE(igGroup)

extern "C" {
void fn_8010CBD4();
void *fn_8011148C();
extern char igGuiComponentNode_dependencies[8];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(igGuiComponentNode)

void igGuiComponentNode_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igGuiComponentNode_meta, igGroup_register,
                       fn_8011148C, igGuiComponentNode_getMetaCall,
                       igGuiComponentNode_className, 0x24,
                       igGuiComponentNode_vtableRead, igGuiComponentNode_fieldInit, 0, igGuiComponentNode_dependencies);
}

META_GET_META_CALL(igGuiComponentNode)

}
#pragma pop
}

namespace unknown8011148C {
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
void fn_8010CBD4();
void *fn_8010EE6C();
void *fn_80111CD4();
void igGroup_register();
void igGuiComponentModel_fieldInit();
void *igGuiComponentNode_getMeta();
void igGuiComponentNode_vtableRead();
void igModel_register();
extern char igModel_vtable[];
extern char igGuiComponentModel_vtable[];
extern char igGuiComponentNode_dependencies[8];
extern char igGuiComponentNode_fieldTypes[4];
extern char igGuiComponentNode_fieldNames[4];
extern char igGuiComponentNode_fieldStorage[4];
extern char igGuiComponentNode_fieldOffsets[4];
extern char igGuiComponentModel_dependencies[8];
extern void *lbl_805621F4;
extern void *igGuiComponentNode_meta;
extern void *igGuiComponentModel_meta;
extern void *igGroup_meta;
void igGuiComponentNode_register();
void *igGuiComponentNode_getMetaCall();
void *fn_8011148C();
void igGuiComponentNode_fieldInit();
void *igGuiComponentModel_getMeta();
void *igGuiComponentModel_vtableRead();
void igGuiComponentModel_arkRegister();
void igGuiComponentModel_register();
void *igGuiComponentModel_getMetaCall();
}
struct UnknownGenRoot80111594 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80111594(){igObject_construct(this);}
};
struct UnknownGenObject80111594_0 : UnknownGenRoot80111594 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject80111594_0(){unknown00=igModel_vtable;}
};
struct UnknownGenObject80111594 : UnknownGenObject80111594_0 {
 char unknown0C[36];
 inline ~UnknownGenObject80111594(){unknown00=igGuiComponentModel_vtable;}
};
extern "C" {
void *fn_8011148C(){return igGroup_meta;}
}
#pragma pop
}

namespace igGuiComponentNode_3 {
// igGuiComponentNode: Alchemy class registration (0x80111494..0x8011151C). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igGuiComponentNode)

extern "C" {
void *fn_80111CD4();
extern char igGuiComponentNode_fieldNames[4];
extern char igGuiComponentNode_fieldOffsets[4];
extern char igGuiComponentNode_fieldStorage[4];
extern char igGuiComponentNode_fieldTypes[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igGuiComponentNode_fieldInit()
{
    Meta::igMetaObject *meta = igGuiComponentNode_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igGuiComponentNode_fieldTypes, 1);
    Meta::igObjectRefMetaField *componentField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_80111CD4();
    componentField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    componentField->_refCounted = false;
    meta_setupFields(meta, igGuiComponentNode_fieldNames, igGuiComponentNode_fieldStorage, igGuiComponentNode_fieldOffsets, base);
}

}
#pragma pop
}

namespace unknown8011151C {
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
void fn_8010CBD4();
void *fn_8010EE6C();
void *fn_80111CD4();
void igGroup_register();
void igGuiComponentModel_fieldInit();
void *igGuiComponentNode_getMeta();
void igGuiComponentNode_vtableRead();
void igModel_register();
extern char igModel_vtable[];
extern char igGuiComponentModel_vtable[];
extern char igGuiComponentNode_dependencies[8];
extern char igGuiComponentNode_fieldTypes[4];
extern char igGuiComponentNode_fieldNames[4];
extern char igGuiComponentNode_fieldStorage[4];
extern char igGuiComponentNode_fieldOffsets[4];
extern char igGuiComponentModel_dependencies[8];
extern void *lbl_805621F4;
extern void *igGuiComponentNode_meta;
extern void *igGuiComponentModel_meta;
extern void *igGroup_meta;
void igGuiComponentNode_register();
void *igGuiComponentNode_getMetaCall();
void *fn_8011148C();
void igGuiComponentNode_fieldInit();
void *igGuiComponentModel_getMeta();
void *igGuiComponentModel_vtableRead();
void igGuiComponentModel_arkRegister();
void igGuiComponentModel_register();
void *igGuiComponentModel_getMetaCall();
}
struct UnknownGenRoot80111594 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80111594(){igObject_construct(this);}
};
struct UnknownGenObject80111594_0 : UnknownGenRoot80111594 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject80111594_0(){unknown00=igModel_vtable;}
};
struct UnknownGenObject80111594 : UnknownGenObject80111594_0 {
 char unknown0C[36];
 inline ~UnknownGenObject80111594(){unknown00=igGuiComponentModel_vtable;}
};
extern "C" {
void *fn_8011151C(){
 if(!igGuiComponentModel_meta) igGuiComponentModel_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igGuiComponentModel_meta;
}
void *igGuiComponentModel_getMeta(){
 if(!igGuiComponentModel_meta || !(reinterpret_cast<unsigned int *>(igGuiComponentModel_meta)[0x24/4]&4)) igGuiComponentModel_arkRegister();
 return igGuiComponentModel_meta;
}
void *igGuiComponentModel_vtableRead(){
 UnknownGenObject80111594 object;
 object.unknown00=igModel_vtable;
 object.unknown08.value=0;
 object.unknown00=igGuiComponentModel_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igGuiComponentModel_arkRegister(){
 meta_registerNow((int)igGuiComponentModel_register);
}
void igGuiComponentModel_register(){
 fn_8010CBD4();
 meta_registerClass(0,(int)&igGuiComponentModel_meta,(int)igModel_register,(int)fn_8010EE6C,(int)igGuiComponentModel_getMetaCall,(int)igGuiComponentModel_className,36,(int)igGuiComponentModel_vtableRead,(int)igGuiComponentModel_fieldInit,0,(int)igGuiComponentModel_dependencies);
}
void *igGuiComponentModel_getMetaCall(){return igGuiComponentModel_getMeta();}
}
#pragma pop
}

namespace igGuiComponentModel_fieldInit {
// igGuiComponentModel: Alchemy class registration (0x801116E8..0x801117B0). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igGuiComponentModel)

extern "C" {
void fn_8003EC68(void *, int);
void *fn_80111CD4();
void fn_80126808(void *, void *);
extern const char lbl_805669AC[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igGuiComponentModel_fieldInit()
{
    float local[3];
    Meta::igMetaObject *meta = igGuiComponentModel_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igGuiComponentModel_fieldTypes, 7);
    Meta::igBoolMetaField *enabledField = static_cast<Meta::igBoolMetaField *>(meta_field(meta, base));
    void *value_v2 = fn_80111CD4();
    *reinterpret_cast<void **>(reinterpret_cast<char *>(enabledField) + 0x38) = value_v2;
    *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(enabledField) + 0x3C) = 0;
    Meta::igBoolMetaField *hasFocusField = static_cast<Meta::igBoolMetaField *>(meta_field(meta, base + 1));
    fn_8003EC68(hasFocusField, 1);
    Meta::igBoolMetaField *childHasFocusField = static_cast<Meta::igBoolMetaField *>(meta_field(meta, base + 5));
    local[0] = *reinterpret_cast<const float *>(lbl_805669AC);
    local[1] = *reinterpret_cast<const float *>(lbl_805669AC);
    local[2] = *reinterpret_cast<const float *>(lbl_805669AC);
    fn_80126808(childHasFocusField, &local[0]);
    meta_setupFields(meta, igGuiComponentModel_fieldNames, igGuiComponentModel_fieldStorage, igGuiComponentModel_fieldOffsets, base);
}

}
#pragma pop
}

namespace unknown801117B0 {
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8010CBD4();
void *fn_8010E6DC();
void igGuiComponentAspect_fieldInit();
void igView_register();
extern char lbl_80495AD8[];
extern char igGuiComponentController_vtable[];
extern char igGuiComponentAspect_dependencies[8];
extern void *lbl_805621F4;
extern void *igGuiComponentController_meta;
extern void *igGuiComponentAspect_meta;
void *igGuiComponentController_getMeta();
void *igGuiComponentController_vtableRead();
void igGuiComponentController_arkRegister();
void igGuiComponentController_register();
void *igGuiComponentController_getMetaCall();
void *igGuiComponentAspect_getMeta();
void igGuiComponentAspect_arkRegister();
void igGuiComponentAspect_register();
void *igGuiComponentAspect_getMetaCall();
}
struct UnknownGenObject80111828_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_801117B0(){
 if(!igGuiComponentController_meta) igGuiComponentController_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igGuiComponentController_meta;
}
}
#pragma pop
}

namespace igGuiComponentController {
// igGuiComponentController: Alchemy class registration (0x801117EC..0x80111924). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igGuiComponentController)
META_DECLARE(igView)

extern "C" {
void fn_8010CBD4();
void *fn_8010E6DC();
extern char lbl_80495AD8[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igGuiComponentController)

void *igGuiComponentController_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_80495AD8;
    object.__vtable = igGuiComponentController_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igGuiComponentController)

void igGuiComponentController_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igGuiComponentController_meta, igView_register,
                       fn_8010E6DC, igGuiComponentController_getMetaCall,
                       igGuiComponentController_className, 0xC,
                       igGuiComponentController_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igGuiComponentController)

}
#pragma pop
}

namespace unknown80111924 {
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8010CBD4();
void *fn_8010E6DC();
void igGuiComponentAspect_fieldInit();
void igView_register();
extern char lbl_80495AD8[];
extern char igGuiComponentController_vtable[];
extern char igGuiComponentAspect_dependencies[8];
extern void *lbl_805621F4;
extern void *igGuiComponentController_meta;
extern void *igGuiComponentAspect_meta;
void *igGuiComponentController_getMeta();
void *igGuiComponentController_vtableRead();
void igGuiComponentController_arkRegister();
void igGuiComponentController_register();
void *igGuiComponentController_getMetaCall();
void *igGuiComponentAspect_getMeta();
void igGuiComponentAspect_arkRegister();
void igGuiComponentAspect_register();
void *igGuiComponentAspect_getMetaCall();
}
struct UnknownGenObject80111828_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_80111924(){
 if(!igGuiComponentAspect_meta) igGuiComponentAspect_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igGuiComponentAspect_meta;
}
void *igGuiComponentAspect_getMeta(){
 if(!igGuiComponentAspect_meta || !(reinterpret_cast<unsigned int *>(igGuiComponentAspect_meta)[0x24/4]&4)) igGuiComponentAspect_arkRegister();
 return igGuiComponentAspect_meta;
}
void igGuiComponentAspect_arkRegister(){
 meta_registerNow((int)igGuiComponentAspect_register);
}
void igGuiComponentAspect_register(){
 fn_8010CBD4();
 meta_registerClass(1,(int)&igGuiComponentAspect_meta,(int)igView_register,(int)fn_8010E6DC,(int)igGuiComponentAspect_getMetaCall,(int)igGuiComponentAspect_className,40,0,(int)igGuiComponentAspect_fieldInit,0,(int)igGuiComponentAspect_dependencies);
}
void *igGuiComponentAspect_getMetaCall(){return igGuiComponentAspect_getMeta();}
}
#pragma pop
}

namespace igGuiComponentAspect_fieldInit {
// igGuiComponentAspect: Alchemy class registration (0x80111A54..0x80111B38). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igGuiComponentAspect)

extern "C" {
void *fn_801110A0();
void fn_80126808(void *, void *);
extern char lbl_8055DE2C[];
extern const char lbl_805669A8[4];
extern const char lbl_805669AC[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igGuiComponentAspect_fieldInit()
{
    float local[6];
    Meta::igMetaObject *meta = igGuiComponentAspect_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igGuiComponentAspect_fieldTypes, 3);
    Meta::igObjectRefMetaField *nodeField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_v2 = fn_801110A0();
    nodeField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v2);
    nodeField->_refCounted = false;
    Meta::igVec3fMetaField *minSizeField = static_cast<Meta::igVec3fMetaField *>(meta_field(meta, base + 1));
    local[3] = *reinterpret_cast<const float *>(lbl_805669AC);
    local[4] = *reinterpret_cast<const float *>(lbl_805669AC);
    local[5] = *reinterpret_cast<const float *>(lbl_805669AC);
    fn_80126808(minSizeField, &local[3]);
    Meta::igVec3fMetaField *maxSizeField = static_cast<Meta::igVec3fMetaField *>(meta_field(meta, base + 2));
    local[0] = *reinterpret_cast<const float *>(lbl_8055DE2C);
    local[1] = *reinterpret_cast<const float *>(lbl_8055DE2C);
    local[2] = *reinterpret_cast<const float *>(lbl_805669A8);
    fn_80126808(maxSizeField, &local[0]);
    meta_setupFields(meta, igGuiComponentAspect_fieldNames, igGuiComponentAspect_fieldStorage, igGuiComponentAspect_fieldOffsets, base);
}

}
#pragma pop
}

namespace unknown80111B38 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8010CBD4();
void igGuiComponent_fieldInit();
void igObjectList_register();
void igObject_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igGuiComponent_vtable[];
extern char igGuiComponentList_vtable[];
extern char lbl_804974E4[];
extern char igGuiComponentList_dependencies[8];
extern void *lbl_805621F4;
extern void *igGuiComponentList_meta;
extern void *igGuiComponent_meta;
void *igGuiComponentList_getMeta();
void *igGuiComponentList_vtableRead();
void igGuiComponentList_arkRegister();
void igGuiComponentList_register();
void *igGuiComponentList_getMetaCall();
void *igGuiComponent_getMeta();
void *igGuiComponent_vtableRead();
void igGuiComponent_arkRegister();
void igGuiComponent_register();
void *igGuiComponent_getMetaCall();
}
struct UnknownGenObject80111BB0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot80111D4C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80111D4C(){igObject_construct(this);}
};
struct UnknownGenObject80111D4C : UnknownGenRoot80111D4C {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 char unknown18[4];
 UnknownGenRefMember unknown1C;
 char unknown20[8];
 inline ~UnknownGenObject80111D4C(){unknown00=igGuiComponent_vtable;}
};
extern "C" {
void *fn_80111B38(){
 if(!igGuiComponentList_meta) igGuiComponentList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igGuiComponentList_meta;
}
}
#pragma pop
}

namespace igGuiComponentList {
// igGuiComponentList: Alchemy class registration (0x80111B74..0x80111CD4). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igGuiComponentList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_8010CBD4();
extern char igGuiComponentList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804974E4[];
}

struct Instance_80111BB0_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igGuiComponentList)

void *igGuiComponentList_vtableRead()
{
    Instance_80111BB0_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804974E4;
    object.__vtable = igGuiComponentList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igGuiComponentList)

void igGuiComponentList_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igGuiComponentList_meta, igObjectList_register,
                       fn_80024180, igGuiComponentList_getMetaCall,
                       igGuiComponentList_className, 0x14,
                       igGuiComponentList_vtableRead, 0, 0, igGuiComponentList_dependencies);
}

META_GET_META_CALL(igGuiComponentList)

}
#pragma pop
}

namespace unknown80111CD4 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8010CBD4();
void igGuiComponent_fieldInit();
void igObjectList_register();
void igObject_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igGuiComponent_vtable[];
extern char igGuiComponentList_vtable[];
extern char lbl_804974E4[];
extern char igGuiComponentList_dependencies[8];
extern void *lbl_805621F4;
extern void *igGuiComponentList_meta;
extern void *igGuiComponent_meta;
void *igGuiComponentList_getMeta();
void *igGuiComponentList_vtableRead();
void igGuiComponentList_arkRegister();
void igGuiComponentList_register();
void *igGuiComponentList_getMetaCall();
void *igGuiComponent_getMeta();
void *igGuiComponent_vtableRead();
void igGuiComponent_arkRegister();
void igGuiComponent_register();
void *igGuiComponent_getMetaCall();
}
struct UnknownGenObject80111BB0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot80111D4C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80111D4C(){igObject_construct(this);}
};
struct UnknownGenObject80111D4C : UnknownGenRoot80111D4C {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 char unknown18[4];
 UnknownGenRefMember unknown1C;
 char unknown20[8];
 inline ~UnknownGenObject80111D4C(){unknown00=igGuiComponent_vtable;}
};
extern "C" {
void *fn_80111CD4(){
 if(!igGuiComponent_meta) igGuiComponent_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igGuiComponent_meta;
}
void *igGuiComponent_getMeta(){
 if(!igGuiComponent_meta || !(reinterpret_cast<unsigned int *>(igGuiComponent_meta)[0x24/4]&4)) igGuiComponent_arkRegister();
 return igGuiComponent_meta;
}
void *igGuiComponent_vtableRead(){
 UnknownGenObject80111D4C object;
 object.unknown00=igGuiComponent_vtable;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown1C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igGuiComponent_arkRegister(){
 meta_registerNow((int)igGuiComponent_register);
}
void igGuiComponent_register(){
 fn_8010CBD4();
 meta_registerClass(0,(int)&igGuiComponent_meta,(int)igObject_register,(int)fn_800237D0,(int)igGuiComponent_getMetaCall,(int)igGuiComponent_className,36,(int)igGuiComponent_vtableRead,(int)igGuiComponent_fieldInit,0,(int)igGuiComponent_dependencies);
}
void *igGuiComponent_getMetaCall(){return igGuiComponent_getMeta();}
}
#pragma pop
}

namespace igGuiComponent_fieldInit {
// igGuiComponent: Alchemy class registration (0x80111F44..0x8011205C). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igGuiComponent)

extern "C" {
void *fn_8010F9B0();
void *fn_801110A0();
void *fn_8011151C();
void *fn_801117B0();
void *fn_80111924();
void *fn_80111CD4();
}

#pragma push
#pragma auto_inline off
extern "C" {

void igGuiComponent_fieldInit()
{
    Meta::igMetaObject *meta = igGuiComponent_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igGuiComponent_fieldTypes, 7);
    Meta::igObjectRefMetaField *guiSystemField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_v2 = fn_801117B0();
    guiSystemField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v2);
    Meta::igObjectRefMetaField *controllerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_v4 = fn_8011151C();
    controllerField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v4);
    Meta::igObjectRefMetaField *modelField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    void *value_v6 = fn_80111924();
    modelField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v6);
    Meta::igObjectRefMetaField *aspectField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 3));
    void *value_v8 = fn_80111CD4();
    aspectField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v8);
    aspectField->_refCounted = false;
    Meta::igObjectRefMetaField *parentField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 4));
    void *value_v10 = fn_8010F9B0();
    parentField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v10);
    parentField->_refCounted = false;
    Meta::igObjectRefMetaField *nodeField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 5));
    void *value_v12 = fn_801110A0();
    nodeField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v12);
    nodeField->_construct = true;
    meta_setupFields(meta, igGuiComponent_fieldNames, igGuiComponent_fieldStorage, igGuiComponent_fieldOffsets, base);
}

}
#pragma pop
}

namespace unknown8011205C {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8010CBD4();
void igGeometryElement_fieldInit();
void igObject_register();
extern void *lbl_805621F4;
extern void *igGeometryElement_meta;
void *igGeometryElement_getMeta();
void igGeometryElement_arkRegister();
void igGeometryElement_register();
void *igGeometryElement_getMetaCall();
}
extern "C" {
void *fn_8011205C(){
 if(!igGeometryElement_meta) igGeometryElement_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igGeometryElement_meta;
}
void *igGeometryElement_getMeta(){
 if(!igGeometryElement_meta || !(reinterpret_cast<unsigned int *>(igGeometryElement_meta)[0x24/4]&4)) igGeometryElement_arkRegister();
 return igGeometryElement_meta;
}
void igGeometryElement_arkRegister(){
 meta_registerNow((int)igGeometryElement_register);
}
void igGeometryElement_register(){
 fn_8010CBD4();
 meta_registerClass(1,(int)&igGeometryElement_meta,(int)igObject_register,(int)fn_800237D0,(int)igGeometryElement_getMetaCall,(int)igGeometryElement_className,44,0,(int)igGeometryElement_fieldInit,0,(int)igGeometryElement_dependencies);
}
void *igGeometryElement_getMetaCall(){return igGeometryElement_getMeta();}
}
#pragma pop
}

namespace igGeometryElement_fieldInit {
// igGeometryElement: Alchemy class registration (0x80112190..0x8011228C). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igGeometryElement)

extern "C" {
void *fn_800BB61C();
void fn_80126808(void *, void *);
void fn_80126CF0(void *, void *);
void *fn_801C010C();
extern const char lbl_805669A8[4];
extern const char lbl_805669AC[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igGeometryElement_fieldInit()
{
    float local[7];
    Meta::igMetaObject *meta = igGeometryElement_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igGeometryElement_fieldTypes, 4);
    Meta::igObjectRefMetaField *geometryField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_v2 = fn_801C010C();
    geometryField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v2);
    geometryField->_construct = true;
    Meta::igVec3fMetaField *defaultSizeField = static_cast<Meta::igVec3fMetaField *>(meta_field(meta, base + 1));
    local[4] = *reinterpret_cast<const float *>(lbl_805669AC);
    local[5] = *reinterpret_cast<const float *>(lbl_805669AC);
    local[6] = *reinterpret_cast<const float *>(lbl_805669AC);
    fn_80126808(defaultSizeField, &local[4]);
    Meta::igVec4fMetaField *colorField = static_cast<Meta::igVec4fMetaField *>(meta_field(meta, base + 2));
    local[0] = *reinterpret_cast<const float *>(lbl_805669A8);
    local[1] = *reinterpret_cast<const float *>(lbl_805669A8);
    local[2] = *reinterpret_cast<const float *>(lbl_805669A8);
    local[3] = *reinterpret_cast<const float *>(lbl_805669A8);
    fn_80126CF0(colorField, &local[0]);
    Meta::igObjectRefMetaField *sharableAttrsField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 3));
    void *value_v6 = fn_800BB61C();
    sharableAttrsField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v6);
    sharableAttrsField->_construct = true;
    meta_setupFields(meta, igGeometryElement_fieldNames, igGeometryElement_fieldStorage, igGeometryElement_fieldOffsets, base);
}

}
#pragma pop
}

namespace unknown8011228C {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8010CBD4();
void igFont_fieldInit();
void igNamedObject_register();
extern char igFont_dependencies[8];
extern char lbl_8055F124[7];
extern void *lbl_805621F4;
extern void *igFont_meta;
void *igFont_getMeta();
void igFont_arkRegister();
void igFont_register();
void *igFont_getMetaCall();
}
extern "C" {
void *fn_8011228C(){
 if(!igFont_meta) igFont_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igFont_meta;
}
void *igFont_getMeta(){
 if(!igFont_meta || !(reinterpret_cast<unsigned int *>(igFont_meta)[0x24/4]&4)) igFont_arkRegister();
 return igFont_meta;
}
void igFont_arkRegister(){
 meta_registerNow((int)igFont_register);
}
void igFont_register(){
 fn_8010CBD4();
 meta_registerClass(1,(int)&igFont_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)igFont_getMetaCall,(int)lbl_8055F124,28,0,(int)igFont_fieldInit,0,(int)igFont_dependencies);
}
void *igFont_getMetaCall(){return igFont_getMeta();}
}
#pragma pop
}

namespace igFont_fieldInit {
// igFont: Alchemy class registration (0x801123B8..0x80112448). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igFont)

extern "C" {
void *fn_800BB61C();
}

#pragma push
#pragma auto_inline off
extern "C" {

void igFont_fieldInit()
{
    Meta::igMetaObject *meta = igFont_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igFont_fieldTypes, 4);
    Meta::igObjectRefMetaField *attrListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    void *value_v2 = fn_800BB61C();
    attrListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v2);
    attrListField->_construct = true;
    meta_setupFields(meta, igFont_fieldNames, igFont_fieldStorage, igFont_fieldOffsets, base);
}

}
#pragma pop
}

namespace igFieldSynchronizer {
// igFieldSynchronizer: Alchemy class registration (0x80112448..0x80112480). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igFieldSynchronizer)

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igFieldSynchronizer)

}
#pragma pop
}

namespace unknown80112480 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_8002A638();
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
void *fn_800CB840();
void *fn_800CB8B8();
void fn_8010CBD4();
void *fn_8010DB2C();
void *fn_8010E280();
void *fn_8010E6DC();
void igDefaultAspectElement_fieldInit();
void igDependencyOrderedList_register();
void igGuiComponentAspect_register();
void igInterfaceManager_register();
void igObjectList_register();
void igObject_register();
void igView_register();
extern char igDataList_vtable[];
extern char igDependencyOrderedList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char lbl_80480440[];
extern char lbl_80495AD8[];
extern char lbl_8049652C[];
extern char igFieldChangeView_vtable[];
extern char igEventDispatcher_vtable[];
extern char igDefaultAspect_vtable[];
extern char igDefaultAspectElement_vtable[];
extern char igDefaultAspectElementList_vtable[];
extern char lbl_80497178[];
extern char igEventReceiverOrderedList_vtable[];
extern char lbl_80497238[];
extern char igFieldChangeViewList_vtable[];
extern char lbl_804973C0[];
extern char igFieldSynchronizer_vtable[];
extern char igEventReceiver_vtable[];
extern char igFieldSynchronizer_dependencies[8];
extern char igFieldSynchronizer_fieldTypes[4];
extern char igFieldSynchronizer_fieldNames[4];
extern char igFieldSynchronizer_fieldStorage[4];
extern char igFieldSynchronizer_fieldOffsets[4];
extern char igFieldChangeViewList_dependencies[8];
extern char igFieldChangeView_fieldTypes[8];
extern char igFieldChangeView_fieldNames[8];
extern char igFieldChangeView_fieldStorage[8];
extern char igFieldChangeView_fieldOffsets[8];
extern char igEventReceiverOrderedList_dependencies[8];
extern char igEventDispatcher_fieldTypes[8];
extern char igEventDispatcher_fieldNames[8];
extern char igEventDispatcher_fieldStorage[8];
extern char igEventDispatcher_fieldOffsets[8];
extern char igDefaultAspect_dependencies[8];
extern char igDefaultAspect_fieldTypes[4];
extern char igDefaultAspect_fieldNames[4];
extern char igDefaultAspect_fieldStorage[4];
extern char igDefaultAspect_fieldOffsets[4];
extern char igDefaultAspectElementList_dependencies[8];
extern void *lbl_805621F4;
extern void *igFieldSynchronizer_meta;
extern void *igFieldChangeViewList_meta;
extern void *igFieldChangeView_meta;
extern void *igEventReceiverOrderedList_meta;
extern void *igEventReceiver_meta;
extern void *igEventDispatcher_meta;
extern void *igDefaultAspect_meta;
extern void *igDefaultAspectElementList_meta;
extern void *lbl_805637D4;
extern void *igDefaultAspectElement_meta;
void *fn_80112480();
void *igFieldSynchronizer_getMeta();
void *igFieldSynchronizer_vtableRead();
void igFieldSynchronizer_arkRegister();
void igFieldSynchronizer_register();
void *igFieldSynchronizer_getMetaCall();
void igFieldSynchronizer_fieldInit();
void *fn_801126C4();
void *igFieldChangeViewList_getMeta();
void *igFieldChangeViewList_vtableRead();
void igFieldChangeViewList_arkRegister();
void igFieldChangeViewList_register();
void *igFieldChangeViewList_getMetaCall();
void *igFieldChangeView_getMeta();
void *igFieldChangeView_vtableRead();
void igFieldChangeView_arkRegister();
void igFieldChangeView_register();
void *igFieldChangeView_getMetaCall();
void igFieldChangeView_fieldInit();
void *fn_80112AC8();
void *igEventReceiverOrderedList_getMeta();
void *igEventReceiverOrderedList_vtableRead();
void igEventReceiverOrderedList_arkRegister();
void igEventReceiverOrderedList_register();
void *igEventReceiverOrderedList_getMetaCall();
void *igEventReceiver_getMeta();
void *igEventReceiver_vtableRead();
void igEventReceiver_arkRegister();
void igEventReceiver_register();
void *igEventReceiver_getMetaCall();
void *igEventDispatcher_getMeta();
void *igEventDispatcher_vtableRead();
void igEventDispatcher_arkRegister();
void igEventDispatcher_register();
void *igEventDispatcher_getMetaCall();
void igEventDispatcher_fieldInit();
void *igDefaultAspect_getMeta();
void *igDefaultAspect_vtableRead();
void igDefaultAspect_arkRegister();
void igDefaultAspect_register();
void *igDefaultAspect_getMetaCall();
void igDefaultAspect_fieldInit();
void *fn_801133CC();
void *igDefaultAspectElementList_getMeta();
void *igDefaultAspectElementList_vtableRead();
void igDefaultAspectElementList_arkRegister();
void igDefaultAspectElementList_register();
void *igDefaultAspectElementList_getMetaCall();
void *igDefaultAspectElement_getMeta();
void *igDefaultAspectElement_vtableRead();
void igDefaultAspectElement_arkRegister();
void igDefaultAspectElement_register();
void *igDefaultAspectElement_getMetaCall();
}
struct UnknownGenRoot801124F8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801124F8(){igObject_construct(this);}
};
struct UnknownGenObject801124F8 : UnknownGenRoot801124F8 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject801124F8(){unknown00=igFieldSynchronizer_vtable;}
};
struct UnknownGenObject8011273C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801128D4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801128D4(){igObject_construct(this);}
};
struct UnknownGenObject801128D4 : UnknownGenRoot801128D4 {
 char unknown04[12];
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject801128D4(){unknown00=igFieldChangeView_vtable;}
};
struct UnknownGenRoot80112B40 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80112B40(){igObject_construct(this);}
};
struct UnknownGenObject80112B40_0 : UnknownGenRoot80112B40 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject80112B40_0(){unknown00=igDependencyOrderedList_vtable;}
};
struct UnknownGenObject80112B40_1 : UnknownGenObject80112B40_0 {
 inline ~UnknownGenObject80112B40_1(){unknown00=lbl_80497238;}
};
struct UnknownGenObject80112B40 : UnknownGenObject80112B40_1 {
 char unknown18[16];
 inline ~UnknownGenObject80112B40(){unknown00=igEventReceiverOrderedList_vtable;}
};
struct UnknownGenObject80112D88_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenRoot80112EF0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80112EF0(){igObject_construct(this);}
};
struct UnknownGenObject80112EF0_0 : UnknownGenRoot80112EF0 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject80112EF0_0(){unknown00=lbl_80480440;}
};
struct UnknownGenObject80112EF0 : UnknownGenObject80112EF0_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[4];
 inline ~UnknownGenObject80112EF0(){unknown00=igEventDispatcher_vtable;}
};
struct UnknownGenRoot801131E8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801131E8(){igObject_construct(this);}
};
struct UnknownGenObject801131E8 : UnknownGenRoot801131E8 {
 char unknown04[36];
 UnknownGenRefMember unknown28;
 char unknown2C[4];
 inline ~UnknownGenObject801131E8(){unknown00=igDefaultAspect_vtable;}
};
struct UnknownGenObject80113444_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801135F0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801135F0(){igObject_construct(this);}
};
struct UnknownGenObject801135F0 : UnknownGenRoot801135F0 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[20];
 inline ~UnknownGenObject801135F0(){unknown00=igDefaultAspectElement_vtable;}
};
extern "C" {
void *fn_80112480(){
 if(!igFieldSynchronizer_meta) igFieldSynchronizer_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igFieldSynchronizer_meta;
}
}
#pragma pop
}

namespace igFieldSynchronizer_2 {
// igFieldSynchronizer: Alchemy class registration (0x801124BC..0x801126C4). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igFieldSynchronizer)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_8010CBD4();
void *fn_801126C4();
extern char igFieldSynchronizer_dependencies[8];
extern char igFieldSynchronizer_fieldNames[4];
extern char igFieldSynchronizer_fieldOffsets[4];
extern char igFieldSynchronizer_fieldStorage[4];
extern char igFieldSynchronizer_fieldTypes[4];
}

struct igFieldSynchronizerInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _views;
    char unknown0C[4];
    inline ~igFieldSynchronizerInstance() { __vtable = igFieldSynchronizer_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igFieldSynchronizer)

void *igFieldSynchronizer_vtableRead()
{
    igFieldSynchronizerInstance object;
    object.__vtable = igFieldSynchronizer_vtable;
    object._views._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igFieldSynchronizer)

void igFieldSynchronizer_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igFieldSynchronizer_meta, igObject_register,
                       fn_800237D0, igFieldSynchronizer_getMetaCall,
                       igFieldSynchronizer_className, 0xC,
                       igFieldSynchronizer_vtableRead, igFieldSynchronizer_fieldInit, 0, igFieldSynchronizer_dependencies);
}

META_GET_META_CALL(igFieldSynchronizer)

void igFieldSynchronizer_fieldInit()
{
    Meta::igMetaObject *meta = igFieldSynchronizer_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igFieldSynchronizer_fieldTypes, 1);
    Meta::igObjectRefMetaField *viewsField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_801126C4();
    viewsField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    viewsField->_construct = true;
    meta_setupFields(meta, igFieldSynchronizer_fieldNames, igFieldSynchronizer_fieldStorage, igFieldSynchronizer_fieldOffsets, base);
}

}
#pragma pop
}

namespace unknown801126C4 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_8002A638();
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
void *fn_800CB840();
void *fn_800CB8B8();
void fn_8010CBD4();
void *fn_8010DB2C();
void *fn_8010E280();
void *fn_8010E6DC();
void igDefaultAspectElement_fieldInit();
void igDependencyOrderedList_register();
void igGuiComponentAspect_register();
void igInterfaceManager_register();
void igObjectList_register();
void igObject_register();
void igView_register();
extern char igDataList_vtable[];
extern char igDependencyOrderedList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char lbl_80480440[];
extern char lbl_80495AD8[];
extern char lbl_8049652C[];
extern char igFieldChangeView_vtable[];
extern char igEventDispatcher_vtable[];
extern char igDefaultAspect_vtable[];
extern char igDefaultAspectElement_vtable[];
extern char igDefaultAspectElementList_vtable[];
extern char lbl_80497178[];
extern char igEventReceiverOrderedList_vtable[];
extern char lbl_80497238[];
extern char igFieldChangeViewList_vtable[];
extern char lbl_804973C0[];
extern char igFieldSynchronizer_vtable[];
extern char igEventReceiver_vtable[];
extern char igFieldSynchronizer_dependencies[8];
extern char igFieldSynchronizer_fieldTypes[4];
extern char igFieldSynchronizer_fieldNames[4];
extern char igFieldSynchronizer_fieldStorage[4];
extern char igFieldSynchronizer_fieldOffsets[4];
extern char igFieldChangeViewList_dependencies[8];
extern char igFieldChangeView_fieldTypes[8];
extern char igFieldChangeView_fieldNames[8];
extern char igFieldChangeView_fieldStorage[8];
extern char igFieldChangeView_fieldOffsets[8];
extern char igEventReceiverOrderedList_dependencies[8];
extern char igEventDispatcher_fieldTypes[8];
extern char igEventDispatcher_fieldNames[8];
extern char igEventDispatcher_fieldStorage[8];
extern char igEventDispatcher_fieldOffsets[8];
extern char igDefaultAspect_dependencies[8];
extern char igDefaultAspect_fieldTypes[4];
extern char igDefaultAspect_fieldNames[4];
extern char igDefaultAspect_fieldStorage[4];
extern char igDefaultAspect_fieldOffsets[4];
extern char igDefaultAspectElementList_dependencies[8];
extern void *lbl_805621F4;
extern void *igFieldSynchronizer_meta;
extern void *igFieldChangeViewList_meta;
extern void *igFieldChangeView_meta;
extern void *igEventReceiverOrderedList_meta;
extern void *igEventReceiver_meta;
extern void *igEventDispatcher_meta;
extern void *igDefaultAspect_meta;
extern void *igDefaultAspectElementList_meta;
extern void *lbl_805637D4;
extern void *igDefaultAspectElement_meta;
void *fn_80112480();
void *igFieldSynchronizer_getMeta();
void *igFieldSynchronizer_vtableRead();
void igFieldSynchronizer_arkRegister();
void igFieldSynchronizer_register();
void *igFieldSynchronizer_getMetaCall();
void igFieldSynchronizer_fieldInit();
void *fn_801126C4();
void *igFieldChangeViewList_getMeta();
void *igFieldChangeViewList_vtableRead();
void igFieldChangeViewList_arkRegister();
void igFieldChangeViewList_register();
void *igFieldChangeViewList_getMetaCall();
void *igFieldChangeView_getMeta();
void *igFieldChangeView_vtableRead();
void igFieldChangeView_arkRegister();
void igFieldChangeView_register();
void *igFieldChangeView_getMetaCall();
void igFieldChangeView_fieldInit();
void *fn_80112AC8();
void *igEventReceiverOrderedList_getMeta();
void *igEventReceiverOrderedList_vtableRead();
void igEventReceiverOrderedList_arkRegister();
void igEventReceiverOrderedList_register();
void *igEventReceiverOrderedList_getMetaCall();
void *igEventReceiver_getMeta();
void *igEventReceiver_vtableRead();
void igEventReceiver_arkRegister();
void igEventReceiver_register();
void *igEventReceiver_getMetaCall();
void *igEventDispatcher_getMeta();
void *igEventDispatcher_vtableRead();
void igEventDispatcher_arkRegister();
void igEventDispatcher_register();
void *igEventDispatcher_getMetaCall();
void igEventDispatcher_fieldInit();
void *igDefaultAspect_getMeta();
void *igDefaultAspect_vtableRead();
void igDefaultAspect_arkRegister();
void igDefaultAspect_register();
void *igDefaultAspect_getMetaCall();
void igDefaultAspect_fieldInit();
void *fn_801133CC();
void *igDefaultAspectElementList_getMeta();
void *igDefaultAspectElementList_vtableRead();
void igDefaultAspectElementList_arkRegister();
void igDefaultAspectElementList_register();
void *igDefaultAspectElementList_getMetaCall();
void *igDefaultAspectElement_getMeta();
void *igDefaultAspectElement_vtableRead();
void igDefaultAspectElement_arkRegister();
void igDefaultAspectElement_register();
void *igDefaultAspectElement_getMetaCall();
}
struct UnknownGenRoot801124F8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801124F8(){igObject_construct(this);}
};
struct UnknownGenObject801124F8 : UnknownGenRoot801124F8 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject801124F8(){unknown00=igFieldSynchronizer_vtable;}
};
struct UnknownGenObject8011273C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801128D4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801128D4(){igObject_construct(this);}
};
struct UnknownGenObject801128D4 : UnknownGenRoot801128D4 {
 char unknown04[12];
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject801128D4(){unknown00=igFieldChangeView_vtable;}
};
struct UnknownGenRoot80112B40 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80112B40(){igObject_construct(this);}
};
struct UnknownGenObject80112B40_0 : UnknownGenRoot80112B40 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject80112B40_0(){unknown00=igDependencyOrderedList_vtable;}
};
struct UnknownGenObject80112B40_1 : UnknownGenObject80112B40_0 {
 inline ~UnknownGenObject80112B40_1(){unknown00=lbl_80497238;}
};
struct UnknownGenObject80112B40 : UnknownGenObject80112B40_1 {
 char unknown18[16];
 inline ~UnknownGenObject80112B40(){unknown00=igEventReceiverOrderedList_vtable;}
};
struct UnknownGenObject80112D88_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenRoot80112EF0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80112EF0(){igObject_construct(this);}
};
struct UnknownGenObject80112EF0_0 : UnknownGenRoot80112EF0 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject80112EF0_0(){unknown00=lbl_80480440;}
};
struct UnknownGenObject80112EF0 : UnknownGenObject80112EF0_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[4];
 inline ~UnknownGenObject80112EF0(){unknown00=igEventDispatcher_vtable;}
};
struct UnknownGenRoot801131E8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801131E8(){igObject_construct(this);}
};
struct UnknownGenObject801131E8 : UnknownGenRoot801131E8 {
 char unknown04[36];
 UnknownGenRefMember unknown28;
 char unknown2C[4];
 inline ~UnknownGenObject801131E8(){unknown00=igDefaultAspect_vtable;}
};
struct UnknownGenObject80113444_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801135F0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801135F0(){igObject_construct(this);}
};
struct UnknownGenObject801135F0 : UnknownGenRoot801135F0 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[20];
 inline ~UnknownGenObject801135F0(){unknown00=igDefaultAspectElement_vtable;}
};
extern "C" {
void *fn_801126C4(){
 if(!igFieldChangeViewList_meta) igFieldChangeViewList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igFieldChangeViewList_meta;
}
}
#pragma pop
}

namespace igFieldChangeViewList {
// igFieldChangeViewList: Alchemy class registration (0x80112700..0x80112860). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igFieldChangeViewList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_8010CBD4();
extern char igFieldChangeViewList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804973C0[];
}

struct Instance_8011273C_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igFieldChangeViewList)

void *igFieldChangeViewList_vtableRead()
{
    Instance_8011273C_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804973C0;
    object.__vtable = igFieldChangeViewList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igFieldChangeViewList)

void igFieldChangeViewList_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igFieldChangeViewList_meta, igObjectList_register,
                       fn_80024180, igFieldChangeViewList_getMetaCall,
                       igFieldChangeViewList_className, 0x14,
                       igFieldChangeViewList_vtableRead, 0, 0, igFieldChangeViewList_dependencies);
}

META_GET_META_CALL(igFieldChangeViewList)

}
#pragma pop
}

namespace igFieldChangeView {
// igFieldChangeView: Alchemy class registration (0x80112860..0x80112AC8). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igFieldChangeView)
META_DECLARE(igView)

extern "C" {
void *fn_8002A638();
void fn_8010CBD4();
void *fn_8010E6DC();
void *fn_80112480();
extern char igFieldChangeView_fieldNames[8];
extern char igFieldChangeView_fieldOffsets[8];
extern char igFieldChangeView_fieldStorage[8];
extern char igFieldChangeView_fieldTypes[8];
extern char lbl_80495AD8[];
}

struct igFieldChangeViewInstance : igObjectInstance {
    char unknown04[12];
    igObjectRefMember _field;
    char unknown14[12];
    inline ~igFieldChangeViewInstance() { __vtable = igFieldChangeView_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igFieldChangeView)

META_GET_META(igFieldChangeView)

void *igFieldChangeView_vtableRead()
{
    igFieldChangeViewInstance object;
    object.__vtable = lbl_80495AD8;
    object.__vtable = igFieldChangeView_vtable;
    object._field._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igFieldChangeView)

void igFieldChangeView_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igFieldChangeView_meta, igView_register,
                       fn_8010E6DC, igFieldChangeView_getMetaCall,
                       igFieldChangeView_className, 0x14,
                       igFieldChangeView_vtableRead, igFieldChangeView_fieldInit, 0, igFieldChangeView_dependencies);
}

META_GET_META_CALL(igFieldChangeView)

void igFieldChangeView_fieldInit()
{
    Meta::igMetaObject *meta = igFieldChangeView_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igFieldChangeView_fieldTypes, 2);
    Meta::igObjectRefMetaField *synchronizerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_80112480();
    synchronizerField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    synchronizerField->_refCounted = false;
    Meta::igObjectRefMetaField *fieldField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_value5 = fn_8002A638();
    fieldField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value5);
    meta_setupFields(meta, igFieldChangeView_fieldNames, igFieldChangeView_fieldStorage, igFieldChangeView_fieldOffsets, base);
}

}
#pragma pop
}

namespace unknown80112AC8 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_8002A638();
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
void *fn_800CB840();
void *fn_800CB8B8();
void fn_8010CBD4();
void *fn_8010DB2C();
void *fn_8010E280();
void *fn_8010E6DC();
void igDefaultAspectElement_fieldInit();
void igDependencyOrderedList_register();
void igGuiComponentAspect_register();
void igInterfaceManager_register();
void igObjectList_register();
void igObject_register();
void igView_register();
extern char igDataList_vtable[];
extern char igDependencyOrderedList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char lbl_80480440[];
extern char lbl_80495AD8[];
extern char lbl_8049652C[];
extern char igFieldChangeView_vtable[];
extern char igEventDispatcher_vtable[];
extern char igDefaultAspect_vtable[];
extern char igDefaultAspectElement_vtable[];
extern char igDefaultAspectElementList_vtable[];
extern char lbl_80497178[];
extern char igEventReceiverOrderedList_vtable[];
extern char lbl_80497238[];
extern char igFieldChangeViewList_vtable[];
extern char lbl_804973C0[];
extern char igFieldSynchronizer_vtable[];
extern char igEventReceiver_vtable[];
extern char igFieldSynchronizer_dependencies[8];
extern char igFieldSynchronizer_fieldTypes[4];
extern char igFieldSynchronizer_fieldNames[4];
extern char igFieldSynchronizer_fieldStorage[4];
extern char igFieldSynchronizer_fieldOffsets[4];
extern char igFieldChangeViewList_dependencies[8];
extern char igFieldChangeView_fieldTypes[8];
extern char igFieldChangeView_fieldNames[8];
extern char igFieldChangeView_fieldStorage[8];
extern char igFieldChangeView_fieldOffsets[8];
extern char igEventReceiverOrderedList_dependencies[8];
extern char igEventDispatcher_fieldTypes[8];
extern char igEventDispatcher_fieldNames[8];
extern char igEventDispatcher_fieldStorage[8];
extern char igEventDispatcher_fieldOffsets[8];
extern char igDefaultAspect_dependencies[8];
extern char igDefaultAspect_fieldTypes[4];
extern char igDefaultAspect_fieldNames[4];
extern char igDefaultAspect_fieldStorage[4];
extern char igDefaultAspect_fieldOffsets[4];
extern char igDefaultAspectElementList_dependencies[8];
extern void *lbl_805621F4;
extern void *igFieldSynchronizer_meta;
extern void *igFieldChangeViewList_meta;
extern void *igFieldChangeView_meta;
extern void *igEventReceiverOrderedList_meta;
extern void *igEventReceiver_meta;
extern void *igEventDispatcher_meta;
extern void *igDefaultAspect_meta;
extern void *igDefaultAspectElementList_meta;
extern void *lbl_805637D4;
extern void *igDefaultAspectElement_meta;
void *fn_80112480();
void *igFieldSynchronizer_getMeta();
void *igFieldSynchronizer_vtableRead();
void igFieldSynchronizer_arkRegister();
void igFieldSynchronizer_register();
void *igFieldSynchronizer_getMetaCall();
void igFieldSynchronizer_fieldInit();
void *fn_801126C4();
void *igFieldChangeViewList_getMeta();
void *igFieldChangeViewList_vtableRead();
void igFieldChangeViewList_arkRegister();
void igFieldChangeViewList_register();
void *igFieldChangeViewList_getMetaCall();
void *igFieldChangeView_getMeta();
void *igFieldChangeView_vtableRead();
void igFieldChangeView_arkRegister();
void igFieldChangeView_register();
void *igFieldChangeView_getMetaCall();
void igFieldChangeView_fieldInit();
void *fn_80112AC8();
void *igEventReceiverOrderedList_getMeta();
void *igEventReceiverOrderedList_vtableRead();
void igEventReceiverOrderedList_arkRegister();
void igEventReceiverOrderedList_register();
void *igEventReceiverOrderedList_getMetaCall();
void *igEventReceiver_getMeta();
void *igEventReceiver_vtableRead();
void igEventReceiver_arkRegister();
void igEventReceiver_register();
void *igEventReceiver_getMetaCall();
void *igEventDispatcher_getMeta();
void *igEventDispatcher_vtableRead();
void igEventDispatcher_arkRegister();
void igEventDispatcher_register();
void *igEventDispatcher_getMetaCall();
void igEventDispatcher_fieldInit();
void *igDefaultAspect_getMeta();
void *igDefaultAspect_vtableRead();
void igDefaultAspect_arkRegister();
void igDefaultAspect_register();
void *igDefaultAspect_getMetaCall();
void igDefaultAspect_fieldInit();
void *fn_801133CC();
void *igDefaultAspectElementList_getMeta();
void *igDefaultAspectElementList_vtableRead();
void igDefaultAspectElementList_arkRegister();
void igDefaultAspectElementList_register();
void *igDefaultAspectElementList_getMetaCall();
void *igDefaultAspectElement_getMeta();
void *igDefaultAspectElement_vtableRead();
void igDefaultAspectElement_arkRegister();
void igDefaultAspectElement_register();
void *igDefaultAspectElement_getMetaCall();
}
struct UnknownGenRoot801124F8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801124F8(){igObject_construct(this);}
};
struct UnknownGenObject801124F8 : UnknownGenRoot801124F8 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject801124F8(){unknown00=igFieldSynchronizer_vtable;}
};
struct UnknownGenObject8011273C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801128D4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801128D4(){igObject_construct(this);}
};
struct UnknownGenObject801128D4 : UnknownGenRoot801128D4 {
 char unknown04[12];
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject801128D4(){unknown00=igFieldChangeView_vtable;}
};
struct UnknownGenRoot80112B40 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80112B40(){igObject_construct(this);}
};
struct UnknownGenObject80112B40_0 : UnknownGenRoot80112B40 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject80112B40_0(){unknown00=igDependencyOrderedList_vtable;}
};
struct UnknownGenObject80112B40_1 : UnknownGenObject80112B40_0 {
 inline ~UnknownGenObject80112B40_1(){unknown00=lbl_80497238;}
};
struct UnknownGenObject80112B40 : UnknownGenObject80112B40_1 {
 char unknown18[16];
 inline ~UnknownGenObject80112B40(){unknown00=igEventReceiverOrderedList_vtable;}
};
struct UnknownGenObject80112D88_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenRoot80112EF0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80112EF0(){igObject_construct(this);}
};
struct UnknownGenObject80112EF0_0 : UnknownGenRoot80112EF0 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject80112EF0_0(){unknown00=lbl_80480440;}
};
struct UnknownGenObject80112EF0 : UnknownGenObject80112EF0_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[4];
 inline ~UnknownGenObject80112EF0(){unknown00=igEventDispatcher_vtable;}
};
struct UnknownGenRoot801131E8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801131E8(){igObject_construct(this);}
};
struct UnknownGenObject801131E8 : UnknownGenRoot801131E8 {
 char unknown04[36];
 UnknownGenRefMember unknown28;
 char unknown2C[4];
 inline ~UnknownGenObject801131E8(){unknown00=igDefaultAspect_vtable;}
};
struct UnknownGenObject80113444_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801135F0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801135F0(){igObject_construct(this);}
};
struct UnknownGenObject801135F0 : UnknownGenRoot801135F0 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[20];
 inline ~UnknownGenObject801135F0(){unknown00=igDefaultAspectElement_vtable;}
};
extern "C" {
void *fn_80112AC8(){
 if(!igEventReceiverOrderedList_meta) igEventReceiverOrderedList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igEventReceiverOrderedList_meta;
}
}
#pragma pop
}

namespace igEventReceiverOrderedList {
// igEventReceiverOrderedList: Alchemy class registration (0x80112B04..0x80112D4C). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igEventReceiverOrderedList)
META_DECLARE(igDependencyOrderedList)

extern "C" {
void fn_8010CBD4();
void *fn_8010E280();
extern char igEventReceiverOrderedList_dependencies[8];
extern char lbl_80497238[];
}

struct igDependencyOrderedListInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _objectList;
    igObjectRefMember _dependencies;
    igObjectRefMember _order;
    igObjectRefMember _checkPoints;
    inline ~igDependencyOrderedListInstance() { __vtable = igDependencyOrderedList_vtable; }
};

struct Instance_80497238 : igDependencyOrderedListInstance {
    inline ~Instance_80497238() { __vtable = lbl_80497238; }
};

struct igEventReceiverOrderedListInstance : Instance_80497238 {
    char unknown18[16];
    inline ~igEventReceiverOrderedListInstance() { __vtable = igEventReceiverOrderedList_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igEventReceiverOrderedList)

void *igEventReceiverOrderedList_vtableRead()
{
    igEventReceiverOrderedListInstance object;
    object.__vtable = igDependencyOrderedList_vtable;
    object._objectList._value = 0;
    object._dependencies._value = 0;
    object._order._value = 0;
    object._checkPoints._value = 0;
    object.__vtable = lbl_80497238;
    object.__vtable = igEventReceiverOrderedList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igEventReceiverOrderedList)

void igEventReceiverOrderedList_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igEventReceiverOrderedList_meta, igDependencyOrderedList_register,
                       fn_8010E280, igEventReceiverOrderedList_getMetaCall,
                       igEventReceiverOrderedList_className, 0x1C,
                       igEventReceiverOrderedList_vtableRead, 0, 0, igEventReceiverOrderedList_dependencies);
}

META_GET_META_CALL(igEventReceiverOrderedList)

}
#pragma pop
}

namespace igEventReceiver {
// igEventReceiver: Alchemy class registration (0x80112D4C..0x80112E78). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igEventReceiver)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_8010CBD4();
}

struct Instance_80112D88_0 {
    void *__vtable;
    char unknown04[4];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igEventReceiver)

void *igEventReceiver_vtableRead()
{
    Instance_80112D88_0 object;
    igObject_construct(&object);
    object.__vtable = igEventReceiver_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igEventReceiver)

void igEventReceiver_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igEventReceiver_meta, igObject_register,
                       fn_800237D0, igEventReceiver_getMetaCall,
                       igEventReceiver_className, 0x8,
                       igEventReceiver_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igEventReceiver)

}
#pragma pop
}

namespace unknown80112E78 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_8002A638();
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
void *fn_800CB840();
void *fn_800CB8B8();
void fn_8010CBD4();
void *fn_8010DB2C();
void *fn_8010E280();
void *fn_8010E6DC();
void igDefaultAspectElement_fieldInit();
void igDependencyOrderedList_register();
void igGuiComponentAspect_register();
void igInterfaceManager_register();
void igObjectList_register();
void igObject_register();
void igView_register();
extern char igDataList_vtable[];
extern char igDependencyOrderedList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char lbl_80480440[];
extern char lbl_80495AD8[];
extern char lbl_8049652C[];
extern char igFieldChangeView_vtable[];
extern char igEventDispatcher_vtable[];
extern char igDefaultAspect_vtable[];
extern char igDefaultAspectElement_vtable[];
extern char igDefaultAspectElementList_vtable[];
extern char lbl_80497178[];
extern char igEventReceiverOrderedList_vtable[];
extern char lbl_80497238[];
extern char igFieldChangeViewList_vtable[];
extern char lbl_804973C0[];
extern char igFieldSynchronizer_vtable[];
extern char igEventReceiver_vtable[];
extern char igFieldSynchronizer_dependencies[8];
extern char igFieldSynchronizer_fieldTypes[4];
extern char igFieldSynchronizer_fieldNames[4];
extern char igFieldSynchronizer_fieldStorage[4];
extern char igFieldSynchronizer_fieldOffsets[4];
extern char igFieldChangeViewList_dependencies[8];
extern char igFieldChangeView_fieldTypes[8];
extern char igFieldChangeView_fieldNames[8];
extern char igFieldChangeView_fieldStorage[8];
extern char igFieldChangeView_fieldOffsets[8];
extern char igEventReceiverOrderedList_dependencies[8];
extern char igEventDispatcher_fieldTypes[8];
extern char igEventDispatcher_fieldNames[8];
extern char igEventDispatcher_fieldStorage[8];
extern char igEventDispatcher_fieldOffsets[8];
extern char igDefaultAspect_dependencies[8];
extern char igDefaultAspect_fieldTypes[4];
extern char igDefaultAspect_fieldNames[4];
extern char igDefaultAspect_fieldStorage[4];
extern char igDefaultAspect_fieldOffsets[4];
extern char igDefaultAspectElementList_dependencies[8];
extern void *lbl_805621F4;
extern void *igFieldSynchronizer_meta;
extern void *igFieldChangeViewList_meta;
extern void *igFieldChangeView_meta;
extern void *igEventReceiverOrderedList_meta;
extern void *igEventReceiver_meta;
extern void *igEventDispatcher_meta;
extern void *igDefaultAspect_meta;
extern void *igDefaultAspectElementList_meta;
extern void *lbl_805637D4;
extern void *igDefaultAspectElement_meta;
void *fn_80112480();
void *igFieldSynchronizer_getMeta();
void *igFieldSynchronizer_vtableRead();
void igFieldSynchronizer_arkRegister();
void igFieldSynchronizer_register();
void *igFieldSynchronizer_getMetaCall();
void igFieldSynchronizer_fieldInit();
void *fn_801126C4();
void *igFieldChangeViewList_getMeta();
void *igFieldChangeViewList_vtableRead();
void igFieldChangeViewList_arkRegister();
void igFieldChangeViewList_register();
void *igFieldChangeViewList_getMetaCall();
void *igFieldChangeView_getMeta();
void *igFieldChangeView_vtableRead();
void igFieldChangeView_arkRegister();
void igFieldChangeView_register();
void *igFieldChangeView_getMetaCall();
void igFieldChangeView_fieldInit();
void *fn_80112AC8();
void *igEventReceiverOrderedList_getMeta();
void *igEventReceiverOrderedList_vtableRead();
void igEventReceiverOrderedList_arkRegister();
void igEventReceiverOrderedList_register();
void *igEventReceiverOrderedList_getMetaCall();
void *igEventReceiver_getMeta();
void *igEventReceiver_vtableRead();
void igEventReceiver_arkRegister();
void igEventReceiver_register();
void *igEventReceiver_getMetaCall();
void *igEventDispatcher_getMeta();
void *igEventDispatcher_vtableRead();
void igEventDispatcher_arkRegister();
void igEventDispatcher_register();
void *igEventDispatcher_getMetaCall();
void igEventDispatcher_fieldInit();
void *igDefaultAspect_getMeta();
void *igDefaultAspect_vtableRead();
void igDefaultAspect_arkRegister();
void igDefaultAspect_register();
void *igDefaultAspect_getMetaCall();
void igDefaultAspect_fieldInit();
void *fn_801133CC();
void *igDefaultAspectElementList_getMeta();
void *igDefaultAspectElementList_vtableRead();
void igDefaultAspectElementList_arkRegister();
void igDefaultAspectElementList_register();
void *igDefaultAspectElementList_getMetaCall();
void *igDefaultAspectElement_getMeta();
void *igDefaultAspectElement_vtableRead();
void igDefaultAspectElement_arkRegister();
void igDefaultAspectElement_register();
void *igDefaultAspectElement_getMetaCall();
}
struct UnknownGenRoot801124F8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801124F8(){igObject_construct(this);}
};
struct UnknownGenObject801124F8 : UnknownGenRoot801124F8 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject801124F8(){unknown00=igFieldSynchronizer_vtable;}
};
struct UnknownGenObject8011273C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801128D4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801128D4(){igObject_construct(this);}
};
struct UnknownGenObject801128D4 : UnknownGenRoot801128D4 {
 char unknown04[12];
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject801128D4(){unknown00=igFieldChangeView_vtable;}
};
struct UnknownGenRoot80112B40 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80112B40(){igObject_construct(this);}
};
struct UnknownGenObject80112B40_0 : UnknownGenRoot80112B40 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject80112B40_0(){unknown00=igDependencyOrderedList_vtable;}
};
struct UnknownGenObject80112B40_1 : UnknownGenObject80112B40_0 {
 inline ~UnknownGenObject80112B40_1(){unknown00=lbl_80497238;}
};
struct UnknownGenObject80112B40 : UnknownGenObject80112B40_1 {
 char unknown18[16];
 inline ~UnknownGenObject80112B40(){unknown00=igEventReceiverOrderedList_vtable;}
};
struct UnknownGenObject80112D88_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenRoot80112EF0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80112EF0(){igObject_construct(this);}
};
struct UnknownGenObject80112EF0_0 : UnknownGenRoot80112EF0 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject80112EF0_0(){unknown00=lbl_80480440;}
};
struct UnknownGenObject80112EF0 : UnknownGenObject80112EF0_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[4];
 inline ~UnknownGenObject80112EF0(){unknown00=igEventDispatcher_vtable;}
};
struct UnknownGenRoot801131E8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801131E8(){igObject_construct(this);}
};
struct UnknownGenObject801131E8 : UnknownGenRoot801131E8 {
 char unknown04[36];
 UnknownGenRefMember unknown28;
 char unknown2C[4];
 inline ~UnknownGenObject801131E8(){unknown00=igDefaultAspect_vtable;}
};
struct UnknownGenObject80113444_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801135F0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801135F0(){igObject_construct(this);}
};
struct UnknownGenObject801135F0 : UnknownGenRoot801135F0 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[20];
 inline ~UnknownGenObject801135F0(){unknown00=igDefaultAspectElement_vtable;}
};
extern "C" {
void *fn_80112E78(){
 if(!igEventDispatcher_meta) igEventDispatcher_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igEventDispatcher_meta;
}
}
#pragma pop
}

namespace igEventDispatcher {
// igEventDispatcher: Alchemy class registration (0x80112EB4..0x80113170). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igEventDispatcher)
META_DECLARE(igInterfaceManager)

extern "C" {
void *fn_800CB840();
void *fn_800CB8B8();
void fn_8010CBD4();
void *fn_80112AC8();
extern char igEventDispatcher_fieldNames[8];
extern char igEventDispatcher_fieldOffsets[8];
extern char igEventDispatcher_fieldStorage[8];
extern char igEventDispatcher_fieldTypes[8];
extern char lbl_80480440[];
}

struct Instance_80480440 : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _devices;
    inline ~Instance_80480440() { __vtable = lbl_80480440; }
};

struct igEventDispatcherInstance : Instance_80480440 {
    igObjectRefMember _receivers;
    igObjectRefMember _controllerManager;
    char unknown14[4];
    inline ~igEventDispatcherInstance() { __vtable = igEventDispatcher_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igEventDispatcher)

void *igEventDispatcher_vtableRead()
{
    igEventDispatcherInstance object;
    object.__vtable = lbl_80480440;
    object._devices._value = 0;
    object.__vtable = igEventDispatcher_vtable;
    object._receivers._value = 0;
    object._controllerManager._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igEventDispatcher)

void igEventDispatcher_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igEventDispatcher_meta, igInterfaceManager_register,
                       fn_800CB840, igEventDispatcher_getMetaCall,
                       igEventDispatcher_className, 0x14,
                       igEventDispatcher_vtableRead, igEventDispatcher_fieldInit, 0, igEventDispatcher_dependencies);
}

META_GET_META_CALL(igEventDispatcher)

void igEventDispatcher_fieldInit()
{
    Meta::igMetaObject *meta = igEventDispatcher_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igEventDispatcher_fieldTypes, 2);
    Meta::igObjectRefMetaField *receiversField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_80112AC8();
    receiversField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    receiversField->_construct = true;
    Meta::igObjectRefMetaField *controllerManagerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_value5 = fn_800CB8B8();
    controllerManagerField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value5);
    controllerManagerField->_construct = true;
    meta_setupFields(meta, igEventDispatcher_fieldNames, igEventDispatcher_fieldStorage, igEventDispatcher_fieldOffsets, base);
}

}
#pragma pop
}

namespace unknown80113170 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_8002A638();
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
void *fn_800CB840();
void *fn_800CB8B8();
void fn_8010CBD4();
void *fn_8010DB2C();
void *fn_8010E280();
void *fn_8010E6DC();
void igDefaultAspectElement_fieldInit();
void igDependencyOrderedList_register();
void igGuiComponentAspect_register();
void igInterfaceManager_register();
void igObjectList_register();
void igObject_register();
void igView_register();
extern char igDataList_vtable[];
extern char igDependencyOrderedList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char lbl_80480440[];
extern char lbl_80495AD8[];
extern char lbl_8049652C[];
extern char igFieldChangeView_vtable[];
extern char igEventDispatcher_vtable[];
extern char igDefaultAspect_vtable[];
extern char igDefaultAspectElement_vtable[];
extern char igDefaultAspectElementList_vtable[];
extern char lbl_80497178[];
extern char igEventReceiverOrderedList_vtable[];
extern char lbl_80497238[];
extern char igFieldChangeViewList_vtable[];
extern char lbl_804973C0[];
extern char igFieldSynchronizer_vtable[];
extern char igEventReceiver_vtable[];
extern char igFieldSynchronizer_dependencies[8];
extern char igFieldSynchronizer_fieldTypes[4];
extern char igFieldSynchronizer_fieldNames[4];
extern char igFieldSynchronizer_fieldStorage[4];
extern char igFieldSynchronizer_fieldOffsets[4];
extern char igFieldChangeViewList_dependencies[8];
extern char igFieldChangeView_fieldTypes[8];
extern char igFieldChangeView_fieldNames[8];
extern char igFieldChangeView_fieldStorage[8];
extern char igFieldChangeView_fieldOffsets[8];
extern char igEventReceiverOrderedList_dependencies[8];
extern char igEventDispatcher_fieldTypes[8];
extern char igEventDispatcher_fieldNames[8];
extern char igEventDispatcher_fieldStorage[8];
extern char igEventDispatcher_fieldOffsets[8];
extern char igDefaultAspect_dependencies[8];
extern char igDefaultAspect_fieldTypes[4];
extern char igDefaultAspect_fieldNames[4];
extern char igDefaultAspect_fieldStorage[4];
extern char igDefaultAspect_fieldOffsets[4];
extern char igDefaultAspectElementList_dependencies[8];
extern void *lbl_805621F4;
extern void *igFieldSynchronizer_meta;
extern void *igFieldChangeViewList_meta;
extern void *igFieldChangeView_meta;
extern void *igEventReceiverOrderedList_meta;
extern void *igEventReceiver_meta;
extern void *igEventDispatcher_meta;
extern void *igDefaultAspect_meta;
extern void *igDefaultAspectElementList_meta;
extern void *lbl_805637D4;
extern void *igDefaultAspectElement_meta;
void *fn_80112480();
void *igFieldSynchronizer_getMeta();
void *igFieldSynchronizer_vtableRead();
void igFieldSynchronizer_arkRegister();
void igFieldSynchronizer_register();
void *igFieldSynchronizer_getMetaCall();
void igFieldSynchronizer_fieldInit();
void *fn_801126C4();
void *igFieldChangeViewList_getMeta();
void *igFieldChangeViewList_vtableRead();
void igFieldChangeViewList_arkRegister();
void igFieldChangeViewList_register();
void *igFieldChangeViewList_getMetaCall();
void *igFieldChangeView_getMeta();
void *igFieldChangeView_vtableRead();
void igFieldChangeView_arkRegister();
void igFieldChangeView_register();
void *igFieldChangeView_getMetaCall();
void igFieldChangeView_fieldInit();
void *fn_80112AC8();
void *igEventReceiverOrderedList_getMeta();
void *igEventReceiverOrderedList_vtableRead();
void igEventReceiverOrderedList_arkRegister();
void igEventReceiverOrderedList_register();
void *igEventReceiverOrderedList_getMetaCall();
void *igEventReceiver_getMeta();
void *igEventReceiver_vtableRead();
void igEventReceiver_arkRegister();
void igEventReceiver_register();
void *igEventReceiver_getMetaCall();
void *igEventDispatcher_getMeta();
void *igEventDispatcher_vtableRead();
void igEventDispatcher_arkRegister();
void igEventDispatcher_register();
void *igEventDispatcher_getMetaCall();
void igEventDispatcher_fieldInit();
void *igDefaultAspect_getMeta();
void *igDefaultAspect_vtableRead();
void igDefaultAspect_arkRegister();
void igDefaultAspect_register();
void *igDefaultAspect_getMetaCall();
void igDefaultAspect_fieldInit();
void *fn_801133CC();
void *igDefaultAspectElementList_getMeta();
void *igDefaultAspectElementList_vtableRead();
void igDefaultAspectElementList_arkRegister();
void igDefaultAspectElementList_register();
void *igDefaultAspectElementList_getMetaCall();
void *igDefaultAspectElement_getMeta();
void *igDefaultAspectElement_vtableRead();
void igDefaultAspectElement_arkRegister();
void igDefaultAspectElement_register();
void *igDefaultAspectElement_getMetaCall();
}
struct UnknownGenRoot801124F8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801124F8(){igObject_construct(this);}
};
struct UnknownGenObject801124F8 : UnknownGenRoot801124F8 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject801124F8(){unknown00=igFieldSynchronizer_vtable;}
};
struct UnknownGenObject8011273C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801128D4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801128D4(){igObject_construct(this);}
};
struct UnknownGenObject801128D4 : UnknownGenRoot801128D4 {
 char unknown04[12];
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject801128D4(){unknown00=igFieldChangeView_vtable;}
};
struct UnknownGenRoot80112B40 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80112B40(){igObject_construct(this);}
};
struct UnknownGenObject80112B40_0 : UnknownGenRoot80112B40 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject80112B40_0(){unknown00=igDependencyOrderedList_vtable;}
};
struct UnknownGenObject80112B40_1 : UnknownGenObject80112B40_0 {
 inline ~UnknownGenObject80112B40_1(){unknown00=lbl_80497238;}
};
struct UnknownGenObject80112B40 : UnknownGenObject80112B40_1 {
 char unknown18[16];
 inline ~UnknownGenObject80112B40(){unknown00=igEventReceiverOrderedList_vtable;}
};
struct UnknownGenObject80112D88_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenRoot80112EF0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80112EF0(){igObject_construct(this);}
};
struct UnknownGenObject80112EF0_0 : UnknownGenRoot80112EF0 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject80112EF0_0(){unknown00=lbl_80480440;}
};
struct UnknownGenObject80112EF0 : UnknownGenObject80112EF0_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[4];
 inline ~UnknownGenObject80112EF0(){unknown00=igEventDispatcher_vtable;}
};
struct UnknownGenRoot801131E8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801131E8(){igObject_construct(this);}
};
struct UnknownGenObject801131E8 : UnknownGenRoot801131E8 {
 char unknown04[36];
 UnknownGenRefMember unknown28;
 char unknown2C[4];
 inline ~UnknownGenObject801131E8(){unknown00=igDefaultAspect_vtable;}
};
struct UnknownGenObject80113444_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801135F0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801135F0(){igObject_construct(this);}
};
struct UnknownGenObject801135F0 : UnknownGenRoot801135F0 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[20];
 inline ~UnknownGenObject801135F0(){unknown00=igDefaultAspectElement_vtable;}
};
extern "C" {
void *fn_80113170(){
 if(!igDefaultAspect_meta) igDefaultAspect_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igDefaultAspect_meta;
}
}
#pragma pop
}

namespace igDefaultAspect {
// igDefaultAspect: Alchemy class registration (0x801131AC..0x801133CC). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igDefaultAspect)
META_DECLARE(igGuiComponentAspect)

extern "C" {
void fn_8010CBD4();
void *fn_8010DB2C();
void *fn_801133CC();
extern char igDefaultAspect_dependencies[8];
extern char igDefaultAspect_fieldNames[4];
extern char igDefaultAspect_fieldOffsets[4];
extern char igDefaultAspect_fieldStorage[4];
extern char igDefaultAspect_fieldTypes[4];
extern char lbl_80495AD8[];
extern char lbl_8049652C[];
}

struct igDefaultAspectInstance : igObjectInstance {
    char unknown04[36];
    igObjectRefMember _elementList;
    char unknown2C[4];
    inline ~igDefaultAspectInstance() { __vtable = igDefaultAspect_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igDefaultAspect)

void *igDefaultAspect_vtableRead()
{
    igDefaultAspectInstance object;
    object.__vtable = lbl_80495AD8;
    object.__vtable = lbl_8049652C;
    object.__vtable = igDefaultAspect_vtable;
    object._elementList._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igDefaultAspect)

void igDefaultAspect_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igDefaultAspect_meta, igGuiComponentAspect_register,
                       fn_8010DB2C, igDefaultAspect_getMetaCall,
                       igDefaultAspect_className, 0x2C,
                       igDefaultAspect_vtableRead, igDefaultAspect_fieldInit, 0, igDefaultAspect_dependencies);
}

META_GET_META_CALL(igDefaultAspect)

void igDefaultAspect_fieldInit()
{
    Meta::igMetaObject *meta = igDefaultAspect_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igDefaultAspect_fieldTypes, 1);
    Meta::igObjectRefMetaField *elementListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_801133CC();
    elementListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    elementListField->_construct = true;
    meta_setupFields(meta, igDefaultAspect_fieldNames, igDefaultAspect_fieldStorage, igDefaultAspect_fieldOffsets, base);
}

}
#pragma pop
}

namespace unknown801133CC {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_8002A638();
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
void *fn_800CB840();
void *fn_800CB8B8();
void fn_8010CBD4();
void *fn_8010DB2C();
void *fn_8010E280();
void *fn_8010E6DC();
void igDefaultAspectElement_fieldInit();
void igDependencyOrderedList_register();
void igGuiComponentAspect_register();
void igInterfaceManager_register();
void igObjectList_register();
void igObject_register();
void igView_register();
extern char igDataList_vtable[];
extern char igDependencyOrderedList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char lbl_80480440[];
extern char lbl_80495AD8[];
extern char lbl_8049652C[];
extern char igFieldChangeView_vtable[];
extern char igEventDispatcher_vtable[];
extern char igDefaultAspect_vtable[];
extern char igDefaultAspectElement_vtable[];
extern char igDefaultAspectElementList_vtable[];
extern char lbl_80497178[];
extern char igEventReceiverOrderedList_vtable[];
extern char lbl_80497238[];
extern char igFieldChangeViewList_vtable[];
extern char lbl_804973C0[];
extern char igFieldSynchronizer_vtable[];
extern char igEventReceiver_vtable[];
extern char igFieldSynchronizer_dependencies[8];
extern char igFieldSynchronizer_fieldTypes[4];
extern char igFieldSynchronizer_fieldNames[4];
extern char igFieldSynchronizer_fieldStorage[4];
extern char igFieldSynchronizer_fieldOffsets[4];
extern char igFieldChangeViewList_dependencies[8];
extern char igFieldChangeView_fieldTypes[8];
extern char igFieldChangeView_fieldNames[8];
extern char igFieldChangeView_fieldStorage[8];
extern char igFieldChangeView_fieldOffsets[8];
extern char igEventReceiverOrderedList_dependencies[8];
extern char igEventDispatcher_fieldTypes[8];
extern char igEventDispatcher_fieldNames[8];
extern char igEventDispatcher_fieldStorage[8];
extern char igEventDispatcher_fieldOffsets[8];
extern char igDefaultAspect_dependencies[8];
extern char igDefaultAspect_fieldTypes[4];
extern char igDefaultAspect_fieldNames[4];
extern char igDefaultAspect_fieldStorage[4];
extern char igDefaultAspect_fieldOffsets[4];
extern char igDefaultAspectElementList_dependencies[8];
extern void *lbl_805621F4;
extern void *igFieldSynchronizer_meta;
extern void *igFieldChangeViewList_meta;
extern void *igFieldChangeView_meta;
extern void *igEventReceiverOrderedList_meta;
extern void *igEventReceiver_meta;
extern void *igEventDispatcher_meta;
extern void *igDefaultAspect_meta;
extern void *igDefaultAspectElementList_meta;
extern void *lbl_805637D4;
extern void *igDefaultAspectElement_meta;
void *fn_80112480();
void *igFieldSynchronizer_getMeta();
void *igFieldSynchronizer_vtableRead();
void igFieldSynchronizer_arkRegister();
void igFieldSynchronizer_register();
void *igFieldSynchronizer_getMetaCall();
void igFieldSynchronizer_fieldInit();
void *fn_801126C4();
void *igFieldChangeViewList_getMeta();
void *igFieldChangeViewList_vtableRead();
void igFieldChangeViewList_arkRegister();
void igFieldChangeViewList_register();
void *igFieldChangeViewList_getMetaCall();
void *igFieldChangeView_getMeta();
void *igFieldChangeView_vtableRead();
void igFieldChangeView_arkRegister();
void igFieldChangeView_register();
void *igFieldChangeView_getMetaCall();
void igFieldChangeView_fieldInit();
void *fn_80112AC8();
void *igEventReceiverOrderedList_getMeta();
void *igEventReceiverOrderedList_vtableRead();
void igEventReceiverOrderedList_arkRegister();
void igEventReceiverOrderedList_register();
void *igEventReceiverOrderedList_getMetaCall();
void *igEventReceiver_getMeta();
void *igEventReceiver_vtableRead();
void igEventReceiver_arkRegister();
void igEventReceiver_register();
void *igEventReceiver_getMetaCall();
void *igEventDispatcher_getMeta();
void *igEventDispatcher_vtableRead();
void igEventDispatcher_arkRegister();
void igEventDispatcher_register();
void *igEventDispatcher_getMetaCall();
void igEventDispatcher_fieldInit();
void *igDefaultAspect_getMeta();
void *igDefaultAspect_vtableRead();
void igDefaultAspect_arkRegister();
void igDefaultAspect_register();
void *igDefaultAspect_getMetaCall();
void igDefaultAspect_fieldInit();
void *fn_801133CC();
void *igDefaultAspectElementList_getMeta();
void *igDefaultAspectElementList_vtableRead();
void igDefaultAspectElementList_arkRegister();
void igDefaultAspectElementList_register();
void *igDefaultAspectElementList_getMetaCall();
void *igDefaultAspectElement_getMeta();
void *igDefaultAspectElement_vtableRead();
void igDefaultAspectElement_arkRegister();
void igDefaultAspectElement_register();
void *igDefaultAspectElement_getMetaCall();
}
struct UnknownGenRoot801124F8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801124F8(){igObject_construct(this);}
};
struct UnknownGenObject801124F8 : UnknownGenRoot801124F8 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject801124F8(){unknown00=igFieldSynchronizer_vtable;}
};
struct UnknownGenObject8011273C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801128D4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801128D4(){igObject_construct(this);}
};
struct UnknownGenObject801128D4 : UnknownGenRoot801128D4 {
 char unknown04[12];
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject801128D4(){unknown00=igFieldChangeView_vtable;}
};
struct UnknownGenRoot80112B40 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80112B40(){igObject_construct(this);}
};
struct UnknownGenObject80112B40_0 : UnknownGenRoot80112B40 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject80112B40_0(){unknown00=igDependencyOrderedList_vtable;}
};
struct UnknownGenObject80112B40_1 : UnknownGenObject80112B40_0 {
 inline ~UnknownGenObject80112B40_1(){unknown00=lbl_80497238;}
};
struct UnknownGenObject80112B40 : UnknownGenObject80112B40_1 {
 char unknown18[16];
 inline ~UnknownGenObject80112B40(){unknown00=igEventReceiverOrderedList_vtable;}
};
struct UnknownGenObject80112D88_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenRoot80112EF0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80112EF0(){igObject_construct(this);}
};
struct UnknownGenObject80112EF0_0 : UnknownGenRoot80112EF0 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject80112EF0_0(){unknown00=lbl_80480440;}
};
struct UnknownGenObject80112EF0 : UnknownGenObject80112EF0_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[4];
 inline ~UnknownGenObject80112EF0(){unknown00=igEventDispatcher_vtable;}
};
struct UnknownGenRoot801131E8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801131E8(){igObject_construct(this);}
};
struct UnknownGenObject801131E8 : UnknownGenRoot801131E8 {
 char unknown04[36];
 UnknownGenRefMember unknown28;
 char unknown2C[4];
 inline ~UnknownGenObject801131E8(){unknown00=igDefaultAspect_vtable;}
};
struct UnknownGenObject80113444_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801135F0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801135F0(){igObject_construct(this);}
};
struct UnknownGenObject801135F0 : UnknownGenRoot801135F0 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[20];
 inline ~UnknownGenObject801135F0(){unknown00=igDefaultAspectElement_vtable;}
};
extern "C" {
void *fn_801133CC(){
 if(!igDefaultAspectElementList_meta) igDefaultAspectElementList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igDefaultAspectElementList_meta;
}
}
#pragma pop
}

namespace igDefaultAspectElementList {
// igDefaultAspectElementList: Alchemy class registration (0x80113408..0x80113568). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igDefaultAspectElementList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_8010CBD4();
extern char igDefaultAspectElementList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_80497178[];
}

struct Instance_80113444_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igDefaultAspectElementList)

void *igDefaultAspectElementList_vtableRead()
{
    Instance_80113444_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_80497178;
    object.__vtable = igDefaultAspectElementList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igDefaultAspectElementList)

void igDefaultAspectElementList_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igDefaultAspectElementList_meta, igObjectList_register,
                       fn_80024180, igDefaultAspectElementList_getMetaCall,
                       igDefaultAspectElementList_className, 0x14,
                       igDefaultAspectElementList_vtableRead, 0, 0, igDefaultAspectElementList_dependencies);
}

META_GET_META_CALL(igDefaultAspectElementList)

}
#pragma pop
}

namespace unknown80113568 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_8002A638();
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
void *fn_800CB840();
void *fn_800CB8B8();
void fn_8010CBD4();
void *fn_8010DB2C();
void *fn_8010E280();
void *fn_8010E6DC();
void igDefaultAspectElement_fieldInit();
void igDependencyOrderedList_register();
void igGuiComponentAspect_register();
void igInterfaceManager_register();
void igObjectList_register();
void igObject_register();
void igView_register();
extern char igDataList_vtable[];
extern char igDependencyOrderedList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char lbl_80480440[];
extern char lbl_80495AD8[];
extern char lbl_8049652C[];
extern char igFieldChangeView_vtable[];
extern char igEventDispatcher_vtable[];
extern char igDefaultAspect_vtable[];
extern char igDefaultAspectElement_vtable[];
extern char igDefaultAspectElementList_vtable[];
extern char lbl_80497178[];
extern char igEventReceiverOrderedList_vtable[];
extern char lbl_80497238[];
extern char igFieldChangeViewList_vtable[];
extern char lbl_804973C0[];
extern char igFieldSynchronizer_vtable[];
extern char igEventReceiver_vtable[];
extern char igFieldSynchronizer_dependencies[8];
extern char igFieldSynchronizer_fieldTypes[4];
extern char igFieldSynchronizer_fieldNames[4];
extern char igFieldSynchronizer_fieldStorage[4];
extern char igFieldSynchronizer_fieldOffsets[4];
extern char igFieldChangeViewList_dependencies[8];
extern char igFieldChangeView_fieldTypes[8];
extern char igFieldChangeView_fieldNames[8];
extern char igFieldChangeView_fieldStorage[8];
extern char igFieldChangeView_fieldOffsets[8];
extern char igEventReceiverOrderedList_dependencies[8];
extern char igEventDispatcher_fieldTypes[8];
extern char igEventDispatcher_fieldNames[8];
extern char igEventDispatcher_fieldStorage[8];
extern char igEventDispatcher_fieldOffsets[8];
extern char igDefaultAspect_dependencies[8];
extern char igDefaultAspect_fieldTypes[4];
extern char igDefaultAspect_fieldNames[4];
extern char igDefaultAspect_fieldStorage[4];
extern char igDefaultAspect_fieldOffsets[4];
extern char igDefaultAspectElementList_dependencies[8];
extern void *lbl_805621F4;
extern void *igFieldSynchronizer_meta;
extern void *igFieldChangeViewList_meta;
extern void *igFieldChangeView_meta;
extern void *igEventReceiverOrderedList_meta;
extern void *igEventReceiver_meta;
extern void *igEventDispatcher_meta;
extern void *igDefaultAspect_meta;
extern void *igDefaultAspectElementList_meta;
extern void *lbl_805637D4;
extern void *igDefaultAspectElement_meta;
void *fn_80112480();
void *igFieldSynchronizer_getMeta();
void *igFieldSynchronizer_vtableRead();
void igFieldSynchronizer_arkRegister();
void igFieldSynchronizer_register();
void *igFieldSynchronizer_getMetaCall();
void igFieldSynchronizer_fieldInit();
void *fn_801126C4();
void *igFieldChangeViewList_getMeta();
void *igFieldChangeViewList_vtableRead();
void igFieldChangeViewList_arkRegister();
void igFieldChangeViewList_register();
void *igFieldChangeViewList_getMetaCall();
void *igFieldChangeView_getMeta();
void *igFieldChangeView_vtableRead();
void igFieldChangeView_arkRegister();
void igFieldChangeView_register();
void *igFieldChangeView_getMetaCall();
void igFieldChangeView_fieldInit();
void *fn_80112AC8();
void *igEventReceiverOrderedList_getMeta();
void *igEventReceiverOrderedList_vtableRead();
void igEventReceiverOrderedList_arkRegister();
void igEventReceiverOrderedList_register();
void *igEventReceiverOrderedList_getMetaCall();
void *igEventReceiver_getMeta();
void *igEventReceiver_vtableRead();
void igEventReceiver_arkRegister();
void igEventReceiver_register();
void *igEventReceiver_getMetaCall();
void *igEventDispatcher_getMeta();
void *igEventDispatcher_vtableRead();
void igEventDispatcher_arkRegister();
void igEventDispatcher_register();
void *igEventDispatcher_getMetaCall();
void igEventDispatcher_fieldInit();
void *igDefaultAspect_getMeta();
void *igDefaultAspect_vtableRead();
void igDefaultAspect_arkRegister();
void igDefaultAspect_register();
void *igDefaultAspect_getMetaCall();
void igDefaultAspect_fieldInit();
void *fn_801133CC();
void *igDefaultAspectElementList_getMeta();
void *igDefaultAspectElementList_vtableRead();
void igDefaultAspectElementList_arkRegister();
void igDefaultAspectElementList_register();
void *igDefaultAspectElementList_getMetaCall();
void *igDefaultAspectElement_getMeta();
void *igDefaultAspectElement_vtableRead();
void igDefaultAspectElement_arkRegister();
void igDefaultAspectElement_register();
void *igDefaultAspectElement_getMetaCall();
}
struct UnknownGenRoot801124F8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801124F8(){igObject_construct(this);}
};
struct UnknownGenObject801124F8 : UnknownGenRoot801124F8 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject801124F8(){unknown00=igFieldSynchronizer_vtable;}
};
struct UnknownGenObject8011273C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801128D4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801128D4(){igObject_construct(this);}
};
struct UnknownGenObject801128D4 : UnknownGenRoot801128D4 {
 char unknown04[12];
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject801128D4(){unknown00=igFieldChangeView_vtable;}
};
struct UnknownGenRoot80112B40 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80112B40(){igObject_construct(this);}
};
struct UnknownGenObject80112B40_0 : UnknownGenRoot80112B40 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject80112B40_0(){unknown00=igDependencyOrderedList_vtable;}
};
struct UnknownGenObject80112B40_1 : UnknownGenObject80112B40_0 {
 inline ~UnknownGenObject80112B40_1(){unknown00=lbl_80497238;}
};
struct UnknownGenObject80112B40 : UnknownGenObject80112B40_1 {
 char unknown18[16];
 inline ~UnknownGenObject80112B40(){unknown00=igEventReceiverOrderedList_vtable;}
};
struct UnknownGenObject80112D88_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenRoot80112EF0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80112EF0(){igObject_construct(this);}
};
struct UnknownGenObject80112EF0_0 : UnknownGenRoot80112EF0 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject80112EF0_0(){unknown00=lbl_80480440;}
};
struct UnknownGenObject80112EF0 : UnknownGenObject80112EF0_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[4];
 inline ~UnknownGenObject80112EF0(){unknown00=igEventDispatcher_vtable;}
};
struct UnknownGenRoot801131E8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801131E8(){igObject_construct(this);}
};
struct UnknownGenObject801131E8 : UnknownGenRoot801131E8 {
 char unknown04[36];
 UnknownGenRefMember unknown28;
 char unknown2C[4];
 inline ~UnknownGenObject801131E8(){unknown00=igDefaultAspect_vtable;}
};
struct UnknownGenObject80113444_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801135F0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801135F0(){igObject_construct(this);}
};
struct UnknownGenObject801135F0 : UnknownGenRoot801135F0 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[20];
 inline ~UnknownGenObject801135F0(){unknown00=igDefaultAspectElement_vtable;}
};
extern "C" {
void *fn_80113568(){
 char *data=lbl_80494570;
 if(!lbl_805637D4) lbl_805637D4=fn_800635C8(data+0xEE4,data+0xEC4,data+0xED4,0x4);
 return lbl_805637D4;
}
void *igDefaultAspectElement_getMeta(){
 if(!igDefaultAspectElement_meta || !(reinterpret_cast<unsigned int *>(igDefaultAspectElement_meta)[0x24/4]&4)) igDefaultAspectElement_arkRegister();
 return igDefaultAspectElement_meta;
}
void *igDefaultAspectElement_vtableRead(){
 UnknownGenObject801135F0 object;
 object.unknown00=igDefaultAspectElement_vtable;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igDefaultAspectElement_arkRegister(){
 meta_registerNow((int)igDefaultAspectElement_register);
}
void igDefaultAspectElement_register(){
 fn_8010CBD4();
 meta_registerClass(0,(int)&igDefaultAspectElement_meta,(int)igObject_register,(int)fn_800237D0,(int)igDefaultAspectElement_getMetaCall,(int)igDefaultAspectElement_className,32,(int)igDefaultAspectElement_vtableRead,(int)igDefaultAspectElement_fieldInit,0,(int)igDefaultAspectElement_dependencies);
}
void *igDefaultAspectElement_getMetaCall(){return igDefaultAspectElement_getMeta();}
}
#pragma pop
}

namespace igDefaultAspectElement_fieldInit {
// igDefaultAspectElement: Alchemy class registration (0x801137B0..0x80113894). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igDefaultAspectElement)

extern "C" {
void fn_80046E58(void *, void *);
void *fn_8011205C();
void fn_80113568();
void *fn_80113C58();
void *fn_801AC644();
extern char lbl_8055F1CC[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igDefaultAspectElement_fieldInit()
{
    Meta::igMetaObject *meta = igDefaultAspectElement_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igDefaultAspectElement_fieldTypes, 6);
    Meta::igObjectRefMetaField *geometryElementField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_v2 = fn_8011205C();
    geometryElementField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v2);
    Meta::igObjectRefMetaField *colorChangerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_v4 = fn_80113C58();
    colorChangerField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v4);
    Meta::igObjectRefMetaField *transformField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    void *value_v6 = fn_801AC644();
    transformField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v6);
    transformField->_construct = true;
    Meta::igEnumMetaField *fitModeField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base + 3));
    fn_80046E58(fitModeField, (void *)lbl_8055F1CC);
    fitModeField->_getMetaEnumFunction = reinterpret_cast<void *>(fn_80113568);
    meta_setupFields(meta, igDefaultAspectElement_fieldNames, igDefaultAspectElement_fieldStorage, igDefaultAspectElement_fieldOffsets, base);
}

}
#pragma pop
}

namespace unknown80113894 {
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void igOnOffColorChanger_arkRegister();
extern void *lbl_805621F4;
extern void *igOnOffColorChanger_meta;
}
extern "C" {
void *fn_80113894(){
 if(!igOnOffColorChanger_meta) igOnOffColorChanger_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igOnOffColorChanger_meta;
}
}
#pragma pop
}

namespace igOnOffColorChanger_2 {
// igOnOffColorChanger: Alchemy class registration (0x801138D0..0x80113980). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igOnOffColorChanger)
META_DECLARE(igBasicColorChanger)
META_DECLARE(igColorChanger)

extern "C" {
void fn_800A33B8(void *array, void (*construct)(void *), void (*destroy)(void *), unsigned int size, unsigned int count);
void fn_80113980(void *);
}

struct Instance_LigOnOffColorChanger_0 : igObjectInstance {
    inline Instance_LigOnOffColorChanger_0()
    {
        __vtable = igColorChanger_vtable;
    }
};

struct Instance_LigOnOffColorChanger_1 : Instance_LigOnOffColorChanger_0 {
    char unknown04[4];
    char unknown08[80];
    inline Instance_LigOnOffColorChanger_1()
    {
        __vtable = igBasicColorChanger_vtable;
        fn_800A33B8(unknown08, fn_80113980, 0, 16, 4);   // constructs each element
    }
};

struct Instance_LigOnOffColorChanger_2 : Instance_LigOnOffColorChanger_1 {
    inline Instance_LigOnOffColorChanger_2()
    {
        __vtable = igOnOffColorChanger_vtable;
    }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igOnOffColorChanger)

void *igOnOffColorChanger_vtableRead()
{
    Instance_LigOnOffColorChanger_2 object;
    return meta_vtableOf(&object);
}

}
#pragma pop
}

namespace unknown80113980 {
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8010CBD4();
void igBasicColorChanger_arkRegister();
void igBasicColorChanger_register();
void *igOnOffColorChanger_getMeta();
void igOnOffColorChanger_vtableRead();
extern void *lbl_805621F4;
extern void *igOnOffColorChanger_meta;
extern void *igBasicColorChanger_meta;
void igOnOffColorChanger_register();
void *igOnOffColorChanger_getMetaCall();
void *igOnOffColorChanger_parentMeta();
}
extern "C" {
void fn_80113980(){}
}
#pragma pop
}

namespace igOnOffColorChanger {
// igOnOffColorChanger: Alchemy class registration (0x80113984..0x80113A34). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igOnOffColorChanger)
META_DECLARE(igBasicColorChanger)

extern "C" {
void fn_8010CBD4();
void *igOnOffColorChanger_parentMeta();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(igOnOffColorChanger)

void igOnOffColorChanger_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igOnOffColorChanger_meta, igBasicColorChanger_register,
                       igOnOffColorChanger_parentMeta, igOnOffColorChanger_getMetaCall,
                       igOnOffColorChanger_className, 0x58,
                       igOnOffColorChanger_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igOnOffColorChanger)

}
#pragma pop
}

namespace unknown80113A34 {
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8010CBD4();
void igBasicColorChanger_arkRegister();
void igBasicColorChanger_register();
void *igOnOffColorChanger_getMeta();
void igOnOffColorChanger_vtableRead();
extern void *lbl_805621F4;
extern void *igOnOffColorChanger_meta;
extern void *igBasicColorChanger_meta;
void igOnOffColorChanger_register();
void *igOnOffColorChanger_getMetaCall();
void *igOnOffColorChanger_parentMeta();
}
extern "C" {
void *igOnOffColorChanger_parentMeta(){return igBasicColorChanger_meta;}
void *fn_80113A3C(){
 if(!igBasicColorChanger_meta) igBasicColorChanger_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igBasicColorChanger_meta;
}
}
#pragma pop
}

namespace igBasicColorChanger_2 {
// igBasicColorChanger: Alchemy class registration (0x80113A78..0x80113BD4). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igBasicColorChanger)
META_DECLARE(igColorChanger)

extern "C" {
void fn_800A33B8(void *array, void (*construct)(void *), void (*destroy)(void *), unsigned int size, unsigned int count);
void fn_8010CBD4();
void fn_80113980(void *);
void *igBasicColorChanger_parentMeta();
}

struct Instance_LigBasicColorChanger_0 : igObjectInstance {
    inline Instance_LigBasicColorChanger_0()
    {
        __vtable = igColorChanger_vtable;
    }
};

struct Instance_LigBasicColorChanger_1 : Instance_LigBasicColorChanger_0 {
    char unknown04[4];
    char unknown08[80];
    inline Instance_LigBasicColorChanger_1()
    {
        __vtable = igBasicColorChanger_vtable;
        fn_800A33B8(unknown08, fn_80113980, 0, 16, 4);   // constructs each element
    }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igBasicColorChanger)

void *igBasicColorChanger_vtableRead()
{
    Instance_LigBasicColorChanger_1 object;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igBasicColorChanger)

void igBasicColorChanger_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igBasicColorChanger_meta, igColorChanger_register,
                       igBasicColorChanger_parentMeta, igBasicColorChanger_getMetaCall,
                       igBasicColorChanger_className, 0x58,
                       igBasicColorChanger_vtableRead, igBasicColorChanger_fieldInit, 0, 0);
}

META_GET_META_CALL(igBasicColorChanger)

}
#pragma pop
}

namespace unknown80113BD4 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
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
void fn_8010CBD4();
void *fn_8010DB2C();
void *fn_8010E6DC();
void *igBasicColorChanger_getMeta();
void igBasicColorChanger_vtableRead();
void igBoxAspect_fieldInit();
void igGuiComponentAspect_register();
void igGuiComponent_register();
void igObjectList_register();
void igObject_register();
void igView_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char lbl_80495AD8[];
extern char lbl_8049652C[];
extern char igGuiComponent_vtable[];
extern char igColorChanger_vtable[];
extern char igChildSizeObserver_vtable[];
extern char igBoxAspect_vtable[];
extern char igChildSizeObserverList_vtable[];
extern char lbl_80496FF8[];
extern char igBoxComponent_vtable[];
extern char igBasicColorChanger_fieldTypes[8];
extern char igBasicColorChanger_fieldNames[8];
extern char igBasicColorChanger_fieldStorage[8];
extern char igBasicColorChanger_fieldOffsets[8];
extern char igChildSizeObserverList_dependencies[8];
extern char igChildSizeObserver_dependencies[8];
extern char igChildSizeObserver_fieldTypes[4];
extern char igChildSizeObserver_fieldNames[4];
extern char igChildSizeObserver_fieldStorage[4];
extern char igChildSizeObserver_fieldOffsets[4];
extern void *lbl_805621F4;
extern void *igGuiComponent_meta;
extern void *igBasicColorChanger_meta;
extern void *igColorChanger_meta;
extern void *igBoxComponent_meta;
extern void *igChildSizeObserverList_meta;
extern void *igChildSizeObserver_meta;
extern void *lbl_80563818;
extern void *igBoxAspect_meta;
void igBasicColorChanger_register();
void *igBasicColorChanger_getMetaCall();
void *igBasicColorChanger_parentMeta();
void igBasicColorChanger_fieldInit();
void *igColorChanger_getMeta();
void *igColorChanger_vtableRead();
void igColorChanger_arkRegister();
void igColorChanger_register();
void *igColorChanger_getMetaCall();
void *igBoxComponent_getMeta();
void *igBoxComponent_vtableRead();
void igBoxComponent_arkRegister();
void igBoxComponent_register();
void *igBoxComponent_getMetaCall();
void *igBoxComponent_parentMeta();
void *igChildSizeObserverList_getMeta();
void *igChildSizeObserverList_vtableRead();
void igChildSizeObserverList_arkRegister();
void igChildSizeObserverList_register();
void *igChildSizeObserverList_getMetaCall();
void *igChildSizeObserver_getMeta();
void *igChildSizeObserver_vtableRead();
void igChildSizeObserver_arkRegister();
void igChildSizeObserver_register();
void *igChildSizeObserver_getMetaCall();
void igChildSizeObserver_fieldInit();
void *fn_80114424();
void *igBoxAspect_getMeta();
void *igBoxAspect_vtableRead();
void igBoxAspect_arkRegister();
void igBoxAspect_register();
void *igBoxAspect_getMetaCall();
}
struct UnknownGenObject80113CD0_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenRoot80113E38 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80113E38(){igObject_construct(this);}
};
struct UnknownGenObject80113E38_0 : UnknownGenRoot80113E38 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 char unknown18[4];
 UnknownGenRefMember unknown1C;
 inline ~UnknownGenObject80113E38_0(){unknown00=igGuiComponent_vtable;}
};
struct UnknownGenObject80113E38 : UnknownGenObject80113E38_0 {
 char unknown20[8];
 inline ~UnknownGenObject80113E38(){unknown00=igBoxComponent_vtable;}
};
struct UnknownGenObject801140B0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80114248_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot8011449C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011449C(){igObject_construct(this);}
};
struct UnknownGenObject8011449C : UnknownGenRoot8011449C {
 char unknown04[40];
 UnknownGenRefMember unknown2C;
 UnknownGenRefMember unknown30;
 char unknown34[12];
 inline ~UnknownGenObject8011449C(){unknown00=igBoxAspect_vtable;}
};
extern "C" {
void *igBasicColorChanger_parentMeta(){return igColorChanger_meta;}
}
#pragma pop
}

namespace igBasicColorChanger {
// igBasicColorChanger: Alchemy class registration (0x80113BDC..0x80113C58). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igBasicColorChanger)

extern "C" {
extern char igBasicColorChanger_fieldNames[8];
extern char igBasicColorChanger_fieldOffsets[8];
extern char igBasicColorChanger_fieldStorage[8];
extern char igBasicColorChanger_fieldTypes[8];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igBasicColorChanger_fieldInit()
{
    Meta::igMetaObject *meta = igBasicColorChanger_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igBasicColorChanger_fieldTypes, 2);
    Meta::igVec4fArrayMetaField *colorsField = static_cast<Meta::igVec4fArrayMetaField *>(meta_field(meta, base));
    *reinterpret_cast<void **>(reinterpret_cast<char *>(colorsField) + 0x34) = (void *)4;
    meta_setupFields(meta, igBasicColorChanger_fieldNames, igBasicColorChanger_fieldStorage, igBasicColorChanger_fieldOffsets, base);
}

}
#pragma pop
}

namespace unknown80113C58 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
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
void fn_8010CBD4();
void *fn_8010DB2C();
void *fn_8010E6DC();
void *igBasicColorChanger_getMeta();
void igBasicColorChanger_vtableRead();
void igBoxAspect_fieldInit();
void igGuiComponentAspect_register();
void igGuiComponent_register();
void igObjectList_register();
void igObject_register();
void igView_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char lbl_80495AD8[];
extern char lbl_8049652C[];
extern char igGuiComponent_vtable[];
extern char igColorChanger_vtable[];
extern char igChildSizeObserver_vtable[];
extern char igBoxAspect_vtable[];
extern char igChildSizeObserverList_vtable[];
extern char lbl_80496FF8[];
extern char igBoxComponent_vtable[];
extern char igBasicColorChanger_fieldTypes[8];
extern char igBasicColorChanger_fieldNames[8];
extern char igBasicColorChanger_fieldStorage[8];
extern char igBasicColorChanger_fieldOffsets[8];
extern char igChildSizeObserverList_dependencies[8];
extern char igChildSizeObserver_dependencies[8];
extern char igChildSizeObserver_fieldTypes[4];
extern char igChildSizeObserver_fieldNames[4];
extern char igChildSizeObserver_fieldStorage[4];
extern char igChildSizeObserver_fieldOffsets[4];
extern void *lbl_805621F4;
extern void *igGuiComponent_meta;
extern void *igBasicColorChanger_meta;
extern void *igColorChanger_meta;
extern void *igBoxComponent_meta;
extern void *igChildSizeObserverList_meta;
extern void *igChildSizeObserver_meta;
extern void *lbl_80563818;
extern void *igBoxAspect_meta;
void igBasicColorChanger_register();
void *igBasicColorChanger_getMetaCall();
void *igBasicColorChanger_parentMeta();
void igBasicColorChanger_fieldInit();
void *igColorChanger_getMeta();
void *igColorChanger_vtableRead();
void igColorChanger_arkRegister();
void igColorChanger_register();
void *igColorChanger_getMetaCall();
void *igBoxComponent_getMeta();
void *igBoxComponent_vtableRead();
void igBoxComponent_arkRegister();
void igBoxComponent_register();
void *igBoxComponent_getMetaCall();
void *igBoxComponent_parentMeta();
void *igChildSizeObserverList_getMeta();
void *igChildSizeObserverList_vtableRead();
void igChildSizeObserverList_arkRegister();
void igChildSizeObserverList_register();
void *igChildSizeObserverList_getMetaCall();
void *igChildSizeObserver_getMeta();
void *igChildSizeObserver_vtableRead();
void igChildSizeObserver_arkRegister();
void igChildSizeObserver_register();
void *igChildSizeObserver_getMetaCall();
void igChildSizeObserver_fieldInit();
void *fn_80114424();
void *igBoxAspect_getMeta();
void *igBoxAspect_vtableRead();
void igBoxAspect_arkRegister();
void igBoxAspect_register();
void *igBoxAspect_getMetaCall();
}
struct UnknownGenObject80113CD0_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenRoot80113E38 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80113E38(){igObject_construct(this);}
};
struct UnknownGenObject80113E38_0 : UnknownGenRoot80113E38 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 char unknown18[4];
 UnknownGenRefMember unknown1C;
 inline ~UnknownGenObject80113E38_0(){unknown00=igGuiComponent_vtable;}
};
struct UnknownGenObject80113E38 : UnknownGenObject80113E38_0 {
 char unknown20[8];
 inline ~UnknownGenObject80113E38(){unknown00=igBoxComponent_vtable;}
};
struct UnknownGenObject801140B0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80114248_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot8011449C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011449C(){igObject_construct(this);}
};
struct UnknownGenObject8011449C : UnknownGenRoot8011449C {
 char unknown04[40];
 UnknownGenRefMember unknown2C;
 UnknownGenRefMember unknown30;
 char unknown34[12];
 inline ~UnknownGenObject8011449C(){unknown00=igBoxAspect_vtable;}
};
extern "C" {
void *fn_80113C58(){
 if(!igColorChanger_meta) igColorChanger_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igColorChanger_meta;
}
}
#pragma pop
}

namespace igColorChanger {
// igColorChanger: Alchemy class registration (0x80113C94..0x80113DC0). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igColorChanger)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_8010CBD4();
}

struct Instance_80113CD0_0 {
    void *__vtable;
    char unknown04[4];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igColorChanger)

void *igColorChanger_vtableRead()
{
    Instance_80113CD0_0 object;
    igObject_construct(&object);
    object.__vtable = igColorChanger_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igColorChanger)

void igColorChanger_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igColorChanger_meta, igObject_register,
                       fn_800237D0, igColorChanger_getMetaCall,
                       igColorChanger_className, 0x8,
                       igColorChanger_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igColorChanger)

}
#pragma pop
}

namespace unknown80113DC0 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
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
void fn_8010CBD4();
void *fn_8010DB2C();
void *fn_8010E6DC();
void *igBasicColorChanger_getMeta();
void igBasicColorChanger_vtableRead();
void igBoxAspect_fieldInit();
void igGuiComponentAspect_register();
void igGuiComponent_register();
void igObjectList_register();
void igObject_register();
void igView_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char lbl_80495AD8[];
extern char lbl_8049652C[];
extern char igGuiComponent_vtable[];
extern char igColorChanger_vtable[];
extern char igChildSizeObserver_vtable[];
extern char igBoxAspect_vtable[];
extern char igChildSizeObserverList_vtable[];
extern char lbl_80496FF8[];
extern char igBoxComponent_vtable[];
extern char igBasicColorChanger_fieldTypes[8];
extern char igBasicColorChanger_fieldNames[8];
extern char igBasicColorChanger_fieldStorage[8];
extern char igBasicColorChanger_fieldOffsets[8];
extern char igChildSizeObserverList_dependencies[8];
extern char igChildSizeObserver_dependencies[8];
extern char igChildSizeObserver_fieldTypes[4];
extern char igChildSizeObserver_fieldNames[4];
extern char igChildSizeObserver_fieldStorage[4];
extern char igChildSizeObserver_fieldOffsets[4];
extern void *lbl_805621F4;
extern void *igGuiComponent_meta;
extern void *igBasicColorChanger_meta;
extern void *igColorChanger_meta;
extern void *igBoxComponent_meta;
extern void *igChildSizeObserverList_meta;
extern void *igChildSizeObserver_meta;
extern void *lbl_80563818;
extern void *igBoxAspect_meta;
void igBasicColorChanger_register();
void *igBasicColorChanger_getMetaCall();
void *igBasicColorChanger_parentMeta();
void igBasicColorChanger_fieldInit();
void *igColorChanger_getMeta();
void *igColorChanger_vtableRead();
void igColorChanger_arkRegister();
void igColorChanger_register();
void *igColorChanger_getMetaCall();
void *igBoxComponent_getMeta();
void *igBoxComponent_vtableRead();
void igBoxComponent_arkRegister();
void igBoxComponent_register();
void *igBoxComponent_getMetaCall();
void *igBoxComponent_parentMeta();
void *igChildSizeObserverList_getMeta();
void *igChildSizeObserverList_vtableRead();
void igChildSizeObserverList_arkRegister();
void igChildSizeObserverList_register();
void *igChildSizeObserverList_getMetaCall();
void *igChildSizeObserver_getMeta();
void *igChildSizeObserver_vtableRead();
void igChildSizeObserver_arkRegister();
void igChildSizeObserver_register();
void *igChildSizeObserver_getMetaCall();
void igChildSizeObserver_fieldInit();
void *fn_80114424();
void *igBoxAspect_getMeta();
void *igBoxAspect_vtableRead();
void igBoxAspect_arkRegister();
void igBoxAspect_register();
void *igBoxAspect_getMetaCall();
}
struct UnknownGenObject80113CD0_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenRoot80113E38 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80113E38(){igObject_construct(this);}
};
struct UnknownGenObject80113E38_0 : UnknownGenRoot80113E38 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 char unknown18[4];
 UnknownGenRefMember unknown1C;
 inline ~UnknownGenObject80113E38_0(){unknown00=igGuiComponent_vtable;}
};
struct UnknownGenObject80113E38 : UnknownGenObject80113E38_0 {
 char unknown20[8];
 inline ~UnknownGenObject80113E38(){unknown00=igBoxComponent_vtable;}
};
struct UnknownGenObject801140B0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80114248_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot8011449C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011449C(){igObject_construct(this);}
};
struct UnknownGenObject8011449C : UnknownGenRoot8011449C {
 char unknown04[40];
 UnknownGenRefMember unknown2C;
 UnknownGenRefMember unknown30;
 char unknown34[12];
 inline ~UnknownGenObject8011449C(){unknown00=igBoxAspect_vtable;}
};
extern "C" {
void *fn_80113DC0(){
 if(!igBoxComponent_meta) igBoxComponent_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igBoxComponent_meta;
}
}
#pragma pop
}

namespace igBoxComponent {
// igBoxComponent: Alchemy class registration (0x80113DFC..0x80114030). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igBoxComponent)
META_DECLARE(igGuiComponent)

extern "C" {
void fn_8010CBD4();
void *igBoxComponent_parentMeta();
}

struct igGuiComponentInstance : igObjectInstance {
    char unknown04[8];
    igObjectRefMember _controller;
    igObjectRefMember _model;
    igObjectRefMember _aspect;
    char unknown18[4];
    igObjectRefMember _node;
    inline ~igGuiComponentInstance() { __vtable = igGuiComponent_vtable; }
};

struct igBoxComponentInstance : igGuiComponentInstance {
    char unknown20[8];
    inline ~igBoxComponentInstance() { __vtable = igBoxComponent_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igBoxComponent)

void *igBoxComponent_vtableRead()
{
    igBoxComponentInstance object;
    object.__vtable = igGuiComponent_vtable;
    object._controller._value = 0;
    object._model._value = 0;
    object._aspect._value = 0;
    object._node._value = 0;
    object.__vtable = igBoxComponent_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igBoxComponent)

void igBoxComponent_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igBoxComponent_meta, igGuiComponent_register,
                       igBoxComponent_parentMeta, igBoxComponent_getMetaCall,
                       igBoxComponent_className, 0x24,
                       igBoxComponent_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igBoxComponent)

}
#pragma pop
}

namespace unknown80114030 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
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
void fn_8010CBD4();
void *fn_8010DB2C();
void *fn_8010E6DC();
void *igBasicColorChanger_getMeta();
void igBasicColorChanger_vtableRead();
void igBoxAspect_fieldInit();
void igGuiComponentAspect_register();
void igGuiComponent_register();
void igObjectList_register();
void igObject_register();
void igView_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char lbl_80495AD8[];
extern char lbl_8049652C[];
extern char igGuiComponent_vtable[];
extern char igColorChanger_vtable[];
extern char igChildSizeObserver_vtable[];
extern char igBoxAspect_vtable[];
extern char igChildSizeObserverList_vtable[];
extern char lbl_80496FF8[];
extern char igBoxComponent_vtable[];
extern char igBasicColorChanger_fieldTypes[8];
extern char igBasicColorChanger_fieldNames[8];
extern char igBasicColorChanger_fieldStorage[8];
extern char igBasicColorChanger_fieldOffsets[8];
extern char igChildSizeObserverList_dependencies[8];
extern char igChildSizeObserver_dependencies[8];
extern char igChildSizeObserver_fieldTypes[4];
extern char igChildSizeObserver_fieldNames[4];
extern char igChildSizeObserver_fieldStorage[4];
extern char igChildSizeObserver_fieldOffsets[4];
extern void *lbl_805621F4;
extern void *igGuiComponent_meta;
extern void *igBasicColorChanger_meta;
extern void *igColorChanger_meta;
extern void *igBoxComponent_meta;
extern void *igChildSizeObserverList_meta;
extern void *igChildSizeObserver_meta;
extern void *lbl_80563818;
extern void *igBoxAspect_meta;
void igBasicColorChanger_register();
void *igBasicColorChanger_getMetaCall();
void *igBasicColorChanger_parentMeta();
void igBasicColorChanger_fieldInit();
void *igColorChanger_getMeta();
void *igColorChanger_vtableRead();
void igColorChanger_arkRegister();
void igColorChanger_register();
void *igColorChanger_getMetaCall();
void *igBoxComponent_getMeta();
void *igBoxComponent_vtableRead();
void igBoxComponent_arkRegister();
void igBoxComponent_register();
void *igBoxComponent_getMetaCall();
void *igBoxComponent_parentMeta();
void *igChildSizeObserverList_getMeta();
void *igChildSizeObserverList_vtableRead();
void igChildSizeObserverList_arkRegister();
void igChildSizeObserverList_register();
void *igChildSizeObserverList_getMetaCall();
void *igChildSizeObserver_getMeta();
void *igChildSizeObserver_vtableRead();
void igChildSizeObserver_arkRegister();
void igChildSizeObserver_register();
void *igChildSizeObserver_getMetaCall();
void igChildSizeObserver_fieldInit();
void *fn_80114424();
void *igBoxAspect_getMeta();
void *igBoxAspect_vtableRead();
void igBoxAspect_arkRegister();
void igBoxAspect_register();
void *igBoxAspect_getMetaCall();
}
struct UnknownGenObject80113CD0_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenRoot80113E38 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80113E38(){igObject_construct(this);}
};
struct UnknownGenObject80113E38_0 : UnknownGenRoot80113E38 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 char unknown18[4];
 UnknownGenRefMember unknown1C;
 inline ~UnknownGenObject80113E38_0(){unknown00=igGuiComponent_vtable;}
};
struct UnknownGenObject80113E38 : UnknownGenObject80113E38_0 {
 char unknown20[8];
 inline ~UnknownGenObject80113E38(){unknown00=igBoxComponent_vtable;}
};
struct UnknownGenObject801140B0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80114248_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot8011449C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011449C(){igObject_construct(this);}
};
struct UnknownGenObject8011449C : UnknownGenRoot8011449C {
 char unknown04[40];
 UnknownGenRefMember unknown2C;
 UnknownGenRefMember unknown30;
 char unknown34[12];
 inline ~UnknownGenObject8011449C(){unknown00=igBoxAspect_vtable;}
};
extern "C" {
void *igBoxComponent_parentMeta(){return igGuiComponent_meta;}
void *fn_80114038(){
 if(!igChildSizeObserverList_meta) igChildSizeObserverList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igChildSizeObserverList_meta;
}
}
#pragma pop
}

namespace igChildSizeObserverList {
// igChildSizeObserverList: Alchemy class registration (0x80114074..0x801141D4). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igChildSizeObserverList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_8010CBD4();
extern char igChildSizeObserverList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_80496FF8[];
}

struct Instance_801140B0_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igChildSizeObserverList)

void *igChildSizeObserverList_vtableRead()
{
    Instance_801140B0_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_80496FF8;
    object.__vtable = igChildSizeObserverList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igChildSizeObserverList)

void igChildSizeObserverList_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igChildSizeObserverList_meta, igObjectList_register,
                       fn_80024180, igChildSizeObserverList_getMetaCall,
                       igChildSizeObserverList_className, 0x14,
                       igChildSizeObserverList_vtableRead, 0, 0, igChildSizeObserverList_dependencies);
}

META_GET_META_CALL(igChildSizeObserverList)

}
#pragma pop
}

namespace igChildSizeObserver {
// igChildSizeObserver: Alchemy class registration (0x801141D4..0x801143D8). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igChildSizeObserver)
META_DECLARE(igView)

extern "C" {
void fn_8010CBD4();
void *fn_8010E6DC();
void *fn_80114424();
extern char igChildSizeObserver_dependencies[8];
extern char igChildSizeObserver_fieldNames[4];
extern char igChildSizeObserver_fieldOffsets[4];
extern char igChildSizeObserver_fieldStorage[4];
extern char igChildSizeObserver_fieldTypes[4];
extern char lbl_80495AD8[];
}

struct Instance_80114248_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igChildSizeObserver)

META_GET_META(igChildSizeObserver)

void *igChildSizeObserver_vtableRead()
{
    Instance_80114248_0 object;
    igObject_construct(&object);
    object.__vtable = lbl_80495AD8;
    object.__vtable = igChildSizeObserver_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igChildSizeObserver)

void igChildSizeObserver_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igChildSizeObserver_meta, igView_register,
                       fn_8010E6DC, igChildSizeObserver_getMetaCall,
                       igChildSizeObserver_className, 0x10,
                       igChildSizeObserver_vtableRead, igChildSizeObserver_fieldInit, 0, igChildSizeObserver_dependencies);
}

META_GET_META_CALL(igChildSizeObserver)

void igChildSizeObserver_fieldInit()
{
    Meta::igMetaObject *meta = igChildSizeObserver_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igChildSizeObserver_fieldTypes, 1);
    Meta::igObjectRefMetaField *boxAspectField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_80114424();
    boxAspectField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    boxAspectField->_refCounted = false;
    meta_setupFields(meta, igChildSizeObserver_fieldNames, igChildSizeObserver_fieldStorage, igChildSizeObserver_fieldOffsets, base);
}

}
#pragma pop
}

namespace unknown801143D8 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
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
void fn_8010CBD4();
void *fn_8010DB2C();
void *fn_8010E6DC();
void *igBasicColorChanger_getMeta();
void igBasicColorChanger_vtableRead();
void igBoxAspect_fieldInit();
void igGuiComponentAspect_register();
void igGuiComponent_register();
void igObjectList_register();
void igObject_register();
void igView_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char lbl_80495AD8[];
extern char lbl_8049652C[];
extern char igGuiComponent_vtable[];
extern char igColorChanger_vtable[];
extern char igChildSizeObserver_vtable[];
extern char igBoxAspect_vtable[];
extern char igChildSizeObserverList_vtable[];
extern char lbl_80496FF8[];
extern char igBoxComponent_vtable[];
extern char igBasicColorChanger_fieldTypes[8];
extern char igBasicColorChanger_fieldNames[8];
extern char igBasicColorChanger_fieldStorage[8];
extern char igBasicColorChanger_fieldOffsets[8];
extern char igChildSizeObserverList_dependencies[8];
extern char igChildSizeObserver_dependencies[8];
extern char igChildSizeObserver_fieldTypes[4];
extern char igChildSizeObserver_fieldNames[4];
extern char igChildSizeObserver_fieldStorage[4];
extern char igChildSizeObserver_fieldOffsets[4];
extern void *lbl_805621F4;
extern void *igGuiComponent_meta;
extern void *igBasicColorChanger_meta;
extern void *igColorChanger_meta;
extern void *igBoxComponent_meta;
extern void *igChildSizeObserverList_meta;
extern void *igChildSizeObserver_meta;
extern void *lbl_80563818;
extern void *igBoxAspect_meta;
void igBasicColorChanger_register();
void *igBasicColorChanger_getMetaCall();
void *igBasicColorChanger_parentMeta();
void igBasicColorChanger_fieldInit();
void *igColorChanger_getMeta();
void *igColorChanger_vtableRead();
void igColorChanger_arkRegister();
void igColorChanger_register();
void *igColorChanger_getMetaCall();
void *igBoxComponent_getMeta();
void *igBoxComponent_vtableRead();
void igBoxComponent_arkRegister();
void igBoxComponent_register();
void *igBoxComponent_getMetaCall();
void *igBoxComponent_parentMeta();
void *igChildSizeObserverList_getMeta();
void *igChildSizeObserverList_vtableRead();
void igChildSizeObserverList_arkRegister();
void igChildSizeObserverList_register();
void *igChildSizeObserverList_getMetaCall();
void *igChildSizeObserver_getMeta();
void *igChildSizeObserver_vtableRead();
void igChildSizeObserver_arkRegister();
void igChildSizeObserver_register();
void *igChildSizeObserver_getMetaCall();
void igChildSizeObserver_fieldInit();
void *fn_80114424();
void *igBoxAspect_getMeta();
void *igBoxAspect_vtableRead();
void igBoxAspect_arkRegister();
void igBoxAspect_register();
void *igBoxAspect_getMetaCall();
}
struct UnknownGenObject80113CD0_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenRoot80113E38 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80113E38(){igObject_construct(this);}
};
struct UnknownGenObject80113E38_0 : UnknownGenRoot80113E38 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 char unknown18[4];
 UnknownGenRefMember unknown1C;
 inline ~UnknownGenObject80113E38_0(){unknown00=igGuiComponent_vtable;}
};
struct UnknownGenObject80113E38 : UnknownGenObject80113E38_0 {
 char unknown20[8];
 inline ~UnknownGenObject80113E38(){unknown00=igBoxComponent_vtable;}
};
struct UnknownGenObject801140B0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80114248_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot8011449C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011449C(){igObject_construct(this);}
};
struct UnknownGenObject8011449C : UnknownGenRoot8011449C {
 char unknown04[40];
 UnknownGenRefMember unknown2C;
 UnknownGenRefMember unknown30;
 char unknown34[12];
 inline ~UnknownGenObject8011449C(){unknown00=igBoxAspect_vtable;}
};
extern "C" {
void *fn_801143D8(){
 char *data=lbl_80494570;
 if(!lbl_80563818) lbl_80563818=fn_800635C8(data+0x1078,data+0x1060,data+0x106C,0x3);
 return lbl_80563818;
}
void *fn_80114424(){
 if(!igBoxAspect_meta) igBoxAspect_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igBoxAspect_meta;
}
void *igBoxAspect_getMeta(){
 if(!igBoxAspect_meta || !(reinterpret_cast<unsigned int *>(igBoxAspect_meta)[0x24/4]&4)) igBoxAspect_arkRegister();
 return igBoxAspect_meta;
}
void *igBoxAspect_vtableRead(){
 UnknownGenObject8011449C object;
 object.unknown00=lbl_80495AD8;
 object.unknown00=lbl_8049652C;
 object.unknown00=igBoxAspect_vtable;
 object.unknown2C.value=0;
 object.unknown30.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igBoxAspect_arkRegister(){
 meta_registerNow((int)igBoxAspect_register);
}
void igBoxAspect_register(){
 fn_8010CBD4();
 meta_registerClass(0,(int)&igBoxAspect_meta,(int)igGuiComponentAspect_register,(int)fn_8010DB2C,(int)igBoxAspect_getMetaCall,(int)igBoxAspect_className,52,(int)igBoxAspect_vtableRead,(int)igBoxAspect_fieldInit,0,(int)igBoxAspect_dependencies);
}
void *igBoxAspect_getMetaCall(){return igBoxAspect_getMeta();}
}
#pragma pop
}

namespace igBoxAspect_fieldInit {
// igBoxAspect: Alchemy class registration (0x8011463C..0x80114710). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igBoxAspect)

extern "C" {
void fn_80046E58(void *, void *);
void *fn_80114038();
void fn_801143D8();
void *fn_801ABFD8();
extern char lbl_8055F220[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igBoxAspect_fieldInit()
{
    Meta::igMetaObject *meta = igBoxAspect_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igBoxAspect_fieldTypes, 3);
    Meta::igEnumMetaField *orientationField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base));
    fn_80046E58(orientationField, (void *)lbl_8055F220);
    orientationField->_getMetaEnumFunction = reinterpret_cast<void *>(fn_801143D8);
    Meta::igObjectRefMetaField *childSizeObserverListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_v3 = fn_801ABFD8();
    childSizeObserverListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v3);
    childSizeObserverListField->_construct = true;
    Meta::igObjectRefMetaField *transformListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    void *value_v5 = fn_80114038();
    transformListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v5);
    transformListField->_construct = true;
    meta_setupFields(meta, igBoxAspect_fieldNames, igBoxAspect_fieldStorage, igBoxAspect_fieldOffsets, base);
}

}
#pragma pop
}

namespace igBoxModel {
// igBoxModel: Alchemy class registration (0x80114710..0x80114988). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igBoxModel)
META_DECLARE(igGuiComponentModel)
META_DECLARE(igModel)

extern "C" {
void fn_8010CBD4();
void *fn_8010D6A0();
void *fn_80111B38();
extern char igBoxModel_dependencies[8];
extern char igBoxModel_fieldNames[4];
extern char igBoxModel_fieldOffsets[4];
extern char igBoxModel_fieldStorage[4];
extern char igBoxModel_fieldTypes[4];
}

struct igModelInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _views;
    inline ~igModelInstance() { __vtable = igModel_vtable; }
};

struct igGuiComponentModelInstance : igModelInstance {
    inline ~igGuiComponentModelInstance() { __vtable = igGuiComponentModel_vtable; }
};

struct igBoxModelInstance : igGuiComponentModelInstance {
    char unknown0C[24];
    igObjectRefMember _children;
    char unknown28[8];
    inline ~igBoxModelInstance() { __vtable = igBoxModel_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igBoxModel)

void *igBoxModel_vtableRead()
{
    igBoxModelInstance object;
    object.__vtable = igModel_vtable;
    object._views._value = 0;
    object.__vtable = igGuiComponentModel_vtable;
    object.__vtable = igBoxModel_vtable;
    object._children._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igBoxModel)

void igBoxModel_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igBoxModel_meta, igGuiComponentModel_register,
                       fn_8010D6A0, igBoxModel_getMetaCall,
                       igBoxModel_className, 0x28,
                       igBoxModel_vtableRead, igBoxModel_fieldInit, 0, igBoxModel_dependencies);
}

META_GET_META_CALL(igBoxModel)

void igBoxModel_fieldInit()
{
    Meta::igMetaObject *meta = igBoxModel_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igBoxModel_fieldTypes, 1);
    Meta::igObjectRefMetaField *childrenField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_80111B38();
    childrenField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    childrenField->_construct = true;
    meta_setupFields(meta, igBoxModel_fieldNames, igBoxModel_fieldStorage, igBoxModel_fieldOffsets, base);
}

}
#pragma pop
}

namespace unknown80114988 {
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void *fn_80024D1C();
void *meta_newMetaObject(void *);
void *fn_80033638();
void *fn_80053998(void *,void *);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void fn_800638E0(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *meta_createInstance(void *,void *);
void fn_8006588C(void *,void *,void *);
void *meta_field(void *,void *);
UnknownGenFactory *fn_800658F8(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *fn_800AF168();
void fn_8010CBD4();
void *fn_8010D6A0();
void *fn_80111B38();
void fn_80115248(void *);
void igCompoundMetaField_register();
void igDataList_register();
void igFont_register();
void igGuiComponentModel_register();
extern char lbl_80471914[];
extern char igDataList_vtable[];
extern char lbl_80474018[];
extern char igNamedObject_vtable[];
extern char igModel_vtable[];
extern char igBitmapFont_vtable[];
extern char igCharMetricsMetaField_vtable[];
extern char igCharMetricsList_vtable[];
extern char lbl_80496EC8[];
extern char lbl_80496F28[];
extern char igBoxModel_vtable[];
extern char igGuiComponentModel_vtable[];
extern char igBoxModel_dependencies[8];
extern char igBoxModel_fieldTypes[4];
extern char igBoxModel_fieldNames[4];
extern char igBoxModel_fieldStorage[4];
extern char igBoxModel_fieldOffsets[4];
extern char igBitmapFont_fieldTypes[8];
extern char igBitmapFont_fieldNames[8];
extern char igBitmapFont_fieldStorage[8];
extern char igBitmapFont_fieldOffsets[8];
extern char lbl_8055F25C[6];
extern char igCharMetricsMetaField_dependencies[8];
extern void *lbl_805621F4;
extern void *igFont_meta;
extern void *igBoxModel_meta;
extern void *igBitmapFont_meta;
extern void *igCharMetricsList_meta;
extern char lbl_80563848[4];
extern void *igCharMetricsMetaField_meta;
extern void *lbl_80563850;
void *igBoxModel_getMeta();
void *igBoxModel_vtableRead();
void igBoxModel_arkRegister();
void igBoxModel_register();
void *igBoxModel_getMetaCall();
void igBoxModel_fieldInit();
void *igBitmapFont_getMeta();
void *igBitmapFont_vtableRead();
void igBitmapFont_arkRegister();
void igBitmapFont_register();
void *igBitmapFont_getMetaCall();
void *igBitmapFont_parentMeta();
void igBitmapFont_fieldInit();
void *fn_80114D4C();
void *igCharMetricsList_getMeta();
void *igCharMetricsList_vtableRead();
void igCharMetricsList_arkRegister();
void igCharMetricsList_register();
void *igCharMetricsList_getMetaCall();
void fn_80114ED4();
void *igCharMetricsMetaField_getMeta();
void *igCharMetricsMetaField_vtableRead();
void igCharMetricsMetaField_arkRegister();
void igCharMetricsMetaField_register();
void *igCharMetricsMetaField_getMetaCall();
void *fn_801151EC();
}
struct UnknownGenRoot8011474C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011474C(){igObject_construct(this);}
};
struct UnknownGenObject8011474C_0 : UnknownGenRoot8011474C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject8011474C_0(){unknown00=igModel_vtable;}
};
struct UnknownGenObject8011474C_1 : UnknownGenObject8011474C_0 {
 inline ~UnknownGenObject8011474C_1(){unknown00=igGuiComponentModel_vtable;}
};
struct UnknownGenObject8011474C : UnknownGenObject8011474C_1 {
 char unknown0C[24];
 UnknownGenRefMember unknown24;
 char unknown28[8];
 inline ~UnknownGenObject8011474C(){unknown00=igBoxModel_vtable;}
};
struct UnknownGenRoot80114A00 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80114A00(){igObject_construct(this);}
};
struct UnknownGenObject80114A00_0 : UnknownGenRoot80114A00 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject80114A00_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject80114A00_1 : UnknownGenObject80114A00_0 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject80114A00_1(){unknown00=lbl_80496F28;}
};
struct UnknownGenObject80114A00 : UnknownGenObject80114A00_1 {
 char unknown18[4];
 UnknownGenRefMember unknown1C;
 UnknownGenRefMember unknown20;
 char unknown24[4];
 inline ~UnknownGenObject80114A00(){unknown00=igBitmapFont_vtable;}
};
struct UnknownGenObject80114DC4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot80114FCC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80114FCC(){fn_800638E0(this);}
};
struct UnknownGenObject80114FCC_0 : UnknownGenRoot80114FCC {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject80114FCC_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject80114FCC_1 : UnknownGenObject80114FCC_0 {
 char unknown10[36];
 UnknownGenRefMember unknown34;
 inline ~UnknownGenObject80114FCC_1(){unknown00=lbl_80474018;}
};
struct UnknownGenObject80114FCC : UnknownGenObject80114FCC_1 {
 char unknown38[8];
 inline ~UnknownGenObject80114FCC(){unknown00=igCharMetricsMetaField_vtable;}
};
extern "C" {
void *fn_80114988(){
 if(!igBitmapFont_meta) igBitmapFont_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igBitmapFont_meta;
}
}
#pragma pop
}

namespace igBitmapFont {
// igBitmapFont: Alchemy class registration (0x801149C4..0x80114B68). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igBitmapFont)
META_DECLARE(igNamedObject)

extern "C" {
extern char lbl_80496F28[];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct Instance_80496F28 : igNamedObjectInstance {
    char unknown0C[8];
    igObjectRefMember _attrList;
    inline ~Instance_80496F28() { __vtable = lbl_80496F28; }
};

struct igBitmapFontInstance : Instance_80496F28 {
    char unknown18[4];
    igObjectRefMember _charMetricsList;
    igObjectRefMember _textureBind;
    char unknown24[4];
    inline ~igBitmapFontInstance() { __vtable = igBitmapFont_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igBitmapFont)

void *igBitmapFont_vtableRead()
{
    igBitmapFontInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_80496F28;
    object._attrList._value = 0;
    object.__vtable = igBitmapFont_vtable;
    object._charMetricsList._value = 0;
    object._textureBind._value = 0;
    return meta_vtableOf(&object);
}

}
#pragma pop
}

namespace unknown80114B68 {
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void *fn_80024D1C();
void *meta_newMetaObject(void *);
void *fn_80033638();
void *fn_80053998(void *,void *);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void fn_800638E0(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *meta_createInstance(void *,void *);
void fn_8006588C(void *,void *,void *);
void *meta_field(void *,void *);
UnknownGenFactory *fn_800658F8(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *fn_800AF168();
void fn_8010CBD4();
void *fn_8010D6A0();
void *fn_80111B38();
void fn_80115248(void *);
void igCompoundMetaField_register();
void igDataList_register();
void igFont_register();
void igGuiComponentModel_register();
extern char lbl_80471914[];
extern char igDataList_vtable[];
extern char lbl_80474018[];
extern char igNamedObject_vtable[];
extern char igModel_vtable[];
extern char igBitmapFont_vtable[];
extern char igCharMetricsMetaField_vtable[];
extern char igCharMetricsList_vtable[];
extern char lbl_80496EC8[];
extern char lbl_80496F28[];
extern char igBoxModel_vtable[];
extern char igGuiComponentModel_vtable[];
extern char igBoxModel_dependencies[8];
extern char igBoxModel_fieldTypes[4];
extern char igBoxModel_fieldNames[4];
extern char igBoxModel_fieldStorage[4];
extern char igBoxModel_fieldOffsets[4];
extern char igBitmapFont_fieldTypes[8];
extern char igBitmapFont_fieldNames[8];
extern char igBitmapFont_fieldStorage[8];
extern char igBitmapFont_fieldOffsets[8];
extern char lbl_8055F25C[6];
extern char igCharMetricsMetaField_dependencies[8];
extern void *lbl_805621F4;
extern void *igFont_meta;
extern void *igBoxModel_meta;
extern void *igBitmapFont_meta;
extern void *igCharMetricsList_meta;
extern char lbl_80563848[4];
extern void *igCharMetricsMetaField_meta;
extern void *lbl_80563850;
void *igBoxModel_getMeta();
void *igBoxModel_vtableRead();
void igBoxModel_arkRegister();
void igBoxModel_register();
void *igBoxModel_getMetaCall();
void igBoxModel_fieldInit();
void *igBitmapFont_getMeta();
void *igBitmapFont_vtableRead();
void igBitmapFont_arkRegister();
void igBitmapFont_register();
void *igBitmapFont_getMetaCall();
void *igBitmapFont_parentMeta();
void igBitmapFont_fieldInit();
void *fn_80114D4C();
void *igCharMetricsList_getMeta();
void *igCharMetricsList_vtableRead();
void igCharMetricsList_arkRegister();
void igCharMetricsList_register();
void *igCharMetricsList_getMetaCall();
void fn_80114ED4();
void *igCharMetricsMetaField_getMeta();
void *igCharMetricsMetaField_vtableRead();
void igCharMetricsMetaField_arkRegister();
void igCharMetricsMetaField_register();
void *igCharMetricsMetaField_getMetaCall();
void *fn_801151EC();
}
struct UnknownGenRoot8011474C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011474C(){igObject_construct(this);}
};
struct UnknownGenObject8011474C_0 : UnknownGenRoot8011474C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject8011474C_0(){unknown00=igModel_vtable;}
};
struct UnknownGenObject8011474C_1 : UnknownGenObject8011474C_0 {
 inline ~UnknownGenObject8011474C_1(){unknown00=igGuiComponentModel_vtable;}
};
struct UnknownGenObject8011474C : UnknownGenObject8011474C_1 {
 char unknown0C[24];
 UnknownGenRefMember unknown24;
 char unknown28[8];
 inline ~UnknownGenObject8011474C(){unknown00=igBoxModel_vtable;}
};
struct UnknownGenRoot80114A00 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80114A00(){igObject_construct(this);}
};
struct UnknownGenObject80114A00_0 : UnknownGenRoot80114A00 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject80114A00_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject80114A00_1 : UnknownGenObject80114A00_0 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject80114A00_1(){unknown00=lbl_80496F28;}
};
struct UnknownGenObject80114A00 : UnknownGenObject80114A00_1 {
 char unknown18[4];
 UnknownGenRefMember unknown1C;
 UnknownGenRefMember unknown20;
 char unknown24[4];
 inline ~UnknownGenObject80114A00(){unknown00=igBitmapFont_vtable;}
};
struct UnknownGenObject80114DC4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot80114FCC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80114FCC(){fn_800638E0(this);}
};
struct UnknownGenObject80114FCC_0 : UnknownGenRoot80114FCC {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject80114FCC_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject80114FCC_1 : UnknownGenObject80114FCC_0 {
 char unknown10[36];
 UnknownGenRefMember unknown34;
 inline ~UnknownGenObject80114FCC_1(){unknown00=lbl_80474018;}
};
struct UnknownGenObject80114FCC : UnknownGenObject80114FCC_1 {
 char unknown38[8];
 inline ~UnknownGenObject80114FCC(){unknown00=igCharMetricsMetaField_vtable;}
};
extern "C" {
UnknownGenHolder *dtor_80114B68(UnknownGenHolder *object,short flags){
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

namespace igBitmapFont_2 {
// igBitmapFont: Alchemy class registration (0x80114BDC..0x80114C9C). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igBitmapFont)
META_DECLARE(igFont)

extern "C" {
void fn_8010CBD4();
void *igBitmapFont_parentMeta();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(igBitmapFont)

void igBitmapFont_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igBitmapFont_meta, igFont_register,
                       igBitmapFont_parentMeta, igBitmapFont_getMetaCall,
                       igBitmapFont_className, 0x24,
                       igBitmapFont_vtableRead, igBitmapFont_fieldInit, 0, igBitmapFont_dependencies);
}

META_GET_META_CALL(igBitmapFont)

}
#pragma pop
}

namespace unknown80114C9C {
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void *fn_80024D1C();
void *meta_newMetaObject(void *);
void *fn_80033638();
void *fn_80053998(void *,void *);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void fn_800638E0(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *meta_createInstance(void *,void *);
void fn_8006588C(void *,void *,void *);
void *meta_field(void *,void *);
UnknownGenFactory *fn_800658F8(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *fn_800AF168();
void fn_8010CBD4();
void *fn_8010D6A0();
void *fn_80111B38();
void fn_80115248(void *);
void igCompoundMetaField_register();
void igDataList_register();
void igFont_register();
void igGuiComponentModel_register();
extern char lbl_80471914[];
extern char igDataList_vtable[];
extern char lbl_80474018[];
extern char igNamedObject_vtable[];
extern char igModel_vtable[];
extern char igBitmapFont_vtable[];
extern char igCharMetricsMetaField_vtable[];
extern char igCharMetricsList_vtable[];
extern char lbl_80496EC8[];
extern char lbl_80496F28[];
extern char igBoxModel_vtable[];
extern char igGuiComponentModel_vtable[];
extern char igBoxModel_dependencies[8];
extern char igBoxModel_fieldTypes[4];
extern char igBoxModel_fieldNames[4];
extern char igBoxModel_fieldStorage[4];
extern char igBoxModel_fieldOffsets[4];
extern char igBitmapFont_fieldTypes[8];
extern char igBitmapFont_fieldNames[8];
extern char igBitmapFont_fieldStorage[8];
extern char igBitmapFont_fieldOffsets[8];
extern char lbl_8055F25C[6];
extern char igCharMetricsMetaField_dependencies[8];
extern void *lbl_805621F4;
extern void *igFont_meta;
extern void *igBoxModel_meta;
extern void *igBitmapFont_meta;
extern void *igCharMetricsList_meta;
extern char lbl_80563848[4];
extern void *igCharMetricsMetaField_meta;
extern void *lbl_80563850;
void *igBoxModel_getMeta();
void *igBoxModel_vtableRead();
void igBoxModel_arkRegister();
void igBoxModel_register();
void *igBoxModel_getMetaCall();
void igBoxModel_fieldInit();
void *igBitmapFont_getMeta();
void *igBitmapFont_vtableRead();
void igBitmapFont_arkRegister();
void igBitmapFont_register();
void *igBitmapFont_getMetaCall();
void *igBitmapFont_parentMeta();
void igBitmapFont_fieldInit();
void *fn_80114D4C();
void *igCharMetricsList_getMeta();
void *igCharMetricsList_vtableRead();
void igCharMetricsList_arkRegister();
void igCharMetricsList_register();
void *igCharMetricsList_getMetaCall();
void fn_80114ED4();
void *igCharMetricsMetaField_getMeta();
void *igCharMetricsMetaField_vtableRead();
void igCharMetricsMetaField_arkRegister();
void igCharMetricsMetaField_register();
void *igCharMetricsMetaField_getMetaCall();
void *fn_801151EC();
}
struct UnknownGenRoot8011474C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011474C(){igObject_construct(this);}
};
struct UnknownGenObject8011474C_0 : UnknownGenRoot8011474C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject8011474C_0(){unknown00=igModel_vtable;}
};
struct UnknownGenObject8011474C_1 : UnknownGenObject8011474C_0 {
 inline ~UnknownGenObject8011474C_1(){unknown00=igGuiComponentModel_vtable;}
};
struct UnknownGenObject8011474C : UnknownGenObject8011474C_1 {
 char unknown0C[24];
 UnknownGenRefMember unknown24;
 char unknown28[8];
 inline ~UnknownGenObject8011474C(){unknown00=igBoxModel_vtable;}
};
struct UnknownGenRoot80114A00 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80114A00(){igObject_construct(this);}
};
struct UnknownGenObject80114A00_0 : UnknownGenRoot80114A00 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject80114A00_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject80114A00_1 : UnknownGenObject80114A00_0 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject80114A00_1(){unknown00=lbl_80496F28;}
};
struct UnknownGenObject80114A00 : UnknownGenObject80114A00_1 {
 char unknown18[4];
 UnknownGenRefMember unknown1C;
 UnknownGenRefMember unknown20;
 char unknown24[4];
 inline ~UnknownGenObject80114A00(){unknown00=igBitmapFont_vtable;}
};
struct UnknownGenObject80114DC4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot80114FCC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80114FCC(){fn_800638E0(this);}
};
struct UnknownGenObject80114FCC_0 : UnknownGenRoot80114FCC {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject80114FCC_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject80114FCC_1 : UnknownGenObject80114FCC_0 {
 char unknown10[36];
 UnknownGenRefMember unknown34;
 inline ~UnknownGenObject80114FCC_1(){unknown00=lbl_80474018;}
};
struct UnknownGenObject80114FCC : UnknownGenObject80114FCC_1 {
 char unknown38[8];
 inline ~UnknownGenObject80114FCC(){unknown00=igCharMetricsMetaField_vtable;}
};
extern "C" {
void *igBitmapFont_parentMeta(){return igFont_meta;}
}
#pragma pop
}

namespace igBitmapFont_3 {
// igBitmapFont: Alchemy class registration (0x80114CA4..0x80114D4C). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igBitmapFont)

extern "C" {
void *fn_800AF168();
void *fn_80114D4C();
extern char igBitmapFont_fieldNames[8];
extern char igBitmapFont_fieldOffsets[8];
extern char igBitmapFont_fieldStorage[8];
extern char igBitmapFont_fieldTypes[8];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igBitmapFont_fieldInit()
{
    Meta::igMetaObject *meta = igBitmapFont_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igBitmapFont_fieldTypes, 2);
    Meta::igObjectRefMetaField *charMetricsListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_80114D4C();
    charMetricsListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    charMetricsListField->_construct = true;
    Meta::igObjectRefMetaField *textureBindField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_value5 = fn_800AF168();
    textureBindField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value5);
    textureBindField->_construct = true;
    meta_setupFields(meta, igBitmapFont_fieldNames, igBitmapFont_fieldStorage, igBitmapFont_fieldOffsets, base);
}

}
#pragma pop
}

namespace unknown80114D4C {
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void *fn_80024D1C();
void *meta_newMetaObject(void *);
void *fn_80033638();
void *fn_80053998(void *,void *);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void fn_800638E0(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *meta_createInstance(void *,void *);
void fn_8006588C(void *,void *,void *);
void *meta_field(void *,void *);
UnknownGenFactory *fn_800658F8(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *fn_800AF168();
void fn_8010CBD4();
void *fn_8010D6A0();
void *fn_80111B38();
void fn_80115248(void *);
void igCompoundMetaField_register();
void igDataList_register();
void igFont_register();
void igGuiComponentModel_register();
extern char lbl_80471914[];
extern char igDataList_vtable[];
extern char lbl_80474018[];
extern char igNamedObject_vtable[];
extern char igModel_vtable[];
extern char igBitmapFont_vtable[];
extern char igCharMetricsMetaField_vtable[];
extern char igCharMetricsList_vtable[];
extern char lbl_80496EC8[];
extern char lbl_80496F28[];
extern char igBoxModel_vtable[];
extern char igGuiComponentModel_vtable[];
extern char igBoxModel_dependencies[8];
extern char igBoxModel_fieldTypes[4];
extern char igBoxModel_fieldNames[4];
extern char igBoxModel_fieldStorage[4];
extern char igBoxModel_fieldOffsets[4];
extern char igBitmapFont_fieldTypes[8];
extern char igBitmapFont_fieldNames[8];
extern char igBitmapFont_fieldStorage[8];
extern char igBitmapFont_fieldOffsets[8];
extern char lbl_8055F25C[6];
extern char igCharMetricsMetaField_dependencies[8];
extern void *lbl_805621F4;
extern void *igFont_meta;
extern void *igBoxModel_meta;
extern void *igBitmapFont_meta;
extern void *igCharMetricsList_meta;
extern char lbl_80563848[4];
extern void *igCharMetricsMetaField_meta;
extern void *lbl_80563850;
void *igBoxModel_getMeta();
void *igBoxModel_vtableRead();
void igBoxModel_arkRegister();
void igBoxModel_register();
void *igBoxModel_getMetaCall();
void igBoxModel_fieldInit();
void *igBitmapFont_getMeta();
void *igBitmapFont_vtableRead();
void igBitmapFont_arkRegister();
void igBitmapFont_register();
void *igBitmapFont_getMetaCall();
void *igBitmapFont_parentMeta();
void igBitmapFont_fieldInit();
void *fn_80114D4C();
void *igCharMetricsList_getMeta();
void *igCharMetricsList_vtableRead();
void igCharMetricsList_arkRegister();
void igCharMetricsList_register();
void *igCharMetricsList_getMetaCall();
void fn_80114ED4();
void *igCharMetricsMetaField_getMeta();
void *igCharMetricsMetaField_vtableRead();
void igCharMetricsMetaField_arkRegister();
void igCharMetricsMetaField_register();
void *igCharMetricsMetaField_getMetaCall();
void *fn_801151EC();
}
struct UnknownGenRoot8011474C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011474C(){igObject_construct(this);}
};
struct UnknownGenObject8011474C_0 : UnknownGenRoot8011474C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject8011474C_0(){unknown00=igModel_vtable;}
};
struct UnknownGenObject8011474C_1 : UnknownGenObject8011474C_0 {
 inline ~UnknownGenObject8011474C_1(){unknown00=igGuiComponentModel_vtable;}
};
struct UnknownGenObject8011474C : UnknownGenObject8011474C_1 {
 char unknown0C[24];
 UnknownGenRefMember unknown24;
 char unknown28[8];
 inline ~UnknownGenObject8011474C(){unknown00=igBoxModel_vtable;}
};
struct UnknownGenRoot80114A00 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80114A00(){igObject_construct(this);}
};
struct UnknownGenObject80114A00_0 : UnknownGenRoot80114A00 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject80114A00_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject80114A00_1 : UnknownGenObject80114A00_0 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject80114A00_1(){unknown00=lbl_80496F28;}
};
struct UnknownGenObject80114A00 : UnknownGenObject80114A00_1 {
 char unknown18[4];
 UnknownGenRefMember unknown1C;
 UnknownGenRefMember unknown20;
 char unknown24[4];
 inline ~UnknownGenObject80114A00(){unknown00=igBitmapFont_vtable;}
};
struct UnknownGenObject80114DC4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot80114FCC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80114FCC(){fn_800638E0(this);}
};
struct UnknownGenObject80114FCC_0 : UnknownGenRoot80114FCC {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject80114FCC_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject80114FCC_1 : UnknownGenObject80114FCC_0 {
 char unknown10[36];
 UnknownGenRefMember unknown34;
 inline ~UnknownGenObject80114FCC_1(){unknown00=lbl_80474018;}
};
struct UnknownGenObject80114FCC : UnknownGenObject80114FCC_1 {
 char unknown38[8];
 inline ~UnknownGenObject80114FCC(){unknown00=igCharMetricsMetaField_vtable;}
};
extern "C" {
void *fn_80114D4C(){
 if(!igCharMetricsList_meta) igCharMetricsList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igCharMetricsList_meta;
}
}
#pragma pop
}

namespace igCharMetricsList {
// igCharMetricsList: Alchemy class registration (0x80114D88..0x80114ED4). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igCharMetricsList)
META_DECLARE(igDataList)

extern "C" {
void *fn_80024D1C();
void fn_8010CBD4();
void fn_80114ED4();
extern char lbl_80496EC8[];
}

struct Instance_80114DC4_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igCharMetricsList)

void *igCharMetricsList_vtableRead()
{
    Instance_80114DC4_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80496EC8;
    object.__vtable = igCharMetricsList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igCharMetricsList)

void igCharMetricsList_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igCharMetricsList_meta, igDataList_register,
                       fn_80024D1C, igCharMetricsList_getMetaCall,
                       igCharMetricsList_className, 0x14,
                       igCharMetricsList_vtableRead, fn_80114ED4, 0, 0);
}

META_GET_META_CALL(igCharMetricsList)

}
#pragma pop
}

namespace unknown80114ED4 {
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void *fn_80024D1C();
void *meta_newMetaObject(void *);
void *fn_80033638();
void *fn_80053998(void *,void *);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void fn_800638E0(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *meta_createInstance(void *,void *);
void fn_8006588C(void *,void *,void *);
void *meta_field(void *,void *);
UnknownGenFactory *fn_800658F8(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *fn_800AF168();
void fn_8010CBD4();
void *fn_8010D6A0();
void *fn_80111B38();
void fn_80115248(void *);
void igCompoundMetaField_register();
void igDataList_register();
void igFont_register();
void igGuiComponentModel_register();
extern char lbl_80471914[];
extern char igDataList_vtable[];
extern char lbl_80474018[];
extern char igNamedObject_vtable[];
extern char igModel_vtable[];
extern char igBitmapFont_vtable[];
extern char igCharMetricsMetaField_vtable[];
extern char igCharMetricsList_vtable[];
extern char lbl_80496EC8[];
extern char lbl_80496F28[];
extern char igBoxModel_vtable[];
extern char igGuiComponentModel_vtable[];
extern char igBoxModel_dependencies[8];
extern char igBoxModel_fieldTypes[4];
extern char igBoxModel_fieldNames[4];
extern char igBoxModel_fieldStorage[4];
extern char igBoxModel_fieldOffsets[4];
extern char igBitmapFont_fieldTypes[8];
extern char igBitmapFont_fieldNames[8];
extern char igBitmapFont_fieldStorage[8];
extern char igBitmapFont_fieldOffsets[8];
extern char lbl_8055F25C[6];
extern char igCharMetricsMetaField_dependencies[8];
extern void *lbl_805621F4;
extern void *igFont_meta;
extern void *igBoxModel_meta;
extern void *igBitmapFont_meta;
extern void *igCharMetricsList_meta;
extern char lbl_80563848[4];
extern void *igCharMetricsMetaField_meta;
extern void *lbl_80563850;
void *igBoxModel_getMeta();
void *igBoxModel_vtableRead();
void igBoxModel_arkRegister();
void igBoxModel_register();
void *igBoxModel_getMetaCall();
void igBoxModel_fieldInit();
void *igBitmapFont_getMeta();
void *igBitmapFont_vtableRead();
void igBitmapFont_arkRegister();
void igBitmapFont_register();
void *igBitmapFont_getMetaCall();
void *igBitmapFont_parentMeta();
void igBitmapFont_fieldInit();
void *fn_80114D4C();
void *igCharMetricsList_getMeta();
void *igCharMetricsList_vtableRead();
void igCharMetricsList_arkRegister();
void igCharMetricsList_register();
void *igCharMetricsList_getMetaCall();
void fn_80114ED4();
void *igCharMetricsMetaField_getMeta();
void *igCharMetricsMetaField_vtableRead();
void igCharMetricsMetaField_arkRegister();
void igCharMetricsMetaField_register();
void *igCharMetricsMetaField_getMetaCall();
void *fn_801151EC();
}
struct UnknownGenRoot8011474C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011474C(){igObject_construct(this);}
};
struct UnknownGenObject8011474C_0 : UnknownGenRoot8011474C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject8011474C_0(){unknown00=igModel_vtable;}
};
struct UnknownGenObject8011474C_1 : UnknownGenObject8011474C_0 {
 inline ~UnknownGenObject8011474C_1(){unknown00=igGuiComponentModel_vtable;}
};
struct UnknownGenObject8011474C : UnknownGenObject8011474C_1 {
 char unknown0C[24];
 UnknownGenRefMember unknown24;
 char unknown28[8];
 inline ~UnknownGenObject8011474C(){unknown00=igBoxModel_vtable;}
};
struct UnknownGenRoot80114A00 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80114A00(){igObject_construct(this);}
};
struct UnknownGenObject80114A00_0 : UnknownGenRoot80114A00 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject80114A00_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject80114A00_1 : UnknownGenObject80114A00_0 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject80114A00_1(){unknown00=lbl_80496F28;}
};
struct UnknownGenObject80114A00 : UnknownGenObject80114A00_1 {
 char unknown18[4];
 UnknownGenRefMember unknown1C;
 UnknownGenRefMember unknown20;
 char unknown24[4];
 inline ~UnknownGenObject80114A00(){unknown00=igBitmapFont_vtable;}
};
struct UnknownGenObject80114DC4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot80114FCC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80114FCC(){fn_800638E0(this);}
};
struct UnknownGenObject80114FCC_0 : UnknownGenRoot80114FCC {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject80114FCC_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject80114FCC_1 : UnknownGenObject80114FCC_0 {
 char unknown10[36];
 UnknownGenRefMember unknown34;
 inline ~UnknownGenObject80114FCC_1(){unknown00=lbl_80474018;}
};
struct UnknownGenObject80114FCC : UnknownGenObject80114FCC_1 {
 char unknown38[8];
 inline ~UnknownGenObject80114FCC(){unknown00=igCharMetricsMetaField_vtable;}
};
extern "C" {
void fn_80114ED4(){
 void *meta=igCharMetricsList_meta;
 UnknownGenField *field=reinterpret_cast<UnknownGenField *>(fn_800658F8(meta,lbl_8055F25C));
 void *type=fn_80053998(reinterpret_cast<void **>(meta)[0x28/4],field);
 field=reinterpret_cast<UnknownGenFactory *>(field)->slot54(1);
 field->unknown3C=fn_801151EC();
 field->unknown38=0;
 field->unknown1C=lbl_80563848;
 fn_8006588C(meta,type,field);
 unknownGenDrop(reinterpret_cast<UnknownGenValue *>(field));
}
}
#pragma pop
}

namespace igCharMetricsMetaField {
// igCharMetricsMetaField: Alchemy class registration (0x80114F90..0x80115154). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igCharMetricsMetaField)
META_DECLARE(igCompoundMetaField)

extern "C" {
void *fn_80033638();
void fn_800638E0(void *);
void fn_8010CBD4();
extern char igCharMetricsMetaField_dependencies[8];
extern char lbl_80471914[];
extern char lbl_80474018[];
}

// The base, built by its out-of-line constructor (fn_800638E0).
struct BaseInstance {
    void *__vtable;
    inline void operator delete(void *) {}
    inline BaseInstance() { fn_800638E0(this); }
};

struct Instance_80471914 : BaseInstance {
    char unknown04[8];
    igStringMember _fieldName;
    inline ~Instance_80471914() { __vtable = lbl_80471914; }
};

struct Instance_80474018 : Instance_80471914 {
    char unknown10[36];
    igObjectRefMember _fieldList;
    inline ~Instance_80474018() { __vtable = lbl_80474018; }
};

struct igCharMetricsMetaFieldInstance : Instance_80474018 {
    char unknown38[8];
    inline ~igCharMetricsMetaFieldInstance() { __vtable = igCharMetricsMetaField_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igCharMetricsMetaField)

void *igCharMetricsMetaField_vtableRead()
{
    igCharMetricsMetaFieldInstance object;
    object.__vtable = lbl_80474018;
    object._fieldList._value = 0;
    object.__vtable = igCharMetricsMetaField_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igCharMetricsMetaField)

void igCharMetricsMetaField_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igCharMetricsMetaField_meta, igCompoundMetaField_register,
                       fn_80033638, igCharMetricsMetaField_getMetaCall,
                       igCharMetricsMetaField_className, 0x38,
                       igCharMetricsMetaField_vtableRead, 0, 0, igCharMetricsMetaField_dependencies);
}

META_GET_META_CALL(igCharMetricsMetaField)

}
#pragma pop
}

namespace unknown80115154 {
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void *fn_80024D1C();
void *meta_newMetaObject(void *);
void *fn_80033638();
void *fn_80053998(void *,void *);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void fn_800638E0(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *meta_createInstance(void *,void *);
void fn_8006588C(void *,void *,void *);
void *meta_field(void *,void *);
UnknownGenFactory *fn_800658F8(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *fn_800AF168();
void fn_8010CBD4();
void *fn_8010D6A0();
void *fn_80111B38();
void fn_80115248(void *);
void igCompoundMetaField_register();
void igDataList_register();
void igFont_register();
void igGuiComponentModel_register();
extern char lbl_80471914[];
extern char igDataList_vtable[];
extern char lbl_80474018[];
extern char igNamedObject_vtable[];
extern char igModel_vtable[];
extern char igBitmapFont_vtable[];
extern char igCharMetricsMetaField_vtable[];
extern char igCharMetricsList_vtable[];
extern char lbl_80496EC8[];
extern char lbl_80496F28[];
extern char igBoxModel_vtable[];
extern char igGuiComponentModel_vtable[];
extern char igBoxModel_dependencies[8];
extern char igBoxModel_fieldTypes[4];
extern char igBoxModel_fieldNames[4];
extern char igBoxModel_fieldStorage[4];
extern char igBoxModel_fieldOffsets[4];
extern char igBitmapFont_fieldTypes[8];
extern char igBitmapFont_fieldNames[8];
extern char igBitmapFont_fieldStorage[8];
extern char igBitmapFont_fieldOffsets[8];
extern char lbl_8055F25C[6];
extern char igCharMetricsMetaField_dependencies[8];
extern void *lbl_805621F4;
extern void *igFont_meta;
extern void *igBoxModel_meta;
extern void *igBitmapFont_meta;
extern void *igCharMetricsList_meta;
extern char lbl_80563848[4];
extern void *igCharMetricsMetaField_meta;
extern void *lbl_80563850;
void *igBoxModel_getMeta();
void *igBoxModel_vtableRead();
void igBoxModel_arkRegister();
void igBoxModel_register();
void *igBoxModel_getMetaCall();
void igBoxModel_fieldInit();
void *igBitmapFont_getMeta();
void *igBitmapFont_vtableRead();
void igBitmapFont_arkRegister();
void igBitmapFont_register();
void *igBitmapFont_getMetaCall();
void *igBitmapFont_parentMeta();
void igBitmapFont_fieldInit();
void *fn_80114D4C();
void *igCharMetricsList_getMeta();
void *igCharMetricsList_vtableRead();
void igCharMetricsList_arkRegister();
void igCharMetricsList_register();
void *igCharMetricsList_getMetaCall();
void fn_80114ED4();
void *igCharMetricsMetaField_getMeta();
void *igCharMetricsMetaField_vtableRead();
void igCharMetricsMetaField_arkRegister();
void igCharMetricsMetaField_register();
void *igCharMetricsMetaField_getMetaCall();
void *fn_801151EC();
}
struct UnknownGenRoot8011474C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011474C(){igObject_construct(this);}
};
struct UnknownGenObject8011474C_0 : UnknownGenRoot8011474C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject8011474C_0(){unknown00=igModel_vtable;}
};
struct UnknownGenObject8011474C_1 : UnknownGenObject8011474C_0 {
 inline ~UnknownGenObject8011474C_1(){unknown00=igGuiComponentModel_vtable;}
};
struct UnknownGenObject8011474C : UnknownGenObject8011474C_1 {
 char unknown0C[24];
 UnknownGenRefMember unknown24;
 char unknown28[8];
 inline ~UnknownGenObject8011474C(){unknown00=igBoxModel_vtable;}
};
struct UnknownGenRoot80114A00 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80114A00(){igObject_construct(this);}
};
struct UnknownGenObject80114A00_0 : UnknownGenRoot80114A00 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject80114A00_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject80114A00_1 : UnknownGenObject80114A00_0 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject80114A00_1(){unknown00=lbl_80496F28;}
};
struct UnknownGenObject80114A00 : UnknownGenObject80114A00_1 {
 char unknown18[4];
 UnknownGenRefMember unknown1C;
 UnknownGenRefMember unknown20;
 char unknown24[4];
 inline ~UnknownGenObject80114A00(){unknown00=igBitmapFont_vtable;}
};
struct UnknownGenObject80114DC4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot80114FCC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80114FCC(){fn_800638E0(this);}
};
struct UnknownGenObject80114FCC_0 : UnknownGenRoot80114FCC {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject80114FCC_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject80114FCC_1 : UnknownGenObject80114FCC_0 {
 char unknown10[36];
 UnknownGenRefMember unknown34;
 inline ~UnknownGenObject80114FCC_1(){unknown00=lbl_80474018;}
};
struct UnknownGenObject80114FCC : UnknownGenObject80114FCC_1 {
 char unknown38[8];
 inline ~UnknownGenObject80114FCC(){unknown00=igCharMetricsMetaField_vtable;}
};
extern "C" {
void fn_80115154(){
 if(!lbl_80563850){
  void *object=(lbl_80563850=meta_createInstance(igCharMetricsMetaField_meta,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80563850));
   reinterpret_cast<short *>(lbl_80563850)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80563850);
  }
 }
}
void *fn_801151EC(){
 if(!lbl_80563850){
  igCharMetricsMetaField_arkRegister();
 }
 return lbl_80563850;
}
int igCharMetricsMetaField_virtual64(){return 40;}
void igCharMetricsMetaField_virtual2C(int p0){
 fn_80115248(reinterpret_cast<Meta::igCharMetricsMetaField *>((void *)p0)->_fieldList);
}
}
#pragma pop
}

namespace fn_80115248 {
// fn_80115248: sets up a compound field type's members (each a field with a name and an offset).
// Written by hand; used by tools/alchemymeta/poolsrc.py, which replaces @POOL(offset) with the name of the
// unit's data object at that offset.

extern "C" {
void *fn_80021E10(void *pool);
void *igFloatMetaField_create(void *pool);
void *igVec2fMetaField_create(void *pool);
void *fn_80054140(unsigned int size);           // allocates
void *fn_80053F28(void *container);             // the string pool container's constructor
const char *fn_80054094(void *container, const char *text);   // a pooled copy of text
void fn_80063D54(void *field, const char **name);   // sets the field's name
void fn_80063F14(void *field);                  // finishes the field
void fn_80069128(void *compound, void *field);  // adds a member field
extern void *lbl_80562140;                      // the string pool container, created on first use
extern char lbl_8055F26C[5];
extern char lbl_8055F274[7];
extern char lbl_8055F27C[5];
}

// A pooled string, released to its pool.
struct PooledName {
    const char *_value;
    inline ~PooledName()
    {
        if (_value) reinterpret_cast<const Gap::Core::igStringPoolItem *>(_value - 8)->release();
    }
};

static inline const char *poolName(const char *text)
{
    if (!text) return 0;
    if (!lbl_80562140) {
        void *container = fn_80054140(0x10);
        if (container) container = fn_80053F28(container);
        lbl_80562140 = container;
    }
    return fn_80054094(lbl_80562140, text);
}

static inline void addMember(void *compound, void *field, const char *name, int offset)
{
    {
        PooledName pooled;
        pooled._value = poolName(name);
        fn_80063D54(field, &pooled._value);
    }
    reinterpret_cast<int *>(field)[2] = offset;   // the field's _offset
    fn_80063F14(field);
    fn_80069128(compound, field);
    meta_release(field);
}

#pragma push
#pragma auto_inline off
extern "C" void fn_80115248(void *compound)
{
    addMember(compound, fn_80021E10(fn_800607F4(lbl_805621F4)), lbl_80495728, 0x0);
    addMember(compound, igFloatMetaField_create(fn_800607F4(lbl_805621F4)), lbl_8055F26C, 0x4);
    addMember(compound, igVec2fMetaField_create(fn_800607F4(lbl_805621F4)), lbl_8055F274, 0x8);
    addMember(compound, igVec2fMetaField_create(fn_800607F4(lbl_805621F4)), lbl_8055F27C, 0x10);
    addMember(compound, igVec2fMetaField_create(fn_800607F4(lbl_805621F4)), lbl_80495734, 0x18);
    addMember(compound, igVec2fMetaField_create(fn_800607F4(lbl_805621F4)), lbl_80495740, 0x20);
}
#pragma pop
}
