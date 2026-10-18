// Written by tools/alchemymeta/poolsrc.py: units whose code addresses the data below from its start.
#include <unknownGen.h>
#include <meta/register.h>
#include <meta/igVec3fMetaField.h>
#include <meta/igEnumMetaField.h>

// The unit's data.
extern "C" {
void fn_80031378();
void igFloatMetaField_create();
void igVec3fMetaField_create();
extern char lbl_8055F3A0[5];
extern char lbl_8055F3A8[5];
extern char lbl_8055F3B0[5];
extern char lbl_8055F3C0[6];
extern char lbl_8055F3C8[8];
extern char lbl_8055F3D0[8];
extern char lbl_80563970[4];
extern char lbl_80563974[4];
extern char lbl_80563978[4];
extern char lbl_80563980[4];
extern char lbl_80563984[4];
extern char lbl_80563988[4];
char lbl_804981F0[] = "IG_MATH_MATRIX_DECOMPOSITION_TRANSLATE_X";
char lbl_8049821C[] = "IG_MATH_MATRIX_DECOMPOSITION_TRANSLATE_Y";
char lbl_80498248[] = "IG_MATH_MATRIX_DECOMPOSITION_TRANSLATE_Z";
char lbl_80498274[] = "IG_MATH_MATRIX_DECOMPOSITION_ROTATE_X";
char lbl_8049829C[] = "IG_MATH_MATRIX_DECOMPOSITION_ROTATE_Y";
char lbl_804982C4[] = "IG_MATH_MATRIX_DECOMPOSITION_ROTATE_Z";
char lbl_804982EC[] = "IG_MATH_MATRIX_DECOMPOSITION_SCALE_X";
char lbl_80498314[] = "IG_MATH_MATRIX_DECOMPOSITION_SCALE_Y";
char lbl_8049833C[] = "IG_MATH_MATRIX_DECOMPOSITION_SCALE_Z";
char lbl_80498364[] = "IG_MATH_MATRIX_DECOMPOSITION_SHEAR_XY";
char lbl_8049838C[] = "IG_MATH_MATRIX_DECOMPOSITION_SHEAR_XZ";
char lbl_804983B4[] = "IG_MATH_MATRIX_DECOMPOSITION_SHEAR_YZ";
void *lbl_804983DC[24] = {(void *)lbl_804981F0, (void *)lbl_8049821C, (void *)lbl_80498248, (void *)lbl_80498274, (void *)lbl_8049829C, (void *)lbl_804982C4, (void *)lbl_804982EC, (void *)lbl_80498314, (void *)lbl_8049833C, (void *)lbl_80498364, (void *)lbl_8049838C, (void *)lbl_804983B4, 0, (void *)0x1, (void *)0x2, (void *)0x3, (void *)0x4, (void *)0x5, (void *)0x6, (void *)0x7, (void *)0x8, (void *)0x9, (void *)0xA, (void *)0xB};
char lbl_8049843C[] = "IG_MATH_MATRIX_DECOMPOSITION";
char lbl_8049845C[] = "IG_MATH_COLORSPACE_FORMAT_ABGR";
char lbl_8049847C[] = "IG_MATH_COLORSPACE_FORMAT_RGBA";
char lbl_8049849C[] = "IG_MATH_COLORSPACE_FORMAT_ARGB";
char lbl_804984BC[] = "IG_MATH_COLORSPACE_FORMAT_BGR";
char lbl_804984DC[] = "IG_MATH_COLORSPACE_FORMAT_RGB";
char lbl_804984FC[] = "IG_MATH_COLORSPACE_FORMAT_HSV";
char lbl_8049851C[] = "IG_MATH_COLORSPACE_FORMAT_BGRA";
void *lbl_8049853C[14] = {(void *)lbl_8049845C, (void *)lbl_8049847C, (void *)lbl_8049849C, (void *)lbl_804984BC, (void *)lbl_804984DC, (void *)lbl_804984FC, (void *)lbl_8049851C, 0, (void *)0x1, (void *)0x2, (void *)0x3, (void *)0x4, (void *)0x5, (void *)0x6};
char lbl_80498574[] = "IG_MATH_COLORSPACE_FORMAT";
char lbl_80498590[] = "IG_MATH_PLANAR_REGION_XP_YP";
char lbl_804985AC[] = "IG_MATH_PLANAR_REGION_XP_YN";
char lbl_804985C8[] = "IG_MATH_PLANAR_REGION_XN_YP";
char lbl_804985E4[] = "IG_MATH_PLANAR_REGION_XN_YN";
void *lbl_80498600[8] = {(void *)lbl_80498590, (void *)lbl_804985AC, (void *)lbl_804985C8, (void *)lbl_804985E4, 0, (void *)0x1, (void *)0x2, (void *)0x3};
char lbl_80498620[] = "IG_MATH_PLANAR_REGION";
char lbl_80498638[] = "IG_MATH_SPATIAL_REGION_XP_YP_ZP";
char lbl_80498658[] = "IG_MATH_SPATIAL_REGION_XP_YP_ZN";
char lbl_80498678[] = "IG_MATH_SPATIAL_REGION_XP_YN_ZP";
char lbl_80498698[] = "IG_MATH_SPATIAL_REGION_XP_YN_ZN";
char lbl_804986B8[] = "IG_MATH_SPATIAL_REGION_XN_YP_ZP";
char lbl_804986D8[] = "IG_MATH_SPATIAL_REGION_XN_YP_ZN";
char lbl_804986F8[] = "IG_MATH_SPATIAL_REGION_XN_YN_ZP";
char lbl_80498718[] = "IG_MATH_SPATIAL_REGION_XN_YN_ZN";
void *lbl_80498738[16] = {(void *)lbl_80498638, (void *)lbl_80498658, (void *)lbl_80498678, (void *)lbl_80498698, (void *)lbl_804986B8, (void *)lbl_804986D8, (void *)lbl_804986F8, (void *)lbl_80498718, 0, (void *)0x1, (void *)0x2, (void *)0x3, (void *)0x4, (void *)0x5, (void *)0x6, (void *)0x7};
char lbl_80498778[] = "IG_MATH_SPATIAL_REGION";
char lbl_80498790[] = "IG_MATH_CONTAINMENT_RESULTS_NONE";
char lbl_804987B4[] = "IG_MATH_CONTAINMENT_RESULTS_PARTIAL";
char lbl_804987D8[] = "IG_MATH_CONTAINMENT_RESULTS_ALL";
void *lbl_804987F8[6] = {(void *)lbl_80498790, (void *)lbl_804987B4, (void *)lbl_804987D8, 0, (void *)0x1, (void *)0x2};
char lbl_80498810[] = "IG_MATH_CONTAINMENT_RESULTS";
char igVolume_className[] = "igVolume";
char igVolumeList_className[] = "igVolumeList";
char igVectorMorphing_className[] = "igVectorMorphing";
char igVectorBlending_className[] = "igVectorBlending";
char igVec4ucMetaField_className[] = "igVec4ucMetaField";
char lbl_80498884[] = "igVec4ucArrayMetaField";
char igVec4fMetaField_className[] = "igVec4fMetaField";
char igVec4fArrayMetaField_className[] = "igVec4fArrayMetaField";
char igVec4dMetaField_className[] = "igVec4dMetaField";
char lbl_804988DC[] = "igVec4dArrayMetaField";
char igVec3ucMetaField_className[] = "igVec3ucMetaField";
char lbl_80498908[] = "igVec3ucArrayMetaField";
char igVec3fMetaField_className[] = "igVec3fMetaField";
char lbl_80498934[] = "igVec3fArrayMetaField";
char igVec3dMetaField_className[] = "igVec3dMetaField";
char lbl_80498960[] = "igVec3dArrayMetaField";
char igVec2fMetaField_className[] = "igVec2fMetaField";
char lbl_8049898C[] = "igVec2fArrayMetaField";
char igVec2dMetaField_className[] = "igVec2dMetaField";
char lbl_804989B8[] = "igVec2dArrayMetaField";
char igSphere_className[] = "igSphere";
char igRayList_className[] = "igRayList";
char lbl_804989E8[] = "FRONT_SIDE";
char lbl_804989F4[] = "BACK_SIDE";
char lbl_80498A00[] = "BOTH_SIDES";
void *lbl_80498A0C[6] = {(void *)lbl_804989E8, (void *)lbl_804989F4, (void *)lbl_80498A00, 0, (void *)0x1, (void *)0x2};
char lbl_80498A24[] = "ISET_SIDES";
void *igRay_fieldTypes[3] = {(void *)igVec3fMetaField_create, (void *)igVec3fMetaField_create, (void *)igFloatMetaField_create};
void *igRay_fieldNames[3] = {(void *)lbl_8055F3A0, (void *)lbl_8055F3A8, (void *)lbl_8055F3B0};
void *igRay_fieldStorage[3] = {(void *)lbl_80563970, (void *)lbl_80563974, (void *)lbl_80563978};
void *igRay_fieldOffsets[3] = {(void *)0x8, (void *)0x14, (void *)0x20};
void *igPlane_fieldTypes[3] = {(void *)igVec3fMetaField_create, (void *)igFloatMetaField_create, (void *)fn_80031378};
void *igPlane_fieldNames[3] = {(void *)lbl_8055F3C0, (void *)lbl_8055F3C8, (void *)lbl_8055F3D0};
void *igPlane_fieldStorage[3] = {(void *)lbl_80563980, (void *)lbl_80563984, (void *)lbl_80563988};
void *igPlane_fieldOffsets[3] = {(void *)0x8, (void *)0x14, (void *)0x18};
}

namespace unknown8011D870 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern void *lbl_805638C0;
}
extern "C" {
void *fn_8011D870(){
 char *data=lbl_804981F0;
 if(!lbl_805638C0) lbl_805638C0=fn_800635C8(data+0x588,data+0x548,data+0x568,0x8);
 return lbl_805638C0;
}
}
#pragma pop
}

namespace unknown8011D8BC {
#pragma push
#pragma auto_inline off
extern "C" {
void *igVectorMorphing_arkRegister();
void *igVectorBlending_arkRegister();
void fn_8012859C();
extern char lbl_805638C4[1];
extern char lbl_805638C5[1];
}
extern "C" {
void fn_8011D8BC(){
 void *value0;
 void *value1;
 if((int)*reinterpret_cast<signed char *>((lbl_805638C5+0))==0){
  *reinterpret_cast<unsigned char *>((lbl_805638C4+0))=0;
  *reinterpret_cast<unsigned char *>((lbl_805638C5+0))=1;
 }
 if(!(void *)(int)*reinterpret_cast<unsigned char *>((lbl_805638C4+0))){
  *reinterpret_cast<unsigned char *>((lbl_805638C4+0))=1;
  value0=igVectorMorphing_arkRegister();
  value1=igVectorBlending_arkRegister();
  fn_8012859C();
  return;
 } else {
  return;
 }
}
}
#pragma pop
}

namespace unknown8011D914 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80021D70();
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void fn_80053650(void *,int);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void fn_800638E0(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void fn_80065D94(int);
void fn_80065DBC(int);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8011D8BC();
void *fn_8011F74C();
void *fn_8012705C();
void *fn_80127270();
void fn_8012728C();
void fn_80127368(int);
void *fn_80127910();
void igMetaField_register();
void igObjectList_register();
void igObject_register();
void igSphere_fieldInit();
extern char lbl_80471914[];
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igVec4ucMetaField_vtable[];
extern char igVec4fMetaField_vtable[];
extern char igVec4fArrayMetaField_vtable[];
extern char igVec4dMetaField_vtable[];
extern char igVec3ucMetaField_vtable[];
extern char igVec3fMetaField_vtable[];
extern char igVec3dMetaField_vtable[];
extern char igVec2fMetaField_vtable[];
extern char igVec2dMetaField_vtable[];
extern char igSphere_vtable[];
extern char lbl_8049B9DC[];
extern char igVectorBlending_vtable[];
extern char igVectorMorphing_vtable[];
extern char igVolumeList_vtable[];
extern char lbl_8049BB54[];
extern char igVolumeList_dependencies[8];
extern char igVec4ucMetaField_dependencies[8];
extern char igVec4fMetaField_dependencies[8];
extern char igVec4fArrayMetaField_dependencies[8];
extern char igVec4fArrayMetaField_fieldTypes[4];
extern char igVec4fArrayMetaField_fieldNames[4];
extern char igVec4fArrayMetaField_fieldStorage[4];
extern char igVec4fArrayMetaField_fieldOffsets[4];
extern char igVec4dMetaField_dependencies[8];
extern char igVec3ucMetaField_dependencies[8];
extern char igVec3fMetaField_dependencies[8];
extern char igVec3dMetaField_dependencies[8];
extern char igVec2fMetaField_dependencies[8];
extern char igVec2dMetaField_dependencies[8];
extern void *lbl_805621F4;
extern void *igVolume_meta;
extern void *igVolumeList_meta;
extern void *igVectorMorphing_meta;
extern void *igVectorBlending_meta;
extern void *igVec4ucMetaField_meta;
extern void *lbl_805638DC;
extern void *igVec4fMetaField_meta;
extern void *lbl_805638EC;
extern void *igVec4fArrayMetaField_meta;
extern void *lbl_805638F4;
extern void *igVec4dMetaField_meta;
extern void *lbl_80563900;
extern void *igVec3ucMetaField_meta;
extern void *lbl_80563910;
extern void *igVec3fMetaField_meta;
extern void *lbl_80563920;
extern void *igVec3dMetaField_meta;
extern void *lbl_80563930;
extern void *igVec2fMetaField_meta;
extern void *lbl_80563940;
extern void *igVec2dMetaField_meta;
extern void *lbl_80563950;
extern void *igSphere_meta;
void *igVolume_getMeta();
void igVolume_arkRegister();
void igVolume_register();
void *igVolume_getMetaCall();
void fn_8011DA48();
void fn_8011DA70();
void *fn_8011DA9C();
void *igVolumeList_getMeta();
void *igVolumeList_vtableRead();
void igVolumeList_arkRegister();
void igVolumeList_register();
void *igVolumeList_getMetaCall();
void *igVectorMorphing_getMeta();
void *igVectorMorphing_vtableRead();
void igVectorMorphing_arkRegister();
void igVectorMorphing_register();
void *igVectorMorphing_getMetaCall();
void *fn_8011DDC4();
void *igVectorBlending_getMeta();
void *igVectorBlending_vtableRead();
void igVectorBlending_arkRegister();
void igVectorBlending_register();
void *igVectorBlending_getMetaCall();
void *fn_8011DF18();
void *igVec4ucMetaField_getMeta();
void *igVec4ucMetaField_vtableRead();
void igVec4ucMetaField_arkRegister();
void igVec4ucMetaField_register();
void *igVec4ucMetaField_getMetaCall();
void *igVec4fMetaField_getMeta();
void *igVec4fMetaField_vtableRead();
void igVec4fMetaField_arkRegister();
void igVec4fMetaField_register();
void *igVec4fMetaField_getMetaCall();
void *igVec4fArrayMetaField_getMeta();
void *igVec4fArrayMetaField_vtableRead();
void igVec4fArrayMetaField_arkRegister();
void igVec4fArrayMetaField_register();
void *igVec4fArrayMetaField_getMetaCall();
void *igVec4fArrayMetaField_parentMeta();
void igVec4fArrayMetaField_fieldInit();
void *igVec4dMetaField_getMeta();
void *igVec4dMetaField_vtableRead();
void igVec4dMetaField_arkRegister();
void igVec4dMetaField_register();
void *igVec4dMetaField_getMetaCall();
void *igVec3ucMetaField_getMeta();
void *igVec3ucMetaField_vtableRead();
void igVec3ucMetaField_arkRegister();
void igVec3ucMetaField_register();
void *igVec3ucMetaField_getMetaCall();
void *igVec3fMetaField_getMeta();
void *igVec3fMetaField_vtableRead();
void igVec3fMetaField_arkRegister();
void igVec3fMetaField_register();
void *igVec3fMetaField_getMetaCall();
void *igVec3dMetaField_getMeta();
void *igVec3dMetaField_vtableRead();
void igVec3dMetaField_arkRegister();
void igVec3dMetaField_register();
void *igVec3dMetaField_getMetaCall();
void *igVec2fMetaField_getMeta();
void *igVec2fMetaField_vtableRead();
void igVec2fMetaField_arkRegister();
void igVec2fMetaField_register();
void *igVec2fMetaField_getMetaCall();
void *igVec2dMetaField_getMeta();
void *igVec2dMetaField_vtableRead();
void igVec2dMetaField_arkRegister();
void igVec2dMetaField_register();
void *igVec2dMetaField_getMetaCall();
void *igSphere_getMeta();
void *igSphere_vtableRead();
void igSphere_arkRegister();
void igSphere_register();
void *igSphere_getMetaCall();
void *fn_8011F6A4();
}
struct UnknownGenObject8011DB6C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8011DCCC_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenObject8011DE20_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenRoot8011DF74 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011DF74(){fn_800638E0(this);}
};
struct UnknownGenObject8011DF74_0 : UnknownGenRoot8011DF74 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011DF74_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011DF74 : UnknownGenObject8011DF74_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011DF74(){unknown00=igVec4ucMetaField_vtable;}
};
struct UnknownGenRoot8011E1F0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E1F0(){fn_800638E0(this);}
};
struct UnknownGenObject8011E1F0_0 : UnknownGenRoot8011E1F0 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E1F0_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E1F0 : UnknownGenObject8011E1F0_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011E1F0(){unknown00=igVec4fMetaField_vtable;}
};
struct UnknownGenRoot8011E46C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E46C(){fn_800638E0(this);}
};
struct UnknownGenObject8011E46C_0 : UnknownGenRoot8011E46C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E46C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E46C_1 : UnknownGenObject8011E46C_0 {
 inline ~UnknownGenObject8011E46C_1(){unknown00=igVec4fMetaField_vtable;}
};
struct UnknownGenObject8011E46C : UnknownGenObject8011E46C_1 {
 char unknown10[48];
 inline ~UnknownGenObject8011E46C(){unknown00=igVec4fArrayMetaField_vtable;}
};
struct UnknownGenRoot8011E71C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E71C(){fn_800638E0(this);}
};
struct UnknownGenObject8011E71C_0 : UnknownGenRoot8011E71C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E71C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E71C : UnknownGenObject8011E71C_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011E71C(){unknown00=igVec4dMetaField_vtable;}
};
struct UnknownGenRoot8011E960 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E960(){fn_800638E0(this);}
};
struct UnknownGenObject8011E960_0 : UnknownGenRoot8011E960 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E960_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E960 : UnknownGenObject8011E960_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011E960(){unknown00=igVec3ucMetaField_vtable;}
};
struct UnknownGenRoot8011EBDC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011EBDC(){fn_800638E0(this);}
};
struct UnknownGenObject8011EBDC_0 : UnknownGenRoot8011EBDC {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011EBDC_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011EBDC : UnknownGenObject8011EBDC_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011EBDC(){unknown00=igVec3fMetaField_vtable;}
};
struct UnknownGenRoot8011EE20 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011EE20(){fn_800638E0(this);}
};
struct UnknownGenObject8011EE20_0 : UnknownGenRoot8011EE20 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011EE20_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011EE20 : UnknownGenObject8011EE20_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011EE20(){unknown00=igVec3dMetaField_vtable;}
};
struct UnknownGenRoot8011F09C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011F09C(){fn_800638E0(this);}
};
struct UnknownGenObject8011F09C_0 : UnknownGenRoot8011F09C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011F09C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011F09C : UnknownGenObject8011F09C_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011F09C(){unknown00=igVec2fMetaField_vtable;}
};
struct UnknownGenRoot8011F2E0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011F2E0(){fn_800638E0(this);}
};
struct UnknownGenObject8011F2E0_0 : UnknownGenRoot8011F2E0 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011F2E0_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011F2E0 : UnknownGenObject8011F2E0_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011F2E0(){unknown00=igVec2dMetaField_vtable;}
};
struct UnknownGenObject8011F598_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_8011D914(){
 if(!igVolume_meta) igVolume_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igVolume_meta;
}
}
#pragma pop
}

namespace igVolume {
// igVolume: Alchemy class registration (0x8011D950..0x8011DA48). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igVolume)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_8011D8BC();
void fn_8011DA48();
void fn_8011DA70();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igVolume)

META_ARK_REGISTER(igVolume)

void igVolume_register()
{
    fn_8011D8BC();
    meta_registerClass(1, &igVolume_meta, igObject_register,
                       fn_800237D0, igVolume_getMetaCall,
                       igVolume_className, 0x8,
                       0, fn_8011DA48, fn_8011DA70, 0);
}

META_GET_META_CALL(igVolume)

}
#pragma pop
}

