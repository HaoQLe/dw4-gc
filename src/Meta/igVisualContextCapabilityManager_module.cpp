// Written by tools/alchemymeta/poolsrc.py: units whose code addresses the data below from its start.
#include <unknownGen.h>
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>
#include <meta/igBoolMetaField.h>
#include <meta/igEnumMetaField.h>
#include <meta/igFloatMetaField.h>
#include <meta/igIntMetaField.h>
#include <meta/igLongMetaField.h>
#include <meta/igMatrix44fMetaField.h>
#include <meta/igMemoryRefMetaField.h>
#include <meta/igObjectRefArrayMetaField.h>
#include <meta/igRawRefMetaField.h>
#include <meta/igUnsignedIntMetaField.h>
#include <meta/igStructMetaField.h>
#include <meta/igMetaObject.h>

// The unit's data.
extern "C" {
void fn_80022A90();
void fn_800274EC();
void fn_8002879C();
void fn_8002AC34();
void fn_8002E1AC();
void fn_80031378();
void fn_800385E0();
void igCustomStateCollectionList_arkRegister();
void igCustomStateFieldList_arkRegister();
void igFloatMetaField_create();
void igLongMetaField_create();
void igMatrix44fMetaField_create();
void igMemoryPool_arkRegister();
void igObjectList_arkRegister();
void igObjectRefArrayMetaField_create();
void igObject_arkRegister();
void igStructMetaField_create();
void igTimer_arkRegister();
void igVertexArray2_arkRegister();
void igVertexArray_arkRegister();
void igVertexStream_arkRegister();
void igVisualContext_arkRegister();
extern char lbl_8055EA60[7];
extern char lbl_8055EA6C[6];
extern char lbl_8055EA94[8];
extern char lbl_8055EAB8[8];
extern char lbl_8055EAD4[7];
extern char lbl_8055EADC[7];
extern char lbl_80562D04[4];
extern char lbl_80562D08[4];
extern char lbl_80562D0C[4];
extern char lbl_80562D10[4];
extern char lbl_80562D14[4];
extern char lbl_80562D18[4];
extern char lbl_80562D1C[4];
extern char lbl_80562D20[4];
extern char lbl_80562D24[4];
extern char lbl_80562D28[4];
extern char lbl_80562D2C[4];
extern char lbl_80562D30[4];
extern char lbl_80562D34[4];
extern char lbl_80562D38[4];
extern char lbl_80562D3C[4];
extern char lbl_80562D40[4];
extern char lbl_80562D44[4];
extern char lbl_80562D48[4];
extern char lbl_80562D4C[4];
extern char lbl_80562D50[4];
extern char lbl_80562D54[4];
extern char lbl_80562D58[4];
extern char lbl_80562D5C[4];
extern char lbl_80562D60[4];
extern char lbl_80562D64[4];
extern char lbl_80562D68[4];
extern char lbl_80562D6C[4];
extern char lbl_80562D70[4];
extern char lbl_80562D88[4];
extern char lbl_80562D8C[4];
extern char lbl_80562D90[4];
extern char lbl_80562DA0[4];
extern char lbl_80562DA4[4];
extern char lbl_80562DA8[4];
extern char lbl_80562DAC[4];
extern char lbl_80562DB0[4];
extern char lbl_80562DB4[4];
extern char lbl_80562DC4[4];
extern char lbl_80562DC8[4];
extern char lbl_80562DCC[4];
extern char lbl_80562DD0[4];
extern char lbl_80562DD4[4];
extern char lbl_80562DD8[4];
extern char lbl_80562DE0[4];
extern char lbl_80562DE4[4];
extern char lbl_80562DE8[4];
extern char lbl_80562DEC[4];
extern char lbl_80562DF0[4];
extern char lbl_80562DF4[4];
extern char lbl_80562E00[4];
extern char lbl_80562E04[4];
extern char lbl_80562E08[4];
extern char lbl_80562E0C[4];
extern char lbl_80562E28[4];
extern char lbl_80562E2C[4];
extern char lbl_80562E30[4];
extern char lbl_80562E40[4];
extern char lbl_80562E44[4];
extern char lbl_80562E48[4];
extern char lbl_80562E4C[4];
extern char lbl_80562E50[4];
extern char lbl_80562E54[4];
extern char lbl_80562E58[4];
extern char lbl_80562E5C[4];
extern char lbl_80562E60[4];
extern char lbl_80562E64[4];
extern char lbl_80562E68[4];
extern char lbl_80562E6C[4];
extern char lbl_80562E70[4];
extern char lbl_80562E74[4];
extern char lbl_80562E78[4];
extern char lbl_80562E7C[4];
extern char lbl_80562E80[4];
extern char lbl_80562E84[4];
char lbl_80480EC0[] = "IG_GFX_INDEX_SIZE_16_BIT";
char lbl_80480EDC[] = "IG_GFX_INDEX_SIZE_32_BIT";
char lbl_80480EF8[] = "IG_GFX_INDEX_DATA_SIZE";
char lbl_80480F10[] = "IG_GFX_COMMIT_UNCHANGED";
char lbl_80480F28[] = "IG_GFX_COMMIT_NO_OVERWRITE";
char lbl_80480F44[] = "IG_GFX_COMMIT_FLAGS";
char lbl_80480F58[] = "IG_GFX_EDIT_DISCARD_CONTENTS";
char lbl_80480F78[] = "IG_GFX_EDIT_FLAGS";
char lbl_80480F8C[] = "IG_GFX_POSITION";
char lbl_80480F9C[] = "IG_GFX_NORMAL";
char lbl_80480FAC[] = "IG_GFX_COLOR";
char lbl_80480FBC[] = "IG_GFX_TEXTURE_COORD";
char lbl_80480FD4[] = "IG_GFX_BLEND_WEIGHT";
char lbl_80480FE8[] = "IG_GFX_BLEND_INDEX";
char lbl_80480FFC[] = "IG_GFX_POINT_SPRITE_SIZE";
char lbl_80481018[] = "IG_GFX_BINORMAL";
char lbl_80481028[] = "IG_GFX_TANGENT";
char lbl_80481038[] = "IG_GFX_POINT_SPRITE_RADIAN";
void *lbl_80481054[20] = {(void *)lbl_80480F8C, (void *)lbl_80480F9C, (void *)lbl_80480FAC, (void *)lbl_80480FBC, (void *)lbl_80480FD4, (void *)lbl_80480FE8, (void *)lbl_80480FFC, (void *)lbl_80481018, (void *)lbl_80481028, (void *)lbl_80481038, 0, (void *)0x1, (void *)0x2, (void *)0x3, (void *)0x4, (void *)0x5, (void *)0x6, (void *)0x7, (void *)0x8, (void *)0x9};
char lbl_804810A4[] = "IG_GFX_VERTEX_COMPONENT";
char lbl_804810BC[] = "IG_GFX_USAGE_WRITE_ONLY";
char lbl_804810D4[] = "IG_GFX_USAGE_FREQUENT_UPDATES";
char lbl_804810F4[] = "IG_GFX_USAGE_UPDATE_AFTER_DRAW";
char lbl_80481114[] = "IG_GFX_USAGE_EDIT_ONCE";
char lbl_8048112C[] = "IG_GFX_USAGE_POINT_SPRITES";
char lbl_80481148[] = "IG_GFX_USAGE_DOUBLE_BUFFER_DX";
char lbl_80481168[] = "IG_GFX_USAGE_TRIPLE_BUFFER_DX";
void *lbl_80481188[14] = {(void *)lbl_804810BC, (void *)lbl_804810D4, (void *)lbl_804810F4, (void *)lbl_80481114, (void *)lbl_8048112C, (void *)lbl_80481148, (void *)lbl_80481168, (void *)0x1, (void *)0x2, (void *)0x4, (void *)0x8, (void *)0x10, (void *)0x20, (void *)0x40};
char lbl_804811C0[] = "IG_GFX_USAGE_FLAGS";
char lbl_804811D4[] = "IG_GFX_VERTEX_FIELD_MASK_POSITION";
char lbl_804811F8[] = "IG_GFX_VERTEX_FIELD_MASK_NORMAL";
char lbl_80481218[] = "IG_GFX_VERTEX_FIELD_MASK_COLOR";
char lbl_80481238[] = "IG_GFX_VERTEX_FIELD_MASK_BLEND_WEIGHT";
char lbl_80481260[] = "IG_GFX_VERTEX_FIELD_MASK_BLEND_MATRIX_INDEX";
char lbl_8048128C[] = "IG_GFX_VERTEX_FIELD_MASK_TEXTURE_COORD";
void *lbl_804812B4[12] = {(void *)lbl_804811D4, (void *)lbl_804811F8, (void *)lbl_80481218, (void *)lbl_80481238, (void *)lbl_80481260, (void *)lbl_8048128C, (void *)0x3, (void *)0xC, (void *)0xF0, (void *)0xF00, (void *)0xF000, (void *)0xF0000};
char lbl_804812E4[] = "IG_GFX_VERTEX_FIELD_MASK";
char lbl_80481300[] = "IG_GFX_VERTEX_FIELD_SHIFT_POSITION";
char lbl_80481324[] = "IG_GFX_VERTEX_FIELD_SHIFT_NORMAL";
char lbl_80481348[] = "IG_GFX_VERTEX_FIELD_SHIFT_COLOR";
char lbl_80481368[] = "IG_GFX_VERTEX_FIELD_SHIFT_BLEND_WEIGHT";
char lbl_80481390[] = "IG_GFX_VERTEX_FIELD_SHIFT_BLEND_MATRIX_INDEX";
char lbl_804813C0[] = "IG_GFX_VERTEX_FIELD_SHIFT_TEXTURE_COORD";
void *lbl_804813E8[12] = {(void *)lbl_80481300, (void *)lbl_80481324, (void *)lbl_80481348, (void *)lbl_80481368, (void *)lbl_80481390, (void *)lbl_804813C0, 0, (void *)0x2, (void *)0x4, (void *)0x8, (void *)0xC, (void *)0x10};
char lbl_80481418[] = "IG_GFX_VERTEX_FIELD_SHIFT";
char lbl_80481434[] = "IG_GFX_VERTEX_FIELD_POSITION";
char lbl_80481454[] = "IG_GFX_VERTEX_FIELD_NORMAL";
char lbl_80481470[] = "IG_GFX_VERTEX_FIELD_COLOR";
char lbl_8048148C[] = "IG_GFX_VERTEX_FIELD_BLEND_WEIGHT_0";
char lbl_804814B0[] = "IG_GFX_VERTEX_FIELD_BLEND_WEIGHT_1";
char lbl_804814D4[] = "IG_GFX_VERTEX_FIELD_BLEND_WEIGHT_2";
char lbl_804814F8[] = "IG_GFX_VERTEX_FIELD_BLEND_WEIGHT_3";
char lbl_8048151C[] = "IG_GFX_VERTEX_FIELD_BLEND_MATRIX_INDEX_0";
char lbl_80481548[] = "IG_GFX_VERTEX_FIELD_BLEND_MATRIX_INDEX_1";
char lbl_80481574[] = "IG_GFX_VERTEX_FIELD_BLEND_MATRIX_INDEX_2";
char lbl_804815A0[] = "IG_GFX_VERTEX_FIELD_BLEND_MATRIX_INDEX_3";
char lbl_804815CC[] = "IG_GFX_VERTEX_FIELD_TEXTURE_COORD_0";
char lbl_804815F0[] = "IG_GFX_VERTEX_FIELD_TEXTURE_COORD_1";
char lbl_80481614[] = "IG_GFX_VERTEX_FIELD_TEXTURE_COORD_2";
char lbl_80481638[] = "IG_GFX_VERTEX_FIELD_TEXTURE_COORD_3";
void *lbl_8048165C[30] = {(void *)lbl_80481434, (void *)lbl_80481454, (void *)lbl_80481470, (void *)lbl_8048148C, (void *)lbl_804814B0, (void *)lbl_804814D4, (void *)lbl_804814F8, (void *)lbl_8048151C, (void *)lbl_80481548, (void *)lbl_80481574, (void *)lbl_804815A0, (void *)lbl_804815CC, (void *)lbl_804815F0, (void *)lbl_80481614, (void *)lbl_80481638, (void *)0x1, (void *)0x4, (void *)0x10, (void *)0x100, (void *)0x200, (void *)0x400, (void *)0x800, (void *)0x1000, (void *)0x2000, (void *)0x4000, (void *)0x8000, (void *)0x10000, (void *)0x20000, (void *)0x40000, (void *)0x80000};
char lbl_804816D4[] = "IG_GFX_VERTEX_FIELDS";
char lbl_804816EC[] = "IG_GFX_SCISSOR_TYPE_EQUALS_VIEWPORT";
char lbl_80481710[] = "IG_GFX_SCISSOR_TYPE_INDEPENDENT";
char lbl_80481730[] = "IG_GFX_SCISSOR_TYPE";
char lbl_80481744[] = "IG_GFX_VIDEO_MODE_FULL_SCREEN";
char lbl_80481764[] = "IG_GFX_VIDEO_MODE_SIZE_TO_WINDOW";
char lbl_80481788[] = "IG_GFX_VIDEO_MODE_320h_240vi";
char lbl_804817A8[] = "IG_GFX_VIDEO_MODE_320h_240vp";
char lbl_804817C8[] = "IG_GFX_VIDEO_MODE_640h_224vi";
char lbl_804817E8[] = "IG_GFX_VIDEO_MODE_640h_448vp";
char lbl_80481808[] = "IG_GFX_VIDEO_MODE_640h_480vp";
char lbl_80481828[] = "IG_GFX_VIDEO_MODE_640h_480vi";
char lbl_80481848[] = "IG_GFX_VIDEO_MODE_800h_600vp";
char lbl_80481868[] = "IG_GFX_VIDEO_MODE_1024h_768vp";
char lbl_80481888[] = "IG_GFX_VIDEO_MODE_1280h_1024vp";
void *lbl_804818A8[22] = {(void *)lbl_80481744, (void *)lbl_80481764, (void *)lbl_80481788, (void *)lbl_804817A8, (void *)lbl_804817C8, (void *)lbl_804817E8, (void *)lbl_80481808, (void *)lbl_80481828, (void *)lbl_80481848, (void *)lbl_80481868, (void *)lbl_80481888, 0, (void *)0x1, (void *)0x2, (void *)0x3, (void *)0x4, (void *)0x5, (void *)0x6, (void *)0x7, (void *)0x8, (void *)0x9, (void *)0xA};
char lbl_80481900[] = "IG_GFX_VIDEO_MODE";
char lbl_80481914[] = "IG_GFX_VIDEO_FORMAT_NTSC";
char lbl_80481930[] = "IG_GFX_VIDEO_FORMAT_PAL";
char lbl_80481948[] = "IG_GFX_VIDEO_FORMAT_HD";
char lbl_80481960[] = "IG_GFX_VIDEO_FORMAT_VESA";
char lbl_8048197C[] = "IG_GFX_VIDEO_FORMAT_MPAL";
char lbl_80481998[] = "IG_GFX_VIDEO_FORMAT_EUR60";
char lbl_804819B4[] = "IG_GFX_VIDEO_FORMAT_PROGRESSIVE";
char lbl_804819D4[] = "IG_GFX_VIDEO_FORMAT_WIDESCREEN";
void *lbl_804819F4[16] = {(void *)lbl_80481914, (void *)lbl_80481930, (void *)lbl_80481948, (void *)lbl_80481960, (void *)lbl_8048197C, (void *)lbl_80481998, (void *)lbl_804819B4, (void *)lbl_804819D4, 0, (void *)0x1, (void *)0x2, (void *)0x3, (void *)0x4, (void *)0x5, (void *)0x6, (void *)0x8};
char lbl_80481A34[] = "IG_GFX_VIDEO_FORMAT";
char lbl_80481A48[] = "IG_GFX_STENCIL_OPERATION_KEEP";
char lbl_80481A68[] = "IG_GFX_STENCIL_OPERATION_ZERO";
char lbl_80481A88[] = "IG_GFX_STENCIL_OPERATION_REPLACE";
char lbl_80481AAC[] = "IG_GFX_STENCIL_OPERATION_INCR";
char lbl_80481ACC[] = "IG_GFX_STENCIL_OPERATION_INCR_WRAP";
char lbl_80481AF0[] = "IG_GFX_STENCIL_OPERATION_DECR";
char lbl_80481B10[] = "IG_GFX_STENCIL_OPERATION_DECR_WRAP";
char lbl_80481B34[] = "IG_GFX_STENCIL_OPERATION_INVERT";
void *lbl_80481B54[16] = {(void *)lbl_80481A48, (void *)lbl_80481A68, (void *)lbl_80481A88, (void *)lbl_80481AAC, (void *)lbl_80481ACC, (void *)lbl_80481AF0, (void *)lbl_80481B10, (void *)lbl_80481B34, 0, (void *)0x1, (void *)0x2, (void *)0x3, (void *)0x4, (void *)0x5, (void *)0x6, (void *)0x7};
char lbl_80481B94[] = "IG_GFX_STENCIL_OPERATION";
char lbl_80481BB0[] = "IG_GFX_STENCIL_FUNCTION_NEVER";
char lbl_80481BD0[] = "IG_GFX_STENCIL_FUNCTION_LESS";
char lbl_80481BF0[] = "IG_GFX_STENCIL_FUNCTION_EQUAL";
char lbl_80481C10[] = "IG_GFX_STENCIL_FUNCTION_LEQUAL";
char lbl_80481C30[] = "IG_GFX_STENCIL_FUNCTION_GREATER";
char lbl_80481C50[] = "IG_GFX_STENCIL_FUNCTION_NOTEQUAL";
char lbl_80481C74[] = "IG_GFX_STENCIL_FUNCTION_GEQUAL";
char lbl_80481C94[] = "IG_GFX_STENCIL_FUNCTION_ALWAYS";
void *lbl_80481CB4[16] = {(void *)lbl_80481BB0, (void *)lbl_80481BD0, (void *)lbl_80481BF0, (void *)lbl_80481C10, (void *)lbl_80481C30, (void *)lbl_80481C50, (void *)lbl_80481C74, (void *)lbl_80481C94, 0, (void *)0x1, (void *)0x2, (void *)0x3, (void *)0x4, (void *)0x5, (void *)0x6, (void *)0x7};
char lbl_80481CF4[] = "IG_GFX_STENCIL_FUNCTION";
char lbl_80481D0C[] = "IG_GFX_FOG_MODE_LINEAR";
char lbl_80481D24[] = "IG_GFX_FOG_MODE_EXP";
char lbl_80481D38[] = "IG_GFX_FOG_MODE_EXP2";
void *lbl_80481D50[6] = {(void *)lbl_80481D0C, (void *)lbl_80481D24, (void *)lbl_80481D38, 0, (void *)0x1, (void *)0x2};
char lbl_80481D68[] = "IG_GFX_FOG_MODE";
char lbl_80481D78[] = "IG_GFX_RENDER_SIDE_FRONT";
char lbl_80481D94[] = "IG_GFX_RENDER_SIDE_BACK";
char lbl_80481DAC[] = "IG_GFX_RENDER_SIDE_FRONT_AND_BACK";
void *lbl_80481DD0[6] = {(void *)lbl_80481D78, (void *)lbl_80481D94, (void *)lbl_80481DAC, 0, (void *)0x1, (void *)0x2};
char lbl_80481DE8[] = "IG_GFX_RENDER_SIDE";
char lbl_80481DFC[] = "IG_GFX_RENDER_MODE_FILL";
char lbl_80481E14[] = "IG_GFX_RENDER_MODE_LINES";
char lbl_80481E30[] = "IG_GFX_RENDER_MODE_POINTS";
void *lbl_80481E4C[6] = {(void *)lbl_80481DFC, (void *)lbl_80481E14, (void *)lbl_80481E30, 0, (void *)0x1, (void *)0x2};
char lbl_80481E64[] = "IG_GFX_RENDER_MODE";
char lbl_80481E78[] = "IG_GFX_DEPTH_TEST_FUNCTION_NEVER";
char lbl_80481E9C[] = "IG_GFX_DEPTH_TEST_FUNCTION_LESS";
char lbl_80481EBC[] = "IG_GFX_DEPTH_TEST_FUNCTION_EQUAL";
char lbl_80481EE0[] = "IG_GFX_DEPTH_TEST_FUNCTION_LEQUAL";
char lbl_80481F04[] = "IG_GFX_DEPTH_TEST_FUNCTION_GREATER";
char lbl_80481F28[] = "IG_GFX_DEPTH_TEST_FUNCTION_NOT_EQUAL";
char lbl_80481F50[] = "IG_GFX_DEPTH_TEST_FUNCTION_GEQUAL";
char lbl_80481F74[] = "IG_GFX_DEPTH_TEST_FUNCTION_ALWAYS";
void *lbl_80481F98[16] = {(void *)lbl_80481E78, (void *)lbl_80481E9C, (void *)lbl_80481EBC, (void *)lbl_80481EE0, (void *)lbl_80481F04, (void *)lbl_80481F28, (void *)lbl_80481F50, (void *)lbl_80481F74, 0, (void *)0x1, (void *)0x2, (void *)0x3, (void *)0x4, (void *)0x5, (void *)0x6, (void *)0x7};
char lbl_80481FD8[] = "IG_GFX_DEPTH_TEST_FUNCTION";
char lbl_80481FF4[] = "IG_GFX_CULL_FACE_MODE_BACK";
char lbl_80482010[] = "IG_GFX_CULL_FACE_MODE_FRONT";
char lbl_8048202C[] = "IG_GFX_CULL_FACE_MODE";
char lbl_80482044[] = "IG_GFX_SHADING_MODE_FACET";
char lbl_80482060[] = "IG_GFX_SHADING_MODE_SMOOTH";
char lbl_8048207C[] = "IG_GFX_SHADING_MODE";
char lbl_80482090[] = "IG_GFX_ALPHA_FUNCTION_NEVER";
char lbl_804820AC[] = "IG_GFX_ALPHA_FUNCTION_LESS";
char lbl_804820C8[] = "IG_GFX_ALPHA_FUNCTION_EQUAL";
char lbl_804820E4[] = "IG_GFX_ALPHA_FUNCTION_LEQUAL";
char lbl_80482104[] = "IG_GFX_ALPHA_FUNCTION_GREATER";
char lbl_80482124[] = "IG_GFX_ALPHA_FUNCTION_NOTEQUAL";
char lbl_80482144[] = "IG_GFX_ALPHA_FUNCTION_GEQUAL";
char lbl_80482164[] = "IG_GFX_ALPHA_FUNCTION_ALWAYS";
void *lbl_80482184[16] = {(void *)lbl_80482090, (void *)lbl_804820AC, (void *)lbl_804820C8, (void *)lbl_804820E4, (void *)lbl_80482104, (void *)lbl_80482124, (void *)lbl_80482144, (void *)lbl_80482164, 0, (void *)0x1, (void *)0x2, (void *)0x3, (void *)0x4, (void *)0x5, (void *)0x6, (void *)0x7};
char lbl_804821C4[] = "IG_GFX_ALPHA_FUNCTION";
char lbl_804821DC[] = "IG_GFX_DEFAULT_STATE_LIGHTING";
char lbl_804821FC[] = "IG_GFX_DEFAULT_STATE_MATERIAL";
char lbl_8048221C[] = "IG_GFX_DEFAULT_STATE_TEXTURE";
char lbl_8048223C[] = "IG_GFX_DEFAULT_STATE_BLEND_MODE";
char lbl_8048225C[] = "IG_GFX_DEFAULT_STATE_FOG";
char lbl_80482278[] = "IG_GFX_DEFAULT_STATE_RENDER_MODE";
char lbl_8048229C[] = "IG_GFX_DEFAULT_STATE_MODES";
char lbl_804822B8[] = "IG_GFX_DEFAULT_STATE_STENCIL";
char lbl_804822D8[] = "IG_GFX_DEFAULT_STATE_ALL";
void *lbl_804822F4[18] = {(void *)lbl_804821DC, (void *)lbl_804821FC, (void *)lbl_8048221C, (void *)lbl_8048223C, (void *)lbl_8048225C, (void *)lbl_80482278, (void *)lbl_8048229C, (void *)lbl_804822B8, (void *)lbl_804822D8, (void *)0x1, (void *)0x2, (void *)0x4, (void *)0x8, (void *)0x10, (void *)0x20, (void *)0x40, (void *)0x80, (void *)0xFFFFFFFF};
char lbl_8048233C[] = "IG_GFX_DEFAULT_STATE";
char lbl_80482354[] = "IG_GFX_MATRIX_STACK_PROJECTION";
char lbl_80482374[] = "IG_GFX_MATRIX_STACK_MODELVIEW";
char lbl_80482394[] = "IG_GFX_MATRIX_STACK_TEXTURE_0";
char lbl_804823B4[] = "IG_GFX_MATRIX_STACK_TEXTURE_1";
char lbl_804823D4[] = "IG_GFX_MATRIX_STACK_TEXTURE_2";
char lbl_804823F4[] = "IG_GFX_MATRIX_STACK_TEXTURE_3";
char lbl_80482414[] = "IG_GFX_MATRIX_STACK_TEXTURE_4";
char lbl_80482434[] = "IG_GFX_MATRIX_STACK_TEXTURE_5";
char lbl_80482454[] = "IG_GFX_MATRIX_STACK_TEXTURE_6";
char lbl_80482474[] = "IG_GFX_MATRIX_STACK_TEXTURE_7";
char lbl_80482494[] = "IG_GFX_MATRIX_STACK_VERTEX_BLEND_0";
char lbl_804824B8[] = "IG_GFX_MATRIX_STACK_VERTEX_BLEND_1";
char lbl_804824DC[] = "IG_GFX_MATRIX_STACK_VERTEX_BLEND_2";
char lbl_80482500[] = "IG_GFX_MATRIX_STACK_VERTEX_BLEND_3";
void *lbl_80482524[28] = {(void *)lbl_80482354, (void *)lbl_80482374, (void *)lbl_80482394, (void *)lbl_804823B4, (void *)lbl_804823D4, (void *)lbl_804823F4, (void *)lbl_80482414, (void *)lbl_80482434, (void *)lbl_80482454, (void *)lbl_80482474, (void *)lbl_80482494, (void *)lbl_804824B8, (void *)lbl_804824DC, (void *)lbl_80482500, 0, (void *)0x1, (void *)0x2, (void *)0x3, (void *)0x4, (void *)0x5, (void *)0x6, (void *)0x7, (void *)0x8, (void *)0x9, (void *)0xA, (void *)0xB, (void *)0xC, (void *)0xD};
char lbl_80482594[] = "IG_GFX_MATRIX_STACK";
char lbl_804825A8[] = "IG_GFX_RENDER_BUFFER_BITS_COLOR";
char lbl_804825C8[] = "IG_GFX_RENDER_BUFFER_BITS_DEPTH";
char lbl_804825E8[] = "IG_GFX_RENDER_BUFFER_BITS_STENCIL";
void *lbl_8048260C[6] = {(void *)lbl_804825A8, (void *)lbl_804825C8, (void *)lbl_804825E8, (void *)0x1, (void *)0x2, (void *)0x4};
char lbl_80482624[] = "IG_GFX_RENDER_BUFFER_BITS";
char lbl_80482640[] = "IG_GFX_BLENDING_FUNCTION_ZERO";
char lbl_80482660[] = "IG_GFX_BLENDING_FUNCTION_ONE";
char lbl_80482680[] = "IG_GFX_BLENDING_FUNCTION_SOURCE_COLOR";
char lbl_804826A8[] = "IG_GFX_BLENDING_FUNCTION_ONE_MINUS_SOURCE_COLOR";
char lbl_804826D8[] = "IG_GFX_BLENDING_FUNCTION_SOURCE_ALPHA";
char lbl_80482700[] = "IG_GFX_BLENDING_FUNCTION_ONE_MINUS_SOURCE_ALPHA";
char lbl_80482730[] = "IG_GFX_BLENDING_FUNCTION_DESTINATION_COLOR";
char lbl_8048275C[] = "IG_GFX_BLENDING_FUNCTION_ONE_MINUS_DESTINATION_COLOR";
char lbl_80482794[] = "IG_GFX_BLENDING_FUNCTION_DESTINATION_ALPHA";
char lbl_804827C0[] = "IG_GFX_BLENDING_FUNCTION_ONE_MINUS_DESTINATION_ALPHA";
char lbl_804827F8[] = "IG_GFX_BLENDING_FUNCTION_SOURCE_ALPHA_SATURATE";
void *lbl_80482828[22] = {(void *)lbl_80482640, (void *)lbl_80482660, (void *)lbl_80482680, (void *)lbl_804826A8, (void *)lbl_804826D8, (void *)lbl_80482700, (void *)lbl_80482730, (void *)lbl_8048275C, (void *)lbl_80482794, (void *)lbl_804827C0, (void *)lbl_804827F8, 0, (void *)0x1, (void *)0x2, (void *)0x3, (void *)0x4, (void *)0x5, (void *)0x6, (void *)0x7, (void *)0x8, (void *)0x9, (void *)0xA};
char lbl_80482880[] = "IG_GFX_BLENDING_FUNCTION";
char lbl_8048289C[] = "IG_GFX_COLOR_TABLE_FORMAT_1";
char lbl_804828B8[] = "IG_GFX_COLOR_TABLE_FORMAT_2";
char lbl_804828D4[] = "IG_GFX_COLOR_TABLE_FORMAT_3";
void *lbl_804828F0[6] = {(void *)lbl_8048289C, (void *)lbl_804828B8, (void *)lbl_804828D4, 0, (void *)0x1, (void *)0x2};
char lbl_80482908[] = "IG_GFX_COLOR_TABLE_FORMAT";
char lbl_80482924[] = "IG_GFX_TEXTURE_COORD_SOURCE_VERTEX";
char lbl_80482948[] = "IG_GFX_TEXTURE_COORD_SOURCE_CAMERA_SPACE_POSITION";
char lbl_8048297C[] = "IG_GFX_TEXTURE_COORD_SOURCE_SPHERE_MAP";
char lbl_804829A4[] = "IG_GFX_TEXTURE_COORD_SOURCE_CAMERA_SPACE_NORMAL";
char lbl_804829D4[] = "IG_GFX_TEXTURE_COORD_SOURCE_CAMERA_SPACE_REFLECTION_VEC";
char lbl_80482A0C[] = "IG_GFX_TEXTURE_COORD_SOURCE_CAMERA_SPACE_POSITION_WITH_COLOR_PS2";
void *lbl_80482A50[12] = {(void *)lbl_80482924, (void *)lbl_80482948, (void *)lbl_8048297C, (void *)lbl_804829A4, (void *)lbl_804829D4, (void *)lbl_80482A0C, 0, (void *)0x1, (void *)0x2, (void *)0x3, (void *)0x4, (void *)0x5};
char lbl_80482A80[] = "IG_GFX_TEXTURE_COORD_SOURCE";
char lbl_80482A9C[] = "IG_GFX_TEXTURE_FUNCTION_REPLACE";
char lbl_80482ABC[] = "IG_GFX_TEXTURE_FUNCTION_MODULATE";
char lbl_80482AE0[] = "IG_GFX_TEXTURE_FUNCTION_ADD";
void *lbl_80482AFC[6] = {(void *)lbl_80482A9C, (void *)lbl_80482ABC, (void *)lbl_80482AE0, 0, (void *)0x1, (void *)0x2};
char lbl_80482B14[] = "IG_GFX_TEXTURE_FUNCTION";
char lbl_80482B2C[] = "IG_GFX_STATE_MODIFIER_NONE";
char lbl_80482B48[] = "IG_GFX_STATE_MODIFIER_TRANSPOSE";
char lbl_80482B68[] = "IG_GFX_STATE_MODIFIER_INVERT";
char lbl_80482B88[] = "IG_GFX_STATE_MODIFIER_XFORM33_MODEL";
char lbl_80482BAC[] = "IG_GFX_STATE_MODIFIER_XFORM33_TRANSPOSED_MODEL";
char lbl_80482BDC[] = "IG_GFX_STATE_MODIFIER_XFORM33_INVERTED_MODEL";
char lbl_80482C0C[] = "IG_GFX_STATE_MODIFIER_XFORM44_MODEL";
char lbl_80482C30[] = "IG_GFX_STATE_MODIFIER_XFORM44_TRANSPOSED_MODEL";
char lbl_80482C60[] = "IG_GFX_STATE_MODIFIER_XFORM44_INVERTED_MODEL";
char lbl_80482C90[] = "IG_GFX_STATE_MODIFIER_XFORM33_VIEW";
char lbl_80482CB4[] = "IG_GFX_STATE_MODIFIER_XFORM33_TRANSPOSED_VIEW";
char lbl_80482CE4[] = "IG_GFX_STATE_MODIFIER_XFORM33_INVERTED_VIEW";
char lbl_80482D10[] = "IG_GFX_STATE_MODIFIER_XFORM44_VIEW";
char lbl_80482D34[] = "IG_GFX_STATE_MODIFIER_XFORM44_TRANSPOSED_VIEW";
char lbl_80482D64[] = "IG_GFX_STATE_MODIFIER_XFORM44_INVERTED_VIEW";
char lbl_80482D90[] = "IG_GFX_STATE_MODIFIER_XFORM33_MODELVIEW";
char lbl_80482DB8[] = "IG_GFX_STATE_MODIFIER_XFORM33_TRANSPOSED_MODELVIEW";
char lbl_80482DEC[] = "IG_GFX_STATE_MODIFIER_XFORM33_INVERTED_MODELVIEW";
char lbl_80482E20[] = "IG_GFX_STATE_MODIFIER_XFORM44_MODELVIEW";
char lbl_80482E48[] = "IG_GFX_STATE_MODIFIER_XFORM44_TRANSPOSED_MODELVIEW";
char lbl_80482E7C[] = "IG_GFX_STATE_MODIFIER_XFORM44_INVERTED_MODELVIEW";
char lbl_80482EB0[] = "IG_GFX_STATE_MODIFIER_NORMALIZE3";
char lbl_80482ED4[] = "IG_GFX_STATE_MODIFIER_NORMALIZE4";
char lbl_80482EF8[] = "IG_GFX_STATE_MODIFIER_NEGATE3";
char lbl_80482F18[] = "IG_GFX_STATE_MODIFIER_NEGATE4";
char lbl_80482F38[] = "IG_GFX_STATE_MODIFIER_W_ZERO";
char lbl_80482F58[] = "IG_GFX_STATE_MODIFIER_W_ONE";
void *lbl_80482F74[54] = {(void *)lbl_80482B2C, (void *)lbl_80482B48, (void *)lbl_80482B68, (void *)lbl_80482B88, (void *)lbl_80482BAC, (void *)lbl_80482BDC, (void *)lbl_80482C0C, (void *)lbl_80482C30, (void *)lbl_80482C60, (void *)lbl_80482C90, (void *)lbl_80482CB4, (void *)lbl_80482CE4, (void *)lbl_80482D10, (void *)lbl_80482D34, (void *)lbl_80482D64, (void *)lbl_80482D90, (void *)lbl_80482DB8, (void *)lbl_80482DEC, (void *)lbl_80482E20, (void *)lbl_80482E48, (void *)lbl_80482E7C, (void *)lbl_80482EB0, (void *)lbl_80482ED4, (void *)lbl_80482EF8, (void *)lbl_80482F18, (void *)lbl_80482F38, (void *)lbl_80482F58, 0, (void *)0x1, (void *)0x2, (void *)0x3, (void *)0x4, (void *)0x5, (void *)0x6, (void *)0x7, (void *)0x8, (void *)0x9, (void *)0xA, (void *)0xB, (void *)0xC, (void *)0xD, (void *)0xE, (void *)0xF, (void *)0x10, (void *)0x11, (void *)0x12, (void *)0x13, (void *)0x14, (void *)0x15, (void *)0x16, (void *)0x17, (void *)0x18, (void *)0x19, (void *)0x1A};
char lbl_8048304C[] = "IG_GFX_STATE_MODIFIER";
char lbl_80483064[] = "IG_GFX_STATE_CONSTANT_ZERO";
char lbl_80483080[] = "IG_GFX_STATE_CONSTANT_BLENDHELPER";
char lbl_804830A4[] = "IG_GFX_STATE_MATERIAL_AMBIENT";
char lbl_804830C4[] = "IG_GFX_STATE_MATERIAL_DIFFUSE";
char lbl_804830E4[] = "IG_GFX_STATE_MATERIAL_SPECULAR";
char lbl_80483104[] = "IG_GFX_STATE_MATERIAL_EMISSION";
char lbl_80483124[] = "IG_GFX_STATE_MATERIAL_SHININESS";
char lbl_80483144[] = "IG_GFX_STATE_LIGHT_POINT_AMBIENT";
char lbl_80483168[] = "IG_GFX_STATE_LIGHT_POINT_DIFFUSE";
char lbl_8048318C[] = "IG_GFX_STATE_LIGHT_POINT_SPECULAR";
char lbl_804831B0[] = "IG_GFX_STATE_LIGHT_POINT_AMBIENTMATERIAL";
char lbl_804831DC[] = "IG_GFX_STATE_LIGHT_POINT_DIFFUSEMATERIAL";
char lbl_80483208[] = "IG_GFX_STATE_LIGHT_POINT_SPECULARMATERIAL";
char lbl_80483234[] = "IG_GFX_STATE_LIGHT_POINT_POSITION";
char lbl_80483258[] = "IG_GFX_STATE_LIGHT_POINT_ATTENUATION";
char lbl_80483280[] = "IG_GFX_STATE_LIGHT_DIRECTIONAL_AMBIENT";
char lbl_804832A8[] = "IG_GFX_STATE_LIGHT_DIRECTIONAL_DIFFUSE";
char lbl_804832D0[] = "IG_GFX_STATE_LIGHT_DIRECTIONAL_SPECULAR";
char lbl_804832F8[] = "IG_GFX_STATE_LIGHT_DIRECTIONAL_DIRECTION";
char lbl_80483324[] = "IG_GFX_STATE_LIGHT_DIRECTIONAL_HALF";
char lbl_80483348[] = "IG_GFX_STATE_LIGHT_DIRECTIONAL_AMBIENTMATERIAL";
char lbl_80483378[] = "IG_GFX_STATE_LIGHT_DIRECTIONAL_DIFFUSEMATERIAL";
char lbl_804833A8[] = "IG_GFX_STATE_LIGHT_DIRECTIONAL_SPECULARMATERIAL";
char lbl_804833D8[] = "IG_GFX_STATE_LIGHT_SPOT_AMBIENT";
char lbl_804833F8[] = "IG_GFX_STATE_LIGHT_SPOT_DIFFUSE";
char lbl_80483418[] = "IG_GFX_STATE_LIGHT_SPOT_SPECULAR";
char lbl_8048343C[] = "IG_GFX_STATE_LIGHT_SPOT_POSITION";
char lbl_80483460[] = "IG_GFX_STATE_LIGHT_SPOT_DIRECTION";
char lbl_80483484[] = "IG_GFX_STATE_LIGHT_SPOT_ATTENUATION";
char lbl_804834A8[] = "IG_GFX_STATE_LIGHT_SPOT_AMBIENTMATERIAL";
char lbl_804834D0[] = "IG_GFX_STATE_LIGHT_SPOT_DIFFUSEMATERIAL";
char lbl_804834F8[] = "IG_GFX_STATE_LIGHT_SPOT_SPECULARMATERIAL";
char lbl_80483524[] = "IG_GFX_STATE_LIGHTMODEL_SCENEAMBIENT";
char lbl_8048354C[] = "IG_GFX_STATE_LIGHTMODEL_SCENEAMBIENTMATERIAL";
char lbl_8048357C[] = "IG_GFX_STATE_LIGHTMODEL_LIGHTINGAMBIENT";
char lbl_804835A4[] = "IG_GFX_STATE_LIGHTMODEL_LIGHTINGAMBIENT_NONSPOT";
char lbl_804835D4[] = "IG_GFX_STATE_FOG_COLOR";
char lbl_804835EC[] = "IG_GFX_STATE_FOG_PARAMETERS";
char lbl_80483608[] = "IG_GFX_STATE_POINT_SIZE";
char lbl_80483620[] = "IG_GFX_STATE_POINT_ATTENUATION";
char lbl_80483640[] = "IG_GFX_STATE_MATRIX_MODEL";
char lbl_8048365C[] = "IG_GFX_STATE_MATRIX_VIEW";
char lbl_80483678[] = "IG_GFX_STATE_MATRIX_MODELVIEW";
char lbl_80483698[] = "IG_GFX_STATE_MATRIX_PROJECTION";
char lbl_804836B8[] = "IG_GFX_STATE_MATRIX_MVP";
char lbl_804836D0[] = "IG_GFX_STATE_MATRIX_TEXTURE";
char lbl_804836EC[] = "IG_GFX_STATE_MATRIX_BLENDING";
char lbl_8048370C[] = "IG_GFX_STATE_COUNT";
void *lbl_80483720[96] = {(void *)lbl_80483064, (void *)lbl_80483080, (void *)lbl_804830A4, (void *)lbl_804830C4, (void *)lbl_804830E4, (void *)lbl_80483104, (void *)lbl_80483124, (void *)lbl_80483144, (void *)lbl_80483168, (void *)lbl_8048318C, (void *)lbl_804831B0, (void *)lbl_804831DC, (void *)lbl_80483208, (void *)lbl_80483234, (void *)lbl_80483258, (void *)lbl_80483280, (void *)lbl_804832A8, (void *)lbl_804832D0, (void *)lbl_804832F8, (void *)lbl_80483324, (void *)lbl_80483348, (void *)lbl_80483378, (void *)lbl_804833A8, (void *)lbl_804833D8, (void *)lbl_804833F8, (void *)lbl_80483418, (void *)lbl_8048343C, (void *)lbl_80483460, (void *)lbl_80483484, (void *)lbl_804834A8, (void *)lbl_804834D0, (void *)lbl_804834F8, (void *)lbl_80483524, (void *)lbl_8048354C, (void *)lbl_8048357C, (void *)lbl_804835A4, (void *)lbl_804835D4, (void *)lbl_804835EC, (void *)lbl_80483608, (void *)lbl_80483620, (void *)lbl_80483640, (void *)lbl_8048365C, (void *)lbl_80483678, (void *)lbl_80483698, (void *)lbl_804836B8, (void *)lbl_804836D0, (void *)lbl_804836EC, (void *)lbl_8048370C, 0, (void *)0x1, (void *)0x2, (void *)0x3, (void *)0x4, (void *)0x5, (void *)0x6, (void *)0x7, (void *)0x8, (void *)0x9, (void *)0xA, (void *)0xB, (void *)0xC, (void *)0xD, (void *)0xE, (void *)0xF, (void *)0x10, (void *)0x11, (void *)0x12, (void *)0x13, (void *)0x14, (void *)0x15, (void *)0x16, (void *)0x17, (void *)0x18, (void *)0x19, (void *)0x1A, (void *)0x1B, (void *)0x1C, (void *)0x1D, (void *)0x1E, (void *)0x1F, (void *)0x20, (void *)0x21, (void *)0x22, (void *)0x23, (void *)0x24, (void *)0x25, (void *)0x26, (void *)0x27, (void *)0x28, (void *)0x29, (void *)0x2A, (void *)0x2B, (void *)0x2C, (void *)0x2D, (void *)0x2E, (void *)0x2F};
char lbl_804838A0[] = "IG_GFX_STATE";
char lbl_804838B0[] = "IG_GFX_PIXEL_PIPELINE_MODE_DEFAULT";
char lbl_804838D4[] = "IG_GFX_PIXEL_PIPELINE_MODE_DX_FIXED_FUNCTION";
char lbl_80483904[] = "IG_GFX_PIXEL_PIPELINE_MODE_DX_PIXEL_SHADER";
char lbl_80483930[] = "IG_GFX_PIXEL_PIPELINE_MODE_SHADER";
char lbl_80483954[] = "IG_GFX_PIXEL_PIPELINE_MODE_PSX2_MULTISTAGE";
void *lbl_80483980[10] = {(void *)lbl_804838B0, (void *)lbl_804838D4, (void *)lbl_80483904, (void *)lbl_80483930, (void *)lbl_80483954, 0, (void *)0x1, (void *)0x2, (void *)0x2, (void *)0x3};
char lbl_804839A8[] = "IG_GFX_PIXEL_PIPELINE_MODE";
char lbl_804839C4[] = "IG_GFX_VERTEX_PIPELINE_MODE_DEFAULT";
char lbl_804839E8[] = "IG_GFX_VERTEX_PIPELINE_MODE_SHADER";
char lbl_80483A0C[] = "IG_GFX_VERTEX_PIPELINE_MODE";
char lbl_80483A28[] = "IG_GFX_TEXTURE_MODE_NONE";
char lbl_80483A44[] = "IG_GFX_TEXTURE_MODE_AUTO_GENERATE_MIPMAPS";
char lbl_80483A70[] = "IG_GFX_TEXTURE_MODE_AUTO_LOAD_MIPMAPS";
char lbl_80483A98[] = "IG_GFX_TEXTURE_MODE_SUB_IMAGE";
void *lbl_80483AB8[8] = {(void *)lbl_80483A28, (void *)lbl_80483A44, (void *)lbl_80483A70, (void *)lbl_80483A98, 0, (void *)0x1, (void *)0x2, (void *)0x4};
char lbl_80483AD8[] = "IG_GFX_TEXTURE_MODE";
char lbl_80483AEC[] = "IG_GFX_TEXTURE_MEMORY_DEFINED";
char lbl_80483B0C[] = "IG_GFX_TEXTURE_MEMORY_LOADED";
char lbl_80483B2C[] = "IG_GFX_TEXTURE_MEMORY_MEMORY_AVAILABLE";
void *lbl_80483B54[6] = {(void *)lbl_80483AEC, (void *)lbl_80483B0C, (void *)lbl_80483B2C, 0, (void *)0x1, (void *)0x2};
char lbl_80483B6C[] = "IG_GFX_TEXTURE_MEMORY";
char lbl_80483B84[] = "IG_GFX_TEXTURE_SOURCE_IMAGE";
char lbl_80483BA0[] = "IG_GFX_TEXTURE_SOURCE_IMAGE_REF";
char lbl_80483BC0[] = "IG_GFX_TEXTURE_SOURCE_VIDEO";
char lbl_80483BDC[] = "IG_GFX_TEXTURE_SOURCE_BUFFER";
char lbl_80483BFC[] = "IG_GFX_TEXTURE_SOURCE_BUFFER_REF";
void *lbl_80483C20[10] = {(void *)lbl_80483B84, (void *)lbl_80483BA0, (void *)lbl_80483BC0, (void *)lbl_80483BDC, (void *)lbl_80483BFC, 0, (void *)0x1, (void *)0x2, (void *)0x3, (void *)0x4};
char lbl_80483C48[] = "IG_GFX_TEXTURE_SOURCE";
char lbl_80483C60[] = "IG_GFX_TEXTURE_WRAP_CLAMP";
char lbl_80483C7C[] = "IG_GFX_TEXTURE_WRAP_REPEAT";
char lbl_80483C98[] = "IG_GFX_TEXTURE_WRAP_REGION_CLAMP";
char lbl_80483CBC[] = "IG_GFX_TEXTURE_WRAP_REGION_REPEAT";
void *lbl_80483CE0[8] = {(void *)lbl_80483C60, (void *)lbl_80483C7C, (void *)lbl_80483C98, (void *)lbl_80483CBC, 0, (void *)0x1, (void *)0x2, (void *)0x3};
char lbl_80483D00[] = "IG_GFX_TEXTURE_WRAP";
char lbl_80483D14[] = "IG_GFX_TEXTURE_FILTER_NEAREST";
char lbl_80483D34[] = "IG_GFX_TEXTURE_FILTER_LINEAR";
char lbl_80483D54[] = "IG_GFX_TEXTURE_FILTER_NEAREST_MIPMAP_NEAREST";
char lbl_80483D84[] = "IG_GFX_TEXTURE_FILTER_NEAREST_MIPMAP_LINEAR";
char lbl_80483DB0[] = "IG_GFX_TEXTURE_FILTER_LINEAR_MIPMAP_NEAREST";
char lbl_80483DDC[] = "IG_GFX_TEXTURE_FILTER_LINEAR_MIPMAP_LINEAR";
void *lbl_80483E08[12] = {(void *)lbl_80483D14, (void *)lbl_80483D34, (void *)lbl_80483D54, (void *)lbl_80483D84, (void *)lbl_80483DB0, (void *)lbl_80483DDC, 0, (void *)0x1, (void *)0x2, (void *)0x3, (void *)0x4, (void *)0x5};
char lbl_80483E38[] = "IG_GFX_TEXTURE_FILTER";
char lbl_80483E50[] = "IG_GFX_IMAGE_CMPNT_INVALID";
char lbl_80483E6C[] = "IG_GFX_IMAGE_CMPNT_R";
char lbl_80483E84[] = "IG_GFX_IMAGE_CMPNT_G";
char lbl_80483E9C[] = "IG_GFX_IMAGE_CMPNT_B";
char lbl_80483EB4[] = "IG_GFX_IMAGE_CMPNT_A";
char lbl_80483ECC[] = "IG_GFX_IMAGE_CMPNT_L";
char lbl_80483EE4[] = "IG_GFX_IMAGE_CMPNT_X";
void *lbl_80483EFC[14] = {(void *)lbl_80483E50, (void *)lbl_80483E6C, (void *)lbl_80483E84, (void *)lbl_80483E9C, (void *)lbl_80483EB4, (void *)lbl_80483ECC, (void *)lbl_80483EE4, (void *)0xFFFFFFFF, 0, (void *)0x1, (void *)0x2, (void *)0x3, (void *)0x4, (void *)0x5};
char lbl_80483F34[] = "IG_GFX_IMAGE_CMPNT";
char lbl_80483F48[] = "IG_GFX_TEXTURE_FORMAT_INVALID";
char lbl_80483F68[] = "IG_GFX_TEXTURE_FORMAT_L_8";
char lbl_80483F84[] = "IG_GFX_TEXTURE_FORMAT_A_8";
char lbl_80483FA0[] = "IG_GFX_TEXTURE_FORMAT_LA_44_8";
char lbl_80483FC0[] = "IG_GFX_TEXTURE_FORMAT_LA_88_16";
char lbl_80483FE0[] = "IG_GFX_TEXTURE_FORMAT_RGB_332_8";
char lbl_80484000[] = "IG_GFX_TEXTURE_FORMAT_RGB_888_24";
char lbl_80484024[] = "IG_GFX_TEXTURE_FORMAT_RGBA_2222_8";
char lbl_80484048[] = "IG_GFX_TEXTURE_FORMAT_RGBA_8888_32";
char lbl_8048406C[] = "IG_GFX_TEXTURE_FORMAT_RGBA_5551_16";
char lbl_80484090[] = "IG_GFX_TEXTURE_FORMAT_RGBA_4444_16";
char lbl_804840B4[] = "IG_GFX_TEXTURE_FORMAT_RGB_565_16";
char lbl_804840D8[] = "IG_GFX_TEXTURE_FORMAT_RGBA_3328_16";
char lbl_804840FC[] = "IG_GFX_TEXTURE_FORMAT_RGBA_5553_16";
char lbl_80484120[] = "IG_GFX_TEXTURE_FORMAT_RGB_DXT1";
char lbl_80484140[] = "IG_GFX_TEXTURE_FORMAT_RGBA_DXT1";
char lbl_80484160[] = "IG_GFX_TEXTURE_FORMAT_RGBA_DXT3";
char lbl_80484180[] = "IG_GFX_TEXTURE_FORMAT_RGBA_DXT5";
char lbl_804841A0[] = "IG_GFX_TEXTURE_FORMAT_Z_8";
char lbl_804841BC[] = "IG_GFX_TEXTURE_FORMAT_Z_16";
char lbl_804841D8[] = "IG_GFX_TEXTURE_FORMAT_Z_24";
char lbl_804841F4[] = "IG_GFX_TEXTURE_FORMAT_Z_32";
char lbl_80484210[] = "IG_GFX_TEXTURE_FORMAT_TILED_RGBA_5553_16_GAMECUBE";
char lbl_80484244[] = "IG_GFX_TEXTURE_FORMAT_TILED_RGB_565_16_GAMECUBE";
char lbl_80484274[] = "IG_GFX_TEXTURE_FORMAT_TILED_L_8_GAMECUBE";
char lbl_804842A0[] = "IG_GFX_TEXTURE_FORMAT_TILED_LA_88_16_GAMECUBE";
char lbl_804842D0[] = "IG_GFX_TEXTURE_FORMAT_TILED_LA_44_8_GAMECUBE";
char lbl_80484300[] = "IG_GFX_TEXTURE_FORMAT_TILED_Z_8_GAMECUBE";
char lbl_8048432C[] = "IG_GFX_TEXTURE_FORMAT_TILED_Z_16_GAMECUBE";
char lbl_80484358[] = "IG_GFX_TEXTURE_FORMAT_TILED_Z_32_GAMECUBE";
char lbl_80484384[] = "IG_GFX_TEXTURE_FORMAT_V8U8_DX";
char lbl_804843A4[] = "IG_GFX_TEXTURE_FORMAT_V16U16_DX";
char lbl_804843C4[] = "IG_GFX_TEXTURE_FORMAT_L6V5U5_DX";
char lbl_804843E4[] = "IG_GFX_TEXTURE_FORMAT_Q8W8V8U8_DX";
char lbl_80484408[] = "IG_GFX_TEXTURE_FORMAT_X8L8V8U8_DX";
char lbl_8048442C[] = "IG_GFX_TEXTURE_FORMAT_TILED_DXT1_GAMECUBE";
char lbl_80484458[] = "IG_GFX_TEXTURE_FORMAT_TILED_RGBA_8888_32_GAMECUBE";
char lbl_8048448C[] = "IG_GFX_TEXTURE_FORMAT_UNINTERPRETED";
char lbl_804844B0[] = "IG_GFX_TEXTURE_FORMAT_DDS";
char lbl_804844CC[] = "IG_GFX_TEXTURE_FORMAT_X_8";
char lbl_804844E8[] = "IG_GFX_TEXTURE_FORMAT_X_4";
char lbl_80484504[] = "IG_GFX_TEXTURE_FORMAT_XA_88_16";
char lbl_80484524[] = "IG_GFX_TEXTURE_FORMAT_HAS_CLUT_MASK";
char lbl_80484548[] = "IG_GFX_TEXTURE_FORMAT_INTENSITY_8";
char lbl_8048456C[] = "IG_GFX_TEXTURE_FORMAT_ALPHA_8";
char lbl_8048458C[] = "IG_GFX_TEXTURE_FORMAT_INTENSITY_ALPHA_8";
char lbl_804845B4[] = "IG_GFX_TEXTURE_FORMAT_INTENSITY_ALPHA_16";
char lbl_804845E0[] = "IG_GFX_TEXTURE_FORMAT_RGB_8";
char lbl_804845FC[] = "IG_GFX_TEXTURE_FORMAT_RGB_24";
char lbl_8048461C[] = "IG_GFX_TEXTURE_FORMAT_RGBA_8";
char lbl_8048463C[] = "IG_GFX_TEXTURE_FORMAT_RGBA_32";
char lbl_8048465C[] = "IG_GFX_TEXTURE_FORMAT_R5G5B5A1_16";
char lbl_80484680[] = "IG_GFX_TEXTURE_FORMAT_R4G4B4A4_16";
char lbl_804846A4[] = "IG_GFX_TEXTURE_FORMAT_R5G6B5_16";
char lbl_804846C4[] = "IG_GFX_TEXTURE_FORMAT_R3G3B2A8_16";
char lbl_804846E8[] = "IG_GFX_TEXTURE_FORMAT_R5G5B5A3_16";
char lbl_8048470C[] = "IG_GFX_TEXTURE_FORMAT_CLUT_INDEX8";
char lbl_80484730[] = "IG_GFX_TEXTURE_FORMAT_CLUT_INDEX4";
char lbl_80484754[] = "IG_GFX_TEXTURE_FORMAT_CLUT_INDEX_ALPHA_16";
void *lbl_80484780[118] = {(void *)lbl_80483F48, (void *)lbl_80483F68, (void *)lbl_80483F84, (void *)lbl_80483FA0, (void *)lbl_80483FC0, (void *)lbl_80483FE0, (void *)lbl_80484000, (void *)lbl_80484024, (void *)lbl_80484048, (void *)lbl_8048406C, (void *)lbl_80484090, (void *)lbl_804840B4, (void *)lbl_804840D8, (void *)lbl_804840FC, (void *)lbl_80484120, (void *)lbl_80484140, (void *)lbl_80484160, (void *)lbl_80484180, (void *)lbl_804841A0, (void *)lbl_804841BC, (void *)lbl_804841D8, (void *)lbl_804841F4, (void *)lbl_80484210, (void *)lbl_80484244, (void *)lbl_80484274, (void *)lbl_804842A0, (void *)lbl_804842D0, (void *)lbl_80484300, (void *)lbl_8048432C, (void *)lbl_80484358, (void *)lbl_80484384, (void *)lbl_804843A4, (void *)lbl_804843C4, (void *)lbl_804843E4, (void *)lbl_80484408, (void *)lbl_8048442C, (void *)lbl_80484458, (void *)lbl_8048448C, (void *)lbl_804844B0, (void *)lbl_804844CC, (void *)lbl_804844E8, (void *)lbl_80484504, (void *)lbl_80484524, (void *)lbl_80484548, (void *)lbl_8048456C, (void *)lbl_8048458C, (void *)lbl_804845B4, (void *)lbl_804845E0, (void *)lbl_804845FC, (void *)lbl_8048461C, (void *)lbl_8048463C, (void *)lbl_8048465C, (void *)lbl_80484680, (void *)lbl_804846A4, (void *)lbl_804846C4, (void *)lbl_804846E8, (void *)lbl_8048470C, (void *)lbl_80484730, (void *)lbl_80484754, (void *)0xFFFFFFFF, 0, (void *)0x1, (void *)0x2, (void *)0x3, (void *)0x4, (void *)0x5, (void *)0x6, (void *)0x7, (void *)0x8, (void *)0x9, (void *)0xA, (void *)0xB, (void *)0xC, (void *)0xD, (void *)0xE, (void *)0xF, (void *)0x10, (void *)0x11, (void *)0x12, (void *)0x13, (void *)0x14, (void *)0x15, (void *)0x16, (void *)0x17, (void *)0x18, (void *)0x19, (void *)0x1A, (void *)0x1B, (void *)0x1C, (void *)0x1D, (void *)0x1E, (void *)0x1F, (void *)0x20, (void *)0x21, (void *)0x22, (void *)0x23, (void *)0x8000, (void *)0x8001, (void *)0x10000, (void *)0x10001, (void *)0x10002, (void *)0xFFFF0000, 0, (void *)0x1, (void *)0x2, (void *)0x3, (void *)0x4, (void *)0x5, (void *)0x6, (void *)0x7, (void *)0x8, (void *)0x9, (void *)0xA, (void *)0xB, (void *)0xC, (void *)0x10000, (void *)0x10001, (void *)0x10002};
char lbl_80484958[] = "IG_GFX_TEXTURE_FORMAT";
char lbl_80484970[] = "IG_GFX_IMAGE_ORDER_INVALID";
char lbl_8048498C[] = "IG_GFX_IMAGE_ORDER_DEFAULT";
char lbl_804849A8[] = "IG_GFX_IMAGE_ORDER_OGL";
char lbl_804849C0[] = "IG_GFX_IMAGE_ORDER_DX";
char lbl_804849D8[] = "IG_GFX_IMAGE_ORDER_PSX2";
char lbl_804849F0[] = "IG_GFX_IMAGE_ORDER_GAMECUBE";
char lbl_80484A0C[] = "IG_GFX_IMAGE_ORDER_PSP";
char lbl_80484A24[] = "IG_GFX_IMAGE_ORDER_RGBA";
char lbl_80484A3C[] = "IG_GFX_IMAGE_ORDER_ABGR";
char lbl_80484A54[] = "IG_GFX_IMAGE_ORDER_ARGB";
char lbl_80484A6C[] = "IG_GFX_IMAGE_ORDER_BGRA";
void *lbl_80484A84[22] = {(void *)lbl_80484970, (void *)lbl_8048498C, (void *)lbl_804849A8, (void *)lbl_804849C0, (void *)lbl_804849D8, (void *)lbl_804849F0, (void *)lbl_80484A0C, (void *)lbl_80484A24, (void *)lbl_80484A3C, (void *)lbl_80484A54, (void *)lbl_80484A6C, (void *)0xFFFFFFFF, (void *)0x64, (void *)0x64, (void *)0x65, (void *)0x66, (void *)0x67, (void *)0x68, 0, (void *)0x1, (void *)0x2, (void *)0x3};
char lbl_80484ADC[] = "IG_GFX_IMAGE_ORDER";
char lbl_80484AF0[] = "IG_GFX_MATERIAL_COMPONENT_NONE";
char lbl_80484B10[] = "IG_GFX_MATERIAL_COMPONENT_AMBIENT";
char lbl_80484B34[] = "IG_GFX_MATERIAL_COMPONENT_DIFFUSE";
char lbl_80484B58[] = "IG_GFX_MATERIAL_COMPONENT_AMBIENT_AND_DIFFUSE";
char lbl_80484B88[] = "IG_GFX_MATERIAL_COMPONENT_SPECULAR";
char lbl_80484BAC[] = "IG_GFX_MATERIAL_COMPONENT_EMISSIVE";
void *lbl_80484BD0[12] = {(void *)lbl_80484AF0, (void *)lbl_80484B10, (void *)lbl_80484B34, (void *)lbl_80484B58, (void *)lbl_80484B88, (void *)lbl_80484BAC, 0, (void *)0x1, (void *)0x2, (void *)0x3, (void *)0x4, (void *)0x5};
char lbl_80484C00[] = "IG_GFX_MATERIAL_COMPONENT";
char lbl_80484C1C[] = "IG_GFX_MATERIAL_SIDE_FRONT";
char lbl_80484C38[] = "IG_GFX_MATERIAL_SIDE_BACK";
char lbl_80484C54[] = "IG_GFX_MATERIAL_SIDE_FRONT_AND_BACK";
void *lbl_80484C78[6] = {(void *)lbl_80484C1C, (void *)lbl_80484C38, (void *)lbl_80484C54, 0, (void *)0x1, (void *)0x2};
char lbl_80484C90[] = "IG_GFX_MATERIAL_SIDE";
char lbl_80484CA8[] = "IG_GFX_LIGHT_ATTENUATION_CONSTANT";
char lbl_80484CCC[] = "IG_GFX_LIGHT_ATTENUATION_LINEAR";
char lbl_80484CEC[] = "IG_GFX_LIGHT_ATTENUATION_QUADRATIC";
void *lbl_80484D10[6] = {(void *)lbl_80484CA8, (void *)lbl_80484CCC, (void *)lbl_80484CEC, 0, (void *)0x1, (void *)0x2};
char lbl_80484D28[] = "IG_GFX_LIGHT_ATTENUATION";
char lbl_80484D44[] = "IG_GFX_LIGHT_TYPE_DIRECTIONAL";
char lbl_80484D64[] = "IG_GFX_LIGHT_TYPE_POINT";
char lbl_80484D7C[] = "IG_GFX_LIGHT_TYPE_SPOT";
void *lbl_80484D94[6] = {(void *)lbl_80484D44, (void *)lbl_80484D64, (void *)lbl_80484D7C, 0, (void *)0x1, (void *)0x2};
char lbl_80484DAC[] = "IG_GFX_LIGHT_TYPE";
char lbl_80484DC0[] = "IG_GFX_DRAW_MULTIPLE_LINE_STRIPS";
char lbl_80484DE4[] = "IG_GFX_DRAW_MULTIPLE_TRIANGLE_STRIPS";
char lbl_80484E0C[] = "IG_GFX_DRAW_MULTIPLE_TRIANGLE_FANS";
void *lbl_80484E30[6] = {(void *)lbl_80484DC0, (void *)lbl_80484DE4, (void *)lbl_80484E0C, 0, (void *)0x1, (void *)0x2};
char lbl_80484E48[] = "IG_GFX_DRAW_MULTIPLE";
char lbl_80484E60[] = "IG_GFX_DRAW_POINTS";
char lbl_80484E74[] = "IG_GFX_DRAW_LINES";
char lbl_80484E88[] = "IG_GFX_DRAW_LINE_STRIP";
char lbl_80484EA0[] = "IG_GFX_DRAW_TRIANGLES";
char lbl_80484EB8[] = "IG_GFX_DRAW_TRIANGLE_STRIP";
char lbl_80484ED4[] = "IG_GFX_DRAW_TRIANGLE_FAN";
void *lbl_80484EF0[12] = {(void *)lbl_80484E60, (void *)lbl_80484E74, (void *)lbl_80484E88, (void *)lbl_80484EA0, (void *)lbl_80484EB8, (void *)lbl_80484ED4, 0, (void *)0x1, (void *)0x2, (void *)0x3, (void *)0x4, (void *)0x5};
char lbl_80484F20[] = "IG_GFX_DRAW";
char lbl_80484F2C[] = "IG_GFX_BUFFER_SELECT_BACK_BUFFER";
char lbl_80484F50[] = "IG_GFX_BUFFER_SELECT_FRONT_BUFFER";
char lbl_80484F74[] = "IG_GFX_BUFFER_SELECT_LEFT_BUFFER";
char lbl_80484F98[] = "IG_GFX_BUFFER_SELECT_RIGHT_BUFFER";
char lbl_80484FBC[] = "IG_GFX_BUFFER_SELECT_LEFT_BACK_BUFFER";
char lbl_80484FE4[] = "IG_GFX_BUFFER_SELECT_LEFT_FRONT_BUFFER";
char lbl_8048500C[] = "IG_GFX_BUFFER_SELECT_RIGHT_BACK_BUFFER";
char lbl_80485034[] = "IG_GFX_BUFFER_SELECT_RIGHT_FRONT_BUFFER";
void *lbl_8048505C[16] = {(void *)lbl_80484F2C, (void *)lbl_80484F50, (void *)lbl_80484F74, (void *)lbl_80484F98, (void *)lbl_80484FBC, (void *)lbl_80484FE4, (void *)lbl_8048500C, (void *)lbl_80485034, 0, (void *)0x1, (void *)0x2, (void *)0x3, (void *)0x4, (void *)0x5, (void *)0x6, (void *)0x7};
char lbl_8048509C[] = "IG_GFX_BUFFER_SELECT";
char lbl_804850B4[] = "IG_GFX_RENDERDESTINATION_SINGLE_BUFFERED_VISUAL";
char lbl_804850E4[] = "IG_GFX_RENDERDESTINATION_DOUBLE_BUFFERED_VISUAL";
char lbl_80485114[] = "IG_GFX_RENDERDESTINATION_TEXTURE";
void *lbl_80485138[6] = {(void *)lbl_804850B4, (void *)lbl_804850E4, (void *)lbl_80485114, 0, (void *)0x1, (void *)0x2};
char lbl_80485150[] = "IG_GFX_RENDERDESTINATION_TYPE";
char lbl_80485170[] = "IG_GFX_CONTEXT_ERROR_NONE";
char lbl_8048518C[] = "IG_GFX_CONTEXT_ERROR_INVALID_DEVICE_STATE";
char lbl_804851B8[] = "IG_GFX_CONTEXT_ERROR";
char lbl_804851D0[] = "IG_GFX_STATISTIC_VERTEX_COUNT";
char lbl_804851F0[] = "IG_GFX_STATISTIC_TRIANGLE_COUNT";
char lbl_80485210[] = "IG_GFX_STATISTIC_TEXTURE_COUNT";
char lbl_80485230[] = "IG_GFX_STATISTIC_TEXTURE_ALLOCATED";
char lbl_80485254[] = "IG_GFX_STATISTIC_FRAME_COUNT";
char lbl_80485274[] = "IG_GFX_STATISTIC_VSYNC_COUNT";
char lbl_80485294[] = "IG_GFX_STATISTIC_DRAWING_TIME";
char lbl_804852B4[] = "IG_GFX_STATISTIC_BEST_TIME";
char lbl_804852D0[] = "IG_GFX_STATISTIC_WORST_TIME";
char lbl_804852EC[] = "IG_GFX_STATISTIC_VERTEX_BUFFER_SIZE";
char lbl_80485310[] = "IG_GFX_STATISTIC_DRAW_CALL_COUNT";
char lbl_80485334[] = "IG_GFX_STATISTIC_CPU_BLEND_VERTEX_COUNT";
char lbl_8048535C[] = "IG_GFX_STATISTIC_GPU_BLEND_VERTEX_COUNT";
char lbl_80485384[] = "IG_GFX_STATISTIC_TRANSFORM_COUNT";
char lbl_804853A8[] = "IG_GFX_STATISTIC_REDUNDANT_CONTEXT";
char lbl_804853CC[] = "IG_GFX_STATISTIC_REDUNDANT_FOG";
char lbl_804853EC[] = "IG_GFX_STATISTIC_REDUNDANT_COLOR";
char lbl_80485410[] = "IG_GFX_STATISTIC_REDUNDANT_LIGHTING";
char lbl_80485434[] = "IG_GFX_STATISTIC_REDUNDANT_MATERIAL";
char lbl_80485458[] = "IG_GFX_STATISTIC_REDUNDANT_MATRIX";
char lbl_8048547C[] = "IG_GFX_STATISTIC_REDUNDANT_VERTEXBLENDING";
char lbl_804854A8[] = "IG_GFX_STATISTIC_REDUNDANT_ALPHATEST";
char lbl_804854D0[] = "IG_GFX_STATISTIC_REDUNDANT_ALPHABLENDING";
char lbl_804854FC[] = "IG_GFX_STATISTIC_REDUNDANT_CLIPPING";
char lbl_80485520[] = "IG_GFX_STATISTIC_REDUNDANT_SHADEMODE";
char lbl_80485548[] = "IG_GFX_STATISTIC_REDUNDANT_CULLFACE";
char lbl_8048556C[] = "IG_GFX_STATISTIC_REDUNDANT_DEPTH";
char lbl_80485590[] = "IG_GFX_STATISTIC_REDUNDANT_SPRITE";
char lbl_804855B4[] = "IG_GFX_STATISTIC_REDUNDANT_TEXTURE";
char lbl_804855D8[] = "IG_GFX_STATISTIC_REDUNDANT_SHADER";
char lbl_804855FC[] = "IG_GFX_STATISTIC_DMA_VU1_TIME";
char lbl_8048561C[] = "IG_GFX_STATISTIC_DMA_VU1_SIZE";
char lbl_8048563C[] = "IG_GFX_STATISTIC_DMA_VU1_COUNT";
char lbl_8048565C[] = "IG_GFX_STATISTIC_DMA_GIF_TIME";
char lbl_8048567C[] = "IG_GFX_STATISTIC_DMA_GIF_SIZE";
char lbl_8048569C[] = "IG_GFX_STATISTIC_DMA_GIF_COUNT";
char lbl_804856BC[] = "IG_GFX_STATISTIC_GIF_INT_COUNT";
char lbl_804856DC[] = "IG_GFX_STATISTIC_VIF1_INT_COUNT";
char lbl_804856FC[] = "IG_GFX_STATISTIC_WAIT_TIME";
char lbl_80485718[] = "IG_GFX_STATISTIC_REMAIN_TIME";
char lbl_80485738[] = "IG_GFX_STATISTIC_STATE_CHANGE_COUNT";
char lbl_8048575C[] = "IG_GFX_STATISTIC_STATE_VALIDATE_COUNT";
char lbl_80485784[] = "IG_GFX_STATISTIC_TEXMEM_SIZE";
char lbl_804857A4[] = "IG_GFX_STATISTIC_TEXMEMFREE_SIZE";
char lbl_804857C8[] = "IG_GFX_STATISTIC_RESIZE_CLUT";
char lbl_804857E8[] = "IG_GFX_STATISTIC_RESIZE_DMAPREDICATE";
char lbl_80485810[] = "IG_GFX_STATISTIC_RESIZE_DMACOMPLETION";
char lbl_80485838[] = "IG_GFX_STATISTIC_RESIZE_FINISH";
char lbl_80485858[] = "IG_GFX_STATISTIC_RESIZE_TEXTURE";
char lbl_80485878[] = "IG_GFX_STATISTIC_RESIZE_VIF0";
char lbl_80485898[] = "IG_GFX_STATISTIC_RESIZE_VIF1";
char lbl_804858B8[] = "IG_GFX_STATISTIC_RESIZE_GIF";
char lbl_804858D4[] = "IG_GFX_STATISTIC_RESIZE_VIF0_SIZE";
char lbl_804858F8[] = "IG_GFX_STATISTIC_RESIZE_VIF1_SIZE";
char lbl_8048591C[] = "IG_GFX_STATISTIC_RESIZE_GIF_SIZE";
char lbl_80485940[] = "IG_GFX_STATISTIC_RESIZE_STATE_CACHE";
char lbl_80485964[] = "IG_GFX_STATISTIC_RESIZE_MULTIPASS";
char lbl_80485988[] = "IG_GFX_STATISTIC_CAPTURE_TRIGGER";
char lbl_804859AC[] = "IG_GFX_STATISTIC_PARTICLE_UPDATE_COUNT";
char lbl_804859D4[] = "IG_GFX_STATISTIC_PARTICLE_COUNT";
char lbl_804859F4[] = "IG_GFX_STATISTIC_REDUNDANT_START";
char lbl_80485A18[] = "IG_GFX_STATISTIC_REDUNDANT_VERTEX_ARRAY";
char lbl_80485A40[] = "IG_GFX_STATISTIC_REDUNDANT_STRIP_LENGTH";
char lbl_80485A68[] = "IG_GFX_STATISTIC_REDUNDANT_INDEX_ARRAY";
char lbl_80485A90[] = "IG_GFX_STATISTIC_REDUNDANT_LIGHT";
char lbl_80485AB4[] = "IG_GFX_STATISTIC_REDUNDANT_LIGHT_DIFFUSE";
char lbl_80485AE0[] = "IG_GFX_STATISTIC_REDUNDANT_LIGHT_SPECULAR";
char lbl_80485B0C[] = "IG_GFX_STATISTIC_REDUNDANT_LIGHT_AMBIENT";
char lbl_80485B38[] = "IG_GFX_STATISTIC_REDUNDANT_LIGHT_POSITION";
char lbl_80485B64[] = "IG_GFX_STATISTIC_REDUNDANT_LIGHT_SPOT_DIRECTION";
char lbl_80485B94[] = "IG_GFX_STATISTIC_REDUNDANT_LIGHT_SPOT_CUTOFF";
char lbl_80485BC4[] = "IG_GFX_STATISTIC_REDUNDANT_LIGHT_SPOT_EXPONENT";
char lbl_80485BF4[] = "IG_GFX_STATISTIC_REDUNDANT_LIGHT_CONSTANT_ATTENUATION";
char lbl_80485C2C[] = "IG_GFX_STATISTIC_REDUNDANT_LIGHT_LINEAR_ATTENUATION";
char lbl_80485C60[] = "IG_GFX_STATISTIC_REDUNDANT_LIGHT_QUADRATIC_ATTENUATION";
char lbl_80485C98[] = "IG_GFX_STATISTIC_REDUNDANT_MATERIAL_DIFFUSE";
char lbl_80485CC4[] = "IG_GFX_STATISTIC_REDUNDANT_MATERIAL_AMBIENT";
char lbl_80485CF0[] = "IG_GFX_STATISTIC_REDUNDANT_MATERIAL_EMMISIVE";
char lbl_80485D20[] = "IG_GFX_STATISTIC_REDUNDANT_MATERIAL_SPECULAR";
char lbl_80485D50[] = "IG_GFX_STATISTIC_REDUNDANT_MATERIAL_SHININESS";
char lbl_80485D80[] = "IG_GFX_STATISTIC_REDUNDANT_MATERIAL_SIDE";
char lbl_80485DAC[] = "IG_GFX_STATISTIC_REDUNDANT_MATERIAL_SPECULAR_STATE";
char lbl_80485DE0[] = "IG_GFX_STATISTIC_REDUNDANT_MATERIAL_COLOR_MODE";
char lbl_80485E10[] = "IG_GFX_STATISTIC_REDUNDANT_MATERIAL_SCENE_AMBIENT";
char lbl_80485E44[] = "IG_GFX_STATISTIC_REDUNDANT_TEXTURE_MATRIX_STATE";
char lbl_80485E74[] = "IG_GFX_STATISTIC_REDUNDANT_NORMALIZE_NORMALS_STATE";
char lbl_80485EA8[] = "IG_GFX_STATISTIC_REDUNDANT_BLENDING_ENABLE";
char lbl_80485ED4[] = "IG_GFX_STATISTIC_REDUNDANT_BLEND_SOURCE_MODE_0";
char lbl_80485F04[] = "IG_GFX_STATISTIC_REDUNDANT_BLEND_SOURCE_MODE_1";
char lbl_80485F34[] = "IG_GFX_STATISTIC_REDUNDANT_BLEND_SOURCE_MODE_2";
char lbl_80485F64[] = "IG_GFX_STATISTIC_REDUNDANT_BLEND_SOURCE_MODE_3";
char lbl_80485F94[] = "IG_GFX_STATISTIC_REDUNDANT_BLEND_SOURCE_MODE_4";
char lbl_80485FC4[] = "IG_GFX_STATISTIC_REDUNDANT_BLEND_SOURCE_MODE_5";
char lbl_80485FF4[] = "IG_GFX_STATISTIC_REDUNDANT_BLEND_SOURCE_MODE_6";
char lbl_80486024[] = "IG_GFX_STATISTIC_REDUNDANT_BLEND_SOURCE_MODE_7";
char lbl_80486054[] = "IG_GFX_STATISTIC_REDUNDANT_BLEND_CONSTANT_0";
char lbl_80486080[] = "IG_GFX_STATISTIC_REDUNDANT_BLEND_CONSTANT_1";
char lbl_804860AC[] = "IG_GFX_STATISTIC_REDUNDANT_BLEND_CONSTANT_2";
char lbl_804860D8[] = "IG_GFX_STATISTIC_REDUNDANT_BLEND_CONSTANT_3";
char lbl_80486104[] = "IG_GFX_STATISTIC_REDUNDANT_BLEND_CONSTANT_4";
char lbl_80486130[] = "IG_GFX_STATISTIC_REDUNDANT_BLEND_CONSTANT_5";
char lbl_8048615C[] = "IG_GFX_STATISTIC_REDUNDANT_BLEND_CONSTANT_6";
char lbl_80486188[] = "IG_GFX_STATISTIC_REDUNDANT_BLEND_CONSTANT_7";
char lbl_804861B4[] = "IG_GFX_STATISTIC_REDUNDANT_BLEND_DESTINATION_MODE_0";
char lbl_804861E8[] = "IG_GFX_STATISTIC_REDUNDANT_BLEND_DESTINATION_MODE_1";
char lbl_8048621C[] = "IG_GFX_STATISTIC_REDUNDANT_BLEND_DESTINATION_MODE_2";
char lbl_80486250[] = "IG_GFX_STATISTIC_REDUNDANT_BLEND_DESTINATION_MODE_3";
char lbl_80486284[] = "IG_GFX_STATISTIC_REDUNDANT_BLEND_DESTINATION_MODE_4";
char lbl_804862B8[] = "IG_GFX_STATISTIC_REDUNDANT_BLEND_DESTINATION_MODE_5";
char lbl_804862EC[] = "IG_GFX_STATISTIC_REDUNDANT_BLEND_DESTINATION_MODE_6";
char lbl_80486320[] = "IG_GFX_STATISTIC_REDUNDANT_BLEND_DESTINATION_MODE_7";
char lbl_80486354[] = "IG_GFX_STATISTIC_REDUNDANT_EDGE_ANTI_ALIAS_ENABLE";
char lbl_80486388[] = "IG_GFX_STATISTIC_REDUNDANT_ALPHA_ENABLE";
char lbl_804863B0[] = "IG_GFX_STATISTIC_REDUNDANT_DEST_ALPHA_TEST_STATE";
char lbl_804863E4[] = "IG_GFX_STATISTIC_REDUNDANT_DEST_ALPHA_TEST_FUNCTION";
char lbl_80486418[] = "IG_GFX_STATISTIC_REDUNDANT_ALPHA_FUNCTION";
char lbl_80486444[] = "IG_GFX_STATISTIC_REDUNDANT_ALPHA_VALUE";
char lbl_8048646C[] = "IG_GFX_STATISTIC_REDUNDANT_MATRIX_OPTIMIZATION_ENABLE";
char lbl_804864A4[] = "IG_GFX_STATISTIC_REDUNDANT_CULL_FACE_ENABLE";
char lbl_804864D0[] = "IG_GFX_STATISTIC_REDUNDANT_CULL_FACE_MODE";
char lbl_804864FC[] = "IG_GFX_STATISTIC_REDUNDANT_DEPTH_TEST_ENABLE";
char lbl_8048652C[] = "IG_GFX_STATISTIC_REDUNDANT_DEPTH_TEST_FUNCTION";
char lbl_8048655C[] = "IG_GFX_STATISTIC_REDUNDANT_DEPTH_WRITE";
char lbl_80486584[] = "IG_GFX_STATISTIC_REDUNDANT_STENCIL_STATE";
char lbl_804865B0[] = "IG_GFX_STATISTIC_REDUNDANT_STENCIL_REFERENCE_VALUE";
char lbl_804865E4[] = "IG_GFX_STATISTIC_REDUNDANT_STENCIL_FUNCTION";
char lbl_80486610[] = "IG_GFX_STATISTIC_REDUNDANT_RENDER_MODE";
char lbl_80486638[] = "IG_GFX_STATISTIC_REDUNDANT_RENDER_SIDES";
char lbl_80486660[] = "IG_GFX_STATISTIC_REDUNDANT_FOG_ENABLE";
char lbl_80486688[] = "IG_GFX_STATISTIC_REDUNDANT_FOG_DENSITY";
char lbl_804866B0[] = "IG_GFX_STATISTIC_REDUNDANT_FOG_MODE";
char lbl_804866D4[] = "IG_GFX_STATISTIC_REDUNDANT_FOG_COLOR";
char lbl_804866FC[] = "IG_GFX_STATISTIC_REDUNDANT_FOG_NEAR";
char lbl_80486720[] = "IG_GFX_STATISTIC_REDUNDANT_FOG_FAR";
char lbl_80486744[] = "IG_GFX_STATISTIC_REDUNDANT_COLOR_SCALER_STATE";
char lbl_80486774[] = "IG_GFX_STATISTIC_REDUNDANT_COLOR_SCALER_VALUE";
char lbl_804867A4[] = "IG_GFX_STATISTIC_REDUNDANT_COLOR_CLAMP_STATE";
char lbl_804867D4[] = "IG_GFX_STATISTIC_REDUNDANT_ALPHA_BLENDING_CONTROL";
char lbl_80486808[] = "IG_GFX_STATISTIC_REDUNDANT_ALPHA_BLENDING_CORRECTION";
char lbl_80486840[] = "IG_GFX_STATISTIC_REDUNDANT_PIXEL_PIPELINE_MODE";
char lbl_80486870[] = "IG_GFX_STATISTIC_REDUNDANT_DITHER_STATE";
char lbl_80486898[] = "IG_GFX_STATISTIC_REDUNDANT_DITHER_MATRIX";
char lbl_804868C4[] = "IG_GFX_STATISTIC_REDUNDANT_MULTI_PASS_COUNT";
char lbl_804868F0[] = "IG_GFX_STATISTIC_REDUNDANT_TEXTURE_ENABLE_0";
char lbl_8048691C[] = "IG_GFX_STATISTIC_REDUNDANT_TEXTURE_ENABLE_1";
char lbl_80486948[] = "IG_GFX_STATISTIC_REDUNDANT_TEXTURE_ENABLE_2";
char lbl_80486974[] = "IG_GFX_STATISTIC_REDUNDANT_TEXTURE_ENABLE_3";
char lbl_804869A0[] = "IG_GFX_STATISTIC_REDUNDANT_TEXTURE_ENABLE_4";
char lbl_804869CC[] = "IG_GFX_STATISTIC_REDUNDANT_TEXTURE_ENABLE_5";
char lbl_804869F8[] = "IG_GFX_STATISTIC_REDUNDANT_TEXTURE_ENABLE_6";
char lbl_80486A24[] = "IG_GFX_STATISTIC_REDUNDANT_TEXTURE_ENABLE_7";
char lbl_80486A50[] = "IG_GFX_STATISTIC_REDUNDANT_MINIFICATION_FILTER";
char lbl_80486A80[] = "IG_GFX_STATISTIC_REDUNDANT_MAGNIFICATION_FILTER";
char lbl_80486AB0[] = "IG_GFX_STATISTIC_REDUNDANT_TEXTURE_STATE_FILTER";
char lbl_80486AE0[] = "IG_GFX_STATISTIC_REDUNDANT_TEXTURE_CLAMP_U";
char lbl_80486B0C[] = "IG_GFX_STATISTIC_REDUNDANT_TEXTURE_CLAMP_V";
char lbl_80486B38[] = "IG_GFX_STATISTIC_REDUNDANT_TEXTURE_PROJECTIVE_STATE_0";
char lbl_80486B70[] = "IG_GFX_STATISTIC_REDUNDANT_TEXTURE_PROJECTIVE_STATE_1";
char lbl_80486BA8[] = "IG_GFX_STATISTIC_REDUNDANT_TEXTURE_PROJECTIVE_STATE_2";
char lbl_80486BE0[] = "IG_GFX_STATISTIC_REDUNDANT_TEXTURE_PROJECTIVE_STATE_3";
char lbl_80486C18[] = "IG_GFX_STATISTIC_REDUNDANT_TEXTURE_PROJECTIVE_STATE_4";
char lbl_80486C50[] = "IG_GFX_STATISTIC_REDUNDANT_TEXTURE_PROJECTIVE_STATE_5";
char lbl_80486C88[] = "IG_GFX_STATISTIC_REDUNDANT_TEXTURE_PROJECTIVE_STATE_6";
char lbl_80486CC0[] = "IG_GFX_STATISTIC_REDUNDANT_TEXTURE_PROJECTIVE_STATE_7";
char lbl_80486CF8[] = "IG_GFX_STATISTIC_REDUNDANT_TEXTURE_STAGE_FUNCTION_0";
char lbl_80486D2C[] = "IG_GFX_STATISTIC_REDUNDANT_TEXTURE_STAGE_FUNCTION_1";
char lbl_80486D60[] = "IG_GFX_STATISTIC_REDUNDANT_TEXTURE_STAGE_FUNCTION_2";
char lbl_80486D94[] = "IG_GFX_STATISTIC_REDUNDANT_TEXTURE_STAGE_FUNCTION_3";
char lbl_80486DC8[] = "IG_GFX_STATISTIC_REDUNDANT_TEXTURE_STAGE_FUNCTION_4";
char lbl_80486DFC[] = "IG_GFX_STATISTIC_REDUNDANT_TEXTURE_STAGE_FUNCTION_5";
char lbl_80486E30[] = "IG_GFX_STATISTIC_REDUNDANT_TEXTURE_STAGE_FUNCTION_6";
char lbl_80486E64[] = "IG_GFX_STATISTIC_REDUNDANT_TEXTURE_STAGE_FUNCTION_7";
char lbl_80486E98[] = "IG_GFX_STATISTIC_REDUNDANT_TEXTURE_COORD_SOURCE_0";
char lbl_80486ECC[] = "IG_GFX_STATISTIC_REDUNDANT_TEXTURE_COORD_SOURCE_1";
char lbl_80486F00[] = "IG_GFX_STATISTIC_REDUNDANT_TEXTURE_COORD_SOURCE_2";
char lbl_80486F34[] = "IG_GFX_STATISTIC_REDUNDANT_TEXTURE_COORD_SOURCE_3";
char lbl_80486F68[] = "IG_GFX_STATISTIC_REDUNDANT_TEXTURE_COORD_SOURCE_4";
char lbl_80486F9C[] = "IG_GFX_STATISTIC_REDUNDANT_TEXTURE_COORD_SOURCE_5";
char lbl_80486FD0[] = "IG_GFX_STATISTIC_REDUNDANT_TEXTURE_COORD_SOURCE_6";
char lbl_80487004[] = "IG_GFX_STATISTIC_REDUNDANT_TEXTURE_COORD_SOURCE_7";
char lbl_80487038[] = "IG_GFX_STATISTIC_REDUNDANT_TEXTURE_COORD_INDEX_0";
char lbl_8048706C[] = "IG_GFX_STATISTIC_REDUNDANT_TEXTURE_COORD_INDEX_1";
char lbl_804870A0[] = "IG_GFX_STATISTIC_REDUNDANT_TEXTURE_COORD_INDEX_2";
char lbl_804870D4[] = "IG_GFX_STATISTIC_REDUNDANT_TEXTURE_COORD_INDEX_3";
char lbl_80487108[] = "IG_GFX_STATISTIC_REDUNDANT_TEXTURE_COORD_INDEX_4";
char lbl_8048713C[] = "IG_GFX_STATISTIC_REDUNDANT_TEXTURE_COORD_INDEX_5";
char lbl_80487170[] = "IG_GFX_STATISTIC_REDUNDANT_TEXTURE_COORD_INDEX_6";
char lbl_804871A4[] = "IG_GFX_STATISTIC_REDUNDANT_TEXTURE_COORD_INDEX_7";
char lbl_804871D8[] = "IG_GFX_STATISTIC_REDUNDANT_END";
char lbl_804871F8[] = "IG_GFX_STATISTIC_RENDERLISTED_VERTEX_COUNT";
char lbl_80487224[] = "IG_GFX_STATISTIC_RENDERLISTED_TRIANGLE_COUNT";
char lbl_80487254[] = "IG_GFX_STATISTIC_BLENDED_VERTEX_COUNT";
char lbl_8048727C[] = "IG_GFX_STATISTIC_INDEXED_VERTEX_COUNT";
char lbl_804872A4[] = "IG_GFX_STATISTIC_DXT1_TEXTURE_COUNT";
char lbl_804872C8[] = "IG_GFX_STATISTIC_DXT1_TILED_TEXTURE_COUNT";
void *lbl_804872F4[390] = {(void *)lbl_804851D0, (void *)lbl_804851F0, (void *)lbl_80485210, (void *)lbl_80485230, (void *)lbl_80485254, (void *)lbl_80485274, (void *)lbl_80485294, (void *)lbl_804852B4, (void *)lbl_804852D0, (void *)lbl_804852EC, (void *)lbl_80485310, (void *)lbl_80485334, (void *)lbl_8048535C, (void *)lbl_80485384, (void *)lbl_804853A8, (void *)lbl_804853CC, (void *)lbl_804853EC, (void *)lbl_80485410, (void *)lbl_80485434, (void *)lbl_80485458, (void *)lbl_8048547C, (void *)lbl_804854A8, (void *)lbl_804854D0, (void *)lbl_804854FC, (void *)lbl_80485520, (void *)lbl_80485548, (void *)lbl_8048556C, (void *)lbl_80485590, (void *)lbl_804855B4, (void *)lbl_804855D8, (void *)lbl_804855FC, (void *)lbl_8048561C, (void *)lbl_8048563C, (void *)lbl_8048565C, (void *)lbl_8048567C, (void *)lbl_8048569C, (void *)lbl_804856BC, (void *)lbl_804856DC, (void *)lbl_804856FC, (void *)lbl_80485718, (void *)lbl_80485738, (void *)lbl_8048575C, (void *)lbl_80485784, (void *)lbl_804857A4, (void *)lbl_804857C8, (void *)lbl_804857E8, (void *)lbl_80485810, (void *)lbl_80485838, (void *)lbl_80485858, (void *)lbl_80485878, (void *)lbl_80485898, (void *)lbl_804858B8, (void *)lbl_804858D4, (void *)lbl_804858F8, (void *)lbl_8048591C, (void *)lbl_80485940, (void *)lbl_80485964, (void *)lbl_80485988, (void *)lbl_804859AC, (void *)lbl_804859D4, (void *)lbl_804859F4, (void *)lbl_80485A18, (void *)lbl_80485A40, (void *)lbl_80485A68, (void *)lbl_80485A90, (void *)lbl_80485AB4, (void *)lbl_80485AE0, (void *)lbl_80485B0C, (void *)lbl_80485B38, (void *)lbl_80485B64, (void *)lbl_80485B94, (void *)lbl_80485BC4, (void *)lbl_80485BF4, (void *)lbl_80485C2C, (void *)lbl_80485C60, (void *)lbl_80485C98, (void *)lbl_80485CC4, (void *)lbl_80485CF0, (void *)lbl_80485D20, (void *)lbl_80485D50, (void *)lbl_80485D80, (void *)lbl_80485DAC, (void *)lbl_80485DE0, (void *)lbl_80485E10, (void *)lbl_80485E44, (void *)lbl_80485E74, (void *)lbl_80485EA8, (void *)lbl_80485ED4, (void *)lbl_80485F04, (void *)lbl_80485F34, (void *)lbl_80485F64, (void *)lbl_80485F94, (void *)lbl_80485FC4, (void *)lbl_80485FF4, (void *)lbl_80486024, (void *)lbl_80486054, (void *)lbl_80486080, (void *)lbl_804860AC, (void *)lbl_804860D8, (void *)lbl_80486104, (void *)lbl_80486130, (void *)lbl_8048615C, (void *)lbl_80486188, (void *)lbl_804861B4, (void *)lbl_804861E8, (void *)lbl_8048621C, (void *)lbl_80486250, (void *)lbl_80486284, (void *)lbl_804862B8, (void *)lbl_804862EC, (void *)lbl_80486320, (void *)lbl_80486354, (void *)lbl_80486388, (void *)lbl_804863B0, (void *)lbl_804863E4, (void *)lbl_80486418, (void *)lbl_80486444, (void *)lbl_8048646C, (void *)lbl_804864A4, (void *)lbl_804864D0, (void *)lbl_804864FC, (void *)lbl_8048652C, (void *)lbl_8048655C, (void *)lbl_80486584, (void *)lbl_804865B0, (void *)lbl_804865E4, (void *)lbl_80486610, (void *)lbl_80486638, (void *)lbl_80486660, (void *)lbl_80486688, (void *)lbl_804866B0, (void *)lbl_804866D4, (void *)lbl_804866FC, (void *)lbl_80486720, (void *)lbl_80486744, (void *)lbl_80486774, (void *)lbl_804867A4, (void *)lbl_804867D4, (void *)lbl_80486808, (void *)lbl_80486840, (void *)lbl_80486870, (void *)lbl_80486898, (void *)lbl_804868C4, (void *)lbl_804868F0, (void *)lbl_8048691C, (void *)lbl_80486948, (void *)lbl_80486974, (void *)lbl_804869A0, (void *)lbl_804869CC, (void *)lbl_804869F8, (void *)lbl_80486A24, (void *)lbl_80486A50, (void *)lbl_80486A80, (void *)lbl_80486AB0, (void *)lbl_80486AE0, (void *)lbl_80486B0C, (void *)lbl_80486B38, (void *)lbl_80486B70, (void *)lbl_80486BA8, (void *)lbl_80486BE0, (void *)lbl_80486C18, (void *)lbl_80486C50, (void *)lbl_80486C88, (void *)lbl_80486CC0, (void *)lbl_80486CF8, (void *)lbl_80486D2C, (void *)lbl_80486D60, (void *)lbl_80486D94, (void *)lbl_80486DC8, (void *)lbl_80486DFC, (void *)lbl_80486E30, (void *)lbl_80486E64, (void *)lbl_80486E98, (void *)lbl_80486ECC, (void *)lbl_80486F00, (void *)lbl_80486F34, (void *)lbl_80486F68, (void *)lbl_80486F9C, (void *)lbl_80486FD0, (void *)lbl_80487004, (void *)lbl_80487038, (void *)lbl_8048706C, (void *)lbl_804870A0, (void *)lbl_804870D4, (void *)lbl_80487108, (void *)lbl_8048713C, (void *)lbl_80487170, (void *)lbl_804871A4, (void *)lbl_804871D8, (void *)lbl_804871F8, (void *)lbl_80487224, (void *)lbl_80487254, (void *)lbl_8048727C, (void *)lbl_804872A4, (void *)lbl_804872C8, 0, (void *)0x1, (void *)0x2, (void *)0x3, (void *)0x4, (void *)0x5, (void *)0x6, (void *)0x7, (void *)0x8, (void *)0x9, (void *)0xA, (void *)0xB, (void *)0xC, (void *)0xD, (void *)0xE, (void *)0xF, (void *)0x10, (void *)0x11, (void *)0x12, (void *)0x13, (void *)0x14, (void *)0x15, (void *)0x16, (void *)0x17, (void *)0x18, (void *)0x19, (void *)0x1A, (void *)0x1B, (void *)0x1C, (void *)0x1D, (void *)0x1E, (void *)0x1F, (void *)0x20, (void *)0x21, (void *)0x22, (void *)0x23, (void *)0x24, (void *)0x25, (void *)0x26, (void *)0x27, (void *)0x28, (void *)0x29, (void *)0x2A, (void *)0x2B, (void *)0x2C, (void *)0x2D, (void *)0x2E, (void *)0x2F, (void *)0x30, (void *)0x31, (void *)0x32, (void *)0x33, (void *)0x34, (void *)0x35, (void *)0x36, (void *)0x37, (void *)0x38, (void *)0x39, (void *)0x3A, (void *)0x3B, (void *)0x3C, (void *)0x3C, (void *)0x3D, (void *)0x3E, (void *)0x3F, (void *)0x40, (void *)0x41, (void *)0x42, (void *)0x43, (void *)0x44, (void *)0x45, (void *)0x46, (void *)0x47, (void *)0x48, (void *)0x49, (void *)0x4A, (void *)0x4B, (void *)0x4C, (void *)0x4D, (void *)0x4E, (void *)0x4F, (void *)0x50, (void *)0x51, (void *)0x52, (void *)0x53, (void *)0x54, (void *)0x55, (void *)0x56, (void *)0x57, (void *)0x58, (void *)0x59, (void *)0x5A, (void *)0x5B, (void *)0x5C, (void *)0x5D, (void *)0x5E, (void *)0x5F, (void *)0x60, (void *)0x61, (void *)0x62, (void *)0x63, (void *)0x64, (void *)0x65, (void *)0x66, (void *)0x67, (void *)0x68, (void *)0x69, (void *)0x6A, (void *)0x6B, (void *)0x6C, (void *)0x6D, (void *)0x6E, (void *)0x6F, (void *)0x70, (void *)0x71, (void *)0x72, (void *)0x73, (void *)0x74, (void *)0x75, (void *)0x76, (void *)0x77, (void *)0x78, (void *)0x79, (void *)0x7A, (void *)0x7B, (void *)0x7C, (void *)0x7D, (void *)0x7E, (void *)0x7F, (void *)0x80, (void *)0x81, (void *)0x82, (void *)0x83, (void *)0x84, (void *)0x85, (void *)0x86, (void *)0x87, (void *)0x88, (void *)0x89, (void *)0x8A, (void *)0x8B, (void *)0x8C, (void *)0x8D, (void *)0x8E, (void *)0x8F, (void *)0x90, (void *)0x91, (void *)0x92, (void *)0x93, (void *)0x94, (void *)0x95, (void *)0x96, (void *)0x97, (void *)0x98, (void *)0x99, (void *)0x9A, (void *)0x9B, (void *)0x9C, (void *)0x9D, (void *)0x9E, (void *)0x9F, (void *)0xA0, (void *)0xA1, (void *)0xA2, (void *)0xA3, (void *)0xA4, (void *)0xA5, (void *)0xA6, (void *)0xA7, (void *)0xA8, (void *)0xA9, (void *)0xAA, (void *)0xAB, (void *)0xAC, (void *)0xAD, (void *)0xAE, (void *)0xAF, (void *)0xB0, (void *)0xB1, (void *)0xB2, (void *)0xB3, (void *)0xB4, (void *)0xB5, (void *)0xB6, (void *)0xB7, (void *)0xB8, (void *)0xB9, (void *)0xBA, (void *)0xBA, (void *)0xBB, (void *)0xBC, (void *)0xBD, (void *)0xBE, (void *)0xBF, (void *)0xC0};
char lbl_8048790C[] = "IG_GFX_STATISTIC";
char lbl_80487920[] = "IG_GFX_CAPABILITY_MAX_SIZE_X";
char lbl_80487940[] = "IG_GFX_CAPABILITY_MAX_SIZE_Y";
char lbl_80487960[] = "IG_GFX_CAPABILITY_MAX_COLOR_BITS";
char lbl_80487984[] = "IG_GFX_CAPABILITY_MAX_ALPHA_BITS";
char lbl_804879A8[] = "IG_GFX_CAPABILITY_MAX_DEPTH_BITS";
char lbl_804879CC[] = "IG_GFX_CAPABILITY_MAX_STENCIL_BITS";
char lbl_804879F0[] = "IG_GFX_CAPABILITY_MAX_OFFSCREEN_RENDER_BUFFERS";
char lbl_80487A20[] = "IG_GFX_CAPABILITY_MAX_TEXTURE_SIZE";
char lbl_80487A44[] = "IG_GFX_CAPABILITY_MAX_TEXTURE_STAGES";
char lbl_80487A6C[] = "IG_GFX_CAPABILITY_MAX_LIGHTS";
char lbl_80487A8C[] = "IG_GFX_CAPABILITY_MAX_VISIBLE_BUFFERS";
char lbl_80487AB4[] = "IG_GFX_CAPABILITY_MAX_OFFSCREEN_BUFFERS";
char lbl_80487ADC[] = "IG_GFX_CAPABILITY_CURRENT_TEXTURE_SETUP_SUPPORTED";
char lbl_80487B10[] = "IG_GFX_CAPABILITY_MAX_VERTEX_BLEND_MATRICES";
char lbl_80487B3C[] = "IG_GFX_CAPABILITY_MAX_NUM_VERTEX_SHADER_CONSTANTS";
char lbl_80487B70[] = "IG_GFX_CAPABILITY_HARDWARE_VERTEX_SHADER_SUPPORT";
char lbl_80487BA4[] = "IG_GFX_CAPABILITY_HARDWARE_PIXEL_SHADER_SUPPORT";
char lbl_80487BD4[] = "IG_GFX_CAPABILITY_DOT_PRODUCT_3_TEXTURE_FUNCTION_SUPPORTED";
char lbl_80487C10[] = "IG_GFX_CAPABILITY_HARDWARE_S3TC_DXT1_SUPPORT";
char lbl_80487C40[] = "IG_GFX_CAPABILITY_HARDWARE_S3TC_DXT3_SUPPORT";
char lbl_80487C70[] = "IG_GFX_CAPABILITY_HARDWARE_S3TC_DXT5_SUPPORT";
char lbl_80487CA0[] = "IG_GFX_CAPABILITY_CUBE_MAP_SUPPORT";
char lbl_80487CC4[] = "IG_GFX_CAPABILITY_MAX_TEXTURE_STAGES_PSX2";
char lbl_80487CF0[] = "IG_GFX_CAPABILITY_MAX_VERTEX_STREAM";
char lbl_80487D14[] = "IG_GFX_CAPABILITY_HARDWARE_VERTEX_SHADER_SUPPORT_MAX_MAJOR_VERSION";
char lbl_80487D58[] = "IG_GFX_CAPABILITY_HARDWARE_VERTEX_SHADER_SUPPORT_MAX_MINOR_VERSION";
char lbl_80487D9C[] = "IG_GFX_CAPABILITY_HARDWARE_PIXEL_SHADER_SUPPORT_MAX_MAJOR_VERSION";
char lbl_80487DE0[] = "IG_GFX_CAPABILITY_HARDWARE_PIXEL_SHADER_SUPPORT_MAX_MINOR_VERSION";
char lbl_80487E24[] = "IG_GFX_CAPABILITY_COUNT";
void *lbl_80487E3C[58] = {(void *)lbl_80487920, (void *)lbl_80487940, (void *)lbl_80487960, (void *)lbl_80487984, (void *)lbl_804879A8, (void *)lbl_804879CC, (void *)lbl_804879F0, (void *)lbl_80487A20, (void *)lbl_80487A44, (void *)lbl_80487A6C, (void *)lbl_80487A8C, (void *)lbl_80487AB4, (void *)lbl_80487ADC, (void *)lbl_80487B10, (void *)lbl_80487B3C, (void *)lbl_80487B70, (void *)lbl_80487BA4, (void *)lbl_80487BD4, (void *)lbl_80487C10, (void *)lbl_80487C40, (void *)lbl_80487C70, (void *)lbl_80487CA0, (void *)lbl_80487CC4, (void *)lbl_80487CF0, (void *)lbl_80487D14, (void *)lbl_80487D58, (void *)lbl_80487D9C, (void *)lbl_80487DE0, (void *)lbl_80487E24, 0, (void *)0x1, (void *)0x2, (void *)0x3, (void *)0x4, (void *)0x5, (void *)0x6, (void *)0x7, (void *)0x8, (void *)0x9, (void *)0xA, (void *)0xB, (void *)0xC, (void *)0xD, (void *)0xE, (void *)0xF, (void *)0x10, (void *)0x11, (void *)0x12, (void *)0x13, (void *)0x14, (void *)0x15, (void *)0x16, (void *)0x17, (void *)0x18, (void *)0x19, (void *)0x1A, (void *)0x1B, (void *)0x1C};
char lbl_80487F24[] = "IG_GFX_CAPABILITY";
char lbl_80487F38[] = "igXboxCapabilityManager";
char igVisualContextCapabilityManager_className[] = "igVisualContextCapabilityManager";
char lbl_80487F74[] = "_visualContext";
char igVisualContextList_className[] = "igVisualContextList";
char lbl_80487F98[] = "IG_GFX_MAX_VERTEX_STREAM_DEFAULT";
char lbl_80487FBC[] = "IG_GFX_MAX_VERTEX_STREAM";
void *igVisualContext_dependencies[6] = {(void *)igTimer_arkRegister, (void *)igVertexArray2_arkRegister, (void *)igCustomStateCollectionList_arkRegister, (void *)igCustomStateFieldList_arkRegister, (void *)igMemoryPool_arkRegister, 0};
char igVisualContext_className[] = "igVisualContext";
void *igVisualContext_fieldTypes[28] = {(void *)fn_8002E1AC, (void *)fn_8002879C, (void *)fn_800385E0, (void *)fn_800385E0, (void *)fn_8002E1AC, (void *)igFloatMetaField_create, (void *)fn_8002E1AC, (void *)fn_80022A90, (void *)fn_8002AC34, (void *)fn_800274EC, (void *)fn_80022A90, (void *)igLongMetaField_create, (void *)fn_80031378, (void *)igMatrix44fMetaField_create, (void *)igMatrix44fMetaField_create, (void *)fn_800385E0, (void *)igObjectRefArrayMetaField_create, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_800385E0, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C};
char lbl_80488070[] = "_contextIndex";
char lbl_80488080[] = "_showFrameRate";
char lbl_80488090[] = "_commandLineFrameRate";
char lbl_804880A8[] = "_primitiveCount";
char lbl_804880B8[] = "_frameStartTime";
char lbl_804880C8[] = "_blendMatricesCount";
char lbl_804880DC[] = "_blendIndex";
char lbl_804880E8[] = "_inverseTranspose";
char lbl_804880FC[] = "_blendMatrices";
char lbl_8048810C[] = "_inverseTransposeCount";
char lbl_80488124[] = "_renderingTime";
char lbl_80488134[] = "_scissorType";
char lbl_80488144[] = "_viewMatrixHint";
char lbl_80488154[] = "_viewMatrixInverse";
char lbl_80488168[] = "_viewMatrixDirty";
char lbl_8048817C[] = "_vertexArray2";
char lbl_8048818C[] = "_customStates";
char lbl_8048819C[] = "_customFields";
char lbl_804881AC[] = "_ditherState";
char lbl_804881BC[] = "_driverDataMemoryPool";
char lbl_804881D4[] = "_vertexMemoryPool";
char lbl_804881E8[] = "_internalMemoryPool";
char lbl_804881FC[] = "_temporaryMemoryPool";
char lbl_80488214[] = "_imageMemoryPool";
char lbl_80488228[] = "_textureMemoryPool";
char lbl_8048823C[] = "_statisticsMemoryPool";
char lbl_80488254[] = "_listMemoryPool";
void *igVisualContext_fieldNames[28] = {(void *)lbl_80488070, (void *)lbl_8055EA60, (void *)lbl_80488080, (void *)lbl_80488090, (void *)lbl_804880A8, (void *)lbl_804880B8, (void *)lbl_804880C8, (void *)lbl_804880DC, (void *)lbl_804880E8, (void *)lbl_804880FC, (void *)lbl_8048810C, (void *)lbl_80488124, (void *)lbl_80488134, (void *)lbl_80488144, (void *)lbl_80488154, (void *)lbl_80488168, (void *)lbl_8048817C, (void *)lbl_8048818C, (void *)lbl_8048819C, (void *)lbl_804881AC, (void *)lbl_804881BC, (void *)lbl_804881D4, (void *)lbl_804881E8, (void *)lbl_804881FC, (void *)lbl_80488214, (void *)lbl_80488228, (void *)lbl_8048823C, (void *)lbl_80488254};
void *igVisualContext_fieldStorage[28] = {(void *)lbl_80562D04, (void *)lbl_80562D08, (void *)lbl_80562D0C, (void *)lbl_80562D10, (void *)lbl_80562D14, (void *)lbl_80562D18, (void *)lbl_80562D1C, (void *)lbl_80562D20, (void *)lbl_80562D24, (void *)lbl_80562D28, (void *)lbl_80562D2C, (void *)lbl_80562D30, (void *)lbl_80562D34, (void *)lbl_80562D38, (void *)lbl_80562D3C, (void *)lbl_80562D40, (void *)lbl_80562D44, (void *)lbl_80562D48, (void *)lbl_80562D4C, (void *)lbl_80562D50, (void *)lbl_80562D54, (void *)lbl_80562D58, (void *)lbl_80562D5C, (void *)lbl_80562D60, (void *)lbl_80562D64, (void *)lbl_80562D68, (void *)lbl_80562D6C, (void *)lbl_80562D70};
void *igVisualContext_fieldOffsets[28] = {(void *)0x14, (void *)0x38, (void *)0x3C, (void *)0x3D, (void *)0x40, (void *)0x44, (void *)0x48, (void *)0x4C, (void *)0x50, (void *)0x54, (void *)0x58, (void *)0x60, (void *)0x68, (void *)0x6C, (void *)0xAC, (void *)0xEC, (void *)0xF0, (void *)0x130, (void *)0x134, (void *)0x138, (void *)0x18, (void *)0x1C, (void *)0x20, (void *)0x24, (void *)0x28, (void *)0x2C, (void *)0x30, (void *)0x34};
char lbl_804883B4[] = "igMatrix44fPointerList";
char igVertexArray2Helper_className[] = "igVertexArray2Helper";
char lbl_804883E4[] = "_vertexArray";
char lbl_804883F4[] = "igVertexArray2List";
void *igVertexArray2_dependencies[4] = {(void *)igObjectList_arkRegister, (void *)igVertexStream_arkRegister, (void *)igObject_arkRegister, 0};
char igVertexArray2_className[] = "igVertexArray2";
void *igVertexArray2_fieldTypes[3] = {(void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C};
char lbl_80488434[] = "_objList";
char lbl_80488440[] = "_vertexStream";
char lbl_80488450[] = "_internalBuffer";
void *igVertexArray2_fieldNames[3] = {(void *)lbl_80488434, (void *)lbl_80488440, (void *)lbl_80488450};
void *igVertexArray2_fieldStorage[3] = {(void *)lbl_80562D88, (void *)lbl_80562D8C, (void *)lbl_80562D90};
void *igVertexArray2_fieldOffsets[3] = {(void *)0x10, (void *)0x14, (void *)0xC};
char lbl_80488484[] = "IG_VERTEX_STREAM_COMPILE_ALL";
char lbl_804884A4[] = "IG_VERTEX_STREAM_COMPILE_COMPACT_MAX";
char lbl_804884CC[] = "IG_VERTEX_STREAM_COMPILE_EVERYTHING";
void *lbl_804884F0[6] = {(void *)lbl_80488484, (void *)lbl_804884A4, (void *)lbl_804884CC, 0, (void *)0x1, (void *)0x2};
char lbl_80488508[] = "IG_VERTEX_STREAM_COMPILE_MODE";
char lbl_80488528[] = "IG_VERTEX_ACCESS_READ_WRITE";
char lbl_80488544[] = "IG_VERTEX_ACCESS_READ";
char lbl_8048855C[] = "IG_VERTEX_ACCESS_WRITE";
char lbl_80488574[] = "IG_VERTEX_ACCESS_WRITE_ONCE";
void *lbl_80488590[8] = {(void *)lbl_80488528, (void *)lbl_80488544, (void *)lbl_8048855C, (void *)lbl_80488574, 0, (void *)0x1, (void *)0x2, (void *)0x3};
char lbl_804885B0[] = "IG_VERTEX_ACCESS_MODE";
char igVertexStream_className[] = "igVertexStream";
void *igVertexStream_fieldTypes[6] = {(void *)fn_800274EC, (void *)fn_800385E0, (void *)fn_8002879C, (void *)fn_80031378, (void *)fn_80031378, (void *)fn_80031378};
char lbl_804885F0[] = "_isConfigured";
char lbl_80488600[] = "_vertexDataList";
char lbl_80488610[] = "_accessMode";
char lbl_8048861C[] = "_primitive";
char lbl_80488628[] = "_streamMode";
void *igVertexStream_fieldNames[6] = {(void *)lbl_8055EA94, (void *)lbl_804885F0, (void *)lbl_80488600, (void *)lbl_80488610, (void *)lbl_8048861C, (void *)lbl_80488628};
void *igVertexStream_fieldStorage[6] = {(void *)lbl_80562DA0, (void *)lbl_80562DA4, (void *)lbl_80562DA8, (void *)lbl_80562DAC, (void *)lbl_80562DB0, (void *)lbl_80562DB4};
void *igVertexStream_fieldOffsets[6] = {(void *)0xC, (void *)0x10, (void *)0x14, (void *)0x18, (void *)0x1C, (void *)0x20};
char igVertexDataList_className[] = "igVertexDataList";
char lbl_80488690[] = "IG_VERTEX_COMPONENT_NONE";
char lbl_804886AC[] = "IG_VERTEX_COMPONENT_POSITION";
char lbl_804886CC[] = "IG_VERTEX_COMPONENT_COLOR";
char lbl_804886E8[] = "IG_VERTEX_COMPONENT_NORMAL";
char lbl_80488704[] = "IG_VERTEX_COMPONENT_TEXCOORD";
char lbl_80488724[] = "IG_VERTEX_COMPONENT_WEIGHT";
char lbl_80488740[] = "IG_VERTEX_COMPONENT_INDEX";
char lbl_8048875C[] = "IG_VERTEX_COMPONENT_BINORMAL";
char lbl_8048877C[] = "IG_VERTEX_COMPONENT_TANGENT";
char lbl_80488798[] = "IG_VERTEX_COMPONENT_SIZE";
char lbl_804887B4[] = "IG_VERTEX_COMPONENT_CUSTOM";
void *lbl_804887D0[22] = {(void *)lbl_80488690, (void *)lbl_804886AC, (void *)lbl_804886CC, (void *)lbl_804886E8, (void *)lbl_80488704, (void *)lbl_80488724, (void *)lbl_80488740, (void *)lbl_8048875C, (void *)lbl_8048877C, (void *)lbl_80488798, (void *)lbl_804887B4, 0, (void *)0x1, (void *)0x2, (void *)0x3, (void *)0x4, (void *)0x5, (void *)0x6, (void *)0x7, (void *)0x8, (void *)0x9, (void *)0xA};
char lbl_80488828[] = "IG_VERTEX_COMPONENT_TYPE";
char igVertexData_className[] = "igVertexData";
void *igVertexData_fieldTypes[6] = {(void *)fn_8002879C, (void *)fn_80031378, (void *)fn_80022A90, (void *)fn_80022A90, (void *)fn_8002E1AC, (void *)fn_80022A90};
char lbl_8048886C[] = "_componentType";
char lbl_8048887C[] = "_componentIndex";
char lbl_8048888C[] = "_componentSize";
char lbl_8048889C[] = "_componentFraction";
void *igVertexData_fieldNames[6] = {(void *)lbl_8055EA6C, (void *)lbl_8048886C, (void *)lbl_8048887C, (void *)lbl_8048888C, (void *)lbl_8055EAB8, (void *)lbl_8048889C};
void *igVertexData_fieldStorage[6] = {(void *)lbl_80562DC4, (void *)lbl_80562DC8, (void *)lbl_80562DCC, (void *)lbl_80562DD0, (void *)lbl_80562DD4, (void *)lbl_80562DD8};
void *igVertexData_fieldOffsets[6] = {(void *)0xC, (void *)0x10, (void *)0x14, (void *)0x18, (void *)0x1C, (void *)0x20};
char igVertexArray1_1_className[] = "igVertexArray1_1";
void *igVertexArray1_1_fieldTypes[6] = {(void *)igStructMetaField_create, (void *)fn_8002AC34, (void *)fn_8002AC34, (void *)fn_80022A90, (void *)fn_8002AC34, (void *)fn_8002879C};
char lbl_80488924[] = "_vertexFormat";
char lbl_80488934[] = "_blendWeights";
char lbl_80488944[] = "_blendIndices";
char lbl_80488954[] = "_pointSpriteSize";
char lbl_80488968[] = "_memPool";
void *igVertexArray1_1_fieldNames[6] = {(void *)lbl_80488924, (void *)lbl_80488934, (void *)lbl_80488944, (void *)lbl_804880DC, (void *)lbl_80488954, (void *)lbl_80488968};
void *igVertexArray1_1_fieldStorage[6] = {(void *)lbl_80562DE0, (void *)lbl_80562DE4, (void *)lbl_80562DE8, (void *)lbl_80562DEC, (void *)lbl_80562DF0, (void *)lbl_80562DF4};
void *igVertexArray1_1_fieldOffsets[6] = {(void *)0x1C, (void *)0x20, (void *)0x24, (void *)0x28, (void *)0x2C, (void *)0x18};
char igVertexArrayList_className[] = "igVertexArrayList";
char igVertexArray_className[] = "igVertexArray";
void *igVertexArray_fieldTypes[4] = {(void *)fn_8002AC34, (void *)fn_80022A90, (void *)fn_80022A90, (void *)fn_80022A90};
char lbl_804889F0[] = "_numVerts";
char lbl_804889FC[] = "_usageFlags";
void *igVertexArray_fieldNames[4] = {(void *)lbl_8055EAD4, (void *)lbl_804889F0, (void *)lbl_8055EADC, (void *)lbl_804889FC};
void *igVertexArray_fieldStorage[4] = {(void *)lbl_80562E00, (void *)lbl_80562E04, (void *)lbl_80562E08, (void *)lbl_80562E0C};
void *igVertexArray_fieldOffsets[4] = {(void *)0x8, (void *)0xC, (void *)0x10, (void *)0x14};
char igUserUCodeExt_className[] = "igUserUCodeExt";
char igScissorExt_className[] = "igScissorExt";
char lbl_80488A58[] = "igPsx2CapabilityManager";
char igPrimLengthArray1_1_className[] = "igPrimLengthArray1_1";
char lbl_80488A88[] = "_lengthData";
char igPrimLengthArray_className[] = "igPrimLengthArray";
void *igPrimLengthArray_fieldTypes[3] = {(void *)fn_8002AC34, (void *)fn_80022A90, (void *)fn_80022A90};
char lbl_80488AB4[] = "_numStrips";
char lbl_80488AC0[] = "_dataSize";
void *igPrimLengthArray_fieldNames[3] = {(void *)lbl_80488A88, (void *)lbl_80488AB4, (void *)lbl_80488AC0};
void *igPrimLengthArray_fieldStorage[3] = {(void *)lbl_80562E28, (void *)lbl_80562E2C, (void *)lbl_80562E30};
void *igPrimLengthArray_fieldOffsets[3] = {(void *)0x8, (void *)0xC, (void *)0x10};
char lbl_80488AF0[] = "IG_GFX_SPRITE_TYPE_NONE";
char lbl_80488B08[] = "IG_GFX_SPRITE_TYPE_POINTS";
char lbl_80488B24[] = "IG_GFX_SPRITE_TYPE";
char lbl_80488B38[] = "IG_GFX_SPRITE_SIZE_WORLD_COORDINATE";
char lbl_80488B5C[] = "IG_GFX_SPRITE_SIZE_SCREEN_COORDINATE";
char lbl_80488B84[] = "IG_GFX_SPRITE_SIZE_SPACE";
void *igPointSpriteExt_dependencies[3] = {(void *)igVisualContext_arkRegister, (void *)igVertexArray_arkRegister, 0};
char igPointSpriteExt_className[] = "igPointSpriteExt";
void *igPointSpriteExt_fieldTypes[18] = {(void *)fn_8002879C, (void *)fn_8002879C, (void *)igFloatMetaField_create, (void *)fn_800385E0, (void *)fn_80031378, (void *)igMatrix44fMetaField_create, (void *)igMatrix44fMetaField_create, (void *)igMatrix44fMetaField_create, (void *)igMatrix44fMetaField_create, (void *)igMatrix44fMetaField_create, (void *)fn_8002E1AC, (void *)fn_8002E1AC, (void *)igFloatMetaField_create, (void *)igFloatMetaField_create, (void *)igFloatMetaField_create, (void *)igFloatMetaField_create, (void *)igFloatMetaField_create, (void *)igFloatMetaField_create};
char lbl_80488C08[] = "_context";
char lbl_80488C14[] = "_spriteSize";
char lbl_80488C20[] = "_inSpriteMode";
char lbl_80488C30[] = "_spriteSizeSpace";
char lbl_80488C44[] = "_previousModelview";
char lbl_80488C58[] = "_previousProjection";
char lbl_80488C6C[] = "_orthoMatrix";
char lbl_80488C7C[] = "_modelviewMatrix";
char lbl_80488C90[] = "_modelviewMatrixFrustum";
char lbl_80488CA8[] = "_currentWindowWidth";
char lbl_80488CBC[] = "_currentWindowHeight";
char lbl_80488CD4[] = "_frustumLeft";
char lbl_80488CE4[] = "_frustumRight";
char lbl_80488CF4[] = "_frustumBottom";
char lbl_80488D04[] = "_frustumTop";
char lbl_80488D10[] = "_frustumNear";
char lbl_80488D20[] = "_frustumFar";
void *igPointSpriteExt_fieldNames[18] = {(void *)lbl_80488C08, (void *)lbl_804883E4, (void *)lbl_80488C14, (void *)lbl_80488C20, (void *)lbl_80488C30, (void *)lbl_80488C44, (void *)lbl_80488C58, (void *)lbl_80488C6C, (void *)lbl_80488C7C, (void *)lbl_80488C90, (void *)lbl_80488CA8, (void *)lbl_80488CBC, (void *)lbl_80488CD4, (void *)lbl_80488CE4, (void *)lbl_80488CF4, (void *)lbl_80488D04, (void *)lbl_80488D10, (void *)lbl_80488D20};
void *igPointSpriteExt_fieldStorage[18] = {(void *)lbl_80562E40, (void *)lbl_80562E44, (void *)lbl_80562E48, (void *)lbl_80562E4C, (void *)lbl_80562E50, (void *)lbl_80562E54, (void *)lbl_80562E58, (void *)lbl_80562E5C, (void *)lbl_80562E60, (void *)lbl_80562E64, (void *)lbl_80562E68, (void *)lbl_80562E6C, (void *)lbl_80562E70, (void *)lbl_80562E74, (void *)lbl_80562E78, (void *)lbl_80562E7C, (void *)lbl_80562E80, (void *)lbl_80562E84};
void *igPointSpriteExt_fieldOffsets[18] = {(void *)0x14, (void *)0x18, (void *)0x1C, (void *)0x20, (void *)0x24, (void *)0x28, (void *)0x68, (void *)0xA8, (void *)0xE8, (void *)0x128, (void *)0x168, (void *)0x16C, (void *)0x170, (void *)0x174, (void *)0x178, (void *)0x17C, (void *)0x180, (void *)0x184};
}

namespace unknown800CD9E4 {
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8004155C(void *,void *,int);
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_8055E9F0[8];
extern char lbl_8055E9F8[8];
extern char lbl_8055EA00[8];
extern char lbl_8055EA08[8];
extern char lbl_8055EA10[8];
extern char lbl_8055EA18[8];
extern char lbl_8055EA20[8];
extern char lbl_8055EA28[8];
extern char lbl_8055EA30[8];
extern char lbl_8055EA38[8];
extern void *igWindow_meta;
extern void *lbl_80562B78;
extern void *lbl_80562B98;
extern void *lbl_80562BA0;
extern void *igEventProducerList_meta;
extern void *igEventProducer_meta;
extern void *lbl_80562BB4;
extern void *lbl_80562BB8;
extern void *lbl_80562BBC;
extern void *igControllerList_meta;
extern void *igDefaultInterfaceManager_meta;
extern void *igControllerManager_meta;
extern void *igController_meta;
extern void *lbl_80562C20;
extern void *lbl_80562C80;
extern void *lbl_80562C84;
extern void *lbl_80562C88;
extern void *lbl_80562C8C;
extern void *lbl_80562C90;
extern void *lbl_80562C94;
extern void *lbl_80562C98;
extern void *lbl_80562C9C;
extern void *lbl_80562CA0;
extern void *lbl_80562CA4;
extern void *lbl_80562CA8;
extern void *lbl_80562CAC;
extern void *lbl_80562CB0;
extern void *lbl_80562CB4;
extern void *lbl_80562CB8;
extern void *lbl_80562CBC;
extern void *lbl_80562CC0;
extern void *lbl_80562CC4;
extern void *lbl_80562CC8;
extern void *lbl_80562CCC;
extern void *lbl_80562CD0;
extern void *lbl_80562CD4;
extern void *lbl_80562CD8;
extern void *lbl_80562CDC;
extern void *lbl_80562CE0;
extern void *lbl_80562CE4;
extern void *lbl_80562CE8;
extern void *igNonRefCountedObjectStack_meta;
}
extern "C" {
void *igDefaultInterfaceManager_virtual58(){return igDefaultInterfaceManager_meta;}
void *fn_800CD9EC(){return igControllerManager_meta;}
void *fn_800CD9F4(){return igController_meta;}
void *fn_800CD9FC(){return igWindow_meta;}
void *fn_800CDA04(){return lbl_80562C20;}
void fn_800CDA0C(){}
void fn_800CDA10(){}
void fn_800CDA14(){}
void fn_800CDA18(){}
void fn_800CDA1C(){}
void fn_800CDA20(){}
void fn_800CDA24(){}
void fn_800CDA28(){}
void fn_800CDA2C(){}
void fn_800CDA30(){}
void fn_800CDA34(){}
void fn_800CDA38(){}
void fn_800CDA3C(){}
void fn_800CDA40(){}
void fn_800CDA44(){}
void fn_800CDA48(){}
void *igControllerList_virtual58(){return igControllerList_meta;}
void *fn_800CDA54(){return lbl_80562BBC;}
void *fn_800CDA5C(){return lbl_80562BB8;}
void *igNonRefCountedObjectStack_virtual58(){return igNonRefCountedObjectStack_meta;}
void *fn_800CDA6C(){return lbl_80562BB4;}
void *igEventProducerList_virtual58(){return igEventProducerList_meta;}
void *fn_800CDA7C(){return lbl_80562BA0;}
void *fn_800CDA84(){return lbl_80562B98;}
void fn_800CDA8C(){}
void fn_800CDA90(){}
void *fn_800CDA94(){return lbl_80562B78;}
void *fn_800CDA9C(int p0){
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+8)=0;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+9)=0;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+10)=0;
 return (void *)p0;
}
void fn_800CDAB0(){}
void *fn_800CDAB4(){return igEventProducer_meta;}
void *fn_800CDABC(){return igWindow_meta;}
void *igControllerList_virtual60(){return igController_meta;}
void *igEventProducerList_virtual60(){return igEventProducer_meta;}
void fn_800CDAD4(int p0){
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12)>(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8)){
  fn_8004155C((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8),4);
  return;
 } else {
  return;
 }
}
void *fn_800CDB08(){
 void *value0;
 if(!lbl_80562C80){
  value0=fn_800635C8(lbl_80480EF8,lbl_8055E9F0,lbl_8055E9F8,2);
  lbl_80562C80=value0;
 }
 return lbl_80562C80;
}
void *fn_800CDB50(){
 char *data=lbl_80480EC0;
 if(!lbl_80562C84) lbl_80562C84=fn_800635C8(data+0x1E4,data+0x194,data+0x1BC,0xA);
 return lbl_80562C84;
}
void *fn_800CDB9C(){
 void *value0;
 if(!lbl_80562C88){
  value0=fn_800635C8(lbl_80481730,lbl_8055EA00,lbl_8055EA08,2);
  lbl_80562C88=value0;
 }
 return lbl_80562C88;
}
void *fn_800CDBE4(){
 char *data=lbl_80480EC0;
 if(!lbl_80562C8C) lbl_80562C8C=fn_800635C8(data+0xCD4,data+0xC94,data+0xCB4,0x8);
 return lbl_80562C8C;
}
void *fn_800CDC30(){
 char *data=lbl_80480EC0;
 if(!lbl_80562C90) lbl_80562C90=fn_800635C8(data+0xE34,data+0xDF4,data+0xE14,0x8);
 return lbl_80562C90;
}
void *fn_800CDC7C(){
 char *data=lbl_80480EC0;
 if(!lbl_80562C94) lbl_80562C94=fn_800635C8(data+0xEA8,data+0xE90,data+0xE9C,0x3);
 return lbl_80562C94;
}
void *fn_800CDCC8(){
 char *data=lbl_80480EC0;
 if(!lbl_80562C98) lbl_80562C98=fn_800635C8(data+0xFA4,data+0xF8C,data+0xF98,0x3);
 return lbl_80562C98;
}
void *fn_800CDD14(){
 char *data=lbl_80480EC0;
 if(!lbl_80562C9C) lbl_80562C9C=fn_800635C8(data+0x1118,data+0x10D8,data+0x10F8,0x8);
 return lbl_80562C9C;
}
void *fn_800CDD60(){
 void *value0;
 if(!lbl_80562CA0){
  value0=fn_800635C8(lbl_8048202C,lbl_8055EA10,lbl_8055EA18,2);
  lbl_80562CA0=value0;
 }
 return lbl_80562CA0;
}
void *fn_800CDDA8(){
 void *value0;
 if(!lbl_80562CA4){
  value0=fn_800635C8(lbl_8048207C,lbl_8055EA20,lbl_8055EA28,2);
  lbl_80562CA4=value0;
 }
 return lbl_80562CA4;
}
void *fn_800CDDF0(){
 char *data=lbl_80480EC0;
 if(!lbl_80562CA8) lbl_80562CA8=fn_800635C8(data+0x1304,data+0x12C4,data+0x12E4,0x8);
 return lbl_80562CA8;
}
void *fn_800CDE3C(){
 char *data=lbl_80480EC0;
 if(!lbl_80562CAC) lbl_80562CAC=fn_800635C8(data+0x19C0,data+0x1968,data+0x1994,0xB);
 return lbl_80562CAC;
}
void *fn_800CDE88(){
 char *data=lbl_80480EC0;
 if(!lbl_80562CB0) lbl_80562CB0=fn_800635C8(data+0x1BC0,data+0x1B90,data+0x1BA8,0x6);
 return lbl_80562CB0;
}
void *fn_800CDED4(){
 char *data=lbl_80480EC0;
 if(!lbl_80562CB4) lbl_80562CB4=fn_800635C8(data+0x218C,data+0x20B4,data+0x2120,0x1B);
 return lbl_80562CB4;
}
void *fn_800CDF20(){
 char *data=lbl_80480EC0;
 if(!lbl_80562CB8) lbl_80562CB8=fn_800635C8(data+0x2AE8,data+0x2AC0,data+0x2AD4,0x5);
 return lbl_80562CB8;
}
void *fn_800CDF6C(){
 void *value0;
 if(!lbl_80562CBC){
  value0=fn_800635C8(lbl_80483A0C,lbl_8055EA30,lbl_8055EA38,2);
  lbl_80562CBC=value0;
 }
 return lbl_80562CBC;
}
void *fn_800CDFB4(){
 char *data=lbl_80480EC0;
 if(!lbl_80562CC0) lbl_80562CC0=fn_800635C8(data+0x2C18,data+0x2BF8,data+0x2C08,0x4);
 return lbl_80562CC0;
}
void *fn_800CE000(){
 char *data=lbl_80480EC0;
 if(!lbl_80562CC4) lbl_80562CC4=fn_800635C8(data+0x2D88,data+0x2D60,data+0x2D74,0x5);
 return lbl_80562CC4;
}
void *fn_800CE04C(){
 char *data=lbl_80480EC0;
 if(!lbl_80562CC8) lbl_80562CC8=fn_800635C8(data+0x2E40,data+0x2E20,data+0x2E30,0x4);
 return lbl_80562CC8;
}
void *fn_800CE098(){
 char *data=lbl_80480EC0;
 if(!lbl_80562CCC) lbl_80562CCC=fn_800635C8(data+0x2F78,data+0x2F48,data+0x2F60,0x6);
 return lbl_80562CCC;
}
void *fn_800CE0E4(){
 char *data=lbl_80480EC0;
 if(!lbl_80562CD0) lbl_80562CD0=fn_800635C8(data+0x3A98,data+0x38C0,data+0x39AC,0x3B);
 return lbl_80562CD0;
}
void *fn_800CE130(){
 char *data=lbl_80480EC0;
 if(!lbl_80562CD4) lbl_80562CD4=fn_800635C8(data+0x3C1C,data+0x3BC4,data+0x3BF0,0xB);
 return lbl_80562CD4;
}
void *fn_800CE17C(){
 char *data=lbl_80480EC0;
 if(!lbl_80562CD8) lbl_80562CD8=fn_800635C8(data+0x3D40,data+0x3D10,data+0x3D28,0x6);
 return lbl_80562CD8;
}
void *fn_800CE1C8(){
 char *data=lbl_80480EC0;
 if(!lbl_80562CDC) lbl_80562CDC=fn_800635C8(data+0x3EEC,data+0x3ED4,data+0x3EE0,0x3);
 return lbl_80562CDC;
}
void *fn_800CE214(){
 char *data=lbl_80480EC0;
 if(!lbl_80562CE0) lbl_80562CE0=fn_800635C8(data+0x4060,data+0x4030,data+0x4048,0x6);
 return lbl_80562CE0;
}
void *fn_800CE260(){
 char *data=lbl_80480EC0;
 if(!lbl_80562CE4) lbl_80562CE4=fn_800635C8(data+0x4290,data+0x4278,data+0x4284,0x3);
 return lbl_80562CE4;
}
void *fn_800CE2AC(){
 char *data=lbl_80480EC0;
 if(!lbl_80562CE8) lbl_80562CE8=fn_800635C8(data+0x6A4C,data+0x6434,data+0x6740,0xC3);
 return lbl_80562CE8;
}
}
#pragma pop
}

