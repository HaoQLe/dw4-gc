#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
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
void fn_800ABC8C();
void *fn_800AC294();
void *fn_800B1738();
void *fn_800CDB9C();
void *fn_800CDDA8();
void igScissorAttr_fieldInit();
void igVisualAttribute_register();
extern char igShadeModelAttr_className[];
extern char igSetRenderDestinationAttr_className[];
extern char igScissorTypeAttr_className[];
extern char igScissorAttr_className[];
extern char igShadeModelAttr_vtable[];
extern char igSetRenderDestinationAttr_vtable[];
extern char igScissorTypeAttr_vtable[];
extern char igScissorAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char igShadeModelAttr_fieldTypes[4];
extern char igShadeModelAttr_fieldNames[4];
extern char igShadeModelAttr_fieldStorage[4];
extern char igShadeModelAttr_fieldOffsets[4];
extern char lbl_8055E180[4];
extern char igSetRenderDestinationAttr_dependencies[8];
extern char igSetRenderDestinationAttr_fieldTypes[4];
extern char igSetRenderDestinationAttr_fieldNames[4];
extern char igSetRenderDestinationAttr_fieldStorage[4];
extern char igSetRenderDestinationAttr_fieldOffsets[4];
extern char igScissorTypeAttr_fieldTypes[4];
extern char igScissorTypeAttr_fieldNames[4];
extern char igScissorTypeAttr_fieldStorage[4];
extern char igScissorTypeAttr_fieldOffsets[4];
extern char lbl_8055E1AC[4];
extern void *lbl_805621F4;
extern void *igShadeModelAttr_meta;
extern void *igSetRenderDestinationAttr_meta;
extern void *igScissorTypeAttr_meta;
extern void *igScissorAttr_meta;
void *igShadeModelAttr_getMeta();
void *igShadeModelAttr_vtableRead();
void igShadeModelAttr_arkRegister();
void igShadeModelAttr_register();
void *igShadeModelAttr_getMetaCall();
void igShadeModelAttr_fieldInit();
void *igSetRenderDestinationAttr_getMeta();
void *igSetRenderDestinationAttr_vtableRead();
void igSetRenderDestinationAttr_arkRegister();
void igSetRenderDestinationAttr_register();
void *igSetRenderDestinationAttr_getMetaCall();
void igSetRenderDestinationAttr_fieldInit();
void *igScissorTypeAttr_getMeta();
void *igScissorTypeAttr_vtableRead();
void igScissorTypeAttr_arkRegister();
void igScissorTypeAttr_register();
void *igScissorTypeAttr_getMetaCall();
void igScissorTypeAttr_fieldInit();
void *igScissorAttr_getMeta();
void *igScissorAttr_vtableRead();
void igScissorAttr_arkRegister();
void igScissorAttr_register();
void *igScissorAttr_getMetaCall();
}
struct UnknownGenObject800B0A1C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800B0C68 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B0C68(){igObject_construct(this);}
};
struct UnknownGenObject800B0C68 : UnknownGenRoot800B0C68 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject800B0C68(){unknown00=igSetRenderDestinationAttr_vtable;}
};
struct UnknownGenObject800B0E80_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B1058_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *igScissorAttr_getMeta(){
 if(!igScissorAttr_meta || !(reinterpret_cast<unsigned int *>(igScissorAttr_meta)[0x24/4]&4)) igScissorAttr_arkRegister();
 return igScissorAttr_meta;
}
void *igScissorAttr_vtableRead(){
 UnknownGenObject800B1058_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igScissorAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igScissorAttr_arkRegister(){
 meta_registerNow((int)igScissorAttr_register);
}
void igScissorAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igScissorAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igScissorAttr_getMetaCall,(int)igScissorAttr_className,32,(int)igScissorAttr_vtableRead,(int)igScissorAttr_fieldInit,0,0);
}
void *igScissorAttr_getMetaCall(){return igScissorAttr_getMeta();}
}
#pragma pop
