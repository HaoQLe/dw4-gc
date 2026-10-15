#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
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
void fn_800ABC8C();
void *fn_800AC294();
void *fn_800D06E0();
void *igGeometryAttr_fieldInit();
void igVisualAttribute_register();
extern char igGeometryAttr1_5_className[];
extern char igGeometryAttr_dependencies[];
extern char igGeometryAttr_className[];
extern char igGeometryAttr1_5_vtable[];
extern char lbl_8047C5AC[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char igGeometryAttr1_5_dependencies[8];
extern char igGeometryAttr1_5_fieldTypes[4];
extern char igGeometryAttr1_5_fieldNames[4];
extern char igGeometryAttr1_5_fieldStorage[4];
extern char igGeometryAttr1_5_fieldOffsets[4];
extern void *lbl_805621F4;
extern void *igGeometryAttr1_5_meta;
extern void *igGeometryAttr_meta;
void *igGeometryAttr1_5_getMeta();
void *igGeometryAttr1_5_vtableRead();
void igGeometryAttr1_5_arkRegister();
void igGeometryAttr1_5_register();
void *igGeometryAttr1_5_getMetaCall();
void *igGeometryAttr1_5_parentMeta();
void igGeometryAttr1_5_fieldInit();
void *igGeometryAttr_getMeta();
void igGeometryAttr_arkRegister();
void igGeometryAttr_register();
void *igGeometryAttr_getMetaCall();
}
struct UnknownGenRoot800B690C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B690C(){igObject_construct(this);}
};
struct UnknownGenObject800B690C_0 : UnknownGenRoot800B690C {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[12];
 UnknownGenRefMember unknown20;
 char unknown24[4];
 UnknownGenRefMember unknown28;
 UnknownGenRefMember unknown2C;
 inline ~UnknownGenObject800B690C_0(){unknown00=lbl_8047C5AC;}
};
struct UnknownGenObject800B690C : UnknownGenObject800B690C_0 {
 UnknownGenRefMember unknown30;
 char unknown34[12];
 inline ~UnknownGenObject800B690C(){unknown00=igGeometryAttr1_5_vtable;}
};
extern "C" {
void *fn_800B6C60(){
 if(!igGeometryAttr_meta) igGeometryAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igGeometryAttr_meta;
}
void *igGeometryAttr_getMeta(){
 if(!igGeometryAttr_meta || !(reinterpret_cast<unsigned int *>(igGeometryAttr_meta)[0x24/4]&4)) igGeometryAttr_arkRegister();
 return igGeometryAttr_meta;
}
void igGeometryAttr_arkRegister(){
 meta_registerNow((int)igGeometryAttr_register);
}
void igGeometryAttr_register(){
 fn_800ABC8C();
 meta_registerClass(1,(int)&igGeometryAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igGeometryAttr_getMetaCall,(int)igGeometryAttr_className,48,0,(int)igGeometryAttr_fieldInit,0,(int)igGeometryAttr_dependencies);
}
void *igGeometryAttr_getMetaCall(){return igGeometryAttr_getMeta();}
}
#pragma pop