namespace unknown800CE2F8 {
#pragma push
#pragma auto_inline off
extern "C" {
void *igUserUCodeExt_arkRegister();
void *igScissorExt_arkRegister();
void *igPointSpriteExt_arkRegister();
void *igMultiTextureExt_arkRegister();
void *igLineWidthExt_arkRegister();
void *igDisableExt_arkRegister();
void *igDecalExt_arkRegister();
void igBlendEquationExt_arkRegister();
extern char lbl_80562CEC[1];
extern char lbl_80562CED[1];
}
extern "C" {
void fn_800CE2F8(){
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 void *value4;
 void *value5;
 void *value6;
 if((int)*reinterpret_cast<signed char *>((lbl_80562CED+0))==0){
  *reinterpret_cast<unsigned char *>((lbl_80562CEC+0))=0;
  *reinterpret_cast<unsigned char *>((lbl_80562CED+0))=1;
 }
 if(!(void *)(int)*reinterpret_cast<unsigned char *>((lbl_80562CEC+0))){
  *reinterpret_cast<unsigned char *>((lbl_80562CEC+0))=1;
  value0=igUserUCodeExt_arkRegister();
  value1=igScissorExt_arkRegister();
  value2=igPointSpriteExt_arkRegister();
  value3=igMultiTextureExt_arkRegister();
  value4=igLineWidthExt_arkRegister();
  value5=igDisableExt_arkRegister();
  value6=igDecalExt_arkRegister();
  igBlendEquationExt_arkRegister();
  return;
 } else {
  return;
 }
}
}
#pragma pop
}

