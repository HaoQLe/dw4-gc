#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
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
void *fn_8011148C();
void fn_801AA6DC();
void igLod_arkRegister();
void igGroup_register();
void igObjectList_register();
extern char igDataList_vtable[];
extern char igNamedObject_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igModelViewMatrixBoneSelectList_className[];
extern char igModelViewMatrixBoneSelect_className[];
extern char igNode_vtable[];
extern char igGroup_vtable[];
extern char igModelViewMatrixBoneSelect_vtable[];
extern char igModelViewMatrixBoneSelectList_vtable[];
extern char lbl_804B7BB4[];
extern char igModelViewMatrixBoneSelectList_dependencies[8];
extern char igModelViewMatrixBoneSelect_fieldTypes[4];
extern char igModelViewMatrixBoneSelect_fieldNames[4];
extern char igModelViewMatrixBoneSelect_fieldStorage[4];
extern char igModelViewMatrixBoneSelect_fieldOffsets[4];
extern void *lbl_805621F4;
extern void *igModelViewMatrixBoneSelectList_meta;
extern void *igModelViewMatrixBoneSelect_meta;
extern void *igLod_meta;
void *igModelViewMatrixBoneSelectList_getMeta();
void *igModelViewMatrixBoneSelectList_vtableRead();
void igModelViewMatrixBoneSelectList_arkRegister();
void igModelViewMatrixBoneSelectList_register();
void *igModelViewMatrixBoneSelectList_getMetaCall();
void *igModelViewMatrixBoneSelect_getMeta();
void *igModelViewMatrixBoneSelect_vtableRead();
void igModelViewMatrixBoneSelect_arkRegister();
void igModelViewMatrixBoneSelect_register();
void *igModelViewMatrixBoneSelect_getMetaCall();
void igModelViewMatrixBoneSelect_fieldInit();
}
struct UnknownGenObject801BAC0C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801BADE0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801BADE0(){igObject_construct(this);}
};
struct UnknownGenObject801BADE0_0 : UnknownGenRoot801BADE0 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801BADE0_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject801BADE0_1 : UnknownGenObject801BADE0_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject801BADE0_1(){unknown00=igNode_vtable;}
};
struct UnknownGenObject801BADE0_2 : UnknownGenObject801BADE0_1 {
 char unknown14[8];
 UnknownGenRefMember unknown1C;
 inline ~UnknownGenObject801BADE0_2(){unknown00=igGroup_vtable;}
};
struct UnknownGenObject801BADE0 : UnknownGenObject801BADE0_2 {
 char unknown20[8];
 inline ~UnknownGenObject801BADE0(){unknown00=igModelViewMatrixBoneSelect_vtable;}
};
extern "C" {
void *fn_801BAB94(){
 if(!igModelViewMatrixBoneSelectList_meta) igModelViewMatrixBoneSelectList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igModelViewMatrixBoneSelectList_meta;
}
}
#pragma pop
