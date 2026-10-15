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
extern char lbl_8055E5BC[4];
extern char lbl_8055E5C8[4];
extern char lbl_8055E5CC[4];
extern char lbl_8055E5D0[4];
extern char lbl_8055E5D4[4];
extern void *igColorScalerStateAttr_meta;
extern void *igColorMaskAttr_meta;
void *igColorScalerStateAttr_getMeta();
void *igColorScalerStateAttr_vtableRead();
void igColorScalerStateAttr_registerNow();
void igColorScalerStateAttr_register();
void *igColorScalerStateAttr_getMetaCall();
void igColorScalerStateAttr_fieldInit();
void *igColorMaskAttr_getMeta();
void *igColorMaskAttr_vtableRead();
void igColorMaskAttr_registerNow();
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
void *igColorScalerStateAttr_getMeta(){
 if(!igColorScalerStateAttr_meta || !(reinterpret_cast<unsigned int *>(igColorScalerStateAttr_meta)[0x24/4]&4)) igColorScalerStateAttr_registerNow();
 return igColorScalerStateAttr_meta;
}
void *igColorScalerStateAttr_vtableRead(){
 UnknownGenObject800B8F30_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igColorScalerStateAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igColorScalerStateAttr_registerNow(){
 meta_registerNow((int)igColorScalerStateAttr_register);
}
void igColorScalerStateAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igColorScalerStateAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igColorScalerStateAttr_getMetaCall,(int)igColorScalerStateAttr_className,16,(int)igColorScalerStateAttr_vtableRead,(int)igColorScalerStateAttr_fieldInit,0,0);
}
void *igColorScalerStateAttr_getMetaCall(){return igColorScalerStateAttr_getMeta();}
void igColorScalerStateAttr_fieldInit(){
 void *value0=igColorScalerStateAttr_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_8055E5BC,1);
 void *value2=meta_field(value0,value1);
 fn_80046E58(value2,lbl_8055E5D4);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+52)=(void *)fn_8003D160;
 meta_setupFields(value0,lbl_8055E5C8,lbl_8055E5CC,lbl_8055E5D0,value1);
}
void *igColorMaskAttr_create(void *object){
 igColorMaskAttr_registerNow();
 return meta_createInstance(igColorMaskAttr_meta,object);
}
void *igColorMaskAttr_getMeta(){
 if(!igColorMaskAttr_meta || !(reinterpret_cast<unsigned int *>(igColorMaskAttr_meta)[0x24/4]&4)) igColorMaskAttr_registerNow();
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
void igColorMaskAttr_registerNow(){
 meta_registerNow((int)igColorMaskAttr_register);
}
void igColorMaskAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igColorMaskAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igColorMaskAttr_getMetaCall,(int)igColorMaskAttr_className,20,(int)igColorMaskAttr_vtableRead,(int)igColorMaskAttr_fieldInit,0,0);
}
void *igColorMaskAttr_getMetaCall(){return igColorMaskAttr_getMeta();}
}
#pragma pop