namespace igVisualContextCapabilityManager {
// igVisualContextCapabilityManager: Alchemy class registration (0x800CE364..0x800CE528). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igVisualContextCapabilityManager)
META_DECLARE(igCapabilityManager)

extern "C" {
void fn_800CE2F8();
void *fn_800CE528();
extern char igVisualContextCapabilityManager_dependencies[8];
extern char lbl_80492AD0[];
}

struct igVisualContextCapabilityManagerInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _visualContext;
    char unknown0C[4];
    inline ~igVisualContextCapabilityManagerInstance() { __vtable = igVisualContextCapabilityManager_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igVisualContextCapabilityManager)

META_GET_META(igVisualContextCapabilityManager)

void *igVisualContextCapabilityManager_vtableRead()
{
    igVisualContextCapabilityManagerInstance object;
    object.__vtable = lbl_80492AD0;
    object.__vtable = igVisualContextCapabilityManager_vtable;
    object._visualContext._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igVisualContextCapabilityManager)

void igVisualContextCapabilityManager_register()
{
    fn_800CE2F8();
    meta_registerClass(0, &igVisualContextCapabilityManager_meta, igCapabilityManager_register,
                       fn_800CE528, igVisualContextCapabilityManager_getMetaCall,
                       igVisualContextCapabilityManager_className, 0xC,
                       igVisualContextCapabilityManager_vtableRead, igVisualContextCapabilityManager_fieldInit, 0, igVisualContextCapabilityManager_dependencies);
}

META_GET_META_CALL(igVisualContextCapabilityManager)

}
#pragma pop
}

