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
void igTextureSwapAttr_fieldInit();
void igVisualAttribute_register();
extern char igTextureSwapAttr_className[];
extern char igTextureSwapAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *igTextureSwapAttr_meta;
void *igTextureSwapAttr_getMeta();
void *igTextureSwapAttr_vtableRead();
void igTextureSwapAttr_arkRegister();
void igTextureSwapAttr_register();
void *igTextureSwapAttr_getMetaCall();
}
struct UnknownGenObject800BC08C_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *igTextureSwapAttr_create(void *object){
 igTextureSwapAttr_arkRegister();
 return meta_createInstance(igTextureSwapAttr_meta,object);
}
void *igTextureSwapAttr_getMeta(){
 if(!igTextureSwapAttr_meta || !(reinterpret_cast<unsigned int *>(igTextureSwapAttr_meta)[0x24/4]&4)) igTextureSwapAttr_arkRegister();
 return igTextureSwapAttr_meta;
}
void *igTextureSwapAttr_vtableRead(){
 UnknownGenObject800BC08C_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igTextureSwapAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igTextureSwapAttr_arkRegister(){
 meta_registerNow((int)igTextureSwapAttr_register);
}
void igTextureSwapAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igTextureSwapAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igTextureSwapAttr_getMetaCall,(int)igTextureSwapAttr_className,20,(int)igTextureSwapAttr_vtableRead,(int)igTextureSwapAttr_fieldInit,0,0);
}
void *igTextureSwapAttr_getMetaCall(){return igTextureSwapAttr_getMeta();}
}
#pragma pop
