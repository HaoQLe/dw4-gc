#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800ABC8C();
void *fn_800AC294();
void igBlendMatricesAttr_fieldInit();
void igVisualAttribute_register();
extern char igBlendMatricesAttr_className[];
extern char igBlendMatricesAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *igBlendMatricesAttr_meta;
void *igBlendMatricesAttr_getMeta();
void *igBlendMatricesAttr_vtableRead();
void igBlendMatricesAttr_registerNow();
void igBlendMatricesAttr_register();
void *igBlendMatricesAttr_getMetaCall();
}
struct UnknownGenObject800BA450_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *igBlendMatricesAttr_create(void *object){
 igBlendMatricesAttr_registerNow();
 return meta_createInstance(igBlendMatricesAttr_meta,object);
}
void *igBlendMatricesAttr_getMeta(){
 if(!igBlendMatricesAttr_meta || !(reinterpret_cast<unsigned int *>(igBlendMatricesAttr_meta)[0x24/4]&4)) igBlendMatricesAttr_registerNow();
 return igBlendMatricesAttr_meta;
}
void *igBlendMatricesAttr_vtableRead(){
 UnknownGenObject800BA450_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igBlendMatricesAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igBlendMatricesAttr_registerNow(){
 meta_registerNow((int)igBlendMatricesAttr_register);
}
void igBlendMatricesAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igBlendMatricesAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igBlendMatricesAttr_getMetaCall,(int)igBlendMatricesAttr_className,24,(int)igBlendMatricesAttr_vtableRead,(int)igBlendMatricesAttr_fieldInit,0,0);
}
void *igBlendMatricesAttr_getMetaCall(){return igBlendMatricesAttr_getMeta();}
}
#pragma pop