namespace unknown800CE528 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023FDC();
void *meta_newMetaObject(void *);
void *fn_80037594();
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800CE2F8();
void igCapabilityManager_register();
void igContext_register();
void igNonRefCountedObjectList_register();
void igVisualContext_fieldInit();
extern char igDataList_vtable[];
extern char igNonRefCountedObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igVisualContextCapabilityManager_vtable[];
extern char lbl_80492AD0[];
extern char igVisualContextList_vtable[];
extern char lbl_804943FC[];
extern char igVisualContextCapabilityManager_dependencies[8];
extern char igVisualContextCapabilityManager_fieldTypes[4];
extern char igVisualContextCapabilityManager_fieldNames[4];
extern char igVisualContextCapabilityManager_fieldStorage[4];
extern char igVisualContextCapabilityManager_fieldOffsets[4];
extern char igVisualContextList_dependencies[8];
extern void *lbl_805621F4;
extern void *igVisualContextCapabilityManager_meta;
extern void *igVisualContextList_meta;
extern void *igVisualContext_meta;
extern void *igCapabilityManager_meta;
void *igVisualContextCapabilityManager_getMeta();
void *igVisualContextCapabilityManager_vtableRead();
void igVisualContextCapabilityManager_arkRegister();
void igVisualContextCapabilityManager_register();
void *igVisualContextCapabilityManager_getMetaCall();
void *fn_800CE528();
void igVisualContextCapabilityManager_fieldInit();
void *igVisualContextList_getMeta();
void *igVisualContextList_vtableRead();
void igVisualContextList_arkRegister();
void igVisualContextList_register();
void *igVisualContextList_getMetaCall();
void *fn_800CE788();
void *igVisualContext_getMeta();
void igVisualContext_arkRegister();
void igVisualContext_register();
void *igVisualContext_getMetaCall();
}
struct UnknownGenRoot800CE3D8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800CE3D8(){igObject_construct(this);}
};
struct UnknownGenObject800CE3D8 : UnknownGenRoot800CE3D8 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject800CE3D8(){unknown00=igVisualContextCapabilityManager_vtable;}
};
struct UnknownGenObject800CE62C_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800CE528(){return igCapabilityManager_meta;}
}
#pragma pop
}

