#include <unknownGen.h>
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
extern char igVolume_className[];
extern char igVolumeList_className[];
extern char igVectorMorphing_className[];
extern char igVectorBlending_className[];
extern char igVec4ucMetaField_className[];
extern char igVec4fMetaField_className[];
extern char igVec4fArrayMetaField_className[];
extern char igVec4dMetaField_className[];
extern char igVec3ucMetaField_className[];
extern char igVec3fMetaField_className[];
extern char igVec3dMetaField_className[];
extern char igVec2fMetaField_className[];
extern char igVec2dMetaField_className[];
extern char igSphere_className[];
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