namespace unknown8011DA48 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80021D70();
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void fn_80053650(void *,int);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void fn_800638E0(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void fn_80065D94(int);
void fn_80065DBC(int);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8011D8BC();
void *fn_8011F74C();
void *fn_8012705C();
void *fn_80127270();
void fn_8012728C();
void fn_80127368(int);
void *fn_80127910();
void igMetaField_register();
void igObjectList_register();
void igObject_register();
void igSphere_fieldInit();
extern char lbl_80471914[];
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igVec4ucMetaField_vtable[];
extern char igVec4fMetaField_vtable[];
extern char igVec4fArrayMetaField_vtable[];
extern char igVec4dMetaField_vtable[];
extern char igVec3ucMetaField_vtable[];
extern char igVec3fMetaField_vtable[];
extern char igVec3dMetaField_vtable[];
extern char igVec2fMetaField_vtable[];
extern char igVec2dMetaField_vtable[];
extern char igSphere_vtable[];
extern char lbl_8049B9DC[];
extern char igVectorBlending_vtable[];
extern char igVectorMorphing_vtable[];
extern char igVolumeList_vtable[];
extern char lbl_8049BB54[];
extern char igVolumeList_dependencies[8];
extern char igVec4ucMetaField_dependencies[8];
extern char igVec4fMetaField_dependencies[8];
extern char igVec4fArrayMetaField_dependencies[8];
extern char igVec4fArrayMetaField_fieldTypes[4];
extern char igVec4fArrayMetaField_fieldNames[4];
extern char igVec4fArrayMetaField_fieldStorage[4];
extern char igVec4fArrayMetaField_fieldOffsets[4];
extern char igVec4dMetaField_dependencies[8];
extern char igVec3ucMetaField_dependencies[8];
extern char igVec3fMetaField_dependencies[8];
extern char igVec3dMetaField_dependencies[8];
extern char igVec2fMetaField_dependencies[8];
extern char igVec2dMetaField_dependencies[8];
extern void *lbl_805621F4;
extern void *igVolume_meta;
extern void *igVolumeList_meta;
extern void *igVectorMorphing_meta;
extern void *igVectorBlending_meta;
extern void *igVec4ucMetaField_meta;
extern void *lbl_805638DC;
extern void *igVec4fMetaField_meta;
extern void *lbl_805638EC;
extern void *igVec4fArrayMetaField_meta;
extern void *lbl_805638F4;
extern void *igVec4dMetaField_meta;
extern void *lbl_80563900;
extern void *igVec3ucMetaField_meta;
extern void *lbl_80563910;
extern void *igVec3fMetaField_meta;
extern void *lbl_80563920;
extern void *igVec3dMetaField_meta;
extern void *lbl_80563930;
extern void *igVec2fMetaField_meta;
extern void *lbl_80563940;
extern void *igVec2dMetaField_meta;
extern void *lbl_80563950;
extern void *igSphere_meta;
void *igVolume_getMeta();
void igVolume_arkRegister();
void igVolume_register();
void *igVolume_getMetaCall();
void fn_8011DA48();
void fn_8011DA70();
void *fn_8011DA9C();
void *igVolumeList_getMeta();
void *igVolumeList_vtableRead();
void igVolumeList_arkRegister();
void igVolumeList_register();
void *igVolumeList_getMetaCall();
void *igVectorMorphing_getMeta();
void *igVectorMorphing_vtableRead();
void igVectorMorphing_arkRegister();
void igVectorMorphing_register();
void *igVectorMorphing_getMetaCall();
void *fn_8011DDC4();
void *igVectorBlending_getMeta();
void *igVectorBlending_vtableRead();
void igVectorBlending_arkRegister();
void igVectorBlending_register();
void *igVectorBlending_getMetaCall();
void *fn_8011DF18();
void *igVec4ucMetaField_getMeta();
void *igVec4ucMetaField_vtableRead();
void igVec4ucMetaField_arkRegister();
void igVec4ucMetaField_register();
void *igVec4ucMetaField_getMetaCall();
void *igVec4fMetaField_getMeta();
void *igVec4fMetaField_vtableRead();
void igVec4fMetaField_arkRegister();
void igVec4fMetaField_register();
void *igVec4fMetaField_getMetaCall();
void *igVec4fArrayMetaField_getMeta();
void *igVec4fArrayMetaField_vtableRead();
void igVec4fArrayMetaField_arkRegister();
void igVec4fArrayMetaField_register();
void *igVec4fArrayMetaField_getMetaCall();
void *igVec4fArrayMetaField_parentMeta();
void igVec4fArrayMetaField_fieldInit();
void *igVec4dMetaField_getMeta();
void *igVec4dMetaField_vtableRead();
void igVec4dMetaField_arkRegister();
void igVec4dMetaField_register();
void *igVec4dMetaField_getMetaCall();
void *igVec3ucMetaField_getMeta();
void *igVec3ucMetaField_vtableRead();
void igVec3ucMetaField_arkRegister();
void igVec3ucMetaField_register();
void *igVec3ucMetaField_getMetaCall();
void *igVec3fMetaField_getMeta();
void *igVec3fMetaField_vtableRead();
void igVec3fMetaField_arkRegister();
void igVec3fMetaField_register();
void *igVec3fMetaField_getMetaCall();
void *igVec3dMetaField_getMeta();
void *igVec3dMetaField_vtableRead();
void igVec3dMetaField_arkRegister();
void igVec3dMetaField_register();
void *igVec3dMetaField_getMetaCall();
void *igVec2fMetaField_getMeta();
void *igVec2fMetaField_vtableRead();
void igVec2fMetaField_arkRegister();
void igVec2fMetaField_register();
void *igVec2fMetaField_getMetaCall();
void *igVec2dMetaField_getMeta();
void *igVec2dMetaField_vtableRead();
void igVec2dMetaField_arkRegister();
void igVec2dMetaField_register();
void *igVec2dMetaField_getMetaCall();
void *igSphere_getMeta();
void *igSphere_vtableRead();
void igSphere_arkRegister();
void igSphere_register();
void *igSphere_getMetaCall();
void *fn_8011F6A4();
}
struct UnknownGenObject8011DB6C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8011DCCC_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenObject8011DE20_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenRoot8011DF74 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011DF74(){fn_800638E0(this);}
};
struct UnknownGenObject8011DF74_0 : UnknownGenRoot8011DF74 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011DF74_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011DF74 : UnknownGenObject8011DF74_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011DF74(){unknown00=igVec4ucMetaField_vtable;}
};
struct UnknownGenRoot8011E1F0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E1F0(){fn_800638E0(this);}
};
struct UnknownGenObject8011E1F0_0 : UnknownGenRoot8011E1F0 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E1F0_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E1F0 : UnknownGenObject8011E1F0_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011E1F0(){unknown00=igVec4fMetaField_vtable;}
};
struct UnknownGenRoot8011E46C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E46C(){fn_800638E0(this);}
};
struct UnknownGenObject8011E46C_0 : UnknownGenRoot8011E46C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E46C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E46C_1 : UnknownGenObject8011E46C_0 {
 inline ~UnknownGenObject8011E46C_1(){unknown00=igVec4fMetaField_vtable;}
};
struct UnknownGenObject8011E46C : UnknownGenObject8011E46C_1 {
 char unknown10[48];
 inline ~UnknownGenObject8011E46C(){unknown00=igVec4fArrayMetaField_vtable;}
};
struct UnknownGenRoot8011E71C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E71C(){fn_800638E0(this);}
};
struct UnknownGenObject8011E71C_0 : UnknownGenRoot8011E71C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E71C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E71C : UnknownGenObject8011E71C_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011E71C(){unknown00=igVec4dMetaField_vtable;}
};
struct UnknownGenRoot8011E960 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E960(){fn_800638E0(this);}
};
struct UnknownGenObject8011E960_0 : UnknownGenRoot8011E960 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E960_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E960 : UnknownGenObject8011E960_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011E960(){unknown00=igVec3ucMetaField_vtable;}
};
struct UnknownGenRoot8011EBDC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011EBDC(){fn_800638E0(this);}
};
struct UnknownGenObject8011EBDC_0 : UnknownGenRoot8011EBDC {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011EBDC_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011EBDC : UnknownGenObject8011EBDC_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011EBDC(){unknown00=igVec3fMetaField_vtable;}
};
struct UnknownGenRoot8011EE20 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011EE20(){fn_800638E0(this);}
};
struct UnknownGenObject8011EE20_0 : UnknownGenRoot8011EE20 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011EE20_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011EE20 : UnknownGenObject8011EE20_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011EE20(){unknown00=igVec3dMetaField_vtable;}
};
struct UnknownGenRoot8011F09C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011F09C(){fn_800638E0(this);}
};
struct UnknownGenObject8011F09C_0 : UnknownGenRoot8011F09C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011F09C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011F09C : UnknownGenObject8011F09C_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011F09C(){unknown00=igVec2fMetaField_vtable;}
};
struct UnknownGenRoot8011F2E0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011F2E0(){fn_800638E0(this);}
};
struct UnknownGenObject8011F2E0_0 : UnknownGenRoot8011F2E0 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011F2E0_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011F2E0 : UnknownGenObject8011F2E0_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011F2E0(){unknown00=igVec2dMetaField_vtable;}
};
struct UnknownGenObject8011F598_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void fn_8011DA48(){
 fn_80065D94((int)fn_8011DA9C);
}
void fn_8011DA70(){
 fn_8012728C();
 fn_80065DBC((int)fn_80127368);
}
void *fn_8011DA9C(){return fn_80127910();}
}
#pragma pop
}

namespace igVolumeList {
// igVolumeList: Alchemy class registration (0x8011DABC..0x8011DAF4). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igVolumeList)

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igVolumeList)

}
#pragma pop
}

namespace unknown8011DAF4 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80021D70();
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void fn_80053650(void *,int);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void fn_800638E0(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void fn_80065D94(int);
void fn_80065DBC(int);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8011D8BC();
void *fn_8011F74C();
void *fn_8012705C();
void *fn_80127270();
void fn_8012728C();
void fn_80127368(int);
void *fn_80127910();
void igMetaField_register();
void igObjectList_register();
void igObject_register();
void igSphere_fieldInit();
extern char lbl_80471914[];
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igVec4ucMetaField_vtable[];
extern char igVec4fMetaField_vtable[];
extern char igVec4fArrayMetaField_vtable[];
extern char igVec4dMetaField_vtable[];
extern char igVec3ucMetaField_vtable[];
extern char igVec3fMetaField_vtable[];
extern char igVec3dMetaField_vtable[];
extern char igVec2fMetaField_vtable[];
extern char igVec2dMetaField_vtable[];
extern char igSphere_vtable[];
extern char lbl_8049B9DC[];
extern char igVectorBlending_vtable[];
extern char igVectorMorphing_vtable[];
extern char igVolumeList_vtable[];
extern char lbl_8049BB54[];
extern char igVolumeList_dependencies[8];
extern char igVec4ucMetaField_dependencies[8];
extern char igVec4fMetaField_dependencies[8];
extern char igVec4fArrayMetaField_dependencies[8];
extern char igVec4fArrayMetaField_fieldTypes[4];
extern char igVec4fArrayMetaField_fieldNames[4];
extern char igVec4fArrayMetaField_fieldStorage[4];
extern char igVec4fArrayMetaField_fieldOffsets[4];
extern char igVec4dMetaField_dependencies[8];
extern char igVec3ucMetaField_dependencies[8];
extern char igVec3fMetaField_dependencies[8];
extern char igVec3dMetaField_dependencies[8];
extern char igVec2fMetaField_dependencies[8];
extern char igVec2dMetaField_dependencies[8];
extern void *lbl_805621F4;
extern void *igVolume_meta;
extern void *igVolumeList_meta;
extern void *igVectorMorphing_meta;
extern void *igVectorBlending_meta;
extern void *igVec4ucMetaField_meta;
extern void *lbl_805638DC;
extern void *igVec4fMetaField_meta;
extern void *lbl_805638EC;
extern void *igVec4fArrayMetaField_meta;
extern void *lbl_805638F4;
extern void *igVec4dMetaField_meta;
extern void *lbl_80563900;
extern void *igVec3ucMetaField_meta;
extern void *lbl_80563910;
extern void *igVec3fMetaField_meta;
extern void *lbl_80563920;
extern void *igVec3dMetaField_meta;
extern void *lbl_80563930;
extern void *igVec2fMetaField_meta;
extern void *lbl_80563940;
extern void *igVec2dMetaField_meta;
extern void *lbl_80563950;
extern void *igSphere_meta;
void *igVolume_getMeta();
void igVolume_arkRegister();
void igVolume_register();
void *igVolume_getMetaCall();
void fn_8011DA48();
void fn_8011DA70();
void *fn_8011DA9C();
void *igVolumeList_getMeta();
void *igVolumeList_vtableRead();
void igVolumeList_arkRegister();
void igVolumeList_register();
void *igVolumeList_getMetaCall();
void *igVectorMorphing_getMeta();
void *igVectorMorphing_vtableRead();
void igVectorMorphing_arkRegister();
void igVectorMorphing_register();
void *igVectorMorphing_getMetaCall();
void *fn_8011DDC4();
void *igVectorBlending_getMeta();
void *igVectorBlending_vtableRead();
void igVectorBlending_arkRegister();
void igVectorBlending_register();
void *igVectorBlending_getMetaCall();
void *fn_8011DF18();
void *igVec4ucMetaField_getMeta();
void *igVec4ucMetaField_vtableRead();
void igVec4ucMetaField_arkRegister();
void igVec4ucMetaField_register();
void *igVec4ucMetaField_getMetaCall();
void *igVec4fMetaField_getMeta();
void *igVec4fMetaField_vtableRead();
void igVec4fMetaField_arkRegister();
void igVec4fMetaField_register();
void *igVec4fMetaField_getMetaCall();
void *igVec4fArrayMetaField_getMeta();
void *igVec4fArrayMetaField_vtableRead();
void igVec4fArrayMetaField_arkRegister();
void igVec4fArrayMetaField_register();
void *igVec4fArrayMetaField_getMetaCall();
void *igVec4fArrayMetaField_parentMeta();
void igVec4fArrayMetaField_fieldInit();
void *igVec4dMetaField_getMeta();
void *igVec4dMetaField_vtableRead();
void igVec4dMetaField_arkRegister();
void igVec4dMetaField_register();
void *igVec4dMetaField_getMetaCall();
void *igVec3ucMetaField_getMeta();
void *igVec3ucMetaField_vtableRead();
void igVec3ucMetaField_arkRegister();
void igVec3ucMetaField_register();
void *igVec3ucMetaField_getMetaCall();
void *igVec3fMetaField_getMeta();
void *igVec3fMetaField_vtableRead();
void igVec3fMetaField_arkRegister();
void igVec3fMetaField_register();
void *igVec3fMetaField_getMetaCall();
void *igVec3dMetaField_getMeta();
void *igVec3dMetaField_vtableRead();
void igVec3dMetaField_arkRegister();
void igVec3dMetaField_register();
void *igVec3dMetaField_getMetaCall();
void *igVec2fMetaField_getMeta();
void *igVec2fMetaField_vtableRead();
void igVec2fMetaField_arkRegister();
void igVec2fMetaField_register();
void *igVec2fMetaField_getMetaCall();
void *igVec2dMetaField_getMeta();
void *igVec2dMetaField_vtableRead();
void igVec2dMetaField_arkRegister();
void igVec2dMetaField_register();
void *igVec2dMetaField_getMetaCall();
void *igSphere_getMeta();
void *igSphere_vtableRead();
void igSphere_arkRegister();
void igSphere_register();
void *igSphere_getMetaCall();
void *fn_8011F6A4();
}
struct UnknownGenObject8011DB6C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8011DCCC_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenObject8011DE20_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenRoot8011DF74 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011DF74(){fn_800638E0(this);}
};
struct UnknownGenObject8011DF74_0 : UnknownGenRoot8011DF74 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011DF74_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011DF74 : UnknownGenObject8011DF74_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011DF74(){unknown00=igVec4ucMetaField_vtable;}
};
struct UnknownGenRoot8011E1F0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E1F0(){fn_800638E0(this);}
};
struct UnknownGenObject8011E1F0_0 : UnknownGenRoot8011E1F0 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E1F0_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E1F0 : UnknownGenObject8011E1F0_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011E1F0(){unknown00=igVec4fMetaField_vtable;}
};
struct UnknownGenRoot8011E46C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E46C(){fn_800638E0(this);}
};
struct UnknownGenObject8011E46C_0 : UnknownGenRoot8011E46C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E46C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E46C_1 : UnknownGenObject8011E46C_0 {
 inline ~UnknownGenObject8011E46C_1(){unknown00=igVec4fMetaField_vtable;}
};
struct UnknownGenObject8011E46C : UnknownGenObject8011E46C_1 {
 char unknown10[48];
 inline ~UnknownGenObject8011E46C(){unknown00=igVec4fArrayMetaField_vtable;}
};
struct UnknownGenRoot8011E71C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E71C(){fn_800638E0(this);}
};
struct UnknownGenObject8011E71C_0 : UnknownGenRoot8011E71C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E71C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E71C : UnknownGenObject8011E71C_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011E71C(){unknown00=igVec4dMetaField_vtable;}
};
struct UnknownGenRoot8011E960 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E960(){fn_800638E0(this);}
};
struct UnknownGenObject8011E960_0 : UnknownGenRoot8011E960 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E960_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E960 : UnknownGenObject8011E960_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011E960(){unknown00=igVec3ucMetaField_vtable;}
};
struct UnknownGenRoot8011EBDC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011EBDC(){fn_800638E0(this);}
};
struct UnknownGenObject8011EBDC_0 : UnknownGenRoot8011EBDC {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011EBDC_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011EBDC : UnknownGenObject8011EBDC_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011EBDC(){unknown00=igVec3fMetaField_vtable;}
};
struct UnknownGenRoot8011EE20 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011EE20(){fn_800638E0(this);}
};
struct UnknownGenObject8011EE20_0 : UnknownGenRoot8011EE20 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011EE20_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011EE20 : UnknownGenObject8011EE20_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011EE20(){unknown00=igVec3dMetaField_vtable;}
};
struct UnknownGenRoot8011F09C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011F09C(){fn_800638E0(this);}
};
struct UnknownGenObject8011F09C_0 : UnknownGenRoot8011F09C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011F09C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011F09C : UnknownGenObject8011F09C_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011F09C(){unknown00=igVec2fMetaField_vtable;}
};
struct UnknownGenRoot8011F2E0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011F2E0(){fn_800638E0(this);}
};
struct UnknownGenObject8011F2E0_0 : UnknownGenRoot8011F2E0 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011F2E0_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011F2E0 : UnknownGenObject8011F2E0_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011F2E0(){unknown00=igVec2dMetaField_vtable;}
};
struct UnknownGenObject8011F598_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_8011DAF4(){
 if(!igVolumeList_meta) igVolumeList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igVolumeList_meta;
}
}
#pragma pop
}

namespace igVolumeList_2 {
// igVolumeList: Alchemy class registration (0x8011DB30..0x8011DC90). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igVolumeList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_8011D8BC();
extern char igVolumeList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_8049BB54[];
}

struct Instance_8011DB6C_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igVolumeList)

void *igVolumeList_vtableRead()
{
    Instance_8011DB6C_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_8049BB54;
    object.__vtable = igVolumeList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igVolumeList)

void igVolumeList_register()
{
    fn_8011D8BC();
    meta_registerClass(0, &igVolumeList_meta, igObjectList_register,
                       fn_80024180, igVolumeList_getMetaCall,
                       igVolumeList_className, 0x14,
                       igVolumeList_vtableRead, 0, 0, igVolumeList_dependencies);
}

META_GET_META_CALL(igVolumeList)

}
#pragma pop
}

namespace igVectorMorphing {
// igVectorMorphing: Alchemy class registration (0x8011DC90..0x8011DDC4). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igVectorMorphing)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_8011D8BC();
void fn_8011DDC4();
}

struct Instance_8011DCCC_0 {
    void *__vtable;
    char unknown04[4];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igVectorMorphing)

void *igVectorMorphing_vtableRead()
{
    Instance_8011DCCC_0 object;
    igObject_construct(&object);
    object.__vtable = igVectorMorphing_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igVectorMorphing)

void igVectorMorphing_register()
{
    fn_8011D8BC();
    meta_registerClass(0, &igVectorMorphing_meta, igObject_register,
                       fn_800237D0, igVectorMorphing_getMetaCall,
                       igVectorMorphing_className, 0x8,
                       igVectorMorphing_vtableRead, 0, fn_8011DDC4, 0);
}

META_GET_META_CALL(igVectorMorphing)

}
#pragma pop
}

namespace unknown8011DDC4 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80021D70();
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void fn_80053650(void *,int);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void fn_800638E0(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void fn_80065D94(int);
void fn_80065DBC(int);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8011D8BC();
void *fn_8011F74C();
void *fn_8012705C();
void *fn_80127270();
void fn_8012728C();
void fn_80127368(int);
void *fn_80127910();
void igMetaField_register();
void igObjectList_register();
void igObject_register();
void igSphere_fieldInit();
extern char lbl_80471914[];
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igVec4ucMetaField_vtable[];
extern char igVec4fMetaField_vtable[];
extern char igVec4fArrayMetaField_vtable[];
extern char igVec4dMetaField_vtable[];
extern char igVec3ucMetaField_vtable[];
extern char igVec3fMetaField_vtable[];
extern char igVec3dMetaField_vtable[];
extern char igVec2fMetaField_vtable[];
extern char igVec2dMetaField_vtable[];
extern char igSphere_vtable[];
extern char lbl_8049B9DC[];
extern char igVectorBlending_vtable[];
extern char igVectorMorphing_vtable[];
extern char igVolumeList_vtable[];
extern char lbl_8049BB54[];
extern char igVolumeList_dependencies[8];
extern char igVec4ucMetaField_dependencies[8];
extern char igVec4fMetaField_dependencies[8];
extern char igVec4fArrayMetaField_dependencies[8];
extern char igVec4fArrayMetaField_fieldTypes[4];
extern char igVec4fArrayMetaField_fieldNames[4];
extern char igVec4fArrayMetaField_fieldStorage[4];
extern char igVec4fArrayMetaField_fieldOffsets[4];
extern char igVec4dMetaField_dependencies[8];
extern char igVec3ucMetaField_dependencies[8];
extern char igVec3fMetaField_dependencies[8];
extern char igVec3dMetaField_dependencies[8];
extern char igVec2fMetaField_dependencies[8];
extern char igVec2dMetaField_dependencies[8];
extern void *lbl_805621F4;
extern void *igVolume_meta;
extern void *igVolumeList_meta;
extern void *igVectorMorphing_meta;
extern void *igVectorBlending_meta;
extern void *igVec4ucMetaField_meta;
extern void *lbl_805638DC;
extern void *igVec4fMetaField_meta;
extern void *lbl_805638EC;
extern void *igVec4fArrayMetaField_meta;
extern void *lbl_805638F4;
extern void *igVec4dMetaField_meta;
extern void *lbl_80563900;
extern void *igVec3ucMetaField_meta;
extern void *lbl_80563910;
extern void *igVec3fMetaField_meta;
extern void *lbl_80563920;
extern void *igVec3dMetaField_meta;
extern void *lbl_80563930;
extern void *igVec2fMetaField_meta;
extern void *lbl_80563940;
extern void *igVec2dMetaField_meta;
extern void *lbl_80563950;
extern void *igSphere_meta;
void *igVolume_getMeta();
void igVolume_arkRegister();
void igVolume_register();
void *igVolume_getMetaCall();
void fn_8011DA48();
void fn_8011DA70();
void *fn_8011DA9C();
void *igVolumeList_getMeta();
void *igVolumeList_vtableRead();
void igVolumeList_arkRegister();
void igVolumeList_register();
void *igVolumeList_getMetaCall();
void *igVectorMorphing_getMeta();
void *igVectorMorphing_vtableRead();
void igVectorMorphing_arkRegister();
void igVectorMorphing_register();
void *igVectorMorphing_getMetaCall();
void *fn_8011DDC4();
void *igVectorBlending_getMeta();
void *igVectorBlending_vtableRead();
void igVectorBlending_arkRegister();
void igVectorBlending_register();
void *igVectorBlending_getMetaCall();
void *fn_8011DF18();
void *igVec4ucMetaField_getMeta();
void *igVec4ucMetaField_vtableRead();
void igVec4ucMetaField_arkRegister();
void igVec4ucMetaField_register();
void *igVec4ucMetaField_getMetaCall();
void *igVec4fMetaField_getMeta();
void *igVec4fMetaField_vtableRead();
void igVec4fMetaField_arkRegister();
void igVec4fMetaField_register();
void *igVec4fMetaField_getMetaCall();
void *igVec4fArrayMetaField_getMeta();
void *igVec4fArrayMetaField_vtableRead();
void igVec4fArrayMetaField_arkRegister();
void igVec4fArrayMetaField_register();
void *igVec4fArrayMetaField_getMetaCall();
void *igVec4fArrayMetaField_parentMeta();
void igVec4fArrayMetaField_fieldInit();
void *igVec4dMetaField_getMeta();
void *igVec4dMetaField_vtableRead();
void igVec4dMetaField_arkRegister();
void igVec4dMetaField_register();
void *igVec4dMetaField_getMetaCall();
void *igVec3ucMetaField_getMeta();
void *igVec3ucMetaField_vtableRead();
void igVec3ucMetaField_arkRegister();
void igVec3ucMetaField_register();
void *igVec3ucMetaField_getMetaCall();
void *igVec3fMetaField_getMeta();
void *igVec3fMetaField_vtableRead();
void igVec3fMetaField_arkRegister();
void igVec3fMetaField_register();
void *igVec3fMetaField_getMetaCall();
void *igVec3dMetaField_getMeta();
void *igVec3dMetaField_vtableRead();
void igVec3dMetaField_arkRegister();
void igVec3dMetaField_register();
void *igVec3dMetaField_getMetaCall();
void *igVec2fMetaField_getMeta();
void *igVec2fMetaField_vtableRead();
void igVec2fMetaField_arkRegister();
void igVec2fMetaField_register();
void *igVec2fMetaField_getMetaCall();
void *igVec2dMetaField_getMeta();
void *igVec2dMetaField_vtableRead();
void igVec2dMetaField_arkRegister();
void igVec2dMetaField_register();
void *igVec2dMetaField_getMetaCall();
void *igSphere_getMeta();
void *igSphere_vtableRead();
void igSphere_arkRegister();
void igSphere_register();
void *igSphere_getMetaCall();
void *fn_8011F6A4();
}
struct UnknownGenObject8011DB6C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8011DCCC_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenObject8011DE20_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenRoot8011DF74 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011DF74(){fn_800638E0(this);}
};
struct UnknownGenObject8011DF74_0 : UnknownGenRoot8011DF74 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011DF74_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011DF74 : UnknownGenObject8011DF74_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011DF74(){unknown00=igVec4ucMetaField_vtable;}
};
struct UnknownGenRoot8011E1F0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E1F0(){fn_800638E0(this);}
};
struct UnknownGenObject8011E1F0_0 : UnknownGenRoot8011E1F0 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E1F0_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E1F0 : UnknownGenObject8011E1F0_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011E1F0(){unknown00=igVec4fMetaField_vtable;}
};
struct UnknownGenRoot8011E46C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E46C(){fn_800638E0(this);}
};
struct UnknownGenObject8011E46C_0 : UnknownGenRoot8011E46C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E46C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E46C_1 : UnknownGenObject8011E46C_0 {
 inline ~UnknownGenObject8011E46C_1(){unknown00=igVec4fMetaField_vtable;}
};
struct UnknownGenObject8011E46C : UnknownGenObject8011E46C_1 {
 char unknown10[48];
 inline ~UnknownGenObject8011E46C(){unknown00=igVec4fArrayMetaField_vtable;}
};
struct UnknownGenRoot8011E71C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E71C(){fn_800638E0(this);}
};
struct UnknownGenObject8011E71C_0 : UnknownGenRoot8011E71C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E71C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E71C : UnknownGenObject8011E71C_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011E71C(){unknown00=igVec4dMetaField_vtable;}
};
struct UnknownGenRoot8011E960 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E960(){fn_800638E0(this);}
};
struct UnknownGenObject8011E960_0 : UnknownGenRoot8011E960 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E960_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E960 : UnknownGenObject8011E960_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011E960(){unknown00=igVec3ucMetaField_vtable;}
};
struct UnknownGenRoot8011EBDC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011EBDC(){fn_800638E0(this);}
};
struct UnknownGenObject8011EBDC_0 : UnknownGenRoot8011EBDC {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011EBDC_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011EBDC : UnknownGenObject8011EBDC_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011EBDC(){unknown00=igVec3fMetaField_vtable;}
};
struct UnknownGenRoot8011EE20 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011EE20(){fn_800638E0(this);}
};
struct UnknownGenObject8011EE20_0 : UnknownGenRoot8011EE20 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011EE20_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011EE20 : UnknownGenObject8011EE20_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011EE20(){unknown00=igVec3dMetaField_vtable;}
};
struct UnknownGenRoot8011F09C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011F09C(){fn_800638E0(this);}
};
struct UnknownGenObject8011F09C_0 : UnknownGenRoot8011F09C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011F09C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011F09C : UnknownGenObject8011F09C_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011F09C(){unknown00=igVec2fMetaField_vtable;}
};
struct UnknownGenRoot8011F2E0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011F2E0(){fn_800638E0(this);}
};
struct UnknownGenObject8011F2E0_0 : UnknownGenRoot8011F2E0 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011F2E0_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011F2E0 : UnknownGenObject8011F2E0_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011F2E0(){unknown00=igVec2dMetaField_vtable;}
};
struct UnknownGenObject8011F598_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_8011DDC4(){return fn_80127270();}
}
#pragma pop
}