namespace igVisualContextCapabilityManager_2 {
// igVisualContextCapabilityManager: Alchemy class registration (0x800CE530..0x800CE5B8). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igVisualContextCapabilityManager)

extern "C" {
void *fn_800CE788();
extern char igVisualContextCapabilityManager_fieldNames[4];
extern char igVisualContextCapabilityManager_fieldOffsets[4];
extern char igVisualContextCapabilityManager_fieldStorage[4];
extern char igVisualContextCapabilityManager_fieldTypes[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igVisualContextCapabilityManager_fieldInit()
{
    Meta::igMetaObject *meta = igVisualContextCapabilityManager_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igVisualContextCapabilityManager_fieldTypes, 1);
    Meta::igObjectRefMetaField *visualContextField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_800CE788();
    visualContextField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    visualContextField->_persistent = false;
    meta_setupFields(meta, igVisualContextCapabilityManager_fieldNames, igVisualContextCapabilityManager_fieldStorage, igVisualContextCapabilityManager_fieldOffsets, base);
}

}
#pragma pop
}

namespace igVisualContextList {
// igVisualContextList: Alchemy class registration (0x800CE5B8..0x800CE750). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igVisualContextList)
META_DECLARE(igDataList)
META_DECLARE(igNonRefCountedObjectList)

extern "C" {
void *fn_80023FDC();
void fn_800CE2F8();
extern char igVisualContextList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804943FC[];
}

struct Instance_800CE62C_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igVisualContextList)

