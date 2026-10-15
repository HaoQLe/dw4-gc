#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void *meta_newMetaObject(void *);
void fn_8003EC68(void *,int);
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
void igTexGenMatrixAttr_arkRegister();
void fn_800CE04C();
void igObjectList_register();
void igVisualAttribute_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igImageMipMapList_className[];
extern char igTextureAddressModeAttr_className[];
extern char igTextureAddressModeAttr_vtable[];
extern char lbl_8047D578[];
extern char igImageMipMapList_vtable[];
extern char lbl_8047E1F8[];
extern char lbl_8047E50C[];
extern char igImageMipMapList_dependencies[8];
extern char igTextureAddressModeAttr_fieldTypes[8];
extern char igTextureAddressModeAttr_fieldNames[8];
extern char igTextureAddressModeAttr_fieldStorage[8];
extern char igTextureAddressModeAttr_fieldOffsets[8];
extern char lbl_8055E0D8[4];
extern void *lbl_805621F4;
extern void *igImageMipMapList_meta;
extern void *igTextureAddressModeAttr_meta;
extern void *igTexGenMatrixAttr_meta;
void *igImageMipMapList_getMeta();
void *igImageMipMapList_vtableRead();
void igImageMipMapList_arkRegister();
void igImageMipMapList_register();
void *igImageMipMapList_getMetaCall();
void *igTextureAddressModeAttr_getMeta();
void *igTextureAddressModeAttr_vtableRead();
void igTextureAddressModeAttr_arkRegister();
void igTextureAddressModeAttr_register();
void *igTextureAddressModeAttr_getMetaCall();
void igTextureAddressModeAttr_fieldInit();
}
struct UnknownGenObject800AF9CC_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800AFB64_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800AFD14(){
 if(!igTexGenMatrixAttr_meta) igTexGenMatrixAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igTexGenMatrixAttr_meta;
}
void *igTexGenMatrixAttr_getMeta(){
 if(!igTexGenMatrixAttr_meta || !(reinterpret_cast<unsigned int *>(igTexGenMatrixAttr_meta)[0x24/4]&4)) igTexGenMatrixAttr_arkRegister();
 return igTexGenMatrixAttr_meta;
}
}
#pragma pop
