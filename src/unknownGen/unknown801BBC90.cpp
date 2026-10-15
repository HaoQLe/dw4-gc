#include <unknownGen.h>
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
void *fn_800B5424();
void *fn_800B58C8();
void *fn_8011148C();
void fn_801AA6DC();
void igJoint_arkRegister();
void igGroup_register();
void igNode_register();
extern char igNamedObject_vtable[];
extern char igLightStateSet_className[];
extern char igLightSet_className[];
extern char igNode_vtable[];
extern char igLightStateSet_vtable[];
extern char igLightSet_vtable[];
extern char igGroup_vtable[];
extern char igLightStateSet_dependencies[8];
extern char igLightStateSet_fieldTypes[4];
extern char igLightStateSet_fieldNames[4];
extern char igLightStateSet_fieldStorage[4];
extern char igLightStateSet_fieldOffsets[4];
extern char igLightSet_dependencies[8];
extern char igLightSet_fieldTypes[4];
extern char igLightSet_fieldNames[4];
extern char igLightSet_fieldStorage[4];
extern char igLightSet_fieldOffsets[4];
extern void *lbl_805621F4;
extern void *igNode_meta;
extern void *igLightStateSet_meta;
extern void *igLightSet_meta;
extern void *igJoint_meta;
void *igLightStateSet_getMeta();
void *igLightStateSet_vtableRead();
void igLightStateSet_arkRegister();
void igLightStateSet_register();
void *igLightStateSet_getMetaCall();
void igLightStateSet_fieldInit();
void *igLightSet_getMeta();
void *igLightSet_vtableRead();
void igLightSet_arkRegister();
void igLightSet_register();
void *igLightSet_getMetaCall();
void *fn_801BBBF0();
void igLightSet_fieldInit();
}
struct UnknownGenRoot801BB648 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801BB648(){igObject_construct(this);}
};
struct UnknownGenObject801BB648_0 : UnknownGenRoot801BB648 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801BB648_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject801BB648_1 : UnknownGenObject801BB648_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject801BB648_1(){unknown00=igNode_vtable;}
};
struct UnknownGenObject801BB648_2 : UnknownGenObject801BB648_1 {
 char unknown14[8];
 UnknownGenRefMember unknown1C;
 inline ~UnknownGenObject801BB648_2(){unknown00=igGroup_vtable;}
};
struct UnknownGenObject801BB648 : UnknownGenObject801BB648_2 {
 UnknownGenRefMember unknown20;
 char unknown24[12];
 inline ~UnknownGenObject801BB648(){unknown00=igLightStateSet_vtable;}
};
struct UnknownGenRoot801BB9CC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801BB9CC(){igObject_construct(this);}
};
struct UnknownGenObject801BB9CC_0 : UnknownGenRoot801BB9CC {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801BB9CC_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject801BB9CC_1 : UnknownGenObject801BB9CC_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject801BB9CC_1(){unknown00=igNode_vtable;}
};
struct UnknownGenObject801BB9CC : UnknownGenObject801BB9CC_1 {
 char unknown14[8];
 UnknownGenRefMember unknown1C;
 char unknown20[8];
 inline ~UnknownGenObject801BB9CC(){unknown00=igLightSet_vtable;}
};
extern "C" {
void *fn_801BBC90(){
 if(!igJoint_meta) igJoint_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igJoint_meta;
}
void *igJoint_getMeta(){
 if(!igJoint_meta || !(reinterpret_cast<unsigned int *>(igJoint_meta)[0x24/4]&4)) igJoint_arkRegister();
 return igJoint_meta;
}
}
#pragma pop