META_GET_META(igVisualContextList)

void *igVisualContextList_vtableRead()
{
    Instance_800CE62C_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igNonRefCountedObjectList_vtable;
    object.__vtable = lbl_804943FC;
    object.__vtable = igVisualContextList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igVisualContextList)

void igVisualContextList_register()
{
    fn_800CE2F8();
    meta_registerClass(0, &igVisualContextList_meta, igNonRefCountedObjectList_register,
                       fn_80023FDC, igVisualContextList_getMetaCall,
                       igVisualContextList_className, 0x14,
                       igVisualContextList_vtableRead, 0, 0, igVisualContextList_dependencies);
}

META_GET_META_CALL(igVisualContextList)

}
#pragma pop
}

namespace igVisualContext {
// igVisualContext: Alchemy class registration (0x800CE750..0x800CE788). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igVisualContext)

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igVisualContext)

}
#pragma pop
}

namespace unknown800CE788 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023FDC();
void *meta_newMetaObject(void *);
void *fn_80037594();
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800CE2F8();
void igCapabilityManager_register();
void igContext_register();
void igNonRefCountedObjectList_register();
void igVisualContext_fieldInit();
extern char igDataList_vtable[];
extern char igNonRefCountedObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igVisualContextCapabilityManager_vtable[];
extern char lbl_80492AD0[];
extern char igVisualContextList_vtable[];
extern char lbl_804943FC[];
extern char igVisualContextCapabilityManager_dependencies[8];
extern char igVisualContextCapabilityManager_fieldTypes[4];
extern char igVisualContextCapabilityManager_fieldNames[4];
extern char igVisualContextCapabilityManager_fieldStorage[4];
extern char igVisualContextCapabilityManager_fieldOffsets[4];
extern char igVisualContextList_dependencies[8];
extern void *lbl_805621F4;
extern void *igVisualContextCapabilityManager_meta;
extern void *igVisualContextList_meta;
extern void *igVisualContext_meta;
extern void *igCapabilityManager_meta;
void *igVisualContextCapabilityManager_getMeta();
void *igVisualContextCapabilityManager_vtableRead();
void igVisualContextCapabilityManager_arkRegister();
void igVisualContextCapabilityManager_register();
void *igVisualContextCapabilityManager_getMetaCall();
void *fn_800CE528();
void igVisualContextCapabilityManager_fieldInit();
void *igVisualContextList_getMeta();
void *igVisualContextList_vtableRead();
void igVisualContextList_arkRegister();
void igVisualContextList_register();
void *igVisualContextList_getMetaCall();
void *fn_800CE788();
void *igVisualContext_getMeta();
void igVisualContext_arkRegister();
void igVisualContext_register();
void *igVisualContext_getMetaCall();
}
struct UnknownGenRoot800CE3D8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800CE3D8(){igObject_construct(this);}
};
struct UnknownGenObject800CE3D8 : UnknownGenRoot800CE3D8 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject800CE3D8(){unknown00=igVisualContextCapabilityManager_vtable;}
};
struct UnknownGenObject800CE62C_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800CE788(){
 if(!igVisualContext_meta) igVisualContext_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igVisualContext_meta;
}
void *igVisualContext_getMeta(){
 if(!igVisualContext_meta || !(reinterpret_cast<unsigned int *>(igVisualContext_meta)[0x24/4]&4)) igVisualContext_arkRegister();
 return igVisualContext_meta;
}
void igVisualContext_arkRegister(){
 meta_registerNow((int)igVisualContext_register);
}
void igVisualContext_register(){
 fn_800CE2F8();
 meta_registerClass(1,(int)&igVisualContext_meta,(int)igContext_register,(int)fn_80037594,(int)igVisualContext_getMetaCall,(int)igVisualContext_className,320,0,(int)igVisualContext_fieldInit,0,(int)igVisualContext_dependencies);
}
void *igVisualContext_getMetaCall(){return igVisualContext_getMeta();}
}
#pragma pop
}

namespace igVisualContext_fieldInit {
// igVisualContext: Alchemy class registration (0x800CE8BC..0x800CEC0C). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igVisualContext)
META_DECLARE(igGamecubeVisualContext)

extern "C" {
void *fn_800236A8();
void *fn_8002BED0();
void fn_8003EC68(void *, int);
void fn_80046E58(void *, void *);
void fn_80053650(void *, int);
void fn_80054BC8(void *, long long);
void fn_800CDB9C();
void *fn_800CEEF4();
void *fn_800D2F08();
void *fn_800D336C();
void *fn_8011FFD8();
extern char lbl_8055EA68[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igVisualContext_fieldInit()
{
    Meta::igMetaObject *meta = igVisualContext_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igVisualContext_fieldTypes, 28);
    Meta::igIntMetaField *contextIndexField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base));
    fn_80053650(contextIndexField, -1);
    Meta::igObjectRefMetaField *driverDataMemoryPoolField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_v3 = fn_800236A8();
    driverDataMemoryPoolField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v3);
    driverDataMemoryPoolField->_resetMethod = 3;
    Meta::igObjectRefMetaField *textureMemoryPoolField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 6));
    textureMemoryPoolField->_persistent = false;
    Meta::igObjectRefMetaField *statisticsMemoryPoolField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 7));
    statisticsMemoryPoolField->_persistent = false;
    Meta::igObjectRefMetaField *listMemoryPoolField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 8));
    void *value_v7 = fn_8011FFD8();
    *reinterpret_cast<void **>(reinterpret_cast<char *>(listMemoryPoolField) + 0x3C) = value_v7;
    listMemoryPoolField->_destruct = true;
    *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(listMemoryPoolField) + 0x40) = 1;
    *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(listMemoryPoolField) + 0x41) = 1;
    listMemoryPoolField->_persistent = false;
    Meta::igObjectRefMetaField *timerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 9));
    timerField->_persistent = false;
    Meta::igBoolMetaField *showFrameRateField = static_cast<Meta::igBoolMetaField *>(meta_field(meta, base + 10));
    showFrameRateField->_persistent = false;
    Meta::igBoolMetaField *commandLineFrameRateField = static_cast<Meta::igBoolMetaField *>(meta_field(meta, base + 11));
    fn_80054BC8(commandLineFrameRateField, 0);
    commandLineFrameRateField->_persistent = false;
    Meta::igIntMetaField *primitiveCountField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 12));
    fn_80046E58(primitiveCountField, lbl_8055EA68);
    *reinterpret_cast<void **>(reinterpret_cast<char *>(primitiveCountField) + 0x34) = fn_800CDB9C;
    Meta::igFloatMetaField *frameStartTimeField = static_cast<Meta::igFloatMetaField *>(meta_field(meta, base + 13));
    frameStartTimeField->_persistent = false;
    Meta::igIntMetaField *blendMatricesCountField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 14));
    blendMatricesCountField->_persistent = false;
    Meta::igUnsignedIntMetaField *blendIndexField = static_cast<Meta::igUnsignedIntMetaField *>(meta_field(meta, base + 15));
    fn_8003EC68(blendIndexField, 1);
    blendIndexField->_persistent = false;
    Meta::igMemoryRefMetaField *inverseTransposeField = static_cast<Meta::igMemoryRefMetaField *>(meta_field(meta, base + 16));
    void *value_v16 = fn_800CEEF4();
    *reinterpret_cast<void **>(reinterpret_cast<char *>(inverseTransposeField) + 0x38) = value_v16;
    inverseTransposeField->_alignmentType = 16;
    inverseTransposeField->_persistent = false;
    Meta::igRawRefMetaField *blendMatricesField = static_cast<Meta::igRawRefMetaField *>(meta_field(meta, base + 17));
    void *value_v18 = fn_800D336C();
    *reinterpret_cast<void **>(reinterpret_cast<char *>(blendMatricesField) + 0x38) = value_v18;
    blendMatricesField->_resetMethod = 3;
    blendMatricesField->_persistent = false;
    Meta::igUnsignedIntMetaField *inverseTransposeCountField = static_cast<Meta::igUnsignedIntMetaField *>(meta_field(meta, base + 18));
    void *value_v20 = fn_800D2F08();
    *reinterpret_cast<void **>(reinterpret_cast<char *>(inverseTransposeCountField) + 0x38) = value_v20;
    inverseTransposeCountField->_resetMethod = 3;
    inverseTransposeCountField->_persistent = false;
    Meta::igLongMetaField *renderingTimeField = static_cast<Meta::igLongMetaField *>(meta_field(meta, base + 19));
    renderingTimeField->_persistent = false;
    Meta::igEnumMetaField *scissorTypeField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base + 20));
    void *value_v23 = fn_8002BED0();
    *reinterpret_cast<void **>(reinterpret_cast<char *>(scissorTypeField) + 0x38) = value_v23;
    scissorTypeField->_resetMethod = 3;
    Meta::igMatrix44fMetaField *viewMatrixHintField = static_cast<Meta::igMatrix44fMetaField *>(meta_field(meta, base + 21));
    void *value_v25 = fn_8002BED0();
    *reinterpret_cast<void **>(reinterpret_cast<char *>(viewMatrixHintField) + 0x38) = value_v25;
    viewMatrixHintField->_resetMethod = 3;
    Meta::igMatrix44fMetaField *viewMatrixInverseField = static_cast<Meta::igMatrix44fMetaField *>(meta_field(meta, base + 22));
    void *value_v27 = fn_8002BED0();
    *reinterpret_cast<void **>(reinterpret_cast<char *>(viewMatrixInverseField) + 0x38) = value_v27;
    viewMatrixInverseField->_resetMethod = 3;
    Meta::igBoolMetaField *viewMatrixDirtyField = static_cast<Meta::igBoolMetaField *>(meta_field(meta, base + 23));
    void *value_v29 = fn_8002BED0();
    *reinterpret_cast<void **>(reinterpret_cast<char *>(viewMatrixDirtyField) + 0x38) = value_v29;
    viewMatrixDirtyField->_resetMethod = 3;
    Meta::igObjectRefArrayMetaField *vertexArray2Field = static_cast<Meta::igObjectRefArrayMetaField *>(meta_field(meta, base + 24));
    void *value_v31 = fn_8002BED0();
    vertexArray2Field->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v31);
    vertexArray2Field->_resetMethod = 3;
    Meta::igObjectRefMetaField *customStatesField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 25));
    void *value_v33 = fn_8002BED0();
    customStatesField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v33);
    customStatesField->_resetMethod = 3;
    Meta::igObjectRefMetaField *customFieldsField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 26));
    void *value_v35 = fn_8002BED0();
    customFieldsField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v35);
    customFieldsField->_resetMethod = 3;
    Meta::igBoolMetaField *ditherStateField = static_cast<Meta::igBoolMetaField *>(meta_field(meta, base + 27));
    void *value_v37 = fn_8002BED0();
    *reinterpret_cast<void **>(reinterpret_cast<char *>(ditherStateField) + 0x38) = value_v37;
    ditherStateField->_resetMethod = 3;
    meta_setupFields(meta, igVisualContext_fieldNames, igVisualContext_fieldStorage, igVisualContext_fieldOffsets, base);
    igVisualContext_meta->_abstractProxy = reinterpret_cast<void *>(igGamecubeVisualContext_getMetaCall);
}

}
#pragma pop
}

