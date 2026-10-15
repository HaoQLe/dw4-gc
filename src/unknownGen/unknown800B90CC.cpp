#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8003D160();
void fn_80046E58(void *,void *);
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
void igColorMaskAttr_fieldInit();
void igVisualAttribute_register();
extern char igColorScalerStateAttr_className[];
extern char igColorMaskAttr_className[];
extern char igColorScalerStateAttr_vtable[];
extern char igColorMaskAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char igColorScalerStateAttr_fieldTypes[4];
extern char igColorScalerStateAttr_fieldNames[4];
extern char igColorScalerStateAttr_fieldStorage[4];
extern char igColorScalerStateAttr_fieldOffsets[4];
extern char lbl_8055E5D4[4];
extern void *igColorScalerStateAttr_meta;
extern void *igColorMaskAttr_meta;
void *igColorScalerStateAttr_getMeta();
void *igColorScalerStateAttr_vtableRead();
void igColorScalerStateAttr_arkRegister();
void igColorScalerStateAttr_register();
void *igColorScalerStateAttr_getMetaCall();
void igColorScalerStateAttr_fieldInit();
void *igColorMaskAttr_getMeta();
void *igColorMaskAttr_vtableRead();
void igColorMaskAttr_arkRegister();
void igColorMaskAttr_register();
void *igColorMaskAttr_getMetaCall();
}
struct UnknownGenObject800B8F30_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B9140_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *igColorMaskAttr_create(void *object){
 igColorMaskAttr_arkRegister();
 return meta_createInstance(igColorMaskAttr_meta,object);
}
void *igColorMaskAttr_getMeta(){
 if(!igColorMaskAttr_meta || !(reinterpret_cast<unsigned int *>(igColorMaskAttr_meta)[0x24/4]&4)) igColorMaskAttr_arkRegister();
 return igColorMaskAttr_meta;
}
void *igColorMaskAttr_vtableRead(){
 UnknownGenObject800B9140_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igColorMaskAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igColorMaskAttr_arkRegister(){
 meta_registerNow((int)igColorMaskAttr_register);
}
void igColorMaskAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igColorMaskAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igColorMaskAttr_getMetaCall,(int)igColorMaskAttr_className,20,(int)igColorMaskAttr_vtableRead,(int)igColorMaskAttr_fieldInit,0,0);
}
void *igColorMaskAttr_getMetaCall(){return igColorMaskAttr_getMeta();}
}
#pragma pop