namespace igVectorBlending {
// igVectorBlending: Alchemy class registration (0x8011DDE4..0x8011DF18). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igVectorBlending)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_8011D8BC();
void fn_8011DF18();
}

struct Instance_8011DE20_0 {
    void *__vtable;
    char unknown04[4];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igVectorBlending)

void *igVectorBlending_vtableRead()
{
    Instance_8011DE20_0 object;
    igObject_construct(&object);
    object.__vtable = igVectorBlending_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igVectorBlending)

void igVectorBlending_register()
{
    fn_8011D8BC();
    meta_registerClass(0, &igVectorBlending_meta, igObject_register,
                       fn_800237D0, igVectorBlending_getMetaCall,
                       igVectorBlending_className, 0x8,
                       igVectorBlending_vtableRead, 0, fn_8011DF18, 0);
}

META_GET_META_CALL(igVectorBlending)

}
#pragma pop
}

namespace unknown8011DF18 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80021D70();
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void fn_80053650(void *,int);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void fn_800638E0(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void fn_80065D94(int);
void fn_80065DBC(int);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8011D8BC();
void *fn_8011F74C();
void *fn_8012705C();
void *fn_80127270();
void fn_8012728C();
void fn_80127368(int);
void *fn_80127910();
void igMetaField_register();
void igObjectList_register();
void igObject_register();
void igSphere_fieldInit();
extern char lbl_80471914[];
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igVec4ucMetaField_vtable[];
extern char igVec4fMetaField_vtable[];
extern char igVec4fArrayMetaField_vtable[];
extern char igVec4dMetaField_vtable[];
extern char igVec3ucMetaField_vtable[];
extern char igVec3fMetaField_vtable[];
extern char igVec3dMetaField_vtable[];
extern char igVec2fMetaField_vtable[];
extern char igVec2dMetaField_vtable[];
extern char igSphere_vtable[];
extern char lbl_8049B9DC[];
extern char igVectorBlending_vtable[];
extern char igVectorMorphing_vtable[];
extern char igVolumeList_vtable[];
extern char lbl_8049BB54[];
extern char igVolumeList_dependencies[8];
extern char igVec4ucMetaField_dependencies[8];
extern char igVec4fMetaField_dependencies[8];
extern char igVec4fArrayMetaField_dependencies[8];
extern char igVec4fArrayMetaField_fieldTypes[4];
extern char igVec4fArrayMetaField_fieldNames[4];
extern char igVec4fArrayMetaField_fieldStorage[4];
extern char igVec4fArrayMetaField_fieldOffsets[4];
extern char igVec4dMetaField_dependencies[8];
extern char igVec3ucMetaField_dependencies[8];
extern char igVec3fMetaField_dependencies[8];
extern char igVec3dMetaField_dependencies[8];
extern char igVec2fMetaField_dependencies[8];
extern char igVec2dMetaField_dependencies[8];
extern void *lbl_805621F4;
extern void *igVolume_meta;
extern void *igVolumeList_meta;
extern void *igVectorMorphing_meta;
extern void *igVectorBlending_meta;
extern void *igVec4ucMetaField_meta;
extern void *lbl_805638DC;
extern void *igVec4fMetaField_meta;
extern void *lbl_805638EC;
extern void *igVec4fArrayMetaField_meta;
extern void *lbl_805638F4;
extern void *igVec4dMetaField_meta;
extern void *lbl_80563900;
extern void *igVec3ucMetaField_meta;
extern void *lbl_80563910;
extern void *igVec3fMetaField_meta;
extern void *lbl_80563920;
extern void *igVec3dMetaField_meta;
extern void *lbl_80563930;
extern void *igVec2fMetaField_meta;
extern void *lbl_80563940;
extern void *igVec2dMetaField_meta;
extern void *lbl_80563950;
extern void *igSphere_meta;
void *igVolume_getMeta();
void igVolume_arkRegister();
void igVolume_register();
void *igVolume_getMetaCall();
void fn_8011DA48();
void fn_8011DA70();
void *fn_8011DA9C();
void *igVolumeList_getMeta();
void *igVolumeList_vtableRead();
void igVolumeList_arkRegister();
void igVolumeList_register();
void *igVolumeList_getMetaCall();
void *igVectorMorphing_getMeta();
void *igVectorMorphing_vtableRead();
void igVectorMorphing_arkRegister();
void igVectorMorphing_register();
void *igVectorMorphing_getMetaCall();
void *fn_8011DDC4();
void *igVectorBlending_getMeta();
void *igVectorBlending_vtableRead();
void igVectorBlending_arkRegister();
void igVectorBlending_register();
void *igVectorBlending_getMetaCall();
void *fn_8011DF18();
void *igVec4ucMetaField_getMeta();
void *igVec4ucMetaField_vtableRead();
void igVec4ucMetaField_arkRegister();
void igVec4ucMetaField_register();
void *igVec4ucMetaField_getMetaCall();
void *igVec4fMetaField_getMeta();
void *igVec4fMetaField_vtableRead();
void igVec4fMetaField_arkRegister();
void igVec4fMetaField_register();
void *igVec4fMetaField_getMetaCall();
void *igVec4fArrayMetaField_getMeta();
void *igVec4fArrayMetaField_vtableRead();
void igVec4fArrayMetaField_arkRegister();
void igVec4fArrayMetaField_register();
void *igVec4fArrayMetaField_getMetaCall();
void *igVec4fArrayMetaField_parentMeta();
void igVec4fArrayMetaField_fieldInit();
void *igVec4dMetaField_getMeta();
void *igVec4dMetaField_vtableRead();
void igVec4dMetaField_arkRegister();
void igVec4dMetaField_register();
void *igVec4dMetaField_getMetaCall();
void *igVec3ucMetaField_getMeta();
void *igVec3ucMetaField_vtableRead();
void igVec3ucMetaField_arkRegister();
void igVec3ucMetaField_register();
void *igVec3ucMetaField_getMetaCall();
void *igVec3fMetaField_getMeta();
void *igVec3fMetaField_vtableRead();
void igVec3fMetaField_arkRegister();
void igVec3fMetaField_register();
void *igVec3fMetaField_getMetaCall();
void *igVec3dMetaField_getMeta();
void *igVec3dMetaField_vtableRead();
void igVec3dMetaField_arkRegister();
void igVec3dMetaField_register();
void *igVec3dMetaField_getMetaCall();
void *igVec2fMetaField_getMeta();
void *igVec2fMetaField_vtableRead();
void igVec2fMetaField_arkRegister();
void igVec2fMetaField_register();
void *igVec2fMetaField_getMetaCall();
void *igVec2dMetaField_getMeta();
void *igVec2dMetaField_vtableRead();
void igVec2dMetaField_arkRegister();
void igVec2dMetaField_register();
void *igVec2dMetaField_getMetaCall();
void *igSphere_getMeta();
void *igSphere_vtableRead();
void igSphere_arkRegister();
void igSphere_register();
void *igSphere_getMetaCall();
void *fn_8011F6A4();
}
struct UnknownGenObject8011DB6C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8011DCCC_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenObject8011DE20_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenRoot8011DF74 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011DF74(){fn_800638E0(this);}
};
struct UnknownGenObject8011DF74_0 : UnknownGenRoot8011DF74 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011DF74_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011DF74 : UnknownGenObject8011DF74_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011DF74(){unknown00=igVec4ucMetaField_vtable;}
};
struct UnknownGenRoot8011E1F0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E1F0(){fn_800638E0(this);}
};
struct UnknownGenObject8011E1F0_0 : UnknownGenRoot8011E1F0 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E1F0_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E1F0 : UnknownGenObject8011E1F0_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011E1F0(){unknown00=igVec4fMetaField_vtable;}
};
struct UnknownGenRoot8011E46C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E46C(){fn_800638E0(this);}
};
struct UnknownGenObject8011E46C_0 : UnknownGenRoot8011E46C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E46C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E46C_1 : UnknownGenObject8011E46C_0 {
 inline ~UnknownGenObject8011E46C_1(){unknown00=igVec4fMetaField_vtable;}
};
struct UnknownGenObject8011E46C : UnknownGenObject8011E46C_1 {
 char unknown10[48];
 inline ~UnknownGenObject8011E46C(){unknown00=igVec4fArrayMetaField_vtable;}
};
struct UnknownGenRoot8011E71C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E71C(){fn_800638E0(this);}
};
struct UnknownGenObject8011E71C_0 : UnknownGenRoot8011E71C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E71C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E71C : UnknownGenObject8011E71C_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011E71C(){unknown00=igVec4dMetaField_vtable;}
};
struct UnknownGenRoot8011E960 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E960(){fn_800638E0(this);}
};
struct UnknownGenObject8011E960_0 : UnknownGenRoot8011E960 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E960_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E960 : UnknownGenObject8011E960_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011E960(){unknown00=igVec3ucMetaField_vtable;}
};
struct UnknownGenRoot8011EBDC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011EBDC(){fn_800638E0(this);}
};
struct UnknownGenObject8011EBDC_0 : UnknownGenRoot8011EBDC {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011EBDC_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011EBDC : UnknownGenObject8011EBDC_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011EBDC(){unknown00=igVec3fMetaField_vtable;}
};
struct UnknownGenRoot8011EE20 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011EE20(){fn_800638E0(this);}
};
struct UnknownGenObject8011EE20_0 : UnknownGenRoot8011EE20 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011EE20_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011EE20 : UnknownGenObject8011EE20_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011EE20(){unknown00=igVec3dMetaField_vtable;}
};
struct UnknownGenRoot8011F09C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011F09C(){fn_800638E0(this);}
};
struct UnknownGenObject8011F09C_0 : UnknownGenRoot8011F09C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011F09C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011F09C : UnknownGenObject8011F09C_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011F09C(){unknown00=igVec2fMetaField_vtable;}
};
struct UnknownGenRoot8011F2E0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011F2E0(){fn_800638E0(this);}
};
struct UnknownGenObject8011F2E0_0 : UnknownGenRoot8011F2E0 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011F2E0_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011F2E0 : UnknownGenObject8011F2E0_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011F2E0(){unknown00=igVec2dMetaField_vtable;}
};
struct UnknownGenObject8011F598_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_8011DF18(){return fn_8012705C();}
}
#pragma pop
}

namespace igVec4ucMetaField {
// igVec4ucMetaField: Alchemy class registration (0x8011DF38..0x8011E0B4). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igVec4ucMetaField)
META_DECLARE(igMetaField)

extern "C" {
void *fn_80021D70();
void fn_800638E0(void *);
void fn_8011D8BC();
extern char igVec4ucMetaField_dependencies[8];
extern char lbl_80471914[];
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

struct igVec4ucMetaFieldInstance : Instance_80471914 {
    char unknown10[48];
    inline ~igVec4ucMetaFieldInstance() { __vtable = igVec4ucMetaField_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igVec4ucMetaField)

void *igVec4ucMetaField_vtableRead()
{
    igVec4ucMetaFieldInstance object;
    object.__vtable = igVec4ucMetaField_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igVec4ucMetaField)

void igVec4ucMetaField_register()
{
    fn_8011D8BC();
    meta_registerClass(0, &igVec4ucMetaField_meta, igMetaField_register,
                       fn_80021D70, igVec4ucMetaField_getMetaCall,
                       igVec4ucMetaField_className, 0x34,
                       igVec4ucMetaField_vtableRead, 0, 0, igVec4ucMetaField_dependencies);
}

META_GET_META_CALL(igVec4ucMetaField)

}
#pragma pop
}

namespace unknown8011E0B4 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80021D70();
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void fn_80053650(void *,int);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void fn_800638E0(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void fn_80065D94(int);
void fn_80065DBC(int);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8011D8BC();
void *fn_8011F74C();
void *fn_8012705C();
void *fn_80127270();
void fn_8012728C();
void fn_80127368(int);
void *fn_80127910();
void igMetaField_register();
void igObjectList_register();
void igObject_register();
void igSphere_fieldInit();
extern char lbl_80471914[];
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igVec4ucMetaField_vtable[];
extern char igVec4fMetaField_vtable[];
extern char igVec4fArrayMetaField_vtable[];
extern char igVec4dMetaField_vtable[];
extern char igVec3ucMetaField_vtable[];
extern char igVec3fMetaField_vtable[];
extern char igVec3dMetaField_vtable[];
extern char igVec2fMetaField_vtable[];
extern char igVec2dMetaField_vtable[];
extern char igSphere_vtable[];
extern char lbl_8049B9DC[];
extern char igVectorBlending_vtable[];
extern char igVectorMorphing_vtable[];
extern char igVolumeList_vtable[];
extern char lbl_8049BB54[];
extern char igVolumeList_dependencies[8];
extern char igVec4ucMetaField_dependencies[8];
extern char igVec4fMetaField_dependencies[8];
extern char igVec4fArrayMetaField_dependencies[8];
extern char igVec4fArrayMetaField_fieldTypes[4];
extern char igVec4fArrayMetaField_fieldNames[4];
extern char igVec4fArrayMetaField_fieldStorage[4];
extern char igVec4fArrayMetaField_fieldOffsets[4];
extern char igVec4dMetaField_dependencies[8];
extern char igVec3ucMetaField_dependencies[8];
extern char igVec3fMetaField_dependencies[8];
extern char igVec3dMetaField_dependencies[8];
extern char igVec2fMetaField_dependencies[8];
extern char igVec2dMetaField_dependencies[8];
extern void *lbl_805621F4;
extern void *igVolume_meta;
extern void *igVolumeList_meta;
extern void *igVectorMorphing_meta;
extern void *igVectorBlending_meta;
extern void *igVec4ucMetaField_meta;
extern void *lbl_805638DC;
extern void *igVec4fMetaField_meta;
extern void *lbl_805638EC;
extern void *igVec4fArrayMetaField_meta;
extern void *lbl_805638F4;
extern void *igVec4dMetaField_meta;
extern void *lbl_80563900;
extern void *igVec3ucMetaField_meta;
extern void *lbl_80563910;
extern void *igVec3fMetaField_meta;
extern void *lbl_80563920;
extern void *igVec3dMetaField_meta;
extern void *lbl_80563930;
extern void *igVec2fMetaField_meta;
extern void *lbl_80563940;
extern void *igVec2dMetaField_meta;
extern void *lbl_80563950;
extern void *igSphere_meta;
void *igVolume_getMeta();
void igVolume_arkRegister();
void igVolume_register();
void *igVolume_getMetaCall();
void fn_8011DA48();
void fn_8011DA70();
void *fn_8011DA9C();
void *igVolumeList_getMeta();
void *igVolumeList_vtableRead();
void igVolumeList_arkRegister();
void igVolumeList_register();
void *igVolumeList_getMetaCall();
void *igVectorMorphing_getMeta();
void *igVectorMorphing_vtableRead();
void igVectorMorphing_arkRegister();
void igVectorMorphing_register();
void *igVectorMorphing_getMetaCall();
void *fn_8011DDC4();
void *igVectorBlending_getMeta();
void *igVectorBlending_vtableRead();
void igVectorBlending_arkRegister();
void igVectorBlending_register();
void *igVectorBlending_getMetaCall();
void *fn_8011DF18();
void *igVec4ucMetaField_getMeta();
void *igVec4ucMetaField_vtableRead();
void igVec4ucMetaField_arkRegister();
void igVec4ucMetaField_register();
void *igVec4ucMetaField_getMetaCall();
void *igVec4fMetaField_getMeta();
void *igVec4fMetaField_vtableRead();
void igVec4fMetaField_arkRegister();
void igVec4fMetaField_register();
void *igVec4fMetaField_getMetaCall();
void *igVec4fArrayMetaField_getMeta();
void *igVec4fArrayMetaField_vtableRead();
void igVec4fArrayMetaField_arkRegister();
void igVec4fArrayMetaField_register();
void *igVec4fArrayMetaField_getMetaCall();
void *igVec4fArrayMetaField_parentMeta();
void igVec4fArrayMetaField_fieldInit();
void *igVec4dMetaField_getMeta();
void *igVec4dMetaField_vtableRead();
void igVec4dMetaField_arkRegister();
void igVec4dMetaField_register();
void *igVec4dMetaField_getMetaCall();
void *igVec3ucMetaField_getMeta();
void *igVec3ucMetaField_vtableRead();
void igVec3ucMetaField_arkRegister();
void igVec3ucMetaField_register();
void *igVec3ucMetaField_getMetaCall();
void *igVec3fMetaField_getMeta();
void *igVec3fMetaField_vtableRead();
void igVec3fMetaField_arkRegister();
void igVec3fMetaField_register();
void *igVec3fMetaField_getMetaCall();
void *igVec3dMetaField_getMeta();
void *igVec3dMetaField_vtableRead();
void igVec3dMetaField_arkRegister();
void igVec3dMetaField_register();
void *igVec3dMetaField_getMetaCall();
void *igVec2fMetaField_getMeta();
void *igVec2fMetaField_vtableRead();
void igVec2fMetaField_arkRegister();
void igVec2fMetaField_register();
void *igVec2fMetaField_getMetaCall();
void *igVec2dMetaField_getMeta();
void *igVec2dMetaField_vtableRead();
void igVec2dMetaField_arkRegister();
void igVec2dMetaField_register();
void *igVec2dMetaField_getMetaCall();
void *igSphere_getMeta();
void *igSphere_vtableRead();
void igSphere_arkRegister();
void igSphere_register();
void *igSphere_getMetaCall();
void *fn_8011F6A4();
}
struct UnknownGenObject8011DB6C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8011DCCC_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenObject8011DE20_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenRoot8011DF74 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011DF74(){fn_800638E0(this);}
};
struct UnknownGenObject8011DF74_0 : UnknownGenRoot8011DF74 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011DF74_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011DF74 : UnknownGenObject8011DF74_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011DF74(){unknown00=igVec4ucMetaField_vtable;}
};
struct UnknownGenRoot8011E1F0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E1F0(){fn_800638E0(this);}
};
struct UnknownGenObject8011E1F0_0 : UnknownGenRoot8011E1F0 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E1F0_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E1F0 : UnknownGenObject8011E1F0_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011E1F0(){unknown00=igVec4fMetaField_vtable;}
};
struct UnknownGenRoot8011E46C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E46C(){fn_800638E0(this);}
};
struct UnknownGenObject8011E46C_0 : UnknownGenRoot8011E46C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E46C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E46C_1 : UnknownGenObject8011E46C_0 {
 inline ~UnknownGenObject8011E46C_1(){unknown00=igVec4fMetaField_vtable;}
};
struct UnknownGenObject8011E46C : UnknownGenObject8011E46C_1 {
 char unknown10[48];
 inline ~UnknownGenObject8011E46C(){unknown00=igVec4fArrayMetaField_vtable;}
};
struct UnknownGenRoot8011E71C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E71C(){fn_800638E0(this);}
};
struct UnknownGenObject8011E71C_0 : UnknownGenRoot8011E71C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E71C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E71C : UnknownGenObject8011E71C_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011E71C(){unknown00=igVec4dMetaField_vtable;}
};
struct UnknownGenRoot8011E960 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E960(){fn_800638E0(this);}
};
struct UnknownGenObject8011E960_0 : UnknownGenRoot8011E960 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E960_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E960 : UnknownGenObject8011E960_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011E960(){unknown00=igVec3ucMetaField_vtable;}
};
struct UnknownGenRoot8011EBDC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011EBDC(){fn_800638E0(this);}
};
struct UnknownGenObject8011EBDC_0 : UnknownGenRoot8011EBDC {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011EBDC_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011EBDC : UnknownGenObject8011EBDC_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011EBDC(){unknown00=igVec3fMetaField_vtable;}
};
struct UnknownGenRoot8011EE20 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011EE20(){fn_800638E0(this);}
};
struct UnknownGenObject8011EE20_0 : UnknownGenRoot8011EE20 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011EE20_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011EE20 : UnknownGenObject8011EE20_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011EE20(){unknown00=igVec3dMetaField_vtable;}
};
struct UnknownGenRoot8011F09C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011F09C(){fn_800638E0(this);}
};
struct UnknownGenObject8011F09C_0 : UnknownGenRoot8011F09C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011F09C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011F09C : UnknownGenObject8011F09C_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011F09C(){unknown00=igVec2fMetaField_vtable;}
};
struct UnknownGenRoot8011F2E0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011F2E0(){fn_800638E0(this);}
};
struct UnknownGenObject8011F2E0_0 : UnknownGenRoot8011F2E0 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011F2E0_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011F2E0 : UnknownGenObject8011F2E0_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011F2E0(){unknown00=igVec2dMetaField_vtable;}
};
struct UnknownGenObject8011F598_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void fn_8011E0B4(){
 if(!lbl_805638DC){
  void *object=(lbl_805638DC=meta_createInstance(igVec4ucMetaField_meta,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_805638DC));
   reinterpret_cast<short *>(lbl_805638DC)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_805638DC);
  }
 }
}
void *fn_8011E14C(){
 if(!lbl_805638DC){
  igVec4ucMetaField_arkRegister();
 }
 return lbl_805638DC;
}
}
#pragma pop
}