namespace igGamecubeVisualContext {
// igGamecubeVisualContext: Alchemy class registration (0x800CEC0C..0x800CEC2C). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igGamecubeVisualContext)

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META_CALL(igGamecubeVisualContext)

}
#pragma pop
}

namespace igVertexArray2Helper {
// igVertexArray2Helper: Alchemy class registration (0x800CEC2C..0x800CEEBC). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igVertexArray2Helper)
META_DECLARE(igNamedObject)

extern "C" {
void *fn_80023CF4();
void fn_800CE2F8();
void *fn_800CEEF4();
extern char igVertexArray2Helper_dependencies[8];
extern char igVertexArray2Helper_fieldNames[4];
extern char igVertexArray2Helper_fieldOffsets[4];
extern char igVertexArray2Helper_fieldStorage[4];
extern char igVertexArray2Helper_fieldTypes[4];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct igVertexArray2HelperInstance : igNamedObjectInstance {
    igObjectRefMember _vertexArray;
    inline ~igVertexArray2HelperInstance() { __vtable = igVertexArray2Helper_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igVertexArray2Helper)

META_GET_META(igVertexArray2Helper)

void *igVertexArray2Helper_vtableRead()
{
    igVertexArray2HelperInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igVertexArray2Helper_vtable;
    object._vertexArray._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igVertexArray2Helper)

void igVertexArray2Helper_register()
{
    fn_800CE2F8();
    meta_registerClass(0, &igVertexArray2Helper_meta, igNamedObject_register,
                       fn_80023CF4, igVertexArray2Helper_getMetaCall,
                       igVertexArray2Helper_className, 0x10,
                       igVertexArray2Helper_vtableRead, igVertexArray2Helper_fieldInit, 0, igVertexArray2Helper_dependencies);
}

META_GET_META_CALL(igVertexArray2Helper)

void igVertexArray2Helper_fieldInit()
{
    Meta::igMetaObject *meta = igVertexArray2Helper_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igVertexArray2Helper_fieldTypes, 1);
    Meta::igObjectRefMetaField *vertexArrayField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_800CEEF4();
    vertexArrayField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    meta_setupFields(meta, igVertexArray2Helper_fieldNames, igVertexArray2Helper_fieldStorage, igVertexArray2Helper_fieldOffsets, base);
}

}
#pragma pop
}

namespace igVertexArray2 {
// igVertexArray2: Alchemy class registration (0x800CEEBC..0x800CEEF4). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igVertexArray2)

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igVertexArray2)

}
#pragma pop
}

namespace unknown800CEEF4 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
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
void fn_800CE2F8();
void *igGamecubeVisualContext_getMeta();
void igNamedObject_register();
void *igVertexArray2_fieldInit();
extern char igNamedObject_vtable[];
extern char igVertexArray2Helper_vtable[];
extern char igVertexArray2_vtable[];
extern char igVertexArray2Helper_dependencies[8];
extern char igVertexArray2Helper_fieldTypes[4];
extern char igVertexArray2Helper_fieldNames[4];
extern char igVertexArray2Helper_fieldStorage[4];
extern char igVertexArray2Helper_fieldOffsets[4];
extern void *lbl_805621F4;
extern void *igVertexArray2Helper_meta;
extern void *igVertexArray2_meta;
void *igVertexArray2Helper_getMeta();
void *igVertexArray2Helper_vtableRead();
void igVertexArray2Helper_arkRegister();
void igVertexArray2Helper_register();
void *igVertexArray2Helper_getMetaCall();
void igVertexArray2Helper_fieldInit();
void *fn_800CEEF4();
void *igVertexArray2_getMeta();
void *igVertexArray2_vtableRead();
void igVertexArray2_arkRegister();
void igVertexArray2_register();
void *igVertexArray2_getMetaCall();
}
struct UnknownGenRoot800CECA0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800CECA0(){igObject_construct(this);}
};
struct UnknownGenObject800CECA0_0 : UnknownGenRoot800CECA0 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800CECA0_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject800CECA0 : UnknownGenObject800CECA0_0 {
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject800CECA0(){unknown00=igVertexArray2Helper_vtable;}
};
struct UnknownGenRoot800CEF6C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800CEF6C(){igObject_construct(this);}
};
struct UnknownGenObject800CEF6C_0 : UnknownGenRoot800CEF6C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800CEF6C_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject800CEF6C : UnknownGenObject800CEF6C_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject800CEF6C(){unknown00=igVertexArray2_vtable;}
};
extern "C" {
void *fn_800CEEF4(){
 if(!igVertexArray2_meta) igVertexArray2_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igVertexArray2_meta;
}
void *igVertexArray2_getMeta(){
 if(!igVertexArray2_meta || !(reinterpret_cast<unsigned int *>(igVertexArray2_meta)[0x24/4]&4)) igVertexArray2_arkRegister();
 return igVertexArray2_meta;
}
void *igVertexArray2_vtableRead(){
 UnknownGenObject800CEF6C object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igVertexArray2_vtable;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igVertexArray2_arkRegister(){
 meta_registerNow((int)igVertexArray2_register);
}
void igVertexArray2_register(){
 fn_800CE2F8();
 meta_registerClass(0,(int)&igVertexArray2_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)igVertexArray2_getMetaCall,(int)igVertexArray2_className,24,(int)igVertexArray2_vtableRead,(int)igVertexArray2_fieldInit,0,(int)igVertexArray2_dependencies);
}
void *igVertexArray2_getMetaCall(){return igVertexArray2_getMeta();}
}
#pragma pop
}

namespace igVertexArray2_fieldInit {
// igVertexArray2: Alchemy class registration (0x800CF17C..0x800CF250). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igVertexArray2)
META_DECLARE(igGamecubeVertexArray2)
META_DECLARE(igObject)

extern "C" {
void *fn_80028F84();
void *fn_800CF340();
}

#pragma push
#pragma auto_inline off
extern "C" {

void igVertexArray2_fieldInit()
{
    Meta::igMetaObject *meta = igVertexArray2_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igVertexArray2_fieldTypes, 3);
    Meta::igObjectRefMetaField *internalBufferField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_v2 = fn_80028F84();
    internalBufferField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v2);
    internalBufferField->_construct = true;
    Meta::igObjectRefMetaField *objListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_v4 = fn_800CF340();
    objListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v4);
    Meta::igObjectRefMetaField *vertexStreamField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    vertexStreamField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(igObject_meta);
    vertexStreamField->_persistent = false;
    meta_setupFields(meta, igVertexArray2_fieldNames, igVertexArray2_fieldStorage, igVertexArray2_fieldOffsets, base);
    igVertexArray2_meta->_abstractProxy = reinterpret_cast<void *>(igGamecubeVertexArray2_getMetaCall);
}

}
#pragma pop
}

namespace igGamecubeVertexArray2 {
// igGamecubeVertexArray2: Alchemy class registration (0x800CF250..0x800CF270). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igGamecubeVertexArray2)

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META_CALL(igGamecubeVertexArray2)

}
#pragma pop
}

namespace unknown800CF270 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800CE2F8();
void *igGamecubeVertexArray2_getMeta();
void igNamedObject_register();
void *igVertexStream_fieldInit();
extern char igNamedObject_vtable[];
extern char igVertexStream_vtable[];
extern char igVertexStream_dependencies[8];
extern void *lbl_805621F4;
extern void *lbl_80562D94;
extern void *lbl_80562D98;
extern void *igVertexStream_meta;
void *igVertexStream_getMeta();
void *igVertexStream_vtableRead();
void igVertexStream_arkRegister();
void igVertexStream_register();
void *igVertexStream_getMetaCall();
}
struct UnknownGenRoot800CF3B8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800CF3B8(){igObject_construct(this);}
};
struct UnknownGenObject800CF3B8_0 : UnknownGenRoot800CF3B8 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800CF3B8_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject800CF3B8 : UnknownGenObject800CF3B8_0 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 char unknown18[24];
 inline ~UnknownGenObject800CF3B8(){unknown00=igVertexStream_vtable;}
};
extern "C" {
void *fn_800CF270(){
 char *data=lbl_80480EC0;
 if(!lbl_80562D94) lbl_80562D94=fn_800635C8(data+0x7648,data+0x7630,data+0x763C,0x3);
 return lbl_80562D94;
}
void *fn_800CF2BC(){
 char *data=lbl_80480EC0;
 if(!lbl_80562D98) lbl_80562D98=fn_800635C8(data+0x76F0,data+0x76D0,data+0x76E0,0x4);
 return lbl_80562D98;
}
}
#pragma pop
}

namespace igVertexStream {
// igVertexStream: Alchemy class registration (0x800CF308..0x800CF340). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igVertexStream)

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igVertexStream)

}
#pragma pop
}

namespace unknown800CF340 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800CE2F8();
void *igGamecubeVertexArray2_getMeta();
void igNamedObject_register();
void *igVertexStream_fieldInit();
extern char igNamedObject_vtable[];
extern char igVertexStream_vtable[];
extern char igVertexStream_dependencies[8];
extern void *lbl_805621F4;
extern void *lbl_80562D94;
extern void *lbl_80562D98;
extern void *igVertexStream_meta;
void *igVertexStream_getMeta();
void *igVertexStream_vtableRead();
void igVertexStream_arkRegister();
void igVertexStream_register();
void *igVertexStream_getMetaCall();
}
struct UnknownGenRoot800CF3B8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800CF3B8(){igObject_construct(this);}
};
struct UnknownGenObject800CF3B8_0 : UnknownGenRoot800CF3B8 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800CF3B8_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject800CF3B8 : UnknownGenObject800CF3B8_0 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 char unknown18[24];
 inline ~UnknownGenObject800CF3B8(){unknown00=igVertexStream_vtable;}
};
extern "C" {
void *fn_800CF340(){
 if(!igVertexStream_meta) igVertexStream_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igVertexStream_meta;
}
void *igVertexStream_getMeta(){
 if(!igVertexStream_meta || !(reinterpret_cast<unsigned int *>(igVertexStream_meta)[0x24/4]&4)) igVertexStream_arkRegister();
 return igVertexStream_meta;
}
void *igVertexStream_vtableRead(){
 UnknownGenObject800CF3B8 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igVertexStream_vtable;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igVertexStream_arkRegister(){
 meta_registerNow((int)igVertexStream_register);
}
void igVertexStream_register(){
 fn_800CE2F8();
 meta_registerClass(0,(int)&igVertexStream_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)igVertexStream_getMetaCall,(int)igVertexStream_className,36,(int)igVertexStream_vtableRead,(int)igVertexStream_fieldInit,0,(int)igVertexStream_dependencies);
}
void *igVertexStream_getMetaCall(){return igVertexStream_getMeta();}
}
#pragma pop
}

namespace igVertexStream_fieldInit {
// igVertexStream: Alchemy class registration (0x800CF554..0x800CF680). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igVertexStream)
META_DECLARE(igGamecubeVertexStream)

extern "C" {
void fn_80046E58(void *, void *);
void fn_800CE214();
void fn_800CF270();
void fn_800CF2BC();
void *fn_800CF6D8();
extern char lbl_8055EA9C[4];
extern char lbl_8055EAA0[4];
extern char lbl_8055EAA4[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igVertexStream_fieldInit()
{
    Meta::igMetaObject *meta = igVertexStream_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igVertexStream_fieldTypes, 6);
    Meta::igRawRefMetaField *streamField = static_cast<Meta::igRawRefMetaField *>(meta_field(meta, base));
    streamField->_persistent = false;
    Meta::igBoolMetaField *isConfiguredField = static_cast<Meta::igBoolMetaField *>(meta_field(meta, base + 1));
    isConfiguredField->_persistent = false;
    Meta::igObjectRefMetaField *vertexDataListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    void *value_v4 = fn_800CF6D8();
    vertexDataListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v4);
    Meta::igEnumMetaField *accessModeField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base + 3));
    fn_80046E58(accessModeField, lbl_8055EA9C);
    accessModeField->_getMetaEnumFunction = reinterpret_cast<void *>(fn_800CF2BC);
    Meta::igEnumMetaField *primitiveField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base + 4));
    fn_80046E58(primitiveField, lbl_8055EAA0);
    primitiveField->_getMetaEnumFunction = reinterpret_cast<void *>(fn_800CE214);
    Meta::igEnumMetaField *streamModeField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base + 5));
    fn_80046E58(streamModeField, lbl_8055EAA4);
    streamModeField->_getMetaEnumFunction = reinterpret_cast<void *>(fn_800CF270);
    meta_setupFields(meta, igVertexStream_fieldNames, igVertexStream_fieldStorage, igVertexStream_fieldOffsets, base);
    igVertexStream_meta->_abstractProxy = reinterpret_cast<void *>(igGamecubeVertexStream_getMetaCall);
}

}
#pragma pop
}

namespace igGamecubeVertexStream {
// igGamecubeVertexStream: Alchemy class registration (0x800CF680..0x800CF6A0). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igGamecubeVertexStream)

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META_CALL(igGamecubeVertexStream)

}
#pragma pop
}

namespace igVertexDataList {
// igVertexDataList: Alchemy class registration (0x800CF6A0..0x800CF6D8). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igVertexDataList)

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igVertexDataList)

}
#pragma pop
}

namespace unknown800CF6D8 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800CE2F8();
void *igGamecubeVertexStream_getMeta();
void igNamedObject_register();
void igObjectList_register();
void igVertexData_fieldInit();
extern char igDataList_vtable[];
extern char igNamedObject_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igVertexData_vtable[];
extern char igVertexDataList_vtable[];
extern char lbl_804940EC[];
extern char igVertexDataList_dependencies[8];
extern char igVertexData_dependencies[8];
extern void *lbl_805621F4;
extern void *igVertexDataList_meta;
extern void *lbl_80562DBC;
extern void *igVertexData_meta;
void *igVertexDataList_getMeta();
void *igVertexDataList_vtableRead();
void igVertexDataList_arkRegister();
void igVertexDataList_register();
void *igVertexDataList_getMetaCall();
void *igVertexData_getMeta();
void *igVertexData_vtableRead();
void igVertexData_arkRegister();
void igVertexData_register();
void *igVertexData_getMetaCall();
}
struct UnknownGenObject800CF750_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800CF970 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800CF970(){igObject_construct(this);}
};
struct UnknownGenObject800CF970_0 : UnknownGenRoot800CF970 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800CF970_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject800CF970 : UnknownGenObject800CF970_0 {
 UnknownGenRefMember unknown0C;
 char unknown10[32];
 inline ~UnknownGenObject800CF970(){unknown00=igVertexData_vtable;}
};
extern "C" {
void *fn_800CF6D8(){
 if(!igVertexDataList_meta) igVertexDataList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igVertexDataList_meta;
}
}
#pragma pop
}

namespace igVertexDataList_2 {
// igVertexDataList: Alchemy class registration (0x800CF714..0x800CF874). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igVertexDataList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_800CE2F8();
extern char igVertexDataList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804940EC[];
}

struct Instance_800CF750_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igVertexDataList)

void *igVertexDataList_vtableRead()
{
    Instance_800CF750_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804940EC;
    object.__vtable = igVertexDataList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igVertexDataList)

void igVertexDataList_register()
{
    fn_800CE2F8();
    meta_registerClass(0, &igVertexDataList_meta, igObjectList_register,
                       fn_80024180, igVertexDataList_getMetaCall,
                       igVertexDataList_className, 0x14,
                       igVertexDataList_vtableRead, 0, 0, igVertexDataList_dependencies);
}

META_GET_META_CALL(igVertexDataList)

}
#pragma pop
}

namespace unknown800CF874 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800CE2F8();
void *igGamecubeVertexStream_getMeta();
void igNamedObject_register();
void igObjectList_register();
void igVertexData_fieldInit();
extern char igDataList_vtable[];
extern char igNamedObject_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igVertexData_vtable[];
extern char igVertexDataList_vtable[];
extern char lbl_804940EC[];
extern char igVertexDataList_dependencies[8];
extern char igVertexData_dependencies[8];
extern void *lbl_805621F4;
extern void *igVertexDataList_meta;
extern void *lbl_80562DBC;
extern void *igVertexData_meta;
void *igVertexDataList_getMeta();
void *igVertexDataList_vtableRead();
void igVertexDataList_arkRegister();
void igVertexDataList_register();
void *igVertexDataList_getMetaCall();
void *igVertexData_getMeta();
void *igVertexData_vtableRead();
void igVertexData_arkRegister();
void igVertexData_register();
void *igVertexData_getMetaCall();
}
struct UnknownGenObject800CF750_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800CF970 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800CF970(){igObject_construct(this);}
};
struct UnknownGenObject800CF970_0 : UnknownGenRoot800CF970 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800CF970_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject800CF970 : UnknownGenObject800CF970_0 {
 UnknownGenRefMember unknown0C;
 char unknown10[32];
 inline ~UnknownGenObject800CF970(){unknown00=igVertexData_vtable;}
};
extern "C" {
void *fn_800CF874(){
 char *data=lbl_80480EC0;
 if(!lbl_80562DBC) lbl_80562DBC=fn_800635C8(data+0x7968,data+0x7910,data+0x793C,0xB);
 return lbl_80562DBC;
}
}
#pragma pop
}

namespace igVertexData {
// igVertexData: Alchemy class registration (0x800CF8C0..0x800CF8F8). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igVertexData)

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igVertexData)

}
#pragma pop
}

namespace unknown800CF8F8 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800CE2F8();
void *igGamecubeVertexStream_getMeta();
void igNamedObject_register();
void igObjectList_register();
void igVertexData_fieldInit();
extern char igDataList_vtable[];
extern char igNamedObject_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igVertexData_vtable[];
extern char igVertexDataList_vtable[];
extern char lbl_804940EC[];
extern char igVertexDataList_dependencies[8];
extern char igVertexData_dependencies[8];
extern void *lbl_805621F4;
extern void *igVertexDataList_meta;
extern void *lbl_80562DBC;
extern void *igVertexData_meta;
void *igVertexDataList_getMeta();
void *igVertexDataList_vtableRead();
void igVertexDataList_arkRegister();
void igVertexDataList_register();
void *igVertexDataList_getMetaCall();
void *igVertexData_getMeta();
void *igVertexData_vtableRead();
void igVertexData_arkRegister();
void igVertexData_register();
void *igVertexData_getMetaCall();
}
struct UnknownGenObject800CF750_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800CF970 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800CF970(){igObject_construct(this);}
};
struct UnknownGenObject800CF970_0 : UnknownGenRoot800CF970 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800CF970_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject800CF970 : UnknownGenObject800CF970_0 {
 UnknownGenRefMember unknown0C;
 char unknown10[32];
 inline ~UnknownGenObject800CF970(){unknown00=igVertexData_vtable;}
};
extern "C" {
void *fn_800CF8F8(){
 if(!igVertexData_meta) igVertexData_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igVertexData_meta;
}
void *igVertexData_getMeta(){
 if(!igVertexData_meta || !(reinterpret_cast<unsigned int *>(igVertexData_meta)[0x24/4]&4)) igVertexData_arkRegister();
 return igVertexData_meta;
}
void *igVertexData_vtableRead(){
 UnknownGenObject800CF970 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igVertexData_vtable;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igVertexData_arkRegister(){
 meta_registerNow((int)igVertexData_register);
}
void igVertexData_register(){
 fn_800CE2F8();
 meta_registerClass(0,(int)&igVertexData_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)igVertexData_getMetaCall,(int)igVertexData_className,36,(int)igVertexData_vtableRead,(int)igVertexData_fieldInit,0,(int)igVertexData_dependencies);
}
void *igVertexData_getMetaCall(){return igVertexData_getMeta();}
}
#pragma pop
}

namespace igVertexData_fieldInit {
// igVertexData: Alchemy class registration (0x800CFB0C..0x800CFBCC). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igVertexData)

extern "C" {
void *fn_80033934();
void fn_80046E58(void *, void *);
void fn_80075AC4(void *, int);
void fn_800CF874();
extern char lbl_8055EAC0[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igVertexData_fieldInit()
{
    Meta::igMetaObject *meta = igVertexData_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igVertexData_fieldTypes, 6);
    Meta::igObjectRefMetaField *dataField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_v2 = fn_80033934();
    dataField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v2);
    Meta::igEnumMetaField *componentTypeField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base + 1));
    fn_80046E58(componentTypeField, lbl_8055EAC0);
    componentTypeField->_getMetaEnumFunction = reinterpret_cast<void *>(fn_800CF874);
    Meta::igUnsignedIntMetaField *componentSizeField = static_cast<Meta::igUnsignedIntMetaField *>(meta_field(meta, base + 3));
    fn_80075AC4(componentSizeField, 1);
    meta_setupFields(meta, igVertexData_fieldNames, igVertexData_fieldStorage, igVertexData_fieldOffsets, base);
}

}
#pragma pop
}

namespace igVertexArray1_1 {
// igVertexArray1_1: Alchemy class registration (0x800CFBCC..0x800CFCFC). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igVertexArray1_1)
META_DECLARE(igVertexArray)

extern "C" {
void fn_800CE2F8();
void fn_800CFE78();
extern char igVertexArray1_1_dependencies[8];
void *igVertexArray1_1_parentMeta();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igVertexArray1_1)

META_GET_META(igVertexArray1_1)

META_ARK_REGISTER(igVertexArray1_1)

void igVertexArray1_1_register()
{
    fn_800CE2F8();
    meta_registerClass(1, &igVertexArray1_1_meta, igVertexArray_register,
                       igVertexArray1_1_parentMeta, igVertexArray1_1_getMetaCall,
                       igVertexArray1_1_className, 0x30,
                       0, igVertexArray1_1_fieldInit, fn_800CFE78, igVertexArray1_1_dependencies);
}

META_GET_META_CALL(igVertexArray1_1)

}
#pragma pop
}

namespace unknown800CFCFC {
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_800CE2F8();
void *fn_800CFE78();
void *igVertexArray1_1_fieldInit();
void igVertexArray_register();
extern char igVertexArray1_1_dependencies[8];
extern void *igVertexArray1_1_meta;
extern void *igVertexArray_meta;
void *igVertexArray1_1_getMeta();
void igVertexArray1_1_arkRegister();
void igVertexArray1_1_register();
void *igVertexArray1_1_getMetaCall();
void *igVertexArray1_1_parentMeta();
}
extern "C" {
void *igVertexArray1_1_parentMeta(){return igVertexArray_meta;}
}
#pragma pop
}

namespace igVertexArray1_1_fieldInit {
// igVertexArray1_1: Alchemy class registration (0x800CFD04..0x800CFE58). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igVertexArray1_1)
META_DECLARE(igGamecubeVertexArray1_1)

extern "C" {
void *fn_80023358();
void *fn_8002BED0();
void *fn_8002FC18();
}

#pragma push
#pragma auto_inline off
extern "C" {

void igVertexArray1_1_fieldInit()
{
    Meta::igMetaObject *meta = igVertexArray1_1_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igVertexArray1_1_fieldTypes, 6);
    Meta::igObjectRefMetaField *memPoolField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    memPoolField->_size = 4;
    Meta::igStructMetaField *vertexFormatField = static_cast<Meta::igStructMetaField *>(meta_field(meta, base + 1));
    void *value_v3 = fn_8002FC18();
    vertexFormatField->_cppDestructor = reinterpret_cast<void *>(value_v3);
    *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(vertexFormatField) + 0x35) = 1;
    *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(vertexFormatField) + 0x40) = 1;
    *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(vertexFormatField) + 0x41) = 1;
    Meta::igMemoryRefMetaField *blendWeightsField = static_cast<Meta::igMemoryRefMetaField *>(meta_field(meta, base + 2));
    void *value_v5 = fn_80023358();
    blendWeightsField->_memType = reinterpret_cast<Meta::igMetaField *>(value_v5);
    blendWeightsField->_destruct = true;
    blendWeightsField->_releaseOnCopy = true;
    blendWeightsField->_releaseOnReset = true;
    Meta::igMemoryRefMetaField *blendIndicesField = static_cast<Meta::igMemoryRefMetaField *>(meta_field(meta, base + 3));
    blendIndicesField->_persistent = false;
    Meta::igUnsignedIntMetaField *blendIndexField = static_cast<Meta::igUnsignedIntMetaField *>(meta_field(meta, base + 4));
    void *value_v8 = fn_8002FC18();
    *reinterpret_cast<void **>(reinterpret_cast<char *>(blendIndexField) + 0x3C) = value_v8;
    *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(blendIndexField) + 0x35) = 1;
    *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(blendIndexField) + 0x40) = 1;
    *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(blendIndexField) + 0x41) = 1;
    Meta::igMemoryRefMetaField *pointSpriteSizeField = static_cast<Meta::igMemoryRefMetaField *>(meta_field(meta, base + 5));
    void *value_v10 = fn_8002BED0();
    *reinterpret_cast<void **>(reinterpret_cast<char *>(pointSpriteSizeField) + 0x38) = value_v10;
    pointSpriteSizeField->_resetMethod = 3;
    pointSpriteSizeField->_persistent = false;
    pointSpriteSizeField->_deepCopyMethod = 1;
    pointSpriteSizeField->_shallowCopyMethod = 1;
    meta_setupFields(meta, igVertexArray1_1_fieldNames, igVertexArray1_1_fieldStorage, igVertexArray1_1_fieldOffsets, base);
    igVertexArray1_1_meta->_abstractProxy = reinterpret_cast<void *>(igGamecubeVertexArray1_1_getMetaCall);
}

}
#pragma pop
}

