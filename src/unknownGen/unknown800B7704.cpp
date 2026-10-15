#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void *fn_800ABEF8();
void *fn_800AC294();
void *fn_800AD708();
void *fn_800BE528(int);
void igAttrDefaultManager_register();
void igCustomStateCollectionAttr_register();
void igDitherStateAttr_fieldInit();
void igVisualAttribute_register();
extern char igFloatConstantAttr_className[];
extern char igFileAttrDefaultManager_className[];
extern char igDitherStateAttr_className[];
extern char igFloatConstantAttr_vtable[];
extern char igFileAttrDefaultManager_vtable[];
extern char igDitherStateAttr_vtable[];
extern char lbl_8047CD74[];
extern char lbl_8047D514[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char igFloatConstantAttr_fieldTypes[8];
extern char igFloatConstantAttr_fieldNames[8];
extern char igFloatConstantAttr_fieldStorage[8];
extern char igFloatConstantAttr_fieldOffsets[8];
extern void *igFloatConstantAttr_meta;
extern void *igFileAttrDefaultManager_meta;
extern void *igDitherStateAttr_meta;
void *igFloatConstantAttr_getMeta();
void *igFloatConstantAttr_vtableRead();
void igFloatConstantAttr_arkRegister();
void igFloatConstantAttr_register();
void *igFloatConstantAttr_getMetaCall();
void igFloatConstantAttr_fieldInit();
void *igFileAttrDefaultManager_getMeta();
void *igFileAttrDefaultManager_vtableRead();
void igFileAttrDefaultManager_arkRegister();
void igFileAttrDefaultManager_register();
void *igFileAttrDefaultManager_getMetaCall();
void *igDitherStateAttr_getMeta();
void *igDitherStateAttr_vtableRead();
void igDitherStateAttr_arkRegister();
void igDitherStateAttr_register();
void *igDitherStateAttr_getMetaCall();
}
struct UnknownGenObject800B7430_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B7608_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenObject800B7740_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *igDitherStateAttr_getMeta(){
 if(!igDitherStateAttr_meta || !(reinterpret_cast<unsigned int *>(igDitherStateAttr_meta)[0x24/4]&4)) igDitherStateAttr_arkRegister();
 return igDitherStateAttr_meta;
}
void *igDitherStateAttr_vtableRead(){
 UnknownGenObject800B7740_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igDitherStateAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igDitherStateAttr_arkRegister(){
 meta_registerNow((int)igDitherStateAttr_register);
}
void igDitherStateAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igDitherStateAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igDitherStateAttr_getMetaCall,(int)igDitherStateAttr_className,24,(int)igDitherStateAttr_vtableRead,(int)igDitherStateAttr_fieldInit,0,0);
}
void *igDitherStateAttr_getMetaCall(){return igDitherStateAttr_getMeta();}
}
#pragma pop
