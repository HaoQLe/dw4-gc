#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void fn_80046E58(void *,void *);
void fn_8004D4BC(void *,float);
void *fn_800607F4(void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void *fn_800AC294();
void fn_800CDCC8();
void igPixelShaderAttr_fieldInit();
void igVisualAttribute_register();
extern char igPolygonModeAttr_className[];
extern char igPointSpriteSizeAttr_className[];
extern char igPixelShaderBindAttr_className[];
extern char igPixelShaderAttr_dependencies[];
extern char igPixelShaderAttr_className[];
extern char igPolygonModeAttr_vtable[];
extern char igPointSpriteSizeAttr_vtable[];
extern char igPixelShaderBindAttr_vtable[];
extern char igPixelShaderAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char igPolygonModeAttr_fieldTypes[4];
extern char igPolygonModeAttr_fieldNames[4];
extern char igPolygonModeAttr_fieldStorage[4];
extern char igPolygonModeAttr_fieldOffsets[4];
extern char lbl_8055E284[4];
extern char igPointSpriteSizeAttr_fieldTypes[4];
extern char igPointSpriteSizeAttr_fieldNames[4];
extern char igPointSpriteSizeAttr_fieldStorage[4];
extern char igPointSpriteSizeAttr_fieldOffsets[4];
extern char igPixelShaderBindAttr_dependencies[8];
extern char igPixelShaderBindAttr_fieldTypes[4];
extern char igPixelShaderBindAttr_fieldNames[4];
extern char igPixelShaderBindAttr_fieldStorage[4];
extern char igPixelShaderBindAttr_fieldOffsets[4];
extern void *lbl_805621F4;
extern void *igPolygonModeAttr_meta;
extern void *igPointSpriteSizeAttr_meta;
extern void *igPixelShaderBindAttr_meta;
extern void *igPixelShaderAttr_meta;
extern char lbl_80566818[4];
void *igPolygonModeAttr_getMeta();
void *igPolygonModeAttr_vtableRead();
void igPolygonModeAttr_arkRegister();
void igPolygonModeAttr_register();
void *igPolygonModeAttr_getMetaCall();
void igPolygonModeAttr_fieldInit();
void *igPointSpriteSizeAttr_getMeta();
void *igPointSpriteSizeAttr_vtableRead();
void igPointSpriteSizeAttr_arkRegister();
void igPointSpriteSizeAttr_register();
void *igPointSpriteSizeAttr_getMetaCall();
void igPointSpriteSizeAttr_fieldInit();
void *igPixelShaderBindAttr_getMeta();
void *igPixelShaderBindAttr_vtableRead();
void igPixelShaderBindAttr_arkRegister();
void igPixelShaderBindAttr_register();
void *igPixelShaderBindAttr_getMetaCall();
void igPixelShaderBindAttr_fieldInit();
void *fn_800B2678();
void *igPixelShaderAttr_getMeta();
void *igPixelShaderAttr_vtableRead();
void igPixelShaderAttr_arkRegister();
void igPixelShaderAttr_register();
void *igPixelShaderAttr_getMetaCall();
}
struct UnknownGenObject800B20FC_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B22D4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800B249C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B249C(){igObject_construct(this);}
};
struct UnknownGenObject800B249C : UnknownGenRoot800B249C {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject800B249C(){unknown00=igPixelShaderBindAttr_vtable;}
};
struct UnknownGenRoot800B26F0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B26F0(){igObject_construct(this);}
};
struct UnknownGenObject800B26F0 : UnknownGenRoot800B26F0 {
 char unknown04[24];
 UnknownGenString unknown1C;
 UnknownGenString unknown20;
 UnknownGenString unknown24;
 UnknownGenRefMember unknown28;
 UnknownGenRefMember unknown2C;
 UnknownGenRefMember unknown30;
 char unknown34[12];
 inline ~UnknownGenObject800B26F0(){unknown00=igPixelShaderAttr_vtable;}
};
extern "C" {
void *fn_800B2678(){
 if(!igPixelShaderAttr_meta) igPixelShaderAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igPixelShaderAttr_meta;
}
void *igPixelShaderAttr_getMeta(){
 if(!igPixelShaderAttr_meta || !(reinterpret_cast<unsigned int *>(igPixelShaderAttr_meta)[0x24/4]&4)) igPixelShaderAttr_arkRegister();
 return igPixelShaderAttr_meta;
}
void *igPixelShaderAttr_vtableRead(){
 UnknownGenObject800B26F0 object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igPixelShaderAttr_vtable;
 object.unknown1C.value=0;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 object.unknown30.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igPixelShaderAttr_arkRegister(){
 meta_registerNow((int)igPixelShaderAttr_register);
}
void igPixelShaderAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igPixelShaderAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igPixelShaderAttr_getMetaCall,(int)igPixelShaderAttr_className,52,(int)igPixelShaderAttr_vtableRead,(int)igPixelShaderAttr_fieldInit,0,(int)igPixelShaderAttr_dependencies);
}
void *igPixelShaderAttr_getMetaCall(){return igPixelShaderAttr_getMeta();}
}
#pragma pop
