#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void *fn_80023FDC();
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
void *fn_800BB61C();
void *fn_8011148C();
void fn_801AA6DC();
void igAppearance_fieldInit();
void igGroup_register();
void igNamedObject_register();
void igNonRefCountedObjectList_register();
void igObjectList_register();
extern char igDataList_vtable[];
extern char igNamedObject_vtable[];
extern char igObjectList_vtable[];
extern char igNonRefCountedObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igNonRefCountedAttrSetList_className[];
extern char igAttrSet_className[];
extern char igAppearanceList_className[];
extern char igAppearance_dependencies[];
extern char igAppearance_className[];
extern char igNode_vtable[];
extern char igGroup_vtable[];
extern char igAttrSet_vtable[];
extern char igAppearance_vtable[];
extern char igAppearanceList_vtable[];
extern char lbl_804B68E4[];
extern char igNonRefCountedAttrSetList_vtable[];
extern char lbl_804B69AC[];
extern char igNonRefCountedAttrSetList_dependencies[8];
extern char igAttrSet_dependencies[8];
extern char igAttrSet_fieldTypes[8];
extern char igAttrSet_fieldNames[8];
extern char igAttrSet_fieldStorage[8];
extern char igAttrSet_fieldOffsets[8];
extern char igAppearanceList_dependencies[8];
extern void *lbl_805621F4;
extern void *igNonRefCountedAttrSetList_meta;
extern void *igAttrSet_meta;
extern void *igAppearanceList_meta;
extern void *igAppearance_meta;
void *igNonRefCountedAttrSetList_getMeta();
void *igNonRefCountedAttrSetList_vtableRead();
void igNonRefCountedAttrSetList_arkRegister();
void igNonRefCountedAttrSetList_register();
void *igNonRefCountedAttrSetList_getMetaCall();
void *igAttrSet_getMeta();
void *igAttrSet_vtableRead();
void igAttrSet_arkRegister();
void igAttrSet_register();
void *igAttrSet_getMetaCall();
void igAttrSet_fieldInit();
void *igAppearanceList_getMeta();
void *igAppearanceList_vtableRead();
void igAppearanceList_arkRegister();
void igAppearanceList_register();
void *igAppearanceList_getMetaCall();
void *igAppearance_getMeta();
void *igAppearance_vtableRead();
void igAppearance_arkRegister();
void igAppearance_register();
void *igAppearance_getMetaCall();
}
struct UnknownGenObject801C8894_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801C8A68 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801C8A68(){igObject_construct(this);}
};
struct UnknownGenObject801C8A68_0 : UnknownGenRoot801C8A68 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801C8A68_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject801C8A68_1 : UnknownGenObject801C8A68_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject801C8A68_1(){unknown00=igNode_vtable;}
};
struct UnknownGenObject801C8A68_2 : UnknownGenObject801C8A68_1 {
 char unknown14[8];
 UnknownGenRefMember unknown1C;
 inline ~UnknownGenObject801C8A68_2(){unknown00=igGroup_vtable;}
};
struct UnknownGenObject801C8A68 : UnknownGenObject801C8A68_2 {
 UnknownGenRefMember unknown20;
 char unknown24[12];
 inline ~UnknownGenObject801C8A68(){unknown00=igAttrSet_vtable;}
};
struct UnknownGenObject801C8DEC_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801C8F88 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801C8F88(){igObject_construct(this);}
};
struct UnknownGenObject801C8F88_0 : UnknownGenRoot801C8F88 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801C8F88_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject801C8F88 : UnknownGenObject801C8F88_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 UnknownGenRefMember unknown1C;
 inline ~UnknownGenObject801C8F88(){unknown00=igAppearance_vtable;}
};
extern "C" {
void *fn_801C8D74(){
 if(!igAppearanceList_meta) igAppearanceList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igAppearanceList_meta;
}
}
#pragma pop
