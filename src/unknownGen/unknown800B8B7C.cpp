#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void fn_8003EC68(void *,int);
void fn_80046E58(void *,void *);
void fn_8004D4BC(void *,float);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_80075874(void *,int);
void fn_800ABC8C();
void *fn_800AC0B8();
void *fn_800AC294();
void *fn_800BB448();
void fn_800CDD14();
void *fn_800CDD60();
void igAttr_register();
void igCopyRenderDestinationAttr_fieldInit();
void igVisualAttribute_register();
extern char igVisualContextAttrDefaultManager_className[];
extern char igDisplayListAttr_className[];
extern char igDestinationAlphaStateAttr_className[];
extern char igDestinationAlphaFunctionAttr_className[];
extern char igDestinationAlphaAttr_className[];
extern char igDepthWriteStateAttr_className[];
extern char igDepthStateAttr_className[];
extern char igDepthFunctionAttr_className[];
extern char igDecalAttr_className[];
extern char igCustomStateCollectionAttr_className[];
extern char igCullFaceAttr_className[];
extern char igCopyRenderDestinationAttr_dependencies[];
extern char igCopyRenderDestinationAttr_className[];
extern char igDisplayListAttr_vtable[];
extern char igDestinationAlphaStateAttr_vtable[];
extern char igDestinationAlphaFunctionAttr_vtable[];
extern char igDestinationAlphaAttr_vtable[];
extern char igDepthWriteStateAttr_vtable[];
extern char igDepthStateAttr_vtable[];
extern char igDepthFunctionAttr_vtable[];
extern char igDecalAttr_vtable[];
extern char igCullFaceAttr_vtable[];
extern char igCopyRenderDestinationAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char igDisplayListAttr_dependencies[8];
extern char igDisplayListAttr_fieldTypes[4];
extern char igDisplayListAttr_fieldNames[4];
extern char igDisplayListAttr_fieldStorage[4];
extern char igDisplayListAttr_fieldOffsets[4];
extern char igDestinationAlphaStateAttr_fieldTypes[4];
extern char igDestinationAlphaStateAttr_fieldNames[4];
extern char igDestinationAlphaStateAttr_fieldStorage[4];
extern char igDestinationAlphaStateAttr_fieldOffsets[4];
extern char igDestinationAlphaFunctionAttr_fieldTypes[4];
extern char igDestinationAlphaFunctionAttr_fieldNames[4];
extern char igDestinationAlphaFunctionAttr_fieldStorage[4];
extern char igDestinationAlphaFunctionAttr_fieldOffsets[4];
extern char igDestinationAlphaAttr_fieldTypes[8];
extern char igDestinationAlphaAttr_fieldNames[8];
extern char igDestinationAlphaAttr_fieldStorage[8];
extern char igDestinationAlphaAttr_fieldOffsets[8];
extern char igDepthWriteStateAttr_fieldTypes[4];
extern char igDepthWriteStateAttr_fieldNames[4];
extern char igDepthWriteStateAttr_fieldStorage[4];
extern char igDepthWriteStateAttr_fieldOffsets[4];
extern char igDepthStateAttr_fieldTypes[4];
extern char igDepthStateAttr_fieldNames[4];
extern char igDepthStateAttr_fieldStorage[4];
extern char igDepthStateAttr_fieldOffsets[4];
extern char igDepthFunctionAttr_fieldTypes[4];
extern char igDepthFunctionAttr_fieldNames[4];
extern char igDepthFunctionAttr_fieldStorage[4];
extern char igDepthFunctionAttr_fieldOffsets[4];
extern char lbl_8055E568[4];
extern char igDecalAttr_fieldTypes[4];
extern char igDecalAttr_fieldNames[4];
extern char igDecalAttr_fieldStorage[4];
extern char igDecalAttr_fieldOffsets[4];
extern char igCullFaceAttr_fieldTypes[8];
extern char igCullFaceAttr_fieldNames[8];
extern char igCullFaceAttr_fieldStorage[8];
extern char igCullFaceAttr_fieldOffsets[8];
extern char lbl_8055E59C[4];
extern void *lbl_805621F4;
extern void *igDisplayListAttr_meta;
extern void *igDestinationAlphaStateAttr_meta;
extern void *igDestinationAlphaFunctionAttr_meta;
extern void *igDestinationAlphaAttr_meta;
extern void *igDepthWriteStateAttr_meta;
extern void *igDepthStateAttr_meta;
extern void *igDepthFunctionAttr_meta;
extern void *igDecalAttr_meta;
extern void *igCustomStateCollectionAttr_meta;
extern void *igCullFaceAttr_meta;
extern void *lbl_80562944;
extern void *igCopyRenderDestinationAttr_meta;
extern char lbl_80566810[4];
void *igDisplayListAttr_getMeta();
void *igDisplayListAttr_vtableRead();
void igDisplayListAttr_arkRegister();
void igDisplayListAttr_register();
void *igDisplayListAttr_getMetaCall();
void igDisplayListAttr_fieldInit();
void *igDestinationAlphaStateAttr_getMeta();
void *igDestinationAlphaStateAttr_vtableRead();
void igDestinationAlphaStateAttr_arkRegister();
void igDestinationAlphaStateAttr_register();
void *igDestinationAlphaStateAttr_getMetaCall();
void igDestinationAlphaStateAttr_fieldInit();
void *igDestinationAlphaFunctionAttr_getMeta();
void *igDestinationAlphaFunctionAttr_vtableRead();
void igDestinationAlphaFunctionAttr_arkRegister();
void igDestinationAlphaFunctionAttr_register();
void *igDestinationAlphaFunctionAttr_getMetaCall();
void igDestinationAlphaFunctionAttr_fieldInit();
void *igDestinationAlphaAttr_getMeta();
void *igDestinationAlphaAttr_vtableRead();
void igDestinationAlphaAttr_arkRegister();
void igDestinationAlphaAttr_register();
void *igDestinationAlphaAttr_getMetaCall();
void igDestinationAlphaAttr_fieldInit();
void *igDepthWriteStateAttr_getMeta();
void *igDepthWriteStateAttr_vtableRead();
void igDepthWriteStateAttr_arkRegister();
void igDepthWriteStateAttr_register();
void *igDepthWriteStateAttr_getMetaCall();
void igDepthWriteStateAttr_fieldInit();
void *igDepthStateAttr_getMeta();
void *igDepthStateAttr_vtableRead();
void igDepthStateAttr_arkRegister();
void igDepthStateAttr_register();
void *igDepthStateAttr_getMetaCall();
void igDepthStateAttr_fieldInit();
void *igDepthFunctionAttr_getMeta();
void *igDepthFunctionAttr_vtableRead();
void igDepthFunctionAttr_arkRegister();
void igDepthFunctionAttr_register();
void *igDepthFunctionAttr_getMetaCall();
void igDepthFunctionAttr_fieldInit();
void *igDecalAttr_getMeta();
void *igDecalAttr_vtableRead();
void igDecalAttr_arkRegister();
void igDecalAttr_register();
void *igDecalAttr_getMetaCall();
void igDecalAttr_fieldInit();
void *igCustomStateCollectionAttr_getMeta();
void igCustomStateCollectionAttr_arkRegister();
void igCustomStateCollectionAttr_register();
void *igCustomStateCollectionAttr_getMetaCall();
void *igCullFaceAttr_getMeta();
void *igCullFaceAttr_vtableRead();
void igCullFaceAttr_arkRegister();
void igCullFaceAttr_register();
void *igCullFaceAttr_getMetaCall();
void igCullFaceAttr_fieldInit();
void *igCopyRenderDestinationAttr_getMeta();
void *igCopyRenderDestinationAttr_vtableRead();
void igCopyRenderDestinationAttr_arkRegister();
void igCopyRenderDestinationAttr_register();
void *igCopyRenderDestinationAttr_getMetaCall();
}
struct UnknownGenRoot800B7988 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B7988(){igObject_construct(this);}
};
struct UnknownGenObject800B7988 : UnknownGenRoot800B7988 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject800B7988(){unknown00=igDisplayListAttr_vtable;}
};
struct UnknownGenObject800B7B9C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B7D64_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B7F2C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B8130_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B8330_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B84F8_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B86D0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B89E0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800B8C40 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B8C40(){igObject_construct(this);}
};
struct UnknownGenObject800B8C40 : UnknownGenRoot800B8C40 {
 char unknown04[12];
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 char unknown1C[28];
 inline ~UnknownGenObject800B8C40(){unknown00=igCopyRenderDestinationAttr_vtable;}
};
extern "C" {
void *fn_800B8B7C(){
 char *data=igVisualContextAttrDefaultManager_className;
 if(!lbl_80562944) lbl_80562944=fn_800635C8(data+0x1D04,data+0x1CDC,data+0x1CF0,0x5);
 return lbl_80562944;
}
void *fn_800B8BC8(){
 if(!igCopyRenderDestinationAttr_meta) igCopyRenderDestinationAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igCopyRenderDestinationAttr_meta;
}
void *igCopyRenderDestinationAttr_getMeta(){
 if(!igCopyRenderDestinationAttr_meta || !(reinterpret_cast<unsigned int *>(igCopyRenderDestinationAttr_meta)[0x24/4]&4)) igCopyRenderDestinationAttr_arkRegister();
 return igCopyRenderDestinationAttr_meta;
}
void *igCopyRenderDestinationAttr_vtableRead(){
 UnknownGenObject800B8C40 object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igCopyRenderDestinationAttr_vtable;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown18.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igCopyRenderDestinationAttr_arkRegister(){
 meta_registerNow((int)igCopyRenderDestinationAttr_register);
}
void igCopyRenderDestinationAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igCopyRenderDestinationAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igCopyRenderDestinationAttr_getMetaCall,(int)igCopyRenderDestinationAttr_className,52,(int)igCopyRenderDestinationAttr_vtableRead,(int)igCopyRenderDestinationAttr_fieldInit,0,(int)igCopyRenderDestinationAttr_dependencies);
}
void *igCopyRenderDestinationAttr_getMetaCall(){return igCopyRenderDestinationAttr_getMeta();}
}
#pragma pop