namespace igVec4fMetaField {
// igVec4fMetaField: Alchemy class registration (0x8011E17C..0x8011E330). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igVec4fMetaField)
META_DECLARE(igMetaField)

extern "C" {
void *fn_80021D70();
void fn_800638E0(void *);
void fn_8011D8BC();
extern char igVec4fMetaField_dependencies[8];
extern char lbl_80471914[];
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

struct igVec4fMetaFieldInstance : Instance_80471914 {
    char unknown10[48];
    inline ~igVec4fMetaFieldInstance() { __vtable = igVec4fMetaField_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igVec4fMetaField)

META_GET_META(igVec4fMetaField)

void *igVec4fMetaField_vtableRead()
{
    igVec4fMetaFieldInstance object;
    object.__vtable = igVec4fMetaField_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igVec4fMetaField)

void igVec4fMetaField_register()
{
    fn_8011D8BC();
    meta_registerClass(0, &igVec4fMetaField_meta, igMetaField_register,
                       fn_80021D70, igVec4fMetaField_getMetaCall,
                       igVec4fMetaField_className, 0x34,
                       igVec4fMetaField_vtableRead, 0, 0, igVec4fMetaField_dependencies);
}

META_GET_META_CALL(igVec4fMetaField)

}
#pragma pop
}

namespace unknown8011E330 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80021D70();
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void fn_80053650(void *,int);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void fn_800638E0(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void fn_80065D94(int);
void fn_80065DBC(int);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8011D8BC();
void *fn_8011F74C();
void *fn_8012705C();
void *fn_80127270();
void fn_8012728C();
void fn_80127368(int);
void *fn_80127910();
void igMetaField_register();
void igObjectList_register();
void igObject_register();
void igSphere_fieldInit();
extern char lbl_80471914[];
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igVec4ucMetaField_vtable[];
extern char igVec4fMetaField_vtable[];
extern char igVec4fArrayMetaField_vtable[];
extern char igVec4dMetaField_vtable[];
extern char igVec3ucMetaField_vtable[];
extern char igVec3fMetaField_vtable[];
extern char igVec3dMetaField_vtable[];
extern char igVec2fMetaField_vtable[];
extern char igVec2dMetaField_vtable[];
extern char igSphere_vtable[];
extern char lbl_8049B9DC[];
extern char igVectorBlending_vtable[];
extern char igVectorMorphing_vtable[];
extern char igVolumeList_vtable[];
extern char lbl_8049BB54[];
extern char igVolumeList_dependencies[8];
extern char igVec4ucMetaField_dependencies[8];
extern char igVec4fMetaField_dependencies[8];
extern char igVec4fArrayMetaField_dependencies[8];
extern char igVec4fArrayMetaField_fieldTypes[4];
extern char igVec4fArrayMetaField_fieldNames[4];
extern char igVec4fArrayMetaField_fieldStorage[4];
extern char igVec4fArrayMetaField_fieldOffsets[4];
extern char igVec4dMetaField_dependencies[8];
extern char igVec3ucMetaField_dependencies[8];
extern char igVec3fMetaField_dependencies[8];
extern char igVec3dMetaField_dependencies[8];
extern char igVec2fMetaField_dependencies[8];
extern char igVec2dMetaField_dependencies[8];
extern void *lbl_805621F4;
extern void *igVolume_meta;
extern void *igVolumeList_meta;
extern void *igVectorMorphing_meta;
extern void *igVectorBlending_meta;
extern void *igVec4ucMetaField_meta;
extern void *lbl_805638DC;
extern void *igVec4fMetaField_meta;
extern void *lbl_805638EC;
extern void *igVec4fArrayMetaField_meta;
extern void *lbl_805638F4;
extern void *igVec4dMetaField_meta;
extern void *lbl_80563900;
extern void *igVec3ucMetaField_meta;
extern void *lbl_80563910;
extern void *igVec3fMetaField_meta;
extern void *lbl_80563920;
extern void *igVec3dMetaField_meta;
extern void *lbl_80563930;
extern void *igVec2fMetaField_meta;
extern void *lbl_80563940;
extern void *igVec2dMetaField_meta;
extern void *lbl_80563950;
extern void *igSphere_meta;
void *igVolume_getMeta();
void igVolume_arkRegister();
void igVolume_register();
void *igVolume_getMetaCall();
void fn_8011DA48();
void fn_8011DA70();
void *fn_8011DA9C();
void *igVolumeList_getMeta();
void *igVolumeList_vtableRead();
void igVolumeList_arkRegister();
void igVolumeList_register();
void *igVolumeList_getMetaCall();
void *igVectorMorphing_getMeta();
void *igVectorMorphing_vtableRead();
void igVectorMorphing_arkRegister();
void igVectorMorphing_register();
void *igVectorMorphing_getMetaCall();
void *fn_8011DDC4();
void *igVectorBlending_getMeta();
void *igVectorBlending_vtableRead();
void igVectorBlending_arkRegister();
void igVectorBlending_register();
void *igVectorBlending_getMetaCall();
void *fn_8011DF18();
void *igVec4ucMetaField_getMeta();
void *igVec4ucMetaField_vtableRead();
void igVec4ucMetaField_arkRegister();
void igVec4ucMetaField_register();
void *igVec4ucMetaField_getMetaCall();
void *igVec4fMetaField_getMeta();
void *igVec4fMetaField_vtableRead();
void igVec4fMetaField_arkRegister();
void igVec4fMetaField_register();
void *igVec4fMetaField_getMetaCall();
void *igVec4fArrayMetaField_getMeta();
void *igVec4fArrayMetaField_vtableRead();
void igVec4fArrayMetaField_arkRegister();
void igVec4fArrayMetaField_register();
void *igVec4fArrayMetaField_getMetaCall();
void *igVec4fArrayMetaField_parentMeta();
void igVec4fArrayMetaField_fieldInit();
void *igVec4dMetaField_getMeta();
void *igVec4dMetaField_vtableRead();
void igVec4dMetaField_arkRegister();
void igVec4dMetaField_register();
void *igVec4dMetaField_getMetaCall();
void *igVec3ucMetaField_getMeta();
void *igVec3ucMetaField_vtableRead();
void igVec3ucMetaField_arkRegister();
void igVec3ucMetaField_register();
void *igVec3ucMetaField_getMetaCall();
void *igVec3fMetaField_getMeta();
void *igVec3fMetaField_vtableRead();
void igVec3fMetaField_arkRegister();
void igVec3fMetaField_register();
void *igVec3fMetaField_getMetaCall();
void *igVec3dMetaField_getMeta();
void *igVec3dMetaField_vtableRead();
void igVec3dMetaField_arkRegister();
void igVec3dMetaField_register();
void *igVec3dMetaField_getMetaCall();
void *igVec2fMetaField_getMeta();
void *igVec2fMetaField_vtableRead();
void igVec2fMetaField_arkRegister();
void igVec2fMetaField_register();
void *igVec2fMetaField_getMetaCall();
void *igVec2dMetaField_getMeta();
void *igVec2dMetaField_vtableRead();
void igVec2dMetaField_arkRegister();
void igVec2dMetaField_register();
void *igVec2dMetaField_getMetaCall();
void *igSphere_getMeta();
void *igSphere_vtableRead();
void igSphere_arkRegister();
void igSphere_register();
void *igSphere_getMetaCall();
void *fn_8011F6A4();
}
struct UnknownGenObject8011DB6C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8011DCCC_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenObject8011DE20_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenRoot8011DF74 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011DF74(){fn_800638E0(this);}
};
struct UnknownGenObject8011DF74_0 : UnknownGenRoot8011DF74 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011DF74_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011DF74 : UnknownGenObject8011DF74_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011DF74(){unknown00=igVec4ucMetaField_vtable;}
};
struct UnknownGenRoot8011E1F0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E1F0(){fn_800638E0(this);}
};
struct UnknownGenObject8011E1F0_0 : UnknownGenRoot8011E1F0 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E1F0_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E1F0 : UnknownGenObject8011E1F0_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011E1F0(){unknown00=igVec4fMetaField_vtable;}
};
struct UnknownGenRoot8011E46C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E46C(){fn_800638E0(this);}
};
struct UnknownGenObject8011E46C_0 : UnknownGenRoot8011E46C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E46C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E46C_1 : UnknownGenObject8011E46C_0 {
 inline ~UnknownGenObject8011E46C_1(){unknown00=igVec4fMetaField_vtable;}
};
struct UnknownGenObject8011E46C : UnknownGenObject8011E46C_1 {
 char unknown10[48];
 inline ~UnknownGenObject8011E46C(){unknown00=igVec4fArrayMetaField_vtable;}
};
struct UnknownGenRoot8011E71C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E71C(){fn_800638E0(this);}
};
struct UnknownGenObject8011E71C_0 : UnknownGenRoot8011E71C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E71C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E71C : UnknownGenObject8011E71C_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011E71C(){unknown00=igVec4dMetaField_vtable;}
};
struct UnknownGenRoot8011E960 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E960(){fn_800638E0(this);}
};
struct UnknownGenObject8011E960_0 : UnknownGenRoot8011E960 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E960_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E960 : UnknownGenObject8011E960_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011E960(){unknown00=igVec3ucMetaField_vtable;}
};
struct UnknownGenRoot8011EBDC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011EBDC(){fn_800638E0(this);}
};
struct UnknownGenObject8011EBDC_0 : UnknownGenRoot8011EBDC {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011EBDC_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011EBDC : UnknownGenObject8011EBDC_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011EBDC(){unknown00=igVec3fMetaField_vtable;}
};
struct UnknownGenRoot8011EE20 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011EE20(){fn_800638E0(this);}
};
struct UnknownGenObject8011EE20_0 : UnknownGenRoot8011EE20 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011EE20_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011EE20 : UnknownGenObject8011EE20_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011EE20(){unknown00=igVec3dMetaField_vtable;}
};
struct UnknownGenRoot8011F09C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011F09C(){fn_800638E0(this);}
};
struct UnknownGenObject8011F09C_0 : UnknownGenRoot8011F09C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011F09C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011F09C : UnknownGenObject8011F09C_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011F09C(){unknown00=igVec2fMetaField_vtable;}
};
struct UnknownGenRoot8011F2E0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011F2E0(){fn_800638E0(this);}
};
struct UnknownGenObject8011F2E0_0 : UnknownGenRoot8011F2E0 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011F2E0_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011F2E0 : UnknownGenObject8011F2E0_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011F2E0(){unknown00=igVec2dMetaField_vtable;}
};
struct UnknownGenObject8011F598_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void fn_8011E330(){
 if(!lbl_805638EC){
  void *object=(lbl_805638EC=meta_createInstance(igVec4fMetaField_meta,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_805638EC));
   reinterpret_cast<short *>(lbl_805638EC)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_805638EC);
  }
 }
}
void *fn_8011E3C8(){
 if(!lbl_805638EC){
  igVec4fMetaField_arkRegister();
 }
 return lbl_805638EC;
}
}
#pragma pop
}

namespace igVec4fArrayMetaField {
// igVec4fArrayMetaField: Alchemy class registration (0x8011E3F8..0x8011E5C4). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igVec4fArrayMetaField)
META_DECLARE(igVec4fMetaField)

extern "C" {
void fn_800638E0(void *);
void fn_8011D8BC();
extern char igVec4fArrayMetaField_dependencies[8];
void *igVec4fArrayMetaField_parentMeta();
extern char lbl_80471914[];
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

struct igVec4fMetaFieldInstance : Instance_80471914 {
    inline ~igVec4fMetaFieldInstance() { __vtable = igVec4fMetaField_vtable; }
};

struct igVec4fArrayMetaFieldInstance : igVec4fMetaFieldInstance {
    char unknown10[48];
    inline ~igVec4fArrayMetaFieldInstance() { __vtable = igVec4fArrayMetaField_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igVec4fArrayMetaField)

META_GET_META(igVec4fArrayMetaField)

void *igVec4fArrayMetaField_vtableRead()
{
    igVec4fArrayMetaFieldInstance object;
    object.__vtable = igVec4fMetaField_vtable;
    object.__vtable = igVec4fArrayMetaField_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igVec4fArrayMetaField)

void igVec4fArrayMetaField_register()
{
    fn_8011D8BC();
    meta_registerClass(0, &igVec4fArrayMetaField_meta, igVec4fMetaField_register,
                       igVec4fArrayMetaField_parentMeta, igVec4fArrayMetaField_getMetaCall,
                       igVec4fArrayMetaField_className, 0x38,
                       igVec4fArrayMetaField_vtableRead, igVec4fArrayMetaField_fieldInit, 0, igVec4fArrayMetaField_dependencies);
}

META_GET_META_CALL(igVec4fArrayMetaField)

}
#pragma pop
}

namespace unknown8011E5C4 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80021D70();
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void fn_80053650(void *,int);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void fn_800638E0(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void fn_80065D94(int);
void fn_80065DBC(int);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8011D8BC();
void *fn_8011F74C();
void *fn_8012705C();
void *fn_80127270();
void fn_8012728C();
void fn_80127368(int);
void *fn_80127910();
void igMetaField_register();
void igObjectList_register();
void igObject_register();
void igSphere_fieldInit();
extern char lbl_80471914[];
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igVec4ucMetaField_vtable[];
extern char igVec4fMetaField_vtable[];
extern char igVec4fArrayMetaField_vtable[];
extern char igVec4dMetaField_vtable[];
extern char igVec3ucMetaField_vtable[];
extern char igVec3fMetaField_vtable[];
extern char igVec3dMetaField_vtable[];
extern char igVec2fMetaField_vtable[];
extern char igVec2dMetaField_vtable[];
extern char igSphere_vtable[];
extern char lbl_8049B9DC[];
extern char igVectorBlending_vtable[];
extern char igVectorMorphing_vtable[];
extern char igVolumeList_vtable[];
extern char lbl_8049BB54[];
extern char igVolumeList_dependencies[8];
extern char igVec4ucMetaField_dependencies[8];
extern char igVec4fMetaField_dependencies[8];
extern char igVec4fArrayMetaField_dependencies[8];
extern char igVec4fArrayMetaField_fieldTypes[4];
extern char igVec4fArrayMetaField_fieldNames[4];
extern char igVec4fArrayMetaField_fieldStorage[4];
extern char igVec4fArrayMetaField_fieldOffsets[4];
extern char igVec4dMetaField_dependencies[8];
extern char igVec3ucMetaField_dependencies[8];
extern char igVec3fMetaField_dependencies[8];
extern char igVec3dMetaField_dependencies[8];
extern char igVec2fMetaField_dependencies[8];
extern char igVec2dMetaField_dependencies[8];
extern void *lbl_805621F4;
extern void *igVolume_meta;
extern void *igVolumeList_meta;
extern void *igVectorMorphing_meta;
extern void *igVectorBlending_meta;
extern void *igVec4ucMetaField_meta;
extern void *lbl_805638DC;
extern void *igVec4fMetaField_meta;
extern void *lbl_805638EC;
extern void *igVec4fArrayMetaField_meta;
extern void *lbl_805638F4;
extern void *igVec4dMetaField_meta;
extern void *lbl_80563900;
extern void *igVec3ucMetaField_meta;
extern void *lbl_80563910;
extern void *igVec3fMetaField_meta;
extern void *lbl_80563920;
extern void *igVec3dMetaField_meta;
extern void *lbl_80563930;
extern void *igVec2fMetaField_meta;
extern void *lbl_80563940;
extern void *igVec2dMetaField_meta;
extern void *lbl_80563950;
extern void *igSphere_meta;
void *igVolume_getMeta();
void igVolume_arkRegister();
void igVolume_register();
void *igVolume_getMetaCall();
void fn_8011DA48();
void fn_8011DA70();
void *fn_8011DA9C();
void *igVolumeList_getMeta();
void *igVolumeList_vtableRead();
void igVolumeList_arkRegister();
void igVolumeList_register();
void *igVolumeList_getMetaCall();
void *igVectorMorphing_getMeta();
void *igVectorMorphing_vtableRead();
void igVectorMorphing_arkRegister();
void igVectorMorphing_register();
void *igVectorMorphing_getMetaCall();
void *fn_8011DDC4();
void *igVectorBlending_getMeta();
void *igVectorBlending_vtableRead();
void igVectorBlending_arkRegister();
void igVectorBlending_register();
void *igVectorBlending_getMetaCall();
void *fn_8011DF18();
void *igVec4ucMetaField_getMeta();
void *igVec4ucMetaField_vtableRead();
void igVec4ucMetaField_arkRegister();
void igVec4ucMetaField_register();
void *igVec4ucMetaField_getMetaCall();
void *igVec4fMetaField_getMeta();
void *igVec4fMetaField_vtableRead();
void igVec4fMetaField_arkRegister();
void igVec4fMetaField_register();
void *igVec4fMetaField_getMetaCall();
void *igVec4fArrayMetaField_getMeta();
void *igVec4fArrayMetaField_vtableRead();
void igVec4fArrayMetaField_arkRegister();
void igVec4fArrayMetaField_register();
void *igVec4fArrayMetaField_getMetaCall();
void *igVec4fArrayMetaField_parentMeta();
void igVec4fArrayMetaField_fieldInit();
void *igVec4dMetaField_getMeta();
void *igVec4dMetaField_vtableRead();
void igVec4dMetaField_arkRegister();
void igVec4dMetaField_register();
void *igVec4dMetaField_getMetaCall();
void *igVec3ucMetaField_getMeta();
void *igVec3ucMetaField_vtableRead();
void igVec3ucMetaField_arkRegister();
void igVec3ucMetaField_register();
void *igVec3ucMetaField_getMetaCall();
void *igVec3fMetaField_getMeta();
void *igVec3fMetaField_vtableRead();
void igVec3fMetaField_arkRegister();
void igVec3fMetaField_register();
void *igVec3fMetaField_getMetaCall();
void *igVec3dMetaField_getMeta();
void *igVec3dMetaField_vtableRead();
void igVec3dMetaField_arkRegister();
void igVec3dMetaField_register();
void *igVec3dMetaField_getMetaCall();
void *igVec2fMetaField_getMeta();
void *igVec2fMetaField_vtableRead();
void igVec2fMetaField_arkRegister();
void igVec2fMetaField_register();
void *igVec2fMetaField_getMetaCall();
void *igVec2dMetaField_getMeta();
void *igVec2dMetaField_vtableRead();
void igVec2dMetaField_arkRegister();
void igVec2dMetaField_register();
void *igVec2dMetaField_getMetaCall();
void *igSphere_getMeta();
void *igSphere_vtableRead();
void igSphere_arkRegister();
void igSphere_register();
void *igSphere_getMetaCall();
void *fn_8011F6A4();
}
struct UnknownGenObject8011DB6C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8011DCCC_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenObject8011DE20_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenRoot8011DF74 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011DF74(){fn_800638E0(this);}
};
struct UnknownGenObject8011DF74_0 : UnknownGenRoot8011DF74 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011DF74_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011DF74 : UnknownGenObject8011DF74_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011DF74(){unknown00=igVec4ucMetaField_vtable;}
};
struct UnknownGenRoot8011E1F0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E1F0(){fn_800638E0(this);}
};
struct UnknownGenObject8011E1F0_0 : UnknownGenRoot8011E1F0 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E1F0_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E1F0 : UnknownGenObject8011E1F0_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011E1F0(){unknown00=igVec4fMetaField_vtable;}
};
struct UnknownGenRoot8011E46C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E46C(){fn_800638E0(this);}
};
struct UnknownGenObject8011E46C_0 : UnknownGenRoot8011E46C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E46C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E46C_1 : UnknownGenObject8011E46C_0 {
 inline ~UnknownGenObject8011E46C_1(){unknown00=igVec4fMetaField_vtable;}
};
struct UnknownGenObject8011E46C : UnknownGenObject8011E46C_1 {
 char unknown10[48];
 inline ~UnknownGenObject8011E46C(){unknown00=igVec4fArrayMetaField_vtable;}
};
struct UnknownGenRoot8011E71C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E71C(){fn_800638E0(this);}
};
struct UnknownGenObject8011E71C_0 : UnknownGenRoot8011E71C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E71C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E71C : UnknownGenObject8011E71C_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011E71C(){unknown00=igVec4dMetaField_vtable;}
};
struct UnknownGenRoot8011E960 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E960(){fn_800638E0(this);}
};
struct UnknownGenObject8011E960_0 : UnknownGenRoot8011E960 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E960_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E960 : UnknownGenObject8011E960_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011E960(){unknown00=igVec3ucMetaField_vtable;}
};
struct UnknownGenRoot8011EBDC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011EBDC(){fn_800638E0(this);}
};
struct UnknownGenObject8011EBDC_0 : UnknownGenRoot8011EBDC {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011EBDC_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011EBDC : UnknownGenObject8011EBDC_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011EBDC(){unknown00=igVec3fMetaField_vtable;}
};
struct UnknownGenRoot8011EE20 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011EE20(){fn_800638E0(this);}
};
struct UnknownGenObject8011EE20_0 : UnknownGenRoot8011EE20 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011EE20_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011EE20 : UnknownGenObject8011EE20_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011EE20(){unknown00=igVec3dMetaField_vtable;}
};
struct UnknownGenRoot8011F09C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011F09C(){fn_800638E0(this);}
};
struct UnknownGenObject8011F09C_0 : UnknownGenRoot8011F09C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011F09C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011F09C : UnknownGenObject8011F09C_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011F09C(){unknown00=igVec2fMetaField_vtable;}
};
struct UnknownGenRoot8011F2E0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011F2E0(){fn_800638E0(this);}
};
struct UnknownGenObject8011F2E0_0 : UnknownGenRoot8011F2E0 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011F2E0_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011F2E0 : UnknownGenObject8011F2E0_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011F2E0(){unknown00=igVec2dMetaField_vtable;}
};
struct UnknownGenObject8011F598_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *igVec4fArrayMetaField_parentMeta(){return igVec4fMetaField_meta;}
}
#pragma pop
}

namespace igVec4fArrayMetaField_2 {
// igVec4fArrayMetaField: Alchemy class registration (0x8011E5CC..0x8011E648). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igVec4fArrayMetaField)

extern "C" {
void fn_80053650(void *,int);
extern char igVec4fArrayMetaField_fieldNames[4];
extern char igVec4fArrayMetaField_fieldOffsets[4];
extern char igVec4fArrayMetaField_fieldStorage[4];
extern char igVec4fArrayMetaField_fieldTypes[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igVec4fArrayMetaField_fieldInit()
{
    Meta::igMetaObject *meta = igVec4fArrayMetaField_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igVec4fArrayMetaField_fieldTypes, 1);
    fn_80053650(meta_field(meta, base), 1);
    meta_setupFields(meta, igVec4fArrayMetaField_fieldNames, igVec4fArrayMetaField_fieldStorage, igVec4fArrayMetaField_fieldOffsets, base);
}

}
#pragma pop
}

