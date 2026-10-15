#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void *fn_800AC294();
void igMacroTextureRegionAttr_fieldInit();
void igVisualAttribute_register();
extern char igMacroTextureRegionAttr_className[];
extern char igMacroTextureRegionAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *igMacroTextureRegionAttr_meta;
void *igMacroTextureRegionAttr_getMeta();
void *igMacroTextureRegionAttr_vtableRead();
void igMacroTextureRegionAttr_registerNow();
void igMacroTextureRegionAttr_register();
void *igMacroTextureRegionAttr_getMetaCall();
}
struct UnknownGenObject800B4E7C_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *igMacroTextureRegionAttr_create(void *object){
 igMacroTextureRegionAttr_registerNow();
 return meta_createInstance(igMacroTextureRegionAttr_meta,object);
}
void *igMacroTextureRegionAttr_getMeta(){
 if(!igMacroTextureRegionAttr_meta || !(reinterpret_cast<unsigned int *>(igMacroTextureRegionAttr_meta)[0x24/4]&4)) igMacroTextureRegionAttr_registerNow();
 return igMacroTextureRegionAttr_meta;
}
void *igMacroTextureRegionAttr_vtableRead(){
 UnknownGenObject800B4E7C_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igMacroTextureRegionAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igMacroTextureRegionAttr_registerNow(){
 meta_registerNow((int)igMacroTextureRegionAttr_register);
}
void igMacroTextureRegionAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igMacroTextureRegionAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igMacroTextureRegionAttr_getMetaCall,(int)igMacroTextureRegionAttr_className,28,(int)igMacroTextureRegionAttr_vtableRead,(int)igMacroTextureRegionAttr_fieldInit,0,0);
}
void *igMacroTextureRegionAttr_getMetaCall(){return igMacroTextureRegionAttr_getMeta();}
}
#pragma pop
