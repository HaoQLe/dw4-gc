#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_8002A638();
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *fn_80071694(void *,void *);
void fn_800CE2F8();
void fn_800D3C00();
void igNamedObject_register();
void igObjectList_register();
extern char igDataList_vtable[];
extern char igNamedObject_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igCustomStateFieldList_className[];
extern char igCustomStateField_className[];
extern char igCustomStateCollectionList_className[];
extern char igCustomStateCollection_className[];
extern char igCustomState_className[];
extern char igGfxShaderConstantList_className[];
extern char igGfxShaderConstant_className[];
extern char igGfxShaderConstant_vtable[];
extern char igGfxShaderConstantList_vtable[];
extern char lbl_804937DC[];
extern char igCustomStateCollection_vtable[];
extern char lbl_804938A4[];
extern char igCustomStateCollectionList_vtable[];
extern char lbl_8049396C[];
extern char igCustomStateField_vtable[];
extern char igCustomStateFieldList_vtable[];
extern char lbl_80493A90[];
extern char lbl_8055EB78[4];
extern char igCustomStateFieldList_dependencies[8];
extern char igCustomStateField_dependencies[8];
extern char igCustomStateField_fieldTypes[8];
extern char igCustomStateField_fieldNames[8];
extern char igCustomStateField_fieldStorage[8];
extern char igCustomStateField_fieldOffsets[8];
extern char igCustomStateCollectionList_dependencies[8];
extern char igCustomStateCollection_dependencies[8];
extern char igCustomStateCollection_fieldTypes[8];
extern char igCustomStateCollection_fieldNames[8];
extern char igCustomStateCollection_fieldStorage[8];
extern char igCustomStateCollection_fieldOffsets[8];
extern char igGfxShaderConstantList_dependencies[8];
extern char igGfxShaderConstant_dependencies[8];
extern void *lbl_805621F4;
extern void *igCustomStateFieldList_meta;
extern void *igCustomStateField_meta;
extern void *igCustomStateCollectionList_meta;
extern void *igCustomStateCollection_meta;
extern void *igCustomState_meta;
extern void *igGfxShaderConstantList_meta;
extern void *igGfxShaderConstant_meta;
void *igCustomStateFieldList_getMeta();
void *igCustomStateFieldList_vtableRead();
void igCustomStateFieldList_arkRegister();
void igCustomStateFieldList_register();
void *igCustomStateFieldList_getMetaCall();
void *igCustomStateField_getMeta();
void *igCustomStateField_vtableRead();
void igCustomStateField_arkRegister();
void igCustomStateField_register();
void *igCustomStateField_getMetaCall();
void igCustomStateField_fieldInit();
void *igCustomStateCollectionList_getMeta();
void *igCustomStateCollectionList_vtableRead();
void igCustomStateCollectionList_arkRegister();
void igCustomStateCollectionList_register();
void *igCustomStateCollectionList_getMetaCall();
void *igCustomStateCollection_getMeta();
void *igCustomStateCollection_vtableRead();
void igCustomStateCollection_arkRegister();
void igCustomStateCollection_register();
void *igCustomStateCollection_getMetaCall();
void igCustomStateCollection_fieldInit();
void *igCustomState_getMeta();
void igCustomState_arkRegister();
void igCustomState_register();
void *igCustomState_getMetaCall();
void *igGfxShaderConstantList_getMeta();
void *igGfxShaderConstantList_vtableRead();
void igGfxShaderConstantList_arkRegister();
void igGfxShaderConstantList_register();
void *igGfxShaderConstantList_getMetaCall();
void *igGfxShaderConstant_getMeta();
void *igGfxShaderConstant_vtableRead();
void igGfxShaderConstant_arkRegister();
void igGfxShaderConstant_register();
void *igGfxShaderConstant_getMetaCall();
}
struct UnknownGenObject800D2F80_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800D3118 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800D3118(){igObject_construct(this);}
};
struct UnknownGenObject800D3118_0 : UnknownGenRoot800D3118 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800D3118_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject800D3118 : UnknownGenObject800D3118_0 {
 char unknown0C[4];
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject800D3118(){unknown00=igCustomStateField_vtable;}
};
struct UnknownGenObject800D33E4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800D357C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800D357C(){igObject_construct(this);}
};
struct UnknownGenObject800D357C : UnknownGenRoot800D357C {
 char unknown04[16];
 UnknownGenString unknown14;
 char unknown18[8];
 inline ~UnknownGenObject800D357C(){unknown00=igCustomStateCollection_vtable;}
};
struct UnknownGenObject800D38CC_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800D3A2C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800D3A2C(){igObject_construct(this);}
};
struct UnknownGenObject800D3A2C_0 : UnknownGenRoot800D3A2C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800D3A2C_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject800D3A2C : UnknownGenObject800D3A2C_0 {
 char unknown0C[4];
 UnknownGenString unknown10;
 char unknown14[16];
 UnknownGenRefMember unknown24;
 char unknown28[16];
 inline ~UnknownGenObject800D3A2C(){unknown00=igGfxShaderConstant_vtable;}
};
extern "C" {
void *fn_800D336C(){
 if(!igCustomStateCollectionList_meta) igCustomStateCollectionList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igCustomStateCollectionList_meta;
}
}
#pragma pop
