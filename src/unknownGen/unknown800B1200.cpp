#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800ABC8C();
void *fn_800AC294();
void igSceneAmbientColorAttr_fieldInit();
void igVisualAttribute_register();
extern char igSceneAmbientColorAttr_className[];
extern char igSceneAmbientColorAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *igSceneAmbientColorAttr_meta;
void *igSceneAmbientColorAttr_getMeta();
void *igSceneAmbientColorAttr_vtableRead();
void igSceneAmbientColorAttr_registerNow();
void igSceneAmbientColorAttr_register();
void *igSceneAmbientColorAttr_getMetaCall();
}
struct UnknownGenObject800B123C_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *igSceneAmbientColorAttr_getMeta(){
 if(!igSceneAmbientColorAttr_meta || !(reinterpret_cast<unsigned int *>(igSceneAmbientColorAttr_meta)[0x24/4]&4)) igSceneAmbientColorAttr_registerNow();
 return igSceneAmbientColorAttr_meta;
}
void *igSceneAmbientColorAttr_vtableRead(){
 UnknownGenObject800B123C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igSceneAmbientColorAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igSceneAmbientColorAttr_registerNow(){
 meta_registerNow((int)igSceneAmbientColorAttr_register);
}
void igSceneAmbientColorAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igSceneAmbientColorAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igSceneAmbientColorAttr_getMetaCall,(int)igSceneAmbientColorAttr_className,28,(int)igSceneAmbientColorAttr_vtableRead,(int)igSceneAmbientColorAttr_fieldInit,0,0);
}
void *igSceneAmbientColorAttr_getMetaCall(){return igSceneAmbientColorAttr_getMeta();}
}
#pragma pop
