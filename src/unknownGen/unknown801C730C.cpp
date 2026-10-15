#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_80035C70();
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_801AA6DC();
void *fn_801AD7BC();
void igBillboardProcessor_fieldInit();
void igShaderProcessor_register();
void igUnsignedIntList_register();
extern char igDataList_vtable[];
extern char igUnsignedIntList_vtable[];
extern char lbl_80474900[];
extern char lbl_804AAFB8[];
extern char igBitMask_className[];
extern char igBillboardProcessor_className[];
extern char igShaderProcessor_vtable[];
extern char igBillboardProcessor_vtable[];
extern char igBitMask_vtable[];
extern char igBitMask_fieldTypes[4];
extern char igBitMask_fieldNames[4];
extern char igBitMask_fieldStorage[4];
extern char igBitMask_fieldOffsets[4];
extern char igBillboardProcessor_dependencies[8];
extern void *lbl_805621F4;
extern void *igBitMask_meta;
extern void *lbl_805652D4;
extern void *igBillboardProcessor_meta;
void *igBitMask_getMeta();
void *igBitMask_vtableRead();
void igBitMask_arkRegister();
void igBitMask_register();
void *igBitMask_getMetaCall();
void igBitMask_fieldInit();
void *igBillboardProcessor_getMeta();
void *igBillboardProcessor_vtableRead();
void igBillboardProcessor_arkRegister();
void igBillboardProcessor_register();
void *igBillboardProcessor_getMetaCall();
}
struct UnknownGenObject801C73BC_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801C75C8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801C75C8(){igObject_construct(this);}
};
struct UnknownGenObject801C75C8 : UnknownGenRoot801C75C8 {
 char unknown04[32];
 UnknownGenRefMember unknown24;
 char unknown28[8];
 inline ~UnknownGenObject801C75C8(){unknown00=igBillboardProcessor_vtable;}
};
extern "C" {
void *igBitMask_create(void *object){
 igBitMask_arkRegister();
 return meta_createInstance(igBitMask_meta,object);
}
void *fn_801C7344(){
 if(!igBitMask_meta) igBitMask_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igBitMask_meta;
}
void *igBitMask_getMeta(){
 if(!igBitMask_meta || !(reinterpret_cast<unsigned int *>(igBitMask_meta)[0x24/4]&4)) igBitMask_arkRegister();
 return igBitMask_meta;
}
void *igBitMask_vtableRead(){
 UnknownGenObject801C73BC_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80474900;
 object.unknown00=igUnsignedIntList_vtable;
 object.unknown00=igBitMask_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igBitMask_arkRegister(){
 meta_registerNow((int)igBitMask_register);
}
void igBitMask_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igBitMask_meta,(int)igUnsignedIntList_register,(int)fn_80035C70,(int)igBitMask_getMetaCall,(int)igBitMask_className,24,(int)igBitMask_vtableRead,(int)igBitMask_fieldInit,0,0);
}
void *igBitMask_getMetaCall(){return igBitMask_getMeta();}
void igBitMask_fieldInit(){
 void *value0=igBitMask_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,igBitMask_fieldTypes,1);
 meta_setupFields(value0,igBitMask_fieldNames,igBitMask_fieldStorage,igBitMask_fieldOffsets,value1);
}
void *fn_801C7540(){
 char *data=lbl_804AAFB8;
 if(!lbl_805652D4) lbl_805652D4=fn_800635C8(data+0x6500,data+0x64E0,data+0x64F0,0x4);
 return lbl_805652D4;
}
void *igBillboardProcessor_getMeta(){
 if(!igBillboardProcessor_meta || !(reinterpret_cast<unsigned int *>(igBillboardProcessor_meta)[0x24/4]&4)) igBillboardProcessor_arkRegister();
 return igBillboardProcessor_meta;
}
void *igBillboardProcessor_vtableRead(){
 UnknownGenObject801C75C8 object;
 object.unknown00=igShaderProcessor_vtable;
 object.unknown00=igBillboardProcessor_vtable;
 object.unknown24.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igBillboardProcessor_arkRegister(){
 meta_registerNow((int)igBillboardProcessor_register);
}
void igBillboardProcessor_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igBillboardProcessor_meta,(int)igShaderProcessor_register,(int)fn_801AD7BC,(int)igBillboardProcessor_getMetaCall,(int)igBillboardProcessor_className,40,(int)igBillboardProcessor_vtableRead,(int)igBillboardProcessor_fieldInit,0,(int)igBillboardProcessor_dependencies);
}
void *igBillboardProcessor_getMetaCall(){return igBillboardProcessor_getMeta();}
}
#pragma pop