namespace unknown8011E648 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80021D70();
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void fn_80053650(void *,int);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void fn_800638E0(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void fn_80065D94(int);
void fn_80065DBC(int);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8011D8BC();
void *fn_8011F74C();
void *fn_8012705C();
void *fn_80127270();
void fn_8012728C();
void fn_80127368(int);
void *fn_80127910();
void igMetaField_register();
void igObjectList_register();
void igObject_register();
void igSphere_fieldInit();
extern char lbl_80471914[];
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igVec4ucMetaField_vtable[];
extern char igVec4fMetaField_vtable[];
extern char igVec4fArrayMetaField_vtable[];
extern char igVec4dMetaField_vtable[];
extern char igVec3ucMetaField_vtable[];
extern char igVec3fMetaField_vtable[];
extern char igVec3dMetaField_vtable[];
extern char igVec2fMetaField_vtable[];
extern char igVec2dMetaField_vtable[];
extern char igSphere_vtable[];
extern char lbl_8049B9DC[];
extern char igVectorBlending_vtable[];
extern char igVectorMorphing_vtable[];
extern char igVolumeList_vtable[];
extern char lbl_8049BB54[];
extern char igVolumeList_dependencies[8];
extern char igVec4ucMetaField_dependencies[8];
extern char igVec4fMetaField_dependencies[8];
extern char igVec4fArrayMetaField_dependencies[8];
extern char igVec4fArrayMetaField_fieldTypes[4];
extern char igVec4fArrayMetaField_fieldNames[4];
extern char igVec4fArrayMetaField_fieldStorage[4];
extern char igVec4fArrayMetaField_fieldOffsets[4];
extern char igVec4dMetaField_dependencies[8];
extern char igVec3ucMetaField_dependencies[8];
extern char igVec3fMetaField_dependencies[8];
extern char igVec3dMetaField_dependencies[8];
extern char igVec2fMetaField_dependencies[8];
extern char igVec2dMetaField_dependencies[8];
extern void *lbl_805621F4;
extern void *igVolume_meta;
extern void *igVolumeList_meta;
extern void *igVectorMorphing_meta;
extern void *igVectorBlending_meta;
extern void *igVec4ucMetaField_meta;
extern void *lbl_805638DC;
extern void *igVec4fMetaField_meta;
extern void *lbl_805638EC;
extern void *igVec4fArrayMetaField_meta;
extern void *lbl_805638F4;
extern void *igVec4dMetaField_meta;
extern void *lbl_80563900;
extern void *igVec3ucMetaField_meta;
extern void *lbl_80563910;
extern void *igVec3fMetaField_meta;
extern void *lbl_80563920;
extern void *igVec3dMetaField_meta;
extern void *lbl_80563930;
extern void *igVec2fMetaField_meta;
extern void *lbl_80563940;
extern void *igVec2dMetaField_meta;
extern void *lbl_80563950;
extern void *igSphere_meta;
void *igVolume_getMeta();
void igVolume_arkRegister();
void igVolume_register();
void *igVolume_getMetaCall();
void fn_8011DA48();
void fn_8011DA70();
void *fn_8011DA9C();
void *igVolumeList_getMeta();
void *igVolumeList_vtableRead();
void igVolumeList_arkRegister();
void igVolumeList_register();
void *igVolumeList_getMetaCall();
void *igVectorMorphing_getMeta();
void *igVectorMorphing_vtableRead();
void igVectorMorphing_arkRegister();
void igVectorMorphing_register();
void *igVectorMorphing_getMetaCall();
void *fn_8011DDC4();
void *igVectorBlending_getMeta();
void *igVectorBlending_vtableRead();
void igVectorBlending_arkRegister();
void igVectorBlending_register();
void *igVectorBlending_getMetaCall();
void *fn_8011DF18();
void *igVec4ucMetaField_getMeta();
void *igVec4ucMetaField_vtableRead();
void igVec4ucMetaField_arkRegister();
void igVec4ucMetaField_register();
void *igVec4ucMetaField_getMetaCall();
void *igVec4fMetaField_getMeta();
void *igVec4fMetaField_vtableRead();
void igVec4fMetaField_arkRegister();
void igVec4fMetaField_register();
void *igVec4fMetaField_getMetaCall();
void *igVec4fArrayMetaField_getMeta();
void *igVec4fArrayMetaField_vtableRead();
void igVec4fArrayMetaField_arkRegister();
void igVec4fArrayMetaField_register();
void *igVec4fArrayMetaField_getMetaCall();
void *igVec4fArrayMetaField_parentMeta();
void igVec4fArrayMetaField_fieldInit();
void *igVec4dMetaField_getMeta();
void *igVec4dMetaField_vtableRead();
void igVec4dMetaField_arkRegister();
void igVec4dMetaField_register();
void *igVec4dMetaField_getMetaCall();
void *igVec3ucMetaField_getMeta();
void *igVec3ucMetaField_vtableRead();
void igVec3ucMetaField_arkRegister();
void igVec3ucMetaField_register();
void *igVec3ucMetaField_getMetaCall();
void *igVec3fMetaField_getMeta();
void *igVec3fMetaField_vtableRead();
void igVec3fMetaField_arkRegister();
void igVec3fMetaField_register();
void *igVec3fMetaField_getMetaCall();
void *igVec3dMetaField_getMeta();
void *igVec3dMetaField_vtableRead();
void igVec3dMetaField_arkRegister();
void igVec3dMetaField_register();
void *igVec3dMetaField_getMetaCall();
void *igVec2fMetaField_getMeta();
void *igVec2fMetaField_vtableRead();
void igVec2fMetaField_arkRegister();
void igVec2fMetaField_register();
void *igVec2fMetaField_getMetaCall();
void *igVec2dMetaField_getMeta();
void *igVec2dMetaField_vtableRead();
void igVec2dMetaField_arkRegister();
void igVec2dMetaField_register();
void *igVec2dMetaField_getMetaCall();
void *igSphere_getMeta();
void *igSphere_vtableRead();
void igSphere_arkRegister();
void igSphere_register();
void *igSphere_getMetaCall();
void *fn_8011F6A4();
}
struct UnknownGenObject8011DB6C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8011DCCC_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenObject8011DE20_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenRoot8011DF74 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011DF74(){fn_800638E0(this);}
};
struct UnknownGenObject8011DF74_0 : UnknownGenRoot8011DF74 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011DF74_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011DF74 : UnknownGenObject8011DF74_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011DF74(){unknown00=igVec4ucMetaField_vtable;}
};
struct UnknownGenRoot8011E1F0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E1F0(){fn_800638E0(this);}
};
struct UnknownGenObject8011E1F0_0 : UnknownGenRoot8011E1F0 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E1F0_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E1F0 : UnknownGenObject8011E1F0_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011E1F0(){unknown00=igVec4fMetaField_vtable;}
};
struct UnknownGenRoot8011E46C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E46C(){fn_800638E0(this);}
};
struct UnknownGenObject8011E46C_0 : UnknownGenRoot8011E46C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E46C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E46C_1 : UnknownGenObject8011E46C_0 {
 inline ~UnknownGenObject8011E46C_1(){unknown00=igVec4fMetaField_vtable;}
};
struct UnknownGenObject8011E46C : UnknownGenObject8011E46C_1 {
 char unknown10[48];
 inline ~UnknownGenObject8011E46C(){unknown00=igVec4fArrayMetaField_vtable;}
};
struct UnknownGenRoot8011E71C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E71C(){fn_800638E0(this);}
};
struct UnknownGenObject8011E71C_0 : UnknownGenRoot8011E71C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E71C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E71C : UnknownGenObject8011E71C_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011E71C(){unknown00=igVec4dMetaField_vtable;}
};
struct UnknownGenRoot8011E960 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E960(){fn_800638E0(this);}
};
struct UnknownGenObject8011E960_0 : UnknownGenRoot8011E960 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E960_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E960 : UnknownGenObject8011E960_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011E960(){unknown00=igVec3ucMetaField_vtable;}
};
struct UnknownGenRoot8011EBDC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011EBDC(){fn_800638E0(this);}
};
struct UnknownGenObject8011EBDC_0 : UnknownGenRoot8011EBDC {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011EBDC_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011EBDC : UnknownGenObject8011EBDC_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011EBDC(){unknown00=igVec3fMetaField_vtable;}
};
struct UnknownGenRoot8011EE20 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011EE20(){fn_800638E0(this);}
};
struct UnknownGenObject8011EE20_0 : UnknownGenRoot8011EE20 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011EE20_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011EE20 : UnknownGenObject8011EE20_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011EE20(){unknown00=igVec3dMetaField_vtable;}
};
struct UnknownGenRoot8011F09C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011F09C(){fn_800638E0(this);}
};
struct UnknownGenObject8011F09C_0 : UnknownGenRoot8011F09C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011F09C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011F09C : UnknownGenObject8011F09C_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011F09C(){unknown00=igVec2fMetaField_vtable;}
};
struct UnknownGenRoot8011F2E0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011F2E0(){fn_800638E0(this);}
};
struct UnknownGenObject8011F2E0_0 : UnknownGenRoot8011F2E0 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011F2E0_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011F2E0 : UnknownGenObject8011F2E0_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011F2E0(){unknown00=igVec2dMetaField_vtable;}
};
struct UnknownGenObject8011F598_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void fn_8011E648(){
 if(!lbl_805638F4){
  void *object=(lbl_805638F4=meta_createInstance(igVec4fArrayMetaField_meta,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_805638F4));
   reinterpret_cast<short *>(lbl_805638F4)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_805638F4);
  }
 }
}
}
#pragma pop
}

namespace igVec4dMetaField {
// igVec4dMetaField: Alchemy class registration (0x8011E6E0..0x8011E85C). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igVec4dMetaField)
META_DECLARE(igMetaField)

extern "C" {
void *fn_80021D70();
void fn_800638E0(void *);
void fn_8011D8BC();
extern char igVec4dMetaField_dependencies[8];
extern char lbl_80471914[];
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

struct igVec4dMetaFieldInstance : Instance_80471914 {
    char unknown10[48];
    inline ~igVec4dMetaFieldInstance() { __vtable = igVec4dMetaField_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igVec4dMetaField)

void *igVec4dMetaField_vtableRead()
{
    igVec4dMetaFieldInstance object;
    object.__vtable = igVec4dMetaField_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igVec4dMetaField)

void igVec4dMetaField_register()
{
    fn_8011D8BC();
    meta_registerClass(0, &igVec4dMetaField_meta, igMetaField_register,
                       fn_80021D70, igVec4dMetaField_getMetaCall,
                       igVec4dMetaField_className, 0x34,
                       igVec4dMetaField_vtableRead, 0, 0, igVec4dMetaField_dependencies);
}

META_GET_META_CALL(igVec4dMetaField)

}
#pragma pop
}

namespace unknown8011E85C {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80021D70();
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void fn_80053650(void *,int);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void fn_800638E0(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void fn_80065D94(int);
void fn_80065DBC(int);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8011D8BC();
void *fn_8011F74C();
void *fn_8012705C();
void *fn_80127270();
void fn_8012728C();
void fn_80127368(int);
void *fn_80127910();
void igMetaField_register();
void igObjectList_register();
void igObject_register();
void igSphere_fieldInit();
extern char lbl_80471914[];
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igVec4ucMetaField_vtable[];
extern char igVec4fMetaField_vtable[];
extern char igVec4fArrayMetaField_vtable[];
extern char igVec4dMetaField_vtable[];
extern char igVec3ucMetaField_vtable[];
extern char igVec3fMetaField_vtable[];
extern char igVec3dMetaField_vtable[];
extern char igVec2fMetaField_vtable[];
extern char igVec2dMetaField_vtable[];
extern char igSphere_vtable[];
extern char lbl_8049B9DC[];
extern char igVectorBlending_vtable[];
extern char igVectorMorphing_vtable[];
extern char igVolumeList_vtable[];
extern char lbl_8049BB54[];
extern char igVolumeList_dependencies[8];
extern char igVec4ucMetaField_dependencies[8];
extern char igVec4fMetaField_dependencies[8];
extern char igVec4fArrayMetaField_dependencies[8];
extern char igVec4fArrayMetaField_fieldTypes[4];
extern char igVec4fArrayMetaField_fieldNames[4];
extern char igVec4fArrayMetaField_fieldStorage[4];
extern char igVec4fArrayMetaField_fieldOffsets[4];
extern char igVec4dMetaField_dependencies[8];
extern char igVec3ucMetaField_dependencies[8];
extern char igVec3fMetaField_dependencies[8];
extern char igVec3dMetaField_dependencies[8];
extern char igVec2fMetaField_dependencies[8];
extern char igVec2dMetaField_dependencies[8];
extern void *lbl_805621F4;
extern void *igVolume_meta;
extern void *igVolumeList_meta;
extern void *igVectorMorphing_meta;
extern void *igVectorBlending_meta;
extern void *igVec4ucMetaField_meta;
extern void *lbl_805638DC;
extern void *igVec4fMetaField_meta;
extern void *lbl_805638EC;
extern void *igVec4fArrayMetaField_meta;
extern void *lbl_805638F4;
extern void *igVec4dMetaField_meta;
extern void *lbl_80563900;
extern void *igVec3ucMetaField_meta;
extern void *lbl_80563910;
extern void *igVec3fMetaField_meta;
extern void *lbl_80563920;
extern void *igVec3dMetaField_meta;
extern void *lbl_80563930;
extern void *igVec2fMetaField_meta;
extern void *lbl_80563940;
extern void *igVec2dMetaField_meta;
extern void *lbl_80563950;
extern void *igSphere_meta;
void *igVolume_getMeta();
void igVolume_arkRegister();
void igVolume_register();
void *igVolume_getMetaCall();
void fn_8011DA48();
void fn_8011DA70();
void *fn_8011DA9C();
void *igVolumeList_getMeta();
void *igVolumeList_vtableRead();
void igVolumeList_arkRegister();
void igVolumeList_register();
void *igVolumeList_getMetaCall();
void *igVectorMorphing_getMeta();
void *igVectorMorphing_vtableRead();
void igVectorMorphing_arkRegister();
void igVectorMorphing_register();
void *igVectorMorphing_getMetaCall();
void *fn_8011DDC4();
void *igVectorBlending_getMeta();
void *igVectorBlending_vtableRead();
void igVectorBlending_arkRegister();
void igVectorBlending_register();
void *igVectorBlending_getMetaCall();
void *fn_8011DF18();
void *igVec4ucMetaField_getMeta();
void *igVec4ucMetaField_vtableRead();
void igVec4ucMetaField_arkRegister();
void igVec4ucMetaField_register();
void *igVec4ucMetaField_getMetaCall();
void *igVec4fMetaField_getMeta();
void *igVec4fMetaField_vtableRead();
void igVec4fMetaField_arkRegister();
void igVec4fMetaField_register();
void *igVec4fMetaField_getMetaCall();
void *igVec4fArrayMetaField_getMeta();
void *igVec4fArrayMetaField_vtableRead();
void igVec4fArrayMetaField_arkRegister();
void igVec4fArrayMetaField_register();
void *igVec4fArrayMetaField_getMetaCall();
void *igVec4fArrayMetaField_parentMeta();
void igVec4fArrayMetaField_fieldInit();
void *igVec4dMetaField_getMeta();
void *igVec4dMetaField_vtableRead();
void igVec4dMetaField_arkRegister();
void igVec4dMetaField_register();
void *igVec4dMetaField_getMetaCall();
void *igVec3ucMetaField_getMeta();
void *igVec3ucMetaField_vtableRead();
void igVec3ucMetaField_arkRegister();
void igVec3ucMetaField_register();
void *igVec3ucMetaField_getMetaCall();
void *igVec3fMetaField_getMeta();
void *igVec3fMetaField_vtableRead();
void igVec3fMetaField_arkRegister();
void igVec3fMetaField_register();
void *igVec3fMetaField_getMetaCall();
void *igVec3dMetaField_getMeta();
void *igVec3dMetaField_vtableRead();
void igVec3dMetaField_arkRegister();
void igVec3dMetaField_register();
void *igVec3dMetaField_getMetaCall();
void *igVec2fMetaField_getMeta();
void *igVec2fMetaField_vtableRead();
void igVec2fMetaField_arkRegister();
void igVec2fMetaField_register();
void *igVec2fMetaField_getMetaCall();
void *igVec2dMetaField_getMeta();
void *igVec2dMetaField_vtableRead();
void igVec2dMetaField_arkRegister();
void igVec2dMetaField_register();
void *igVec2dMetaField_getMetaCall();
void *igSphere_getMeta();
void *igSphere_vtableRead();
void igSphere_arkRegister();
void igSphere_register();
void *igSphere_getMetaCall();
void *fn_8011F6A4();
}
struct UnknownGenObject8011DB6C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8011DCCC_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenObject8011DE20_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenRoot8011DF74 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011DF74(){fn_800638E0(this);}
};
struct UnknownGenObject8011DF74_0 : UnknownGenRoot8011DF74 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011DF74_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011DF74 : UnknownGenObject8011DF74_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011DF74(){unknown00=igVec4ucMetaField_vtable;}
};
struct UnknownGenRoot8011E1F0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E1F0(){fn_800638E0(this);}
};
struct UnknownGenObject8011E1F0_0 : UnknownGenRoot8011E1F0 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E1F0_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E1F0 : UnknownGenObject8011E1F0_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011E1F0(){unknown00=igVec4fMetaField_vtable;}
};
struct UnknownGenRoot8011E46C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E46C(){fn_800638E0(this);}
};
struct UnknownGenObject8011E46C_0 : UnknownGenRoot8011E46C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E46C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E46C_1 : UnknownGenObject8011E46C_0 {
 inline ~UnknownGenObject8011E46C_1(){unknown00=igVec4fMetaField_vtable;}
};
struct UnknownGenObject8011E46C : UnknownGenObject8011E46C_1 {
 char unknown10[48];
 inline ~UnknownGenObject8011E46C(){unknown00=igVec4fArrayMetaField_vtable;}
};
struct UnknownGenRoot8011E71C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E71C(){fn_800638E0(this);}
};
struct UnknownGenObject8011E71C_0 : UnknownGenRoot8011E71C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E71C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E71C : UnknownGenObject8011E71C_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011E71C(){unknown00=igVec4dMetaField_vtable;}
};
struct UnknownGenRoot8011E960 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E960(){fn_800638E0(this);}
};
struct UnknownGenObject8011E960_0 : UnknownGenRoot8011E960 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E960_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E960 : UnknownGenObject8011E960_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011E960(){unknown00=igVec3ucMetaField_vtable;}
};
struct UnknownGenRoot8011EBDC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011EBDC(){fn_800638E0(this);}
};
struct UnknownGenObject8011EBDC_0 : UnknownGenRoot8011EBDC {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011EBDC_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011EBDC : UnknownGenObject8011EBDC_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011EBDC(){unknown00=igVec3fMetaField_vtable;}
};
struct UnknownGenRoot8011EE20 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011EE20(){fn_800638E0(this);}
};
struct UnknownGenObject8011EE20_0 : UnknownGenRoot8011EE20 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011EE20_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011EE20 : UnknownGenObject8011EE20_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011EE20(){unknown00=igVec3dMetaField_vtable;}
};
struct UnknownGenRoot8011F09C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011F09C(){fn_800638E0(this);}
};
struct UnknownGenObject8011F09C_0 : UnknownGenRoot8011F09C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011F09C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011F09C : UnknownGenObject8011F09C_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011F09C(){unknown00=igVec2fMetaField_vtable;}
};
struct UnknownGenRoot8011F2E0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011F2E0(){fn_800638E0(this);}
};
struct UnknownGenObject8011F2E0_0 : UnknownGenRoot8011F2E0 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011F2E0_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011F2E0 : UnknownGenObject8011F2E0_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011F2E0(){unknown00=igVec2dMetaField_vtable;}
};
struct UnknownGenObject8011F598_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void fn_8011E85C(){
 if(!lbl_80563900){
  void *object=(lbl_80563900=meta_createInstance(igVec4dMetaField_meta,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80563900));
   reinterpret_cast<short *>(lbl_80563900)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80563900);
  }
 }
}
void *fn_8011E8F4(){
 if(!lbl_80563900){
  igVec4dMetaField_arkRegister();
 }
 return lbl_80563900;
}
}
#pragma pop
}

namespace igVec3ucMetaField {
// igVec3ucMetaField: Alchemy class registration (0x8011E924..0x8011EAA0). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igVec3ucMetaField)
META_DECLARE(igMetaField)

extern "C" {
void *fn_80021D70();
void fn_800638E0(void *);
void fn_8011D8BC();
extern char igVec3ucMetaField_dependencies[8];
extern char lbl_80471914[];
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

struct igVec3ucMetaFieldInstance : Instance_80471914 {
    char unknown10[48];
    inline ~igVec3ucMetaFieldInstance() { __vtable = igVec3ucMetaField_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igVec3ucMetaField)

void *igVec3ucMetaField_vtableRead()
{
    igVec3ucMetaFieldInstance object;
    object.__vtable = igVec3ucMetaField_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igVec3ucMetaField)

void igVec3ucMetaField_register()
{
    fn_8011D8BC();
    meta_registerClass(0, &igVec3ucMetaField_meta, igMetaField_register,
                       fn_80021D70, igVec3ucMetaField_getMetaCall,
                       igVec3ucMetaField_className, 0x34,
                       igVec3ucMetaField_vtableRead, 0, 0, igVec3ucMetaField_dependencies);
}

META_GET_META_CALL(igVec3ucMetaField)

}
#pragma pop
}

namespace unknown8011EAA0 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80021D70();
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void fn_80053650(void *,int);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void fn_800638E0(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void fn_80065D94(int);
void fn_80065DBC(int);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8011D8BC();
void *fn_8011F74C();
void *fn_8012705C();
void *fn_80127270();
void fn_8012728C();
void fn_80127368(int);
void *fn_80127910();
void igMetaField_register();
void igObjectList_register();
void igObject_register();
void igSphere_fieldInit();
extern char lbl_80471914[];
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igVec4ucMetaField_vtable[];
extern char igVec4fMetaField_vtable[];
extern char igVec4fArrayMetaField_vtable[];
extern char igVec4dMetaField_vtable[];
extern char igVec3ucMetaField_vtable[];
extern char igVec3fMetaField_vtable[];
extern char igVec3dMetaField_vtable[];
extern char igVec2fMetaField_vtable[];
extern char igVec2dMetaField_vtable[];
extern char igSphere_vtable[];
extern char lbl_8049B9DC[];
extern char igVectorBlending_vtable[];
extern char igVectorMorphing_vtable[];
extern char igVolumeList_vtable[];
extern char lbl_8049BB54[];
extern char igVolumeList_dependencies[8];
extern char igVec4ucMetaField_dependencies[8];
extern char igVec4fMetaField_dependencies[8];
extern char igVec4fArrayMetaField_dependencies[8];
extern char igVec4fArrayMetaField_fieldTypes[4];
extern char igVec4fArrayMetaField_fieldNames[4];
extern char igVec4fArrayMetaField_fieldStorage[4];
extern char igVec4fArrayMetaField_fieldOffsets[4];
extern char igVec4dMetaField_dependencies[8];
extern char igVec3ucMetaField_dependencies[8];
extern char igVec3fMetaField_dependencies[8];
extern char igVec3dMetaField_dependencies[8];
extern char igVec2fMetaField_dependencies[8];
extern char igVec2dMetaField_dependencies[8];
extern void *lbl_805621F4;
extern void *igVolume_meta;
extern void *igVolumeList_meta;
extern void *igVectorMorphing_meta;
extern void *igVectorBlending_meta;
extern void *igVec4ucMetaField_meta;
extern void *lbl_805638DC;
extern void *igVec4fMetaField_meta;
extern void *lbl_805638EC;
extern void *igVec4fArrayMetaField_meta;
extern void *lbl_805638F4;
extern void *igVec4dMetaField_meta;
extern void *lbl_80563900;
extern void *igVec3ucMetaField_meta;
extern void *lbl_80563910;
extern void *igVec3fMetaField_meta;
extern void *lbl_80563920;
extern void *igVec3dMetaField_meta;
extern void *lbl_80563930;
extern void *igVec2fMetaField_meta;
extern void *lbl_80563940;
extern void *igVec2dMetaField_meta;
extern void *lbl_80563950;
extern void *igSphere_meta;
void *igVolume_getMeta();
void igVolume_arkRegister();
void igVolume_register();
void *igVolume_getMetaCall();
void fn_8011DA48();
void fn_8011DA70();
void *fn_8011DA9C();
void *igVolumeList_getMeta();
void *igVolumeList_vtableRead();
void igVolumeList_arkRegister();
void igVolumeList_register();
void *igVolumeList_getMetaCall();
void *igVectorMorphing_getMeta();
void *igVectorMorphing_vtableRead();
void igVectorMorphing_arkRegister();
void igVectorMorphing_register();
void *igVectorMorphing_getMetaCall();
void *fn_8011DDC4();
void *igVectorBlending_getMeta();
void *igVectorBlending_vtableRead();
void igVectorBlending_arkRegister();
void igVectorBlending_register();
void *igVectorBlending_getMetaCall();
void *fn_8011DF18();
void *igVec4ucMetaField_getMeta();
void *igVec4ucMetaField_vtableRead();
void igVec4ucMetaField_arkRegister();
void igVec4ucMetaField_register();
void *igVec4ucMetaField_getMetaCall();
void *igVec4fMetaField_getMeta();
void *igVec4fMetaField_vtableRead();
void igVec4fMetaField_arkRegister();
void igVec4fMetaField_register();
void *igVec4fMetaField_getMetaCall();
void *igVec4fArrayMetaField_getMeta();
void *igVec4fArrayMetaField_vtableRead();
void igVec4fArrayMetaField_arkRegister();
void igVec4fArrayMetaField_register();
void *igVec4fArrayMetaField_getMetaCall();
void *igVec4fArrayMetaField_parentMeta();
void igVec4fArrayMetaField_fieldInit();
void *igVec4dMetaField_getMeta();
void *igVec4dMetaField_vtableRead();
void igVec4dMetaField_arkRegister();
void igVec4dMetaField_register();
void *igVec4dMetaField_getMetaCall();
void *igVec3ucMetaField_getMeta();
void *igVec3ucMetaField_vtableRead();
void igVec3ucMetaField_arkRegister();
void igVec3ucMetaField_register();
void *igVec3ucMetaField_getMetaCall();
void *igVec3fMetaField_getMeta();
void *igVec3fMetaField_vtableRead();
void igVec3fMetaField_arkRegister();
void igVec3fMetaField_register();
void *igVec3fMetaField_getMetaCall();
void *igVec3dMetaField_getMeta();
void *igVec3dMetaField_vtableRead();
void igVec3dMetaField_arkRegister();
void igVec3dMetaField_register();
void *igVec3dMetaField_getMetaCall();
void *igVec2fMetaField_getMeta();
void *igVec2fMetaField_vtableRead();
void igVec2fMetaField_arkRegister();
void igVec2fMetaField_register();
void *igVec2fMetaField_getMetaCall();
void *igVec2dMetaField_getMeta();
void *igVec2dMetaField_vtableRead();
void igVec2dMetaField_arkRegister();
void igVec2dMetaField_register();
void *igVec2dMetaField_getMetaCall();
void *igSphere_getMeta();
void *igSphere_vtableRead();
void igSphere_arkRegister();
void igSphere_register();
void *igSphere_getMetaCall();
void *fn_8011F6A4();
}
struct UnknownGenObject8011DB6C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8011DCCC_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenObject8011DE20_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenRoot8011DF74 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011DF74(){fn_800638E0(this);}
};
struct UnknownGenObject8011DF74_0 : UnknownGenRoot8011DF74 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011DF74_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011DF74 : UnknownGenObject8011DF74_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011DF74(){unknown00=igVec4ucMetaField_vtable;}
};
struct UnknownGenRoot8011E1F0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E1F0(){fn_800638E0(this);}
};
struct UnknownGenObject8011E1F0_0 : UnknownGenRoot8011E1F0 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E1F0_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E1F0 : UnknownGenObject8011E1F0_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011E1F0(){unknown00=igVec4fMetaField_vtable;}
};
struct UnknownGenRoot8011E46C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E46C(){fn_800638E0(this);}
};
struct UnknownGenObject8011E46C_0 : UnknownGenRoot8011E46C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E46C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E46C_1 : UnknownGenObject8011E46C_0 {
 inline ~UnknownGenObject8011E46C_1(){unknown00=igVec4fMetaField_vtable;}
};
struct UnknownGenObject8011E46C : UnknownGenObject8011E46C_1 {
 char unknown10[48];
 inline ~UnknownGenObject8011E46C(){unknown00=igVec4fArrayMetaField_vtable;}
};
struct UnknownGenRoot8011E71C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E71C(){fn_800638E0(this);}
};
struct UnknownGenObject8011E71C_0 : UnknownGenRoot8011E71C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E71C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E71C : UnknownGenObject8011E71C_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011E71C(){unknown00=igVec4dMetaField_vtable;}
};
struct UnknownGenRoot8011E960 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E960(){fn_800638E0(this);}
};
struct UnknownGenObject8011E960_0 : UnknownGenRoot8011E960 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E960_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E960 : UnknownGenObject8011E960_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011E960(){unknown00=igVec3ucMetaField_vtable;}
};
struct UnknownGenRoot8011EBDC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011EBDC(){fn_800638E0(this);}
};
struct UnknownGenObject8011EBDC_0 : UnknownGenRoot8011EBDC {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011EBDC_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011EBDC : UnknownGenObject8011EBDC_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011EBDC(){unknown00=igVec3fMetaField_vtable;}
};
struct UnknownGenRoot8011EE20 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011EE20(){fn_800638E0(this);}
};
struct UnknownGenObject8011EE20_0 : UnknownGenRoot8011EE20 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011EE20_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011EE20 : UnknownGenObject8011EE20_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011EE20(){unknown00=igVec3dMetaField_vtable;}
};
struct UnknownGenRoot8011F09C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011F09C(){fn_800638E0(this);}
};
struct UnknownGenObject8011F09C_0 : UnknownGenRoot8011F09C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011F09C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011F09C : UnknownGenObject8011F09C_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011F09C(){unknown00=igVec2fMetaField_vtable;}
};
struct UnknownGenRoot8011F2E0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011F2E0(){fn_800638E0(this);}
};
struct UnknownGenObject8011F2E0_0 : UnknownGenRoot8011F2E0 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011F2E0_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011F2E0 : UnknownGenObject8011F2E0_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011F2E0(){unknown00=igVec2dMetaField_vtable;}
};
struct UnknownGenObject8011F598_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void fn_8011EAA0(){
 if(!lbl_80563910){
  void *object=(lbl_80563910=meta_createInstance(igVec3ucMetaField_meta,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80563910));
   reinterpret_cast<short *>(lbl_80563910)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80563910);
  }
 }
}
void *fn_8011EB38(){
 if(!lbl_80563910){
  igVec3ucMetaField_arkRegister();
 }
 return lbl_80563910;
}
}
#pragma pop
}

