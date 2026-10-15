#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void *fn_80024180();
void *meta_newMetaObject(void *);
void fn_8003EC68(void *,int);
void *fn_800607F4(void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800CE2F8();
void fn_800D46F0();
void igNamedObject_register();
void igObjectList_register();
extern char igDataList_vtable[];
extern char igNamedObject_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igGfxShaderDefineList_className[];
extern char igGfxShaderDefine_className[];
extern char igTextureSamplerSourceList_className[];
extern char igTextureSamplerSource_className[];
extern char igTextureSamplerSource_vtable[];
extern char igTextureSamplerSourceList_vtable[];
extern char lbl_804934D4[];
extern char igGfxShaderDefine_vtable[];
extern char igGfxShaderDefineList_vtable[];
extern char lbl_804935F8[];
extern char igGfxShaderDefineList_dependencies[8];
extern char igGfxShaderDefine_dependencies[8];
extern char igGfxShaderDefine_fieldTypes[8];
extern char igGfxShaderDefine_fieldNames[8];
extern char igGfxShaderDefine_fieldStorage[8];
extern char igGfxShaderDefine_fieldOffsets[8];
extern char igTextureSamplerSourceList_dependencies[8];
extern void *lbl_805621F4;
extern void *igObject_meta;
extern void *igGfxShaderDefineList_meta;
extern void *igGfxShaderDefine_meta;
extern void *igTextureSamplerSourceList_meta;
extern void *igTextureSamplerSource_meta;
void *igGfxShaderDefineList_getMeta();
void *igGfxShaderDefineList_vtableRead();
void igGfxShaderDefineList_arkRegister();
void igGfxShaderDefineList_register();
void *igGfxShaderDefineList_getMetaCall();
void *igGfxShaderDefine_getMeta();
void *igGfxShaderDefine_vtableRead();
void igGfxShaderDefine_arkRegister();
void igGfxShaderDefine_register();
void *igGfxShaderDefine_getMetaCall();
void igGfxShaderDefine_fieldInit();
void *igTextureSamplerSourceList_getMeta();
void *igTextureSamplerSourceList_vtableRead();
void igTextureSamplerSourceList_arkRegister();
void igTextureSamplerSourceList_register();
void *igTextureSamplerSourceList_getMetaCall();
void *igTextureSamplerSource_getMeta();
void *igTextureSamplerSource_vtableRead();
void igTextureSamplerSource_arkRegister();
void igTextureSamplerSource_register();
void *igTextureSamplerSource_getMetaCall();
}
struct UnknownGenObject800D403C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800D419C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800D419C(){igObject_construct(this);}
};
struct UnknownGenObject800D419C_0 : UnknownGenRoot800D419C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800D419C_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject800D419C : UnknownGenObject800D419C_0 {
 UnknownGenRefMember unknown0C;
 char unknown10[16];
 inline ~UnknownGenObject800D419C(){unknown00=igGfxShaderDefine_vtable;}
};
struct UnknownGenObject800D4440_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800D45A0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800D45A0(){igObject_construct(this);}
};
struct UnknownGenObject800D45A0_0 : UnknownGenRoot800D45A0 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800D45A0_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject800D45A0 : UnknownGenObject800D45A0_0 {
 char unknown0C[20];
 inline ~UnknownGenObject800D45A0(){unknown00=igTextureSamplerSource_vtable;}
};
extern "C" {
void *fn_800D3FC4(){
 if(!igGfxShaderDefineList_meta) igGfxShaderDefineList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igGfxShaderDefineList_meta;
}
}
#pragma pop
