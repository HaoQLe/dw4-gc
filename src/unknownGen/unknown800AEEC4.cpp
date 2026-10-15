#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void *fn_800AC294();
void igTextureCoordSourceAttr_fieldInit();
void igVisualAttribute_register();
extern char igTextureCoordSourceAttr_className[];
extern char igTextureCoordSourceAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *lbl_805621F4;
extern void *igTextureCoordSourceAttr_meta;
void *igTextureCoordSourceAttr_getMeta();
void *igTextureCoordSourceAttr_vtableRead();
void igTextureCoordSourceAttr_arkRegister();
void igTextureCoordSourceAttr_register();
void *igTextureCoordSourceAttr_getMetaCall();
}
struct UnknownGenObject800AEF74_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *igTextureCoordSourceAttr_create(void *object){
 igTextureCoordSourceAttr_arkRegister();
 return meta_createInstance(igTextureCoordSourceAttr_meta,object);
}
void *fn_800AEEFC(){
 if(!igTextureCoordSourceAttr_meta) igTextureCoordSourceAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igTextureCoordSourceAttr_meta;
}
void *igTextureCoordSourceAttr_getMeta(){
 if(!igTextureCoordSourceAttr_meta || !(reinterpret_cast<unsigned int *>(igTextureCoordSourceAttr_meta)[0x24/4]&4)) igTextureCoordSourceAttr_arkRegister();
 return igTextureCoordSourceAttr_meta;
}
void *igTextureCoordSourceAttr_vtableRead(){
 UnknownGenObject800AEF74_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igTextureCoordSourceAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igTextureCoordSourceAttr_arkRegister(){
 meta_registerNow((int)igTextureCoordSourceAttr_register);
}
void igTextureCoordSourceAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igTextureCoordSourceAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igTextureCoordSourceAttr_getMetaCall,(int)igTextureCoordSourceAttr_className,24,(int)igTextureCoordSourceAttr_vtableRead,(int)igTextureCoordSourceAttr_fieldInit,0,0);
}
void *igTextureCoordSourceAttr_getMetaCall(){return igTextureCoordSourceAttr_getMeta();}
}
#pragma pop
