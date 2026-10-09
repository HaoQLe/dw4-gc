#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800ABC8C();
void *fn_800AC294();
void igSceneAmbientColorAttr_fieldInit();
void igVisualAttribute_register();
extern char lbl_80478984[];
extern char lbl_8047B5CC[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *lbl_8056263C;
void *igSceneAmbientColorAttr_getMeta();
void *igSceneAmbientColorAttr_vtableRead();
void fn_800B1294();
void igSceneAmbientColorAttr_register();
void *igSceneAmbientColorAttr_getMetaCall();
}
struct UnknownGenObject800B123C_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *igSceneAmbientColorAttr_getMeta(){
 if(!lbl_8056263C || !(reinterpret_cast<unsigned int *>(lbl_8056263C)[0x24/4]&4)) fn_800B1294();
 return lbl_8056263C;
}
void *igSceneAmbientColorAttr_vtableRead(){
 UnknownGenObject800B123C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047B5CC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B1294(){
 fn_80066188((int)igSceneAmbientColorAttr_register);
}
void igSceneAmbientColorAttr_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_8056263C,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igSceneAmbientColorAttr_getMetaCall,(int)lbl_80478984,28,(int)igSceneAmbientColorAttr_vtableRead,(int)igSceneAmbientColorAttr_fieldInit,0,0);
}
void *igSceneAmbientColorAttr_getMetaCall(){return igSceneAmbientColorAttr_getMeta();}
}
#pragma pop
