#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80046E58(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void *fn_800AC294();
void *fn_800AD708();
void *fn_800C1444(int);
void fn_800CE17C();
void igCustomStateCollectionAttr_register();
void igMaterialAttr_fieldInit();
void *igMatrixConstantAttr_getMeta();
void igMatrixConstantAttr_vtableRead();
void igVisualAttribute_register();
extern char igMatrixConstantAttr_className[];
extern char igMaterialModeAttr_className[];
extern char igMaterialAttr_className[];
extern char igMaterialModeAttr_vtable[];
extern char igMaterialAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char igMatrixConstantAttr_fieldTypes[8];
extern char igMatrixConstantAttr_fieldNames[8];
extern char igMatrixConstantAttr_fieldStorage[8];
extern char igMatrixConstantAttr_fieldOffsets[8];
extern char igMaterialModeAttr_fieldTypes[4];
extern char igMaterialModeAttr_fieldNames[4];
extern char igMaterialModeAttr_fieldStorage[4];
extern char igMaterialModeAttr_fieldOffsets[4];
extern char lbl_8055E3C8[4];
extern void *igMatrixConstantAttr_meta;
extern void *igMaterialModeAttr_meta;
extern void *igMaterialAttr_meta;
void igMatrixConstantAttr_register();
void *igMatrixConstantAttr_getMetaCall();
void igMatrixConstantAttr_fieldInit();
void *igMaterialModeAttr_getMeta();
void *igMaterialModeAttr_vtableRead();
void igMaterialModeAttr_arkRegister();
void igMaterialModeAttr_register();
void *igMaterialModeAttr_getMetaCall();
void igMaterialModeAttr_fieldInit();
void *igMaterialAttr_getMeta();
void *igMaterialAttr_vtableRead();
void igMaterialAttr_arkRegister();
void igMaterialAttr_register();
void *igMaterialAttr_getMetaCall();
}
struct UnknownGenObject800B4A00_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B4BD8_0 {
 void *unknown00;
 char unknown04[84];
};
extern "C" {
void *igMaterialAttr_getMeta(){
 if(!igMaterialAttr_meta || !(reinterpret_cast<unsigned int *>(igMaterialAttr_meta)[0x24/4]&4)) igMaterialAttr_arkRegister();
 return igMaterialAttr_meta;
}
void *igMaterialAttr_vtableRead(){
 UnknownGenObject800B4BD8_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igMaterialAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igMaterialAttr_arkRegister(){
 meta_registerNow((int)igMaterialAttr_register);
}
void igMaterialAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igMaterialAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igMaterialAttr_getMetaCall,(int)igMaterialAttr_className,84,(int)igMaterialAttr_vtableRead,(int)igMaterialAttr_fieldInit,0,0);
}
void *igMaterialAttr_getMetaCall(){return igMaterialAttr_getMeta();}
}
#pragma pop
