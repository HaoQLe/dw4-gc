#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *meta_newMetaObject(void *);
void fn_8003D160();
void fn_80046E58(void *,void *);
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
void *fn_800D031C();
void fn_800D5D1C();
void igContextExt_register();
void igImageLoader_register();
void igObject_register();
extern char igCapabilityManager_className[];
extern char igBlendEquationExt_className[];
extern char igTgaLoader_className[];
extern char igTgaLoader_vtable[];
extern char lbl_8049304C[];
extern char lbl_804930AC[];
extern char igBlendEquationExt_fieldTypes[4];
extern char igBlendEquationExt_fieldNames[4];
extern char igBlendEquationExt_fieldStorage[4];
extern char igBlendEquationExt_fieldOffsets[4];
extern char lbl_8055ED30[4];
extern char igTgaLoader_dependencies[8];
extern void *lbl_805621F4;
extern void *igImageLoader_meta;
extern void *igCapabilityManager_meta;
extern void *igBlendEquationExt_meta;
extern void *igTgaLoader_meta;
void *igCapabilityManager_getMeta();
void igCapabilityManager_arkRegister();
void igCapabilityManager_register();
void *igCapabilityManager_getMetaCall();
void *igBlendEquationExt_getMeta();
void igBlendEquationExt_arkRegister();
void igBlendEquationExt_register();
void *igBlendEquationExt_getMetaCall();
void igBlendEquationExt_fieldInit();
void *igTgaLoader_getMeta();
void *igTgaLoader_vtableRead();
void igTgaLoader_arkRegister();
void igTgaLoader_register();
void *igTgaLoader_getMetaCall();
void *igTgaLoader_parentMeta();
}
struct UnknownGenRoot800D5BB8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800D5BB8(){igObject_construct(this);}
};
struct UnknownGenObject800D5BB8 : UnknownGenRoot800D5BB8 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[36];
 inline ~UnknownGenObject800D5BB8(){unknown00=igTgaLoader_vtable;}
};
extern "C" {
void *fn_800D5868(){
 if(!igCapabilityManager_meta) igCapabilityManager_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igCapabilityManager_meta;
}
}
#pragma pop