namespace igGamecubeVertexArray1_1 {
// igGamecubeVertexArray1_1: Alchemy class registration (0x800CFE58..0x800CFE78). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igGamecubeVertexArray1_1)

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META_CALL(igGamecubeVertexArray1_1)

}
#pragma pop
}

namespace unknown800CFE78 {
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
void fn_800CE2F8();
void *fn_800E2BEC();
void *igGamecubeVertexArray1_1_getMeta();
void igObjectList_register();
void igObject_register();
void *igVertexArray_fieldInit();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igVertexArrayList_vtable[];
extern char lbl_80493FC8[];
extern char igVertexArrayList_dependencies[8];
extern void *lbl_805621F4;
extern void *igVertexArrayList_meta;
extern void *igVertexArray_meta;
void *igVertexArrayList_getMeta();
void *igVertexArrayList_vtableRead();
void igVertexArrayList_arkRegister();
void igVertexArrayList_register();
void *igVertexArrayList_getMetaCall();
void *igVertexArray_getMeta();
void igVertexArray_arkRegister();
void igVertexArray_register();
void *igVertexArray_getMetaCall();
}
struct UnknownGenObject800CFF0C_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800CFE78(){return fn_800E2BEC();}
}
#pragma pop
}

namespace igVertexArrayList {
// igVertexArrayList: Alchemy class registration (0x800CFE98..0x800D0030). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igVertexArrayList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_800CE2F8();
extern char igVertexArrayList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_80493FC8[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igVertexArrayList)

META_GET_META(igVertexArrayList)

void *igVertexArrayList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_80493FC8;
    object.__vtable = igVertexArrayList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igVertexArrayList)

void igVertexArrayList_register()
{
    fn_800CE2F8();
    meta_registerClass(0, &igVertexArrayList_meta, igObjectList_register,
                       fn_80024180, igVertexArrayList_getMetaCall,
                       igVertexArrayList_className, 0x14,
                       igVertexArrayList_vtableRead, 0, 0, igVertexArrayList_dependencies);
}

META_GET_META_CALL(igVertexArrayList)

}
#pragma pop
}

namespace igVertexArray {
// igVertexArray: Alchemy class registration (0x800D0030..0x800D0068). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igVertexArray)

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igVertexArray)

}
#pragma pop
}

namespace unknown800D0068 {
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
void fn_800CE2F8();
void *fn_800E2BEC();
void *igGamecubeVertexArray1_1_getMeta();
void igObjectList_register();
void igObject_register();
void *igVertexArray_fieldInit();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igVertexArrayList_vtable[];
extern char lbl_80493FC8[];
extern char igVertexArrayList_dependencies[8];
extern void *lbl_805621F4;
extern void *igVertexArrayList_meta;
extern void *igVertexArray_meta;
void *igVertexArrayList_getMeta();
void *igVertexArrayList_vtableRead();
void igVertexArrayList_arkRegister();
void igVertexArrayList_register();
void *igVertexArrayList_getMetaCall();
void *igVertexArray_getMeta();
void igVertexArray_arkRegister();
void igVertexArray_register();
void *igVertexArray_getMetaCall();
}
struct UnknownGenObject800CFF0C_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800D0068(){
 if(!igVertexArray_meta) igVertexArray_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igVertexArray_meta;
}
void *igVertexArray_getMeta(){
 if(!igVertexArray_meta || !(reinterpret_cast<unsigned int *>(igVertexArray_meta)[0x24/4]&4)) igVertexArray_arkRegister();
 return igVertexArray_meta;
}
void igVertexArray_arkRegister(){
 meta_registerNow((int)igVertexArray_register);
}
void igVertexArray_register(){
 fn_800CE2F8();
 meta_registerClass(1,(int)&igVertexArray_meta,(int)igObject_register,(int)fn_800237D0,(int)igVertexArray_getMetaCall,(int)igVertexArray_className,24,0,(int)igVertexArray_fieldInit,0,0);
}
void *igVertexArray_getMetaCall(){return igVertexArray_getMeta();}
}
#pragma pop
}

namespace igVertexArray_fieldInit {
// igVertexArray: Alchemy class registration (0x800D0194..0x800D0234). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igVertexArray)
META_DECLARE(igGamecubeVertexArray1_1)

extern "C" {
void *fn_8002B210();
}

#pragma push
#pragma auto_inline off
extern "C" {

void igVertexArray_fieldInit()
{
    Meta::igMetaObject *meta = igVertexArray_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igVertexArray_fieldTypes, 4);
    Meta::igMemoryRefMetaField *vdataField = static_cast<Meta::igMemoryRefMetaField *>(meta_field(meta, base));
    void *value_v2 = fn_8002B210();
    vdataField->_memType = reinterpret_cast<Meta::igMetaField *>(value_v2);
    vdataField->_deepCopyMethod = 0;
    meta_setupFields(meta, igVertexArray_fieldNames, igVertexArray_fieldStorage, igVertexArray_fieldOffsets, base);
    igVertexArray_meta->_abstractProxy = reinterpret_cast<void *>(igGamecubeVertexArray1_1_getMetaCall);
}

}
#pragma pop
}

namespace igUserUCodeExt {
// igUserUCodeExt: Alchemy class registration (0x800D0234..0x800D031C). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igUserUCodeExt)
META_DECLARE(igContextExt)

extern "C" {
void fn_800CE2F8();
void *fn_800D031C();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igUserUCodeExt)

META_ARK_REGISTER(igUserUCodeExt)

void igUserUCodeExt_register()
{
    fn_800CE2F8();
    meta_registerClass(1, &igUserUCodeExt_meta, igContextExt_register,
                       fn_800D031C, igUserUCodeExt_getMetaCall,
                       igUserUCodeExt_className, 0x14,
                       0, 0, 0, 0);
}

META_GET_META_CALL(igUserUCodeExt)

}
#pragma pop
}

namespace unknown800D031C {
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800CE2F8();
void fn_800D05CC();
void igContextExt_register();
void *igGamecubeScissorExt_getMeta();
void igPrimLengthArray_register();
extern char lbl_80491C58[];
extern char igPrimLengthArray1_1_vtable[];
extern void *igContextExt_meta;
extern void *lbl_805621F4;
extern void *igUserUCodeExt_meta;
extern void *igScissorExt_meta;
extern void *igPrimLengthArray1_1_meta;
extern void *igPrimLengthArray_meta;
void *igUserUCodeExt_getMeta();
void igUserUCodeExt_arkRegister();
void igUserUCodeExt_register();
void *igUserUCodeExt_getMetaCall();
void *fn_800D031C();
void *igScissorExt_getMeta();
void igScissorExt_arkRegister();
void igScissorExt_register();
void *igScissorExt_getMetaCall();
void *fn_800D0450();
void *igGamecubeScissorExt_getMetaCall();
void *igPrimLengthArray1_1_getMeta();
void *igPrimLengthArray1_1_vtableRead();
void igPrimLengthArray1_1_arkRegister();
void igPrimLengthArray1_1_register();
void *igPrimLengthArray1_1_getMetaCall();
void *igPrimLengthArray1_1_parentMeta();
}
struct UnknownGenObject800D04C0_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800D031C(){return igContextExt_meta;}
void *fn_800D0324(){
 if(!igScissorExt_meta) igScissorExt_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igScissorExt_meta;
}
}
#pragma pop
}

namespace igScissorExt {
// igScissorExt: Alchemy class registration (0x800D0360..0x800D0450). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igScissorExt)
META_DECLARE(igContextExt)

extern "C" {
void fn_800CE2F8();
void *fn_800D031C();
void fn_800D0450();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igScissorExt)

META_ARK_REGISTER(igScissorExt)

void igScissorExt_register()
{
    fn_800CE2F8();
    meta_registerClass(1, &igScissorExt_meta, igContextExt_register,
                       fn_800D031C, igScissorExt_getMetaCall,
                       igScissorExt_className, 0x14,
                       0, fn_800D0450, 0, 0);
}

META_GET_META_CALL(igScissorExt)

}
#pragma pop
}

namespace unknown800D0450 {
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800CE2F8();
void fn_800D05CC();
void igContextExt_register();
void *igGamecubeScissorExt_getMeta();
void igPrimLengthArray_register();
extern char lbl_80491C58[];
extern char igPrimLengthArray1_1_vtable[];
extern void *igContextExt_meta;
extern void *lbl_805621F4;
extern void *igUserUCodeExt_meta;
extern void *igScissorExt_meta;
extern void *igPrimLengthArray1_1_meta;
extern void *igPrimLengthArray_meta;
void *igUserUCodeExt_getMeta();
void igUserUCodeExt_arkRegister();
void igUserUCodeExt_register();
void *igUserUCodeExt_getMetaCall();
void *fn_800D031C();
void *igScissorExt_getMeta();
void igScissorExt_arkRegister();
void igScissorExt_register();
void *igScissorExt_getMetaCall();
void *fn_800D0450();
void *igGamecubeScissorExt_getMetaCall();
void *igPrimLengthArray1_1_getMeta();
void *igPrimLengthArray1_1_vtableRead();
void igPrimLengthArray1_1_arkRegister();
void igPrimLengthArray1_1_register();
void *igPrimLengthArray1_1_getMetaCall();
void *igPrimLengthArray1_1_parentMeta();
}
struct UnknownGenObject800D04C0_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800D0450(){
 void *value0=igScissorExt_meta;
 reinterpret_cast<Meta::igMetaObject *>(value0)->_abstractProxy=(void *)(void *)igGamecubeScissorExt_getMetaCall;
 return value0;
}
}
#pragma pop
}

namespace igGamecubeScissorExt {
// igGamecubeScissorExt: Alchemy class registration (0x800D0464..0x800D0484). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igGamecubeScissorExt)

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META_CALL(igGamecubeScissorExt)

}
#pragma pop
}

namespace igPrimLengthArray1_1 {
// igPrimLengthArray1_1: Alchemy class registration (0x800D0484..0x800D05C4). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igPrimLengthArray1_1)
META_DECLARE(igPrimLengthArray)

extern "C" {
void fn_800CE2F8();
void fn_800D05CC();
void *igPrimLengthArray1_1_parentMeta();
extern char lbl_80491C58[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igPrimLengthArray1_1)

void *igPrimLengthArray1_1_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_80491C58;
    object.__vtable = igPrimLengthArray1_1_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igPrimLengthArray1_1)

void igPrimLengthArray1_1_register()
{
    fn_800CE2F8();
    meta_registerClass(0, &igPrimLengthArray1_1_meta, igPrimLengthArray_register,
                       igPrimLengthArray1_1_parentMeta, igPrimLengthArray1_1_getMetaCall,
                       igPrimLengthArray1_1_className, 0x14,
                       igPrimLengthArray1_1_vtableRead, fn_800D05CC, 0, 0);
}

META_GET_META_CALL(igPrimLengthArray1_1)

}
#pragma pop
}

namespace unknown800D05C4 {
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800CE2F8();
void fn_800D05CC();
void igContextExt_register();
void *igGamecubeScissorExt_getMeta();
void igPrimLengthArray_register();
extern char lbl_80491C58[];
extern char igPrimLengthArray1_1_vtable[];
extern void *igContextExt_meta;
extern void *lbl_805621F4;
extern void *igUserUCodeExt_meta;
extern void *igScissorExt_meta;
extern void *igPrimLengthArray1_1_meta;
extern void *igPrimLengthArray_meta;
void *igUserUCodeExt_getMeta();
void igUserUCodeExt_arkRegister();
void igUserUCodeExt_register();
void *igUserUCodeExt_getMetaCall();
void *fn_800D031C();
void *igScissorExt_getMeta();
void igScissorExt_arkRegister();
void igScissorExt_register();
void *igScissorExt_getMetaCall();
void *fn_800D0450();
void *igGamecubeScissorExt_getMetaCall();
void *igPrimLengthArray1_1_getMeta();
void *igPrimLengthArray1_1_vtableRead();
void igPrimLengthArray1_1_arkRegister();
void igPrimLengthArray1_1_register();
void *igPrimLengthArray1_1_getMetaCall();
void *igPrimLengthArray1_1_parentMeta();
}
struct UnknownGenObject800D04C0_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *igPrimLengthArray1_1_parentMeta(){return igPrimLengthArray_meta;}
}
#pragma pop
}

namespace fn_800D05CC {
// igPrimLengthArray1_1: Alchemy class registration (0x800D05CC..0x800D06A8). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igPrimLengthArray1_1)

extern "C" {
void *fn_80022DF8();
int fn_80053998(void *, void *);
void fn_800624F0(void *, int);
void fn_8006588C(void *, int, void *);
void *fn_800658F8(void *, void *);
extern char lbl_80562E20[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void fn_800D05CC()
{
    Meta::igMetaObject *meta = igPrimLengthArray1_1_meta;
    Meta::igMemoryRefMetaField *lengthDataField = static_cast<Meta::igMemoryRefMetaField *>(fn_800658F8(meta, lbl_80488A88));   // "_lengthData"
    int lengthDataIndex = fn_80053998(meta->_metaFields, lengthDataField);
    lengthDataField = static_cast<Meta::igMemoryRefMetaField *>(reinterpret_cast<igMetaFieldVirtuals *>(lengthDataField)->virtual54(1));   // a copy of it
    void *value_v2 = fn_80022DF8();
    lengthDataField->_memType = reinterpret_cast<Meta::igMetaField *>(value_v2);
    lengthDataField->_memSize = 0;
    fn_800624F0(lengthDataField, 0);
    lengthDataField->_destruct = true;
    lengthDataField->_releaseOnCopy = true;
    lengthDataField->_releaseOnReset = true;
    lengthDataField->_externalEnumStorage = reinterpret_cast<void *>(lbl_80562E20);
    fn_8006588C(meta, lengthDataIndex, lengthDataField);
    meta_release(lengthDataField);
}

}
#pragma pop
}

namespace igPrimLengthArray {
// igPrimLengthArray: Alchemy class registration (0x800D06A8..0x800D06E0). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igPrimLengthArray)

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igPrimLengthArray)

}
#pragma pop
}

namespace unknown800D06E0 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_800CE2F8();
void igObject_register();
void *igPrimLengthArray_fieldInit();
extern void *lbl_805621F4;
extern void *igPrimLengthArray_meta;
void *igPrimLengthArray_getMeta();
void igPrimLengthArray_arkRegister();
void igPrimLengthArray_register();
void *igPrimLengthArray_getMetaCall();
}
extern "C" {
void *fn_800D06E0(){
 if(!igPrimLengthArray_meta) igPrimLengthArray_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igPrimLengthArray_meta;
}
void *igPrimLengthArray_getMeta(){
 if(!igPrimLengthArray_meta || !(reinterpret_cast<unsigned int *>(igPrimLengthArray_meta)[0x24/4]&4)) igPrimLengthArray_arkRegister();
 return igPrimLengthArray_meta;
}
void igPrimLengthArray_arkRegister(){
 meta_registerNow((int)igPrimLengthArray_register);
}
void igPrimLengthArray_register(){
 fn_800CE2F8();
 meta_registerClass(1,(int)&igPrimLengthArray_meta,(int)igObject_register,(int)fn_800237D0,(int)igPrimLengthArray_getMetaCall,(int)igPrimLengthArray_className,20,0,(int)igPrimLengthArray_fieldInit,0,0);
}
void *igPrimLengthArray_getMetaCall(){return igPrimLengthArray_getMeta();}
}
#pragma pop
}

namespace igPrimLengthArray_fieldInit {
// igPrimLengthArray: Alchemy class registration (0x800D080C..0x800D08C8). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igPrimLengthArray)
META_DECLARE(igPrimLengthArray1_1)

extern "C" {
void *fn_80023358();
void fn_80075AC4(void *, int);
}

#pragma push
#pragma auto_inline off
extern "C" {

void igPrimLengthArray_fieldInit()
{
    Meta::igMetaObject *meta = igPrimLengthArray_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igPrimLengthArray_fieldTypes, 3);
    Meta::igMemoryRefMetaField *lengthDataField = static_cast<Meta::igMemoryRefMetaField *>(meta_field(meta, base));
    void *value_v2 = fn_80023358();
    lengthDataField->_memType = reinterpret_cast<Meta::igMetaField *>(value_v2);
    lengthDataField->_destruct = true;
    lengthDataField->_releaseOnCopy = true;
    lengthDataField->_releaseOnReset = true;
    Meta::igUnsignedIntMetaField *dataSizeField = static_cast<Meta::igUnsignedIntMetaField *>(meta_field(meta, base + 2));
    fn_80075AC4(dataSizeField, 32);
    meta_setupFields(meta, igPrimLengthArray_fieldNames, igPrimLengthArray_fieldStorage, igPrimLengthArray_fieldOffsets, base);
    igPrimLengthArray_meta->_abstractProxy = reinterpret_cast<void *>(igPrimLengthArray1_1_getMetaCall);
}

}
#pragma pop
}

namespace unknown800D08C8 {
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void igPointSpriteExt_arkRegister();
extern char lbl_8055EAE4[8];
extern char lbl_8055EAEC[8];
extern char lbl_8055EAF4[8];
extern char lbl_8055EAFC[8];
extern void *lbl_805621F4;
extern void *lbl_80562E34;
extern void *lbl_80562E38;
extern void *igPointSpriteExt_meta;
}
extern "C" {
void *fn_800D08C8(){
 void *value0;
 if(!lbl_80562E34){
  value0=fn_800635C8(lbl_80488B24,lbl_8055EAE4,lbl_8055EAEC,2);
  lbl_80562E34=value0;
 }
 return lbl_80562E34;
}
void *fn_800D0910(){
 void *value0;
 if(!lbl_80562E38){
  value0=fn_800635C8(lbl_80488B84,lbl_8055EAF4,lbl_8055EAFC,2);
  lbl_80562E38=value0;
 }
 return lbl_80562E38;
}
void *fn_800D0958(){
 if(!igPointSpriteExt_meta) igPointSpriteExt_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igPointSpriteExt_meta;
}
}
#pragma pop
}

namespace igPointSpriteExt {
// igPointSpriteExt: Alchemy class registration (0x800D0994..0x800D0BE4). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igPointSpriteExt)
META_DECLARE(igContextExt)

extern "C" {
void fn_800CE2F8();
void *fn_800D031C();
void fn_801285A0(void *);
extern char lbl_80473000[112];
extern char lbl_80493EEC[120];
}

struct Instance_80473000 : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _pExtList;
    char unknown0C[4];
    igObjectRefMember _pExtInstances;
    inline Instance_80473000()
    {
        __vtable = lbl_80473000;
        _pExtList._value = 0;
        _pExtInstances._value = 0;
    }
    inline ~Instance_80473000() { __vtable = lbl_80473000; }
};

struct Instance_80493EEC : Instance_80473000 {
    inline Instance_80493EEC()
    {
        __vtable = lbl_80493EEC;
    }
    inline ~Instance_80493EEC() { __vtable = lbl_80493EEC; }
};

struct igPointSpriteExtInstance : Instance_80493EEC {
    char unknown14[4];
    igObjectRefMember _vertexArray;
    char unknown1C[12];
    char unknown28[64];
    char unknown68[64];
    char unknownA8[64];
    char unknownE8[64];
    char unknown128[96];
    inline igPointSpriteExtInstance()
    {
        __vtable = igPointSpriteExt_vtable;
        _vertexArray._value = 0;
        fn_801285A0(&unknown28);
        fn_801285A0(&unknown68);
        fn_801285A0(&unknownA8);
        fn_801285A0(&unknownE8);
        fn_801285A0(&unknown128);
    }
    inline ~igPointSpriteExtInstance() { __vtable = igPointSpriteExt_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igPointSpriteExt)

void *igPointSpriteExt_vtableRead()
{
    igPointSpriteExtInstance object;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igPointSpriteExt)

void igPointSpriteExt_register()
{
    fn_800CE2F8();
    meta_registerClass(0, &igPointSpriteExt_meta, igContextExt_register,
                       fn_800D031C, igPointSpriteExt_getMetaCall,
                       igPointSpriteExt_className, 0x188,
                       igPointSpriteExt_vtableRead, igPointSpriteExt_fieldInit, 0, igPointSpriteExt_dependencies);
}

META_GET_META_CALL(igPointSpriteExt)

}
#pragma pop
}

namespace igPointSpriteExt_fieldInit {
// igPointSpriteExt: Alchemy class registration (0x800D0BE4..0x800D0E0C). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igPointSpriteExt)
META_DECLARE(igGamecubePointSpriteExt)

extern "C" {
void fn_80046E58(void *, void *);
void fn_8004D4BC(void *, float);
void *fn_800CE788();
void *fn_800D0068();
void fn_800D0910();
extern char lbl_8055EB04[4];
extern char lbl_805668C8[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igPointSpriteExt_fieldInit()
{
    Meta::igMetaObject *meta = igPointSpriteExt_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igPointSpriteExt_fieldTypes, 18);
    Meta::igObjectRefMetaField *contextField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_v2 = fn_800CE788();
    contextField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v2);
    contextField->_refCounted = false;
    contextField->_persistent = false;
    Meta::igObjectRefMetaField *vertexArrayField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_v4 = fn_800D0068();
    vertexArrayField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v4);
    vertexArrayField->_persistent = false;
    Meta::igFloatMetaField *spriteSizeField = static_cast<Meta::igFloatMetaField *>(meta_field(meta, base + 2));
    fn_8004D4BC(spriteSizeField, *reinterpret_cast<float *>(lbl_805668C8 + 0));
    spriteSizeField->_persistent = false;
    Meta::igBoolMetaField *inSpriteModeField = static_cast<Meta::igBoolMetaField *>(meta_field(meta, base + 3));
    inSpriteModeField->_persistent = false;
    Meta::igEnumMetaField *spriteSizeSpaceField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base + 4));
    fn_80046E58(spriteSizeSpaceField, lbl_8055EB04);
    spriteSizeSpaceField->_persistent = false;
    spriteSizeSpaceField->_getMetaEnumFunction = reinterpret_cast<void *>(fn_800D0910);
    Meta::igMatrix44fMetaField *previousModelviewField = static_cast<Meta::igMatrix44fMetaField *>(meta_field(meta, base + 5));
    previousModelviewField->_persistent = false;
    Meta::igMatrix44fMetaField *previousProjectionField = static_cast<Meta::igMatrix44fMetaField *>(meta_field(meta, base + 6));
    previousProjectionField->_persistent = false;
    Meta::igMatrix44fMetaField *orthoMatrixField = static_cast<Meta::igMatrix44fMetaField *>(meta_field(meta, base + 7));
    orthoMatrixField->_persistent = false;
    Meta::igMatrix44fMetaField *modelviewMatrixField = static_cast<Meta::igMatrix44fMetaField *>(meta_field(meta, base + 8));
    modelviewMatrixField->_persistent = false;
    Meta::igMatrix44fMetaField *modelviewMatrixFrustumField = static_cast<Meta::igMatrix44fMetaField *>(meta_field(meta, base + 9));
    modelviewMatrixFrustumField->_persistent = false;
    Meta::igIntMetaField *currentWindowWidthField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 10));
    currentWindowWidthField->_persistent = false;
    Meta::igIntMetaField *currentWindowHeightField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 11));
    currentWindowHeightField->_persistent = false;
    Meta::igFloatMetaField *frustumLeftField = static_cast<Meta::igFloatMetaField *>(meta_field(meta, base + 12));
    frustumLeftField->_persistent = false;
    Meta::igFloatMetaField *frustumRightField = static_cast<Meta::igFloatMetaField *>(meta_field(meta, base + 13));
    frustumRightField->_persistent = false;
    Meta::igFloatMetaField *frustumBottomField = static_cast<Meta::igFloatMetaField *>(meta_field(meta, base + 14));
    frustumBottomField->_persistent = false;
    Meta::igFloatMetaField *frustumTopField = static_cast<Meta::igFloatMetaField *>(meta_field(meta, base + 15));
    frustumTopField->_persistent = false;
    Meta::igFloatMetaField *frustumNearField = static_cast<Meta::igFloatMetaField *>(meta_field(meta, base + 16));
    frustumNearField->_persistent = false;
    Meta::igFloatMetaField *frustumFarField = static_cast<Meta::igFloatMetaField *>(meta_field(meta, base + 17));
    frustumFarField->_persistent = false;
    meta_setupFields(meta, igPointSpriteExt_fieldNames, igPointSpriteExt_fieldStorage, igPointSpriteExt_fieldOffsets, base);
    igPointSpriteExt_meta->_abstractProxy = reinterpret_cast<void *>(igGamecubePointSpriteExt_getMetaCall);
}

}
#pragma pop
}