namespace igVec3fMetaField {
// igVec3fMetaField: Alchemy class registration (0x8011EB68..0x8011ED1C). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igVec3fMetaField)
META_DECLARE(igMetaField)

extern "C" {
void *fn_80021D70();
void fn_800638E0(void *);
void fn_8011D8BC();
extern char igVec3fMetaField_dependencies[8];
extern char lbl_80471914[];
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

struct igVec3fMetaFieldInstance : Instance_80471914 {
    char unknown10[48];
    inline ~igVec3fMetaFieldInstance() { __vtable = igVec3fMetaField_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igVec3fMetaField)

META_GET_META(igVec3fMetaField)

void *igVec3fMetaField_vtableRead()
{
    igVec3fMetaFieldInstance object;
    object.__vtable = igVec3fMetaField_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igVec3fMetaField)

void igVec3fMetaField_register()
{
    fn_8011D8BC();
    meta_registerClass(0, &igVec3fMetaField_meta, igMetaField_register,
                       fn_80021D70, igVec3fMetaField_getMetaCall,
                       igVec3fMetaField_className, 0x34,
                       igVec3fMetaField_vtableRead, 0, 0, igVec3fMetaField_dependencies);
}

META_GET_META_CALL(igVec3fMetaField)

}
#pragma pop
}

namespace unknown8011ED1C {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80021D70();
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void fn_80053650(void *,int);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void fn_800638E0(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void fn_80065D94(int);
void fn_80065DBC(int);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8011D8BC();
void *fn_8011F74C();
void *fn_8012705C();
void *fn_80127270();
void fn_8012728C();
void fn_80127368(int);
void *fn_80127910();
void igMetaField_register();
void igObjectList_register();
void igObject_register();
void igSphere_fieldInit();
extern char lbl_80471914[];
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igVec4ucMetaField_vtable[];
extern char igVec4fMetaField_vtable[];
extern char igVec4fArrayMetaField_vtable[];
extern char igVec4dMetaField_vtable[];
extern char igVec3ucMetaField_vtable[];
extern char igVec3fMetaField_vtable[];
extern char igVec3dMetaField_vtable[];
extern char igVec2fMetaField_vtable[];
extern char igVec2dMetaField_vtable[];
extern char igSphere_vtable[];
extern char lbl_8049B9DC[];
extern char igVectorBlending_vtable[];
extern char igVectorMorphing_vtable[];
extern char igVolumeList_vtable[];
extern char lbl_8049BB54[];
extern char igVolumeList_dependencies[8];
extern char igVec4ucMetaField_dependencies[8];
extern char igVec4fMetaField_dependencies[8];
extern char igVec4fArrayMetaField_dependencies[8];
extern char igVec4fArrayMetaField_fieldTypes[4];
extern char igVec4fArrayMetaField_fieldNames[4];
extern char igVec4fArrayMetaField_fieldStorage[4];
extern char igVec4fArrayMetaField_fieldOffsets[4];
extern char igVec4dMetaField_dependencies[8];
extern char igVec3ucMetaField_dependencies[8];
extern char igVec3fMetaField_dependencies[8];
extern char igVec3dMetaField_dependencies[8];
extern char igVec2fMetaField_dependencies[8];
extern char igVec2dMetaField_dependencies[8];
extern void *lbl_805621F4;
extern void *igVolume_meta;
extern void *igVolumeList_meta;
extern void *igVectorMorphing_meta;
extern void *igVectorBlending_meta;
extern void *igVec4ucMetaField_meta;
extern void *lbl_805638DC;
extern void *igVec4fMetaField_meta;
extern void *lbl_805638EC;
extern void *igVec4fArrayMetaField_meta;
extern void *lbl_805638F4;
extern void *igVec4dMetaField_meta;
extern void *lbl_80563900;
extern void *igVec3ucMetaField_meta;
extern void *lbl_80563910;
extern void *igVec3fMetaField_meta;
extern void *lbl_80563920;
extern void *igVec3dMetaField_meta;
extern void *lbl_80563930;
extern void *igVec2fMetaField_meta;
extern void *lbl_80563940;
extern void *igVec2dMetaField_meta;
extern void *lbl_80563950;
extern void *igSphere_meta;
void *igVolume_getMeta();
void igVolume_arkRegister();
void igVolume_register();
void *igVolume_getMetaCall();
void fn_8011DA48();
void fn_8011DA70();
void *fn_8011DA9C();
void *igVolumeList_getMeta();
void *igVolumeList_vtableRead();
void igVolumeList_arkRegister();
void igVolumeList_register();
void *igVolumeList_getMetaCall();
void *igVectorMorphing_getMeta();
void *igVectorMorphing_vtableRead();
void igVectorMorphing_arkRegister();
void igVectorMorphing_register();
void *igVectorMorphing_getMetaCall();
void *fn_8011DDC4();
void *igVectorBlending_getMeta();
void *igVectorBlending_vtableRead();
void igVectorBlending_arkRegister();
void igVectorBlending_register();
void *igVectorBlending_getMetaCall();
void *fn_8011DF18();
void *igVec4ucMetaField_getMeta();
void *igVec4ucMetaField_vtableRead();
void igVec4ucMetaField_arkRegister();
void igVec4ucMetaField_register();
void *igVec4ucMetaField_getMetaCall();
void *igVec4fMetaField_getMeta();
void *igVec4fMetaField_vtableRead();
void igVec4fMetaField_arkRegister();
void igVec4fMetaField_register();
void *igVec4fMetaField_getMetaCall();
void *igVec4fArrayMetaField_getMeta();
void *igVec4fArrayMetaField_vtableRead();
void igVec4fArrayMetaField_arkRegister();
void igVec4fArrayMetaField_register();
void *igVec4fArrayMetaField_getMetaCall();
void *igVec4fArrayMetaField_parentMeta();
void igVec4fArrayMetaField_fieldInit();
void *igVec4dMetaField_getMeta();
void *igVec4dMetaField_vtableRead();
void igVec4dMetaField_arkRegister();
void igVec4dMetaField_register();
void *igVec4dMetaField_getMetaCall();
void *igVec3ucMetaField_getMeta();
void *igVec3ucMetaField_vtableRead();
void igVec3ucMetaField_arkRegister();
void igVec3ucMetaField_register();
void *igVec3ucMetaField_getMetaCall();
void *igVec3fMetaField_getMeta();
void *igVec3fMetaField_vtableRead();
void igVec3fMetaField_arkRegister();
void igVec3fMetaField_register();
void *igVec3fMetaField_getMetaCall();
void *igVec3dMetaField_getMeta();
void *igVec3dMetaField_vtableRead();
void igVec3dMetaField_arkRegister();
void igVec3dMetaField_register();
void *igVec3dMetaField_getMetaCall();
void *igVec2fMetaField_getMeta();
void *igVec2fMetaField_vtableRead();
void igVec2fMetaField_arkRegister();
void igVec2fMetaField_register();
void *igVec2fMetaField_getMetaCall();
void *igVec2dMetaField_getMeta();
void *igVec2dMetaField_vtableRead();
void igVec2dMetaField_arkRegister();
void igVec2dMetaField_register();
void *igVec2dMetaField_getMetaCall();
void *igSphere_getMeta();
void *igSphere_vtableRead();
void igSphere_arkRegister();
void igSphere_register();
void *igSphere_getMetaCall();
void *fn_8011F6A4();
}
struct UnknownGenObject8011DB6C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8011DCCC_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenObject8011DE20_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenRoot8011DF74 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011DF74(){fn_800638E0(this);}
};
struct UnknownGenObject8011DF74_0 : UnknownGenRoot8011DF74 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011DF74_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011DF74 : UnknownGenObject8011DF74_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011DF74(){unknown00=igVec4ucMetaField_vtable;}
};
struct UnknownGenRoot8011E1F0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E1F0(){fn_800638E0(this);}
};
struct UnknownGenObject8011E1F0_0 : UnknownGenRoot8011E1F0 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E1F0_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E1F0 : UnknownGenObject8011E1F0_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011E1F0(){unknown00=igVec4fMetaField_vtable;}
};
struct UnknownGenRoot8011E46C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E46C(){fn_800638E0(this);}
};
struct UnknownGenObject8011E46C_0 : UnknownGenRoot8011E46C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E46C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E46C_1 : UnknownGenObject8011E46C_0 {
 inline ~UnknownGenObject8011E46C_1(){unknown00=igVec4fMetaField_vtable;}
};
struct UnknownGenObject8011E46C : UnknownGenObject8011E46C_1 {
 char unknown10[48];
 inline ~UnknownGenObject8011E46C(){unknown00=igVec4fArrayMetaField_vtable;}
};
struct UnknownGenRoot8011E71C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E71C(){fn_800638E0(this);}
};
struct UnknownGenObject8011E71C_0 : UnknownGenRoot8011E71C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E71C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E71C : UnknownGenObject8011E71C_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011E71C(){unknown00=igVec4dMetaField_vtable;}
};
struct UnknownGenRoot8011E960 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E960(){fn_800638E0(this);}
};
struct UnknownGenObject8011E960_0 : UnknownGenRoot8011E960 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E960_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E960 : UnknownGenObject8011E960_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011E960(){unknown00=igVec3ucMetaField_vtable;}
};
struct UnknownGenRoot8011EBDC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011EBDC(){fn_800638E0(this);}
};
struct UnknownGenObject8011EBDC_0 : UnknownGenRoot8011EBDC {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011EBDC_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011EBDC : UnknownGenObject8011EBDC_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011EBDC(){unknown00=igVec3fMetaField_vtable;}
};
struct UnknownGenRoot8011EE20 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011EE20(){fn_800638E0(this);}
};
struct UnknownGenObject8011EE20_0 : UnknownGenRoot8011EE20 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011EE20_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011EE20 : UnknownGenObject8011EE20_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011EE20(){unknown00=igVec3dMetaField_vtable;}
};
struct UnknownGenRoot8011F09C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011F09C(){fn_800638E0(this);}
};
struct UnknownGenObject8011F09C_0 : UnknownGenRoot8011F09C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011F09C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011F09C : UnknownGenObject8011F09C_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011F09C(){unknown00=igVec2fMetaField_vtable;}
};
struct UnknownGenRoot8011F2E0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011F2E0(){fn_800638E0(this);}
};
struct UnknownGenObject8011F2E0_0 : UnknownGenRoot8011F2E0 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011F2E0_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011F2E0 : UnknownGenObject8011F2E0_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011F2E0(){unknown00=igVec2dMetaField_vtable;}
};
struct UnknownGenObject8011F598_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void fn_8011ED1C(){
 if(!lbl_80563920){
  void *object=(lbl_80563920=meta_createInstance(igVec3fMetaField_meta,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80563920));
   reinterpret_cast<short *>(lbl_80563920)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80563920);
  }
 }
}
void *fn_8011EDB4(){
 if(!lbl_80563920){
  igVec3fMetaField_arkRegister();
 }
 return lbl_80563920;
}
}
#pragma pop
}

namespace igVec3dMetaField {
// igVec3dMetaField: Alchemy class registration (0x8011EDE4..0x8011EF60). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igVec3dMetaField)
META_DECLARE(igMetaField)

extern "C" {
void *fn_80021D70();
void fn_800638E0(void *);
void fn_8011D8BC();
extern char igVec3dMetaField_dependencies[8];
extern char lbl_80471914[];
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

struct igVec3dMetaFieldInstance : Instance_80471914 {
    char unknown10[48];
    inline ~igVec3dMetaFieldInstance() { __vtable = igVec3dMetaField_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igVec3dMetaField)

void *igVec3dMetaField_vtableRead()
{
    igVec3dMetaFieldInstance object;
    object.__vtable = igVec3dMetaField_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igVec3dMetaField)

void igVec3dMetaField_register()
{
    fn_8011D8BC();
    meta_registerClass(0, &igVec3dMetaField_meta, igMetaField_register,
                       fn_80021D70, igVec3dMetaField_getMetaCall,
                       igVec3dMetaField_className, 0x34,
                       igVec3dMetaField_vtableRead, 0, 0, igVec3dMetaField_dependencies);
}

META_GET_META_CALL(igVec3dMetaField)

}
#pragma pop
}

namespace unknown8011EF60 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80021D70();
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void fn_80053650(void *,int);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void fn_800638E0(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void fn_80065D94(int);
void fn_80065DBC(int);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8011D8BC();
void *fn_8011F74C();
void *fn_8012705C();
void *fn_80127270();
void fn_8012728C();
void fn_80127368(int);
void *fn_80127910();
void igMetaField_register();
void igObjectList_register();
void igObject_register();
void igSphere_fieldInit();
extern char lbl_80471914[];
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igVec4ucMetaField_vtable[];
extern char igVec4fMetaField_vtable[];
extern char igVec4fArrayMetaField_vtable[];
extern char igVec4dMetaField_vtable[];
extern char igVec3ucMetaField_vtable[];
extern char igVec3fMetaField_vtable[];
extern char igVec3dMetaField_vtable[];
extern char igVec2fMetaField_vtable[];
extern char igVec2dMetaField_vtable[];
extern char igSphere_vtable[];
extern char lbl_8049B9DC[];
extern char igVectorBlending_vtable[];
extern char igVectorMorphing_vtable[];
extern char igVolumeList_vtable[];
extern char lbl_8049BB54[];
extern char igVolumeList_dependencies[8];
extern char igVec4ucMetaField_dependencies[8];
extern char igVec4fMetaField_dependencies[8];
extern char igVec4fArrayMetaField_dependencies[8];
extern char igVec4fArrayMetaField_fieldTypes[4];
extern char igVec4fArrayMetaField_fieldNames[4];
extern char igVec4fArrayMetaField_fieldStorage[4];
extern char igVec4fArrayMetaField_fieldOffsets[4];
extern char igVec4dMetaField_dependencies[8];
extern char igVec3ucMetaField_dependencies[8];
extern char igVec3fMetaField_dependencies[8];
extern char igVec3dMetaField_dependencies[8];
extern char igVec2fMetaField_dependencies[8];
extern char igVec2dMetaField_dependencies[8];
extern void *lbl_805621F4;
extern void *igVolume_meta;
extern void *igVolumeList_meta;
extern void *igVectorMorphing_meta;
extern void *igVectorBlending_meta;
extern void *igVec4ucMetaField_meta;
extern void *lbl_805638DC;
extern void *igVec4fMetaField_meta;
extern void *lbl_805638EC;
extern void *igVec4fArrayMetaField_meta;
extern void *lbl_805638F4;
extern void *igVec4dMetaField_meta;
extern void *lbl_80563900;
extern void *igVec3ucMetaField_meta;
extern void *lbl_80563910;
extern void *igVec3fMetaField_meta;
extern void *lbl_80563920;
extern void *igVec3dMetaField_meta;
extern void *lbl_80563930;
extern void *igVec2fMetaField_meta;
extern void *lbl_80563940;
extern void *igVec2dMetaField_meta;
extern void *lbl_80563950;
extern void *igSphere_meta;
void *igVolume_getMeta();
void igVolume_arkRegister();
void igVolume_register();
void *igVolume_getMetaCall();
void fn_8011DA48();
void fn_8011DA70();
void *fn_8011DA9C();
void *igVolumeList_getMeta();
void *igVolumeList_vtableRead();
void igVolumeList_arkRegister();
void igVolumeList_register();
void *igVolumeList_getMetaCall();
void *igVectorMorphing_getMeta();
void *igVectorMorphing_vtableRead();
void igVectorMorphing_arkRegister();
void igVectorMorphing_register();
void *igVectorMorphing_getMetaCall();
void *fn_8011DDC4();
void *igVectorBlending_getMeta();
void *igVectorBlending_vtableRead();
void igVectorBlending_arkRegister();
void igVectorBlending_register();
void *igVectorBlending_getMetaCall();
void *fn_8011DF18();
void *igVec4ucMetaField_getMeta();
void *igVec4ucMetaField_vtableRead();
void igVec4ucMetaField_arkRegister();
void igVec4ucMetaField_register();
void *igVec4ucMetaField_getMetaCall();
void *igVec4fMetaField_getMeta();
void *igVec4fMetaField_vtableRead();
void igVec4fMetaField_arkRegister();
void igVec4fMetaField_register();
void *igVec4fMetaField_getMetaCall();
void *igVec4fArrayMetaField_getMeta();
void *igVec4fArrayMetaField_vtableRead();
void igVec4fArrayMetaField_arkRegister();
void igVec4fArrayMetaField_register();
void *igVec4fArrayMetaField_getMetaCall();
void *igVec4fArrayMetaField_parentMeta();
void igVec4fArrayMetaField_fieldInit();
void *igVec4dMetaField_getMeta();
void *igVec4dMetaField_vtableRead();
void igVec4dMetaField_arkRegister();
void igVec4dMetaField_register();
void *igVec4dMetaField_getMetaCall();
void *igVec3ucMetaField_getMeta();
void *igVec3ucMetaField_vtableRead();
void igVec3ucMetaField_arkRegister();
void igVec3ucMetaField_register();
void *igVec3ucMetaField_getMetaCall();
void *igVec3fMetaField_getMeta();
void *igVec3fMetaField_vtableRead();
void igVec3fMetaField_arkRegister();
void igVec3fMetaField_register();
void *igVec3fMetaField_getMetaCall();
void *igVec3dMetaField_getMeta();
void *igVec3dMetaField_vtableRead();
void igVec3dMetaField_arkRegister();
void igVec3dMetaField_register();
void *igVec3dMetaField_getMetaCall();
void *igVec2fMetaField_getMeta();
void *igVec2fMetaField_vtableRead();
void igVec2fMetaField_arkRegister();
void igVec2fMetaField_register();
void *igVec2fMetaField_getMetaCall();
void *igVec2dMetaField_getMeta();
void *igVec2dMetaField_vtableRead();
void igVec2dMetaField_arkRegister();
void igVec2dMetaField_register();
void *igVec2dMetaField_getMetaCall();
void *igSphere_getMeta();
void *igSphere_vtableRead();
void igSphere_arkRegister();
void igSphere_register();
void *igSphere_getMetaCall();
void *fn_8011F6A4();
}
struct UnknownGenObject8011DB6C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8011DCCC_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenObject8011DE20_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenRoot8011DF74 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011DF74(){fn_800638E0(this);}
};
struct UnknownGenObject8011DF74_0 : UnknownGenRoot8011DF74 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011DF74_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011DF74 : UnknownGenObject8011DF74_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011DF74(){unknown00=igVec4ucMetaField_vtable;}
};
struct UnknownGenRoot8011E1F0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E1F0(){fn_800638E0(this);}
};
struct UnknownGenObject8011E1F0_0 : UnknownGenRoot8011E1F0 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E1F0_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E1F0 : UnknownGenObject8011E1F0_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011E1F0(){unknown00=igVec4fMetaField_vtable;}
};
struct UnknownGenRoot8011E46C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E46C(){fn_800638E0(this);}
};
struct UnknownGenObject8011E46C_0 : UnknownGenRoot8011E46C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E46C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E46C_1 : UnknownGenObject8011E46C_0 {
 inline ~UnknownGenObject8011E46C_1(){unknown00=igVec4fMetaField_vtable;}
};
struct UnknownGenObject8011E46C : UnknownGenObject8011E46C_1 {
 char unknown10[48];
 inline ~UnknownGenObject8011E46C(){unknown00=igVec4fArrayMetaField_vtable;}
};
struct UnknownGenRoot8011E71C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E71C(){fn_800638E0(this);}
};
struct UnknownGenObject8011E71C_0 : UnknownGenRoot8011E71C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E71C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E71C : UnknownGenObject8011E71C_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011E71C(){unknown00=igVec4dMetaField_vtable;}
};
struct UnknownGenRoot8011E960 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E960(){fn_800638E0(this);}
};
struct UnknownGenObject8011E960_0 : UnknownGenRoot8011E960 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E960_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E960 : UnknownGenObject8011E960_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011E960(){unknown00=igVec3ucMetaField_vtable;}
};
struct UnknownGenRoot8011EBDC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011EBDC(){fn_800638E0(this);}
};
struct UnknownGenObject8011EBDC_0 : UnknownGenRoot8011EBDC {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011EBDC_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011EBDC : UnknownGenObject8011EBDC_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011EBDC(){unknown00=igVec3fMetaField_vtable;}
};
struct UnknownGenRoot8011EE20 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011EE20(){fn_800638E0(this);}
};
struct UnknownGenObject8011EE20_0 : UnknownGenRoot8011EE20 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011EE20_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011EE20 : UnknownGenObject8011EE20_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011EE20(){unknown00=igVec3dMetaField_vtable;}
};
struct UnknownGenRoot8011F09C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011F09C(){fn_800638E0(this);}
};
struct UnknownGenObject8011F09C_0 : UnknownGenRoot8011F09C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011F09C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011F09C : UnknownGenObject8011F09C_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011F09C(){unknown00=igVec2fMetaField_vtable;}
};
struct UnknownGenRoot8011F2E0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011F2E0(){fn_800638E0(this);}
};
struct UnknownGenObject8011F2E0_0 : UnknownGenRoot8011F2E0 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011F2E0_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011F2E0 : UnknownGenObject8011F2E0_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011F2E0(){unknown00=igVec2dMetaField_vtable;}
};
struct UnknownGenObject8011F598_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void fn_8011EF60(){
 if(!lbl_80563930){
  void *object=(lbl_80563930=meta_createInstance(igVec3dMetaField_meta,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80563930));
   reinterpret_cast<short *>(lbl_80563930)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80563930);
  }
 }
}
void *fn_8011EFF8(){
 if(!lbl_80563930){
  igVec3dMetaField_arkRegister();
 }
 return lbl_80563930;
}
}
#pragma pop
}

namespace igVec2fMetaField {
// igVec2fMetaField: Alchemy class registration (0x8011F028..0x8011F1DC). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igVec2fMetaField)
META_DECLARE(igMetaField)

extern "C" {
void *fn_80021D70();
void fn_800638E0(void *);
void fn_8011D8BC();
extern char igVec2fMetaField_dependencies[8];
extern char lbl_80471914[];
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

struct igVec2fMetaFieldInstance : Instance_80471914 {
    char unknown10[48];
    inline ~igVec2fMetaFieldInstance() { __vtable = igVec2fMetaField_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igVec2fMetaField)

META_GET_META(igVec2fMetaField)

void *igVec2fMetaField_vtableRead()
{
    igVec2fMetaFieldInstance object;
    object.__vtable = igVec2fMetaField_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igVec2fMetaField)

void igVec2fMetaField_register()
{
    fn_8011D8BC();
    meta_registerClass(0, &igVec2fMetaField_meta, igMetaField_register,
                       fn_80021D70, igVec2fMetaField_getMetaCall,
                       igVec2fMetaField_className, 0x34,
                       igVec2fMetaField_vtableRead, 0, 0, igVec2fMetaField_dependencies);
}

META_GET_META_CALL(igVec2fMetaField)

}
#pragma pop
}

namespace unknown8011F1DC {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80021D70();
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void fn_80053650(void *,int);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void fn_800638E0(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void fn_80065D94(int);
void fn_80065DBC(int);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8011D8BC();
void *fn_8011F74C();
void *fn_8012705C();
void *fn_80127270();
void fn_8012728C();
void fn_80127368(int);
void *fn_80127910();
void igMetaField_register();
void igObjectList_register();
void igObject_register();
void igSphere_fieldInit();
extern char lbl_80471914[];
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igVec4ucMetaField_vtable[];
extern char igVec4fMetaField_vtable[];
extern char igVec4fArrayMetaField_vtable[];
extern char igVec4dMetaField_vtable[];
extern char igVec3ucMetaField_vtable[];
extern char igVec3fMetaField_vtable[];
extern char igVec3dMetaField_vtable[];
extern char igVec2fMetaField_vtable[];
extern char igVec2dMetaField_vtable[];
extern char igSphere_vtable[];
extern char lbl_8049B9DC[];
extern char igVectorBlending_vtable[];
extern char igVectorMorphing_vtable[];
extern char igVolumeList_vtable[];
extern char lbl_8049BB54[];
extern char igVolumeList_dependencies[8];
extern char igVec4ucMetaField_dependencies[8];
extern char igVec4fMetaField_dependencies[8];
extern char igVec4fArrayMetaField_dependencies[8];
extern char igVec4fArrayMetaField_fieldTypes[4];
extern char igVec4fArrayMetaField_fieldNames[4];
extern char igVec4fArrayMetaField_fieldStorage[4];
extern char igVec4fArrayMetaField_fieldOffsets[4];
extern char igVec4dMetaField_dependencies[8];
extern char igVec3ucMetaField_dependencies[8];
extern char igVec3fMetaField_dependencies[8];
extern char igVec3dMetaField_dependencies[8];
extern char igVec2fMetaField_dependencies[8];
extern char igVec2dMetaField_dependencies[8];
extern void *lbl_805621F4;
extern void *igVolume_meta;
extern void *igVolumeList_meta;
extern void *igVectorMorphing_meta;
extern void *igVectorBlending_meta;
extern void *igVec4ucMetaField_meta;
extern void *lbl_805638DC;
extern void *igVec4fMetaField_meta;
extern void *lbl_805638EC;
extern void *igVec4fArrayMetaField_meta;
extern void *lbl_805638F4;
extern void *igVec4dMetaField_meta;
extern void *lbl_80563900;
extern void *igVec3ucMetaField_meta;
extern void *lbl_80563910;
extern void *igVec3fMetaField_meta;
extern void *lbl_80563920;
extern void *igVec3dMetaField_meta;
extern void *lbl_80563930;
extern void *igVec2fMetaField_meta;
extern void *lbl_80563940;
extern void *igVec2dMetaField_meta;
extern void *lbl_80563950;
extern void *igSphere_meta;
void *igVolume_getMeta();
void igVolume_arkRegister();
void igVolume_register();
void *igVolume_getMetaCall();
void fn_8011DA48();
void fn_8011DA70();
void *fn_8011DA9C();
void *igVolumeList_getMeta();
void *igVolumeList_vtableRead();
void igVolumeList_arkRegister();
void igVolumeList_register();
void *igVolumeList_getMetaCall();
void *igVectorMorphing_getMeta();
void *igVectorMorphing_vtableRead();
void igVectorMorphing_arkRegister();
void igVectorMorphing_register();
void *igVectorMorphing_getMetaCall();
void *fn_8011DDC4();
void *igVectorBlending_getMeta();
void *igVectorBlending_vtableRead();
void igVectorBlending_arkRegister();
void igVectorBlending_register();
void *igVectorBlending_getMetaCall();
void *fn_8011DF18();
void *igVec4ucMetaField_getMeta();
void *igVec4ucMetaField_vtableRead();
void igVec4ucMetaField_arkRegister();
void igVec4ucMetaField_register();
void *igVec4ucMetaField_getMetaCall();
void *igVec4fMetaField_getMeta();
void *igVec4fMetaField_vtableRead();
void igVec4fMetaField_arkRegister();
void igVec4fMetaField_register();
void *igVec4fMetaField_getMetaCall();
void *igVec4fArrayMetaField_getMeta();
void *igVec4fArrayMetaField_vtableRead();
void igVec4fArrayMetaField_arkRegister();
void igVec4fArrayMetaField_register();
void *igVec4fArrayMetaField_getMetaCall();
void *igVec4fArrayMetaField_parentMeta();
void igVec4fArrayMetaField_fieldInit();
void *igVec4dMetaField_getMeta();
void *igVec4dMetaField_vtableRead();
void igVec4dMetaField_arkRegister();
void igVec4dMetaField_register();
void *igVec4dMetaField_getMetaCall();
void *igVec3ucMetaField_getMeta();
void *igVec3ucMetaField_vtableRead();
void igVec3ucMetaField_arkRegister();
void igVec3ucMetaField_register();
void *igVec3ucMetaField_getMetaCall();
void *igVec3fMetaField_getMeta();
void *igVec3fMetaField_vtableRead();
void igVec3fMetaField_arkRegister();
void igVec3fMetaField_register();
void *igVec3fMetaField_getMetaCall();
void *igVec3dMetaField_getMeta();
void *igVec3dMetaField_vtableRead();
void igVec3dMetaField_arkRegister();
void igVec3dMetaField_register();
void *igVec3dMetaField_getMetaCall();
void *igVec2fMetaField_getMeta();
void *igVec2fMetaField_vtableRead();
void igVec2fMetaField_arkRegister();
void igVec2fMetaField_register();
void *igVec2fMetaField_getMetaCall();
void *igVec2dMetaField_getMeta();
void *igVec2dMetaField_vtableRead();
void igVec2dMetaField_arkRegister();
void igVec2dMetaField_register();
void *igVec2dMetaField_getMetaCall();
void *igSphere_getMeta();
void *igSphere_vtableRead();
void igSphere_arkRegister();
void igSphere_register();
void *igSphere_getMetaCall();
void *fn_8011F6A4();
}
struct UnknownGenObject8011DB6C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8011DCCC_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenObject8011DE20_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenRoot8011DF74 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011DF74(){fn_800638E0(this);}
};
struct UnknownGenObject8011DF74_0 : UnknownGenRoot8011DF74 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011DF74_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011DF74 : UnknownGenObject8011DF74_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011DF74(){unknown00=igVec4ucMetaField_vtable;}
};
struct UnknownGenRoot8011E1F0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E1F0(){fn_800638E0(this);}
};
struct UnknownGenObject8011E1F0_0 : UnknownGenRoot8011E1F0 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E1F0_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E1F0 : UnknownGenObject8011E1F0_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011E1F0(){unknown00=igVec4fMetaField_vtable;}
};
struct UnknownGenRoot8011E46C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E46C(){fn_800638E0(this);}
};
struct UnknownGenObject8011E46C_0 : UnknownGenRoot8011E46C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E46C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E46C_1 : UnknownGenObject8011E46C_0 {
 inline ~UnknownGenObject8011E46C_1(){unknown00=igVec4fMetaField_vtable;}
};
struct UnknownGenObject8011E46C : UnknownGenObject8011E46C_1 {
 char unknown10[48];
 inline ~UnknownGenObject8011E46C(){unknown00=igVec4fArrayMetaField_vtable;}
};
struct UnknownGenRoot8011E71C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E71C(){fn_800638E0(this);}
};
struct UnknownGenObject8011E71C_0 : UnknownGenRoot8011E71C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E71C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E71C : UnknownGenObject8011E71C_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011E71C(){unknown00=igVec4dMetaField_vtable;}
};
struct UnknownGenRoot8011E960 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E960(){fn_800638E0(this);}
};
struct UnknownGenObject8011E960_0 : UnknownGenRoot8011E960 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E960_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E960 : UnknownGenObject8011E960_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011E960(){unknown00=igVec3ucMetaField_vtable;}
};
struct UnknownGenRoot8011EBDC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011EBDC(){fn_800638E0(this);}
};
struct UnknownGenObject8011EBDC_0 : UnknownGenRoot8011EBDC {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011EBDC_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011EBDC : UnknownGenObject8011EBDC_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011EBDC(){unknown00=igVec3fMetaField_vtable;}
};
struct UnknownGenRoot8011EE20 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011EE20(){fn_800638E0(this);}
};
struct UnknownGenObject8011EE20_0 : UnknownGenRoot8011EE20 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011EE20_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011EE20 : UnknownGenObject8011EE20_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011EE20(){unknown00=igVec3dMetaField_vtable;}
};
struct UnknownGenRoot8011F09C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011F09C(){fn_800638E0(this);}
};
struct UnknownGenObject8011F09C_0 : UnknownGenRoot8011F09C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011F09C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011F09C : UnknownGenObject8011F09C_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011F09C(){unknown00=igVec2fMetaField_vtable;}
};
struct UnknownGenRoot8011F2E0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011F2E0(){fn_800638E0(this);}
};
struct UnknownGenObject8011F2E0_0 : UnknownGenRoot8011F2E0 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011F2E0_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011F2E0 : UnknownGenObject8011F2E0_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011F2E0(){unknown00=igVec2dMetaField_vtable;}
};
struct UnknownGenObject8011F598_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void fn_8011F1DC(){
 if(!lbl_80563940){
  void *object=(lbl_80563940=meta_createInstance(igVec2fMetaField_meta,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80563940));
   reinterpret_cast<short *>(lbl_80563940)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80563940);
  }
 }
}
void *fn_8011F274(){
 if(!lbl_80563940){
  igVec2fMetaField_arkRegister();
 }
 return lbl_80563940;
}
}
#pragma pop
}

namespace igVec2dMetaField {
// igVec2dMetaField: Alchemy class registration (0x8011F2A4..0x8011F420). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igVec2dMetaField)
META_DECLARE(igMetaField)

extern "C" {
void *fn_80021D70();
void fn_800638E0(void *);
void fn_8011D8BC();
extern char igVec2dMetaField_dependencies[8];
extern char lbl_80471914[];
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

struct igVec2dMetaFieldInstance : Instance_80471914 {
    char unknown10[48];
    inline ~igVec2dMetaFieldInstance() { __vtable = igVec2dMetaField_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igVec2dMetaField)

void *igVec2dMetaField_vtableRead()
{
    igVec2dMetaFieldInstance object;
    object.__vtable = igVec2dMetaField_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igVec2dMetaField)

void igVec2dMetaField_register()
{
    fn_8011D8BC();
    meta_registerClass(0, &igVec2dMetaField_meta, igMetaField_register,
                       fn_80021D70, igVec2dMetaField_getMetaCall,
                       igVec2dMetaField_className, 0x34,
                       igVec2dMetaField_vtableRead, 0, 0, igVec2dMetaField_dependencies);
}

META_GET_META_CALL(igVec2dMetaField)

}
#pragma pop
}

namespace unknown8011F420 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80021D70();
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void fn_80053650(void *,int);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void fn_800638E0(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void fn_80065D94(int);
void fn_80065DBC(int);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8011D8BC();
void *fn_8011F74C();
void *fn_8012705C();
void *fn_80127270();
void fn_8012728C();
void fn_80127368(int);
void *fn_80127910();
void igMetaField_register();
void igObjectList_register();
void igObject_register();
void igSphere_fieldInit();
extern char lbl_80471914[];
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igVec4ucMetaField_vtable[];
extern char igVec4fMetaField_vtable[];
extern char igVec4fArrayMetaField_vtable[];
extern char igVec4dMetaField_vtable[];
extern char igVec3ucMetaField_vtable[];
extern char igVec3fMetaField_vtable[];
extern char igVec3dMetaField_vtable[];
extern char igVec2fMetaField_vtable[];
extern char igVec2dMetaField_vtable[];
extern char igSphere_vtable[];
extern char lbl_8049B9DC[];
extern char igVectorBlending_vtable[];
extern char igVectorMorphing_vtable[];
extern char igVolumeList_vtable[];
extern char lbl_8049BB54[];
extern char igVolumeList_dependencies[8];
extern char igVec4ucMetaField_dependencies[8];
extern char igVec4fMetaField_dependencies[8];
extern char igVec4fArrayMetaField_dependencies[8];
extern char igVec4fArrayMetaField_fieldTypes[4];
extern char igVec4fArrayMetaField_fieldNames[4];
extern char igVec4fArrayMetaField_fieldStorage[4];
extern char igVec4fArrayMetaField_fieldOffsets[4];
extern char igVec4dMetaField_dependencies[8];
extern char igVec3ucMetaField_dependencies[8];
extern char igVec3fMetaField_dependencies[8];
extern char igVec3dMetaField_dependencies[8];
extern char igVec2fMetaField_dependencies[8];
extern char igVec2dMetaField_dependencies[8];
extern void *lbl_805621F4;
extern void *igVolume_meta;
extern void *igVolumeList_meta;
extern void *igVectorMorphing_meta;
extern void *igVectorBlending_meta;
extern void *igVec4ucMetaField_meta;
extern void *lbl_805638DC;
extern void *igVec4fMetaField_meta;
extern void *lbl_805638EC;
extern void *igVec4fArrayMetaField_meta;
extern void *lbl_805638F4;
extern void *igVec4dMetaField_meta;
extern void *lbl_80563900;
extern void *igVec3ucMetaField_meta;
extern void *lbl_80563910;
extern void *igVec3fMetaField_meta;
extern void *lbl_80563920;
extern void *igVec3dMetaField_meta;
extern void *lbl_80563930;
extern void *igVec2fMetaField_meta;
extern void *lbl_80563940;
extern void *igVec2dMetaField_meta;
extern void *lbl_80563950;
extern void *igSphere_meta;
void *igVolume_getMeta();
void igVolume_arkRegister();
void igVolume_register();
void *igVolume_getMetaCall();
void fn_8011DA48();
void fn_8011DA70();
void *fn_8011DA9C();
void *igVolumeList_getMeta();
void *igVolumeList_vtableRead();
void igVolumeList_arkRegister();
void igVolumeList_register();
void *igVolumeList_getMetaCall();
void *igVectorMorphing_getMeta();
void *igVectorMorphing_vtableRead();
void igVectorMorphing_arkRegister();
void igVectorMorphing_register();
void *igVectorMorphing_getMetaCall();
void *fn_8011DDC4();
void *igVectorBlending_getMeta();
void *igVectorBlending_vtableRead();
void igVectorBlending_arkRegister();
void igVectorBlending_register();
void *igVectorBlending_getMetaCall();
void *fn_8011DF18();
void *igVec4ucMetaField_getMeta();
void *igVec4ucMetaField_vtableRead();
void igVec4ucMetaField_arkRegister();
void igVec4ucMetaField_register();
void *igVec4ucMetaField_getMetaCall();
void *igVec4fMetaField_getMeta();
void *igVec4fMetaField_vtableRead();
void igVec4fMetaField_arkRegister();
void igVec4fMetaField_register();
void *igVec4fMetaField_getMetaCall();
void *igVec4fArrayMetaField_getMeta();
void *igVec4fArrayMetaField_vtableRead();
void igVec4fArrayMetaField_arkRegister();
void igVec4fArrayMetaField_register();
void *igVec4fArrayMetaField_getMetaCall();
void *igVec4fArrayMetaField_parentMeta();
void igVec4fArrayMetaField_fieldInit();
void *igVec4dMetaField_getMeta();
void *igVec4dMetaField_vtableRead();
void igVec4dMetaField_arkRegister();
void igVec4dMetaField_register();
void *igVec4dMetaField_getMetaCall();
void *igVec3ucMetaField_getMeta();
void *igVec3ucMetaField_vtableRead();
void igVec3ucMetaField_arkRegister();
void igVec3ucMetaField_register();
void *igVec3ucMetaField_getMetaCall();
void *igVec3fMetaField_getMeta();
void *igVec3fMetaField_vtableRead();
void igVec3fMetaField_arkRegister();
void igVec3fMetaField_register();
void *igVec3fMetaField_getMetaCall();
void *igVec3dMetaField_getMeta();
void *igVec3dMetaField_vtableRead();
void igVec3dMetaField_arkRegister();
void igVec3dMetaField_register();
void *igVec3dMetaField_getMetaCall();
void *igVec2fMetaField_getMeta();
void *igVec2fMetaField_vtableRead();
void igVec2fMetaField_arkRegister();
void igVec2fMetaField_register();
void *igVec2fMetaField_getMetaCall();
void *igVec2dMetaField_getMeta();
void *igVec2dMetaField_vtableRead();
void igVec2dMetaField_arkRegister();
void igVec2dMetaField_register();
void *igVec2dMetaField_getMetaCall();
void *igSphere_getMeta();
void *igSphere_vtableRead();
void igSphere_arkRegister();
void igSphere_register();
void *igSphere_getMetaCall();
void *fn_8011F6A4();
}
struct UnknownGenObject8011DB6C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8011DCCC_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenObject8011DE20_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenRoot8011DF74 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011DF74(){fn_800638E0(this);}
};
struct UnknownGenObject8011DF74_0 : UnknownGenRoot8011DF74 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011DF74_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011DF74 : UnknownGenObject8011DF74_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011DF74(){unknown00=igVec4ucMetaField_vtable;}
};
struct UnknownGenRoot8011E1F0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E1F0(){fn_800638E0(this);}
};
struct UnknownGenObject8011E1F0_0 : UnknownGenRoot8011E1F0 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E1F0_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E1F0 : UnknownGenObject8011E1F0_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011E1F0(){unknown00=igVec4fMetaField_vtable;}
};
struct UnknownGenRoot8011E46C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E46C(){fn_800638E0(this);}
};
struct UnknownGenObject8011E46C_0 : UnknownGenRoot8011E46C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E46C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E46C_1 : UnknownGenObject8011E46C_0 {
 inline ~UnknownGenObject8011E46C_1(){unknown00=igVec4fMetaField_vtable;}
};
struct UnknownGenObject8011E46C : UnknownGenObject8011E46C_1 {
 char unknown10[48];
 inline ~UnknownGenObject8011E46C(){unknown00=igVec4fArrayMetaField_vtable;}
};
struct UnknownGenRoot8011E71C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E71C(){fn_800638E0(this);}
};
struct UnknownGenObject8011E71C_0 : UnknownGenRoot8011E71C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E71C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E71C : UnknownGenObject8011E71C_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011E71C(){unknown00=igVec4dMetaField_vtable;}
};
struct UnknownGenRoot8011E960 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E960(){fn_800638E0(this);}
};
struct UnknownGenObject8011E960_0 : UnknownGenRoot8011E960 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E960_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E960 : UnknownGenObject8011E960_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011E960(){unknown00=igVec3ucMetaField_vtable;}
};
struct UnknownGenRoot8011EBDC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011EBDC(){fn_800638E0(this);}
};
struct UnknownGenObject8011EBDC_0 : UnknownGenRoot8011EBDC {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011EBDC_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011EBDC : UnknownGenObject8011EBDC_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011EBDC(){unknown00=igVec3fMetaField_vtable;}
};
struct UnknownGenRoot8011EE20 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011EE20(){fn_800638E0(this);}
};
struct UnknownGenObject8011EE20_0 : UnknownGenRoot8011EE20 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011EE20_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011EE20 : UnknownGenObject8011EE20_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011EE20(){unknown00=igVec3dMetaField_vtable;}
};
struct UnknownGenRoot8011F09C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011F09C(){fn_800638E0(this);}
};
struct UnknownGenObject8011F09C_0 : UnknownGenRoot8011F09C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011F09C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011F09C : UnknownGenObject8011F09C_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011F09C(){unknown00=igVec2fMetaField_vtable;}
};
struct UnknownGenRoot8011F2E0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011F2E0(){fn_800638E0(this);}
};
struct UnknownGenObject8011F2E0_0 : UnknownGenRoot8011F2E0 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011F2E0_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011F2E0 : UnknownGenObject8011F2E0_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011F2E0(){unknown00=igVec2dMetaField_vtable;}
};
struct UnknownGenObject8011F598_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void fn_8011F420(){
 if(!lbl_80563950){
  void *object=(lbl_80563950=meta_createInstance(igVec2dMetaField_meta,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80563950));
   reinterpret_cast<short *>(lbl_80563950)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80563950);
  }
 }
}
void *fn_8011F4B8(){
 if(!lbl_80563950){
  igVec2dMetaField_arkRegister();
 }
 return lbl_80563950;
}
}
#pragma pop
}

namespace igSphere {
// igSphere: Alchemy class registration (0x8011F4E8..0x8011F520). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igSphere)

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igSphere)

}
#pragma pop
}

namespace unknown8011F520 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80021D70();
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void fn_80053650(void *,int);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void fn_800638E0(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void fn_80065D94(int);
void fn_80065DBC(int);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8011D8BC();
void *fn_8011F74C();
void *fn_8012705C();
void *fn_80127270();
void fn_8012728C();
void fn_80127368(int);
void *fn_80127910();
void igMetaField_register();
void igObjectList_register();
void igObject_register();
void igSphere_fieldInit();
extern char lbl_80471914[];
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igVec4ucMetaField_vtable[];
extern char igVec4fMetaField_vtable[];
extern char igVec4fArrayMetaField_vtable[];
extern char igVec4dMetaField_vtable[];
extern char igVec3ucMetaField_vtable[];
extern char igVec3fMetaField_vtable[];
extern char igVec3dMetaField_vtable[];
extern char igVec2fMetaField_vtable[];
extern char igVec2dMetaField_vtable[];
extern char igSphere_vtable[];
extern char lbl_8049B9DC[];
extern char igVectorBlending_vtable[];
extern char igVectorMorphing_vtable[];
extern char igVolumeList_vtable[];
extern char lbl_8049BB54[];
extern char igVolumeList_dependencies[8];
extern char igVec4ucMetaField_dependencies[8];
extern char igVec4fMetaField_dependencies[8];
extern char igVec4fArrayMetaField_dependencies[8];
extern char igVec4fArrayMetaField_fieldTypes[4];
extern char igVec4fArrayMetaField_fieldNames[4];
extern char igVec4fArrayMetaField_fieldStorage[4];
extern char igVec4fArrayMetaField_fieldOffsets[4];
extern char igVec4dMetaField_dependencies[8];
extern char igVec3ucMetaField_dependencies[8];
extern char igVec3fMetaField_dependencies[8];
extern char igVec3dMetaField_dependencies[8];
extern char igVec2fMetaField_dependencies[8];
extern char igVec2dMetaField_dependencies[8];
extern void *lbl_805621F4;
extern void *igVolume_meta;
extern void *igVolumeList_meta;
extern void *igVectorMorphing_meta;
extern void *igVectorBlending_meta;
extern void *igVec4ucMetaField_meta;
extern void *lbl_805638DC;
extern void *igVec4fMetaField_meta;
extern void *lbl_805638EC;
extern void *igVec4fArrayMetaField_meta;
extern void *lbl_805638F4;
extern void *igVec4dMetaField_meta;
extern void *lbl_80563900;
extern void *igVec3ucMetaField_meta;
extern void *lbl_80563910;
extern void *igVec3fMetaField_meta;
extern void *lbl_80563920;
extern void *igVec3dMetaField_meta;
extern void *lbl_80563930;
extern void *igVec2fMetaField_meta;
extern void *lbl_80563940;
extern void *igVec2dMetaField_meta;
extern void *lbl_80563950;
extern void *igSphere_meta;
void *igVolume_getMeta();
void igVolume_arkRegister();
void igVolume_register();
void *igVolume_getMetaCall();
void fn_8011DA48();
void fn_8011DA70();
void *fn_8011DA9C();
void *igVolumeList_getMeta();
void *igVolumeList_vtableRead();
void igVolumeList_arkRegister();
void igVolumeList_register();
void *igVolumeList_getMetaCall();
void *igVectorMorphing_getMeta();
void *igVectorMorphing_vtableRead();
void igVectorMorphing_arkRegister();
void igVectorMorphing_register();
void *igVectorMorphing_getMetaCall();
void *fn_8011DDC4();
void *igVectorBlending_getMeta();
void *igVectorBlending_vtableRead();
void igVectorBlending_arkRegister();
void igVectorBlending_register();
void *igVectorBlending_getMetaCall();
void *fn_8011DF18();
void *igVec4ucMetaField_getMeta();
void *igVec4ucMetaField_vtableRead();
void igVec4ucMetaField_arkRegister();
void igVec4ucMetaField_register();
void *igVec4ucMetaField_getMetaCall();
void *igVec4fMetaField_getMeta();
void *igVec4fMetaField_vtableRead();
void igVec4fMetaField_arkRegister();
void igVec4fMetaField_register();
void *igVec4fMetaField_getMetaCall();
void *igVec4fArrayMetaField_getMeta();
void *igVec4fArrayMetaField_vtableRead();
void igVec4fArrayMetaField_arkRegister();
void igVec4fArrayMetaField_register();
void *igVec4fArrayMetaField_getMetaCall();
void *igVec4fArrayMetaField_parentMeta();
void igVec4fArrayMetaField_fieldInit();
void *igVec4dMetaField_getMeta();
void *igVec4dMetaField_vtableRead();
void igVec4dMetaField_arkRegister();
void igVec4dMetaField_register();
void *igVec4dMetaField_getMetaCall();
void *igVec3ucMetaField_getMeta();
void *igVec3ucMetaField_vtableRead();
void igVec3ucMetaField_arkRegister();
void igVec3ucMetaField_register();
void *igVec3ucMetaField_getMetaCall();
void *igVec3fMetaField_getMeta();
void *igVec3fMetaField_vtableRead();
void igVec3fMetaField_arkRegister();
void igVec3fMetaField_register();
void *igVec3fMetaField_getMetaCall();
void *igVec3dMetaField_getMeta();
void *igVec3dMetaField_vtableRead();
void igVec3dMetaField_arkRegister();
void igVec3dMetaField_register();
void *igVec3dMetaField_getMetaCall();
void *igVec2fMetaField_getMeta();
void *igVec2fMetaField_vtableRead();
void igVec2fMetaField_arkRegister();
void igVec2fMetaField_register();
void *igVec2fMetaField_getMetaCall();
void *igVec2dMetaField_getMeta();
void *igVec2dMetaField_vtableRead();
void igVec2dMetaField_arkRegister();
void igVec2dMetaField_register();
void *igVec2dMetaField_getMetaCall();
void *igSphere_getMeta();
void *igSphere_vtableRead();
void igSphere_arkRegister();
void igSphere_register();
void *igSphere_getMetaCall();
void *fn_8011F6A4();
}
struct UnknownGenObject8011DB6C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8011DCCC_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenObject8011DE20_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenRoot8011DF74 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011DF74(){fn_800638E0(this);}
};
struct UnknownGenObject8011DF74_0 : UnknownGenRoot8011DF74 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011DF74_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011DF74 : UnknownGenObject8011DF74_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011DF74(){unknown00=igVec4ucMetaField_vtable;}
};
struct UnknownGenRoot8011E1F0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E1F0(){fn_800638E0(this);}
};
struct UnknownGenObject8011E1F0_0 : UnknownGenRoot8011E1F0 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E1F0_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E1F0 : UnknownGenObject8011E1F0_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011E1F0(){unknown00=igVec4fMetaField_vtable;}
};
struct UnknownGenRoot8011E46C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E46C(){fn_800638E0(this);}
};
struct UnknownGenObject8011E46C_0 : UnknownGenRoot8011E46C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E46C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E46C_1 : UnknownGenObject8011E46C_0 {
 inline ~UnknownGenObject8011E46C_1(){unknown00=igVec4fMetaField_vtable;}
};
struct UnknownGenObject8011E46C : UnknownGenObject8011E46C_1 {
 char unknown10[48];
 inline ~UnknownGenObject8011E46C(){unknown00=igVec4fArrayMetaField_vtable;}
};
struct UnknownGenRoot8011E71C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E71C(){fn_800638E0(this);}
};
struct UnknownGenObject8011E71C_0 : UnknownGenRoot8011E71C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E71C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E71C : UnknownGenObject8011E71C_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011E71C(){unknown00=igVec4dMetaField_vtable;}
};
struct UnknownGenRoot8011E960 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E960(){fn_800638E0(this);}
};
struct UnknownGenObject8011E960_0 : UnknownGenRoot8011E960 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E960_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E960 : UnknownGenObject8011E960_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011E960(){unknown00=igVec3ucMetaField_vtable;}
};
struct UnknownGenRoot8011EBDC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011EBDC(){fn_800638E0(this);}
};
struct UnknownGenObject8011EBDC_0 : UnknownGenRoot8011EBDC {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011EBDC_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011EBDC : UnknownGenObject8011EBDC_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011EBDC(){unknown00=igVec3fMetaField_vtable;}
};
struct UnknownGenRoot8011EE20 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011EE20(){fn_800638E0(this);}
};
struct UnknownGenObject8011EE20_0 : UnknownGenRoot8011EE20 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011EE20_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011EE20 : UnknownGenObject8011EE20_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011EE20(){unknown00=igVec3dMetaField_vtable;}
};
struct UnknownGenRoot8011F09C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011F09C(){fn_800638E0(this);}
};
struct UnknownGenObject8011F09C_0 : UnknownGenRoot8011F09C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011F09C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011F09C : UnknownGenObject8011F09C_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011F09C(){unknown00=igVec2fMetaField_vtable;}
};
struct UnknownGenRoot8011F2E0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011F2E0(){fn_800638E0(this);}
};
struct UnknownGenObject8011F2E0_0 : UnknownGenRoot8011F2E0 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011F2E0_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011F2E0 : UnknownGenObject8011F2E0_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011F2E0(){unknown00=igVec2dMetaField_vtable;}
};
struct UnknownGenObject8011F598_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_8011F520(){
 if(!igSphere_meta) igSphere_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igSphere_meta;
}
}
#pragma pop
}

namespace igSphere_2 {
// igSphere: Alchemy class registration (0x8011F55C..0x8011F6A4). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igSphere)
META_DECLARE(igVolume)

extern "C" {
void fn_8011D8BC();
void *fn_8011F6A4();
void fn_8011F74C();
extern char lbl_8049B9DC[];
}

struct Instance_8011F598_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igSphere)

void *igSphere_vtableRead()
{
    Instance_8011F598_0 object;
    igObject_construct(&object);
    object.__vtable = lbl_8049B9DC;
    object.__vtable = igSphere_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igSphere)

void igSphere_register()
{
    fn_8011D8BC();
    meta_registerClass(0, &igSphere_meta, igVolume_register,
                       fn_8011F6A4, igSphere_getMetaCall,
                       igSphere_className, 0x18,
                       igSphere_vtableRead, igSphere_fieldInit, fn_8011F74C, 0);
}

META_GET_META_CALL(igSphere)

}
#pragma pop
}

namespace unknown8011F6A4 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80021D70();
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void fn_80053650(void *,int);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void fn_800638E0(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void fn_80065D94(int);
void fn_80065DBC(int);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8011D8BC();
void *fn_8011F74C();
void *fn_8012705C();
void *fn_80127270();
void fn_8012728C();
void fn_80127368(int);
void *fn_80127910();
void igMetaField_register();
void igObjectList_register();
void igObject_register();
void igSphere_fieldInit();
extern char lbl_80471914[];
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igVec4ucMetaField_vtable[];
extern char igVec4fMetaField_vtable[];
extern char igVec4fArrayMetaField_vtable[];
extern char igVec4dMetaField_vtable[];
extern char igVec3ucMetaField_vtable[];
extern char igVec3fMetaField_vtable[];
extern char igVec3dMetaField_vtable[];
extern char igVec2fMetaField_vtable[];
extern char igVec2dMetaField_vtable[];
extern char igSphere_vtable[];
extern char lbl_8049B9DC[];
extern char igVectorBlending_vtable[];
extern char igVectorMorphing_vtable[];
extern char igVolumeList_vtable[];
extern char lbl_8049BB54[];
extern char igVolumeList_dependencies[8];
extern char igVec4ucMetaField_dependencies[8];
extern char igVec4fMetaField_dependencies[8];
extern char igVec4fArrayMetaField_dependencies[8];
extern char igVec4fArrayMetaField_fieldTypes[4];
extern char igVec4fArrayMetaField_fieldNames[4];
extern char igVec4fArrayMetaField_fieldStorage[4];
extern char igVec4fArrayMetaField_fieldOffsets[4];
extern char igVec4dMetaField_dependencies[8];
extern char igVec3ucMetaField_dependencies[8];
extern char igVec3fMetaField_dependencies[8];
extern char igVec3dMetaField_dependencies[8];
extern char igVec2fMetaField_dependencies[8];
extern char igVec2dMetaField_dependencies[8];
extern void *lbl_805621F4;
extern void *igVolume_meta;
extern void *igVolumeList_meta;
extern void *igVectorMorphing_meta;
extern void *igVectorBlending_meta;
extern void *igVec4ucMetaField_meta;
extern void *lbl_805638DC;
extern void *igVec4fMetaField_meta;
extern void *lbl_805638EC;
extern void *igVec4fArrayMetaField_meta;
extern void *lbl_805638F4;
extern void *igVec4dMetaField_meta;
extern void *lbl_80563900;
extern void *igVec3ucMetaField_meta;
extern void *lbl_80563910;
extern void *igVec3fMetaField_meta;
extern void *lbl_80563920;
extern void *igVec3dMetaField_meta;
extern void *lbl_80563930;
extern void *igVec2fMetaField_meta;
extern void *lbl_80563940;
extern void *igVec2dMetaField_meta;
extern void *lbl_80563950;
extern void *igSphere_meta;
void *igVolume_getMeta();
void igVolume_arkRegister();
void igVolume_register();
void *igVolume_getMetaCall();
void fn_8011DA48();
void fn_8011DA70();
void *fn_8011DA9C();
void *igVolumeList_getMeta();
void *igVolumeList_vtableRead();
void igVolumeList_arkRegister();
void igVolumeList_register();
void *igVolumeList_getMetaCall();
void *igVectorMorphing_getMeta();
void *igVectorMorphing_vtableRead();
void igVectorMorphing_arkRegister();
void igVectorMorphing_register();
void *igVectorMorphing_getMetaCall();
void *fn_8011DDC4();
void *igVectorBlending_getMeta();
void *igVectorBlending_vtableRead();
void igVectorBlending_arkRegister();
void igVectorBlending_register();
void *igVectorBlending_getMetaCall();
void *fn_8011DF18();
void *igVec4ucMetaField_getMeta();
void *igVec4ucMetaField_vtableRead();
void igVec4ucMetaField_arkRegister();
void igVec4ucMetaField_register();
void *igVec4ucMetaField_getMetaCall();
void *igVec4fMetaField_getMeta();
void *igVec4fMetaField_vtableRead();
void igVec4fMetaField_arkRegister();
void igVec4fMetaField_register();
void *igVec4fMetaField_getMetaCall();
void *igVec4fArrayMetaField_getMeta();
void *igVec4fArrayMetaField_vtableRead();
void igVec4fArrayMetaField_arkRegister();
void igVec4fArrayMetaField_register();
void *igVec4fArrayMetaField_getMetaCall();
void *igVec4fArrayMetaField_parentMeta();
void igVec4fArrayMetaField_fieldInit();
void *igVec4dMetaField_getMeta();
void *igVec4dMetaField_vtableRead();
void igVec4dMetaField_arkRegister();
void igVec4dMetaField_register();
void *igVec4dMetaField_getMetaCall();
void *igVec3ucMetaField_getMeta();
void *igVec3ucMetaField_vtableRead();
void igVec3ucMetaField_arkRegister();
void igVec3ucMetaField_register();
void *igVec3ucMetaField_getMetaCall();
void *igVec3fMetaField_getMeta();
void *igVec3fMetaField_vtableRead();
void igVec3fMetaField_arkRegister();
void igVec3fMetaField_register();
void *igVec3fMetaField_getMetaCall();
void *igVec3dMetaField_getMeta();
void *igVec3dMetaField_vtableRead();
void igVec3dMetaField_arkRegister();
void igVec3dMetaField_register();
void *igVec3dMetaField_getMetaCall();
void *igVec2fMetaField_getMeta();
void *igVec2fMetaField_vtableRead();
void igVec2fMetaField_arkRegister();
void igVec2fMetaField_register();
void *igVec2fMetaField_getMetaCall();
void *igVec2dMetaField_getMeta();
void *igVec2dMetaField_vtableRead();
void igVec2dMetaField_arkRegister();
void igVec2dMetaField_register();
void *igVec2dMetaField_getMetaCall();
void *igSphere_getMeta();
void *igSphere_vtableRead();
void igSphere_arkRegister();
void igSphere_register();
void *igSphere_getMetaCall();
void *fn_8011F6A4();
}
struct UnknownGenObject8011DB6C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8011DCCC_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenObject8011DE20_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenRoot8011DF74 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011DF74(){fn_800638E0(this);}
};
struct UnknownGenObject8011DF74_0 : UnknownGenRoot8011DF74 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011DF74_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011DF74 : UnknownGenObject8011DF74_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011DF74(){unknown00=igVec4ucMetaField_vtable;}
};
struct UnknownGenRoot8011E1F0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E1F0(){fn_800638E0(this);}
};
struct UnknownGenObject8011E1F0_0 : UnknownGenRoot8011E1F0 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E1F0_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E1F0 : UnknownGenObject8011E1F0_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011E1F0(){unknown00=igVec4fMetaField_vtable;}
};
struct UnknownGenRoot8011E46C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E46C(){fn_800638E0(this);}
};
struct UnknownGenObject8011E46C_0 : UnknownGenRoot8011E46C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E46C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E46C_1 : UnknownGenObject8011E46C_0 {
 inline ~UnknownGenObject8011E46C_1(){unknown00=igVec4fMetaField_vtable;}
};
struct UnknownGenObject8011E46C : UnknownGenObject8011E46C_1 {
 char unknown10[48];
 inline ~UnknownGenObject8011E46C(){unknown00=igVec4fArrayMetaField_vtable;}
};
struct UnknownGenRoot8011E71C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E71C(){fn_800638E0(this);}
};
struct UnknownGenObject8011E71C_0 : UnknownGenRoot8011E71C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E71C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E71C : UnknownGenObject8011E71C_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011E71C(){unknown00=igVec4dMetaField_vtable;}
};
struct UnknownGenRoot8011E960 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E960(){fn_800638E0(this);}
};
struct UnknownGenObject8011E960_0 : UnknownGenRoot8011E960 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E960_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E960 : UnknownGenObject8011E960_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011E960(){unknown00=igVec3ucMetaField_vtable;}
};
struct UnknownGenRoot8011EBDC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011EBDC(){fn_800638E0(this);}
};
struct UnknownGenObject8011EBDC_0 : UnknownGenRoot8011EBDC {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011EBDC_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011EBDC : UnknownGenObject8011EBDC_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011EBDC(){unknown00=igVec3fMetaField_vtable;}
};
struct UnknownGenRoot8011EE20 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011EE20(){fn_800638E0(this);}
};
struct UnknownGenObject8011EE20_0 : UnknownGenRoot8011EE20 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011EE20_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011EE20 : UnknownGenObject8011EE20_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011EE20(){unknown00=igVec3dMetaField_vtable;}
};
struct UnknownGenRoot8011F09C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011F09C(){fn_800638E0(this);}
};
struct UnknownGenObject8011F09C_0 : UnknownGenRoot8011F09C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011F09C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011F09C : UnknownGenObject8011F09C_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011F09C(){unknown00=igVec2fMetaField_vtable;}
};
struct UnknownGenRoot8011F2E0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011F2E0(){fn_800638E0(this);}
};
struct UnknownGenObject8011F2E0_0 : UnknownGenRoot8011F2E0 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011F2E0_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011F2E0 : UnknownGenObject8011F2E0_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011F2E0(){unknown00=igVec2dMetaField_vtable;}
};
struct UnknownGenObject8011F598_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_8011F6A4(){return igVolume_meta;}
}
#pragma pop
}

namespace unknown8011F6AC {
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8004D4BC(void *,float);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void fn_80126808(void *,void *);
extern char igSphere_fieldTypes[8];
extern char igSphere_fieldNames[8];
extern char igSphere_fieldStorage[8];
extern char igSphere_fieldOffsets[8];
extern void *igSphere_meta;
extern char lbl_805669D8[4];
extern char lbl_805669DC[4];
}
struct UnknownGenL8011F6AC_8 {
 float m08;
 float m0C;
 float m10;
};
extern "C" {
void igSphere_fieldInit(){
 UnknownGenL8011F6AC_8 local0;
 void *value0=igSphere_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,igSphere_fieldTypes,2);
 void *value2=meta_field(value0,value1);
 local0.m08=*reinterpret_cast<float *>((lbl_805669D8+0));
 local0.m0C=*reinterpret_cast<float *>((lbl_805669D8+0));
 local0.m10=*reinterpret_cast<float *>((lbl_805669D8+0));
 fn_80126808(value2,&local0);
 void *value3=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 fn_8004D4BC(value3,*reinterpret_cast<float *>((lbl_805669DC+0)));
 meta_setupFields(value0,igSphere_fieldNames,igSphere_fieldStorage,igSphere_fieldOffsets,value1);
}
}
#pragma pop
}

namespace unknown8011F74C {
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
void fn_8011D8BC();
void *fn_80125430();
void igObjectList_register();
void igObject_register();
void igRay_fieldInit();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igRay_vtable[];
extern char igRayList_vtable[];
extern char lbl_8049B91C[];
extern char igRayList_dependencies[8];
extern char lbl_8055F398[6];
extern void *lbl_805621F4;
extern void *igRayList_meta;
extern void *igRay_meta;
void *igRayList_getMeta();
void *igRayList_vtableRead();
void igRayList_arkRegister();
void igRayList_register();
void *igRayList_getMetaCall();
void *igRay_getMeta();
void *igRay_vtableRead();
void igRay_arkRegister();
void igRay_register();
void *igRay_getMetaCall();
}
struct UnknownGenObject8011F7E4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8011F9B8_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *fn_8011F74C(){return fn_80125430();}
void *fn_8011F76C(){
 if(!igRayList_meta) igRayList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igRayList_meta;
}
}
#pragma pop
}

namespace igRayList {
// igRayList: Alchemy class registration (0x8011F7A8..0x8011F908). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igRayList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_8011D8BC();
extern char igRayList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_8049B91C[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igRayList)

void *igRayList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_8049B91C;
    object.__vtable = igRayList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igRayList)

void igRayList_register()
{
    fn_8011D8BC();
    meta_registerClass(0, &igRayList_meta, igObjectList_register,
                       fn_80024180, igRayList_getMetaCall,
                       igRayList_className, 0x14,
                       igRayList_vtableRead, 0, 0, igRayList_dependencies);
}

META_GET_META_CALL(igRayList)

}
#pragma pop
}

namespace igRay {
// igRay: Alchemy class registration (0x8011F908..0x8011F940). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igRay)

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igRay)

}
#pragma pop
}

namespace unknown8011F940 {
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
void fn_8011D8BC();
void *fn_80125430();
void igObjectList_register();
void igObject_register();
void igRay_fieldInit();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igRay_vtable[];
extern char igRayList_vtable[];
extern char lbl_8049B91C[];
extern char igRayList_dependencies[8];
extern char lbl_8055F398[6];
extern void *lbl_805621F4;
extern void *igRayList_meta;
extern void *igRay_meta;
void *igRayList_getMeta();
void *igRayList_vtableRead();
void igRayList_arkRegister();
void igRayList_register();
void *igRayList_getMetaCall();
void *igRay_getMeta();
void *igRay_vtableRead();
void igRay_arkRegister();
void igRay_register();
void *igRay_getMetaCall();
}
struct UnknownGenObject8011F7E4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8011F9B8_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *fn_8011F940(){
 if(!igRay_meta) igRay_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igRay_meta;
}
void *igRay_getMeta(){
 if(!igRay_meta || !(reinterpret_cast<unsigned int *>(igRay_meta)[0x24/4]&4)) igRay_arkRegister();
 return igRay_meta;
}
void *igRay_vtableRead(){
 UnknownGenObject8011F9B8_0 object;
 igObject_construct(&object);
 object.unknown00=igRay_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igRay_arkRegister(){
 meta_registerNow((int)igRay_register);
}
void igRay_register(){
 fn_8011D8BC();
 meta_registerClass(0,(int)&igRay_meta,(int)igObject_register,(int)fn_800237D0,(int)igRay_getMetaCall,(int)lbl_8055F398,36,(int)igRay_vtableRead,(int)igRay_fieldInit,0,0);
}
void *igRay_getMetaCall(){return igRay_getMeta();}
}
#pragma pop
}

namespace igRay_fieldInit {
// igRay: Alchemy class registration (0x8011FAAC..0x8011FB68). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igRay)

extern "C" {
void fn_80126808(void *, void *);
extern const char lbl_805669D8[4];
extern const char lbl_805669E0[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igRay_fieldInit()
{
    float local[6];
    Meta::igMetaObject *meta = igRay_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igRay_fieldTypes, 3);
    Meta::igVec3fMetaField *posField = static_cast<Meta::igVec3fMetaField *>(meta_field(meta, base));
    local[3] = *reinterpret_cast<const float *>(lbl_805669D8);
    local[4] = *reinterpret_cast<const float *>(lbl_805669D8);
    local[5] = *reinterpret_cast<const float *>(lbl_805669D8);
    fn_80126808(posField, &local[3]);
    Meta::igVec3fMetaField *dirField = static_cast<Meta::igVec3fMetaField *>(meta_field(meta, base + 1));
    local[0] = *reinterpret_cast<const float *>(lbl_805669D8);
    local[1] = *reinterpret_cast<const float *>(lbl_805669E0);
    local[2] = *reinterpret_cast<const float *>(lbl_805669D8);
    fn_80126808(dirField, &local[0]);
    meta_setupFields(meta, igRay_fieldNames, igRay_fieldStorage, igRay_fieldOffsets, base);
}

}
#pragma pop
}

namespace unknown8011FB68 {
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8011D8BC();
void *fn_8011F6A4();
void *fn_8011FD6C();
void igPlane_fieldInit();
void igVolume_register();
extern char igPlane_vtable[];
extern char lbl_8049B9DC[];
extern char lbl_8055F3B8[8];
extern void *igPlane_meta;
void *igPlane_getMeta();
void *igPlane_vtableRead();
void igPlane_arkRegister();
void igPlane_register();
void *igPlane_getMetaCall();
}
struct UnknownGenObject8011FBDC_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *igPlane_create(void *object){
 igPlane_arkRegister();
 return meta_createInstance(igPlane_meta,object);
}
void *igPlane_getMeta(){
 if(!igPlane_meta || !(reinterpret_cast<unsigned int *>(igPlane_meta)[0x24/4]&4)) igPlane_arkRegister();
 return igPlane_meta;
}
void *igPlane_vtableRead(){
 UnknownGenObject8011FBDC_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_8049B9DC;
 object.unknown00=igPlane_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igPlane_arkRegister(){
 meta_registerNow((int)igPlane_register);
}
void igPlane_register(){
 fn_8011D8BC();
 meta_registerClass(0,(int)&igPlane_meta,(int)igVolume_register,(int)fn_8011F6A4,(int)igPlane_getMetaCall,(int)lbl_8055F3B8,28,(int)igPlane_vtableRead,(int)igPlane_fieldInit,(int)fn_8011FD6C,0);
}
void *igPlane_getMetaCall(){return igPlane_getMeta();}
}
#pragma pop
}

namespace igPlane_fieldInit {
// igPlane: Alchemy class registration (0x8011FCE4..0x8011FD6C). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igPlane)

extern "C" {
void fn_8011D870();
}

#pragma push
#pragma auto_inline off
extern "C" {

void igPlane_fieldInit()
{
    Meta::igMetaObject *meta = igPlane_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igPlane_fieldTypes, 3);
    Meta::igEnumMetaField *octantField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base + 2));
    octantField->_getMetaEnumFunction = reinterpret_cast<void *>(fn_8011D870);
    meta_setupFields(meta, igPlane_fieldNames, igPlane_fieldStorage, igPlane_fieldOffsets, base);
}

}
#pragma pop
}
