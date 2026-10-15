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
void igColorAttr_fieldInit();
void igVisualAttribute_register();
extern char igColorAttr_className[];
extern char igColorAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *lbl_805621F4;
extern void *igColorAttr_meta;
void *igColorAttr_getMeta();
void *igColorAttr_vtableRead();
void igColorAttr_arkRegister();
void igColorAttr_register();
void *igColorAttr_getMetaCall();
}
struct UnknownGenObject800B93C0_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *igColorAttr_create(void *object){
 igColorAttr_arkRegister();
 return meta_createInstance(igColorAttr_meta,object);
}
void *fn_800B9348(){
 if(!igColorAttr_meta) igColorAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igColorAttr_meta;
}
void *igColorAttr_getMeta(){
 if(!igColorAttr_meta || !(reinterpret_cast<unsigned int *>(igColorAttr_meta)[0x24/4]&4)) igColorAttr_arkRegister();
 return igColorAttr_meta;
}
void *igColorAttr_vtableRead(){
 UnknownGenObject800B93C0_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igColorAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igColorAttr_arkRegister(){
 meta_registerNow((int)igColorAttr_register);
}
void igColorAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igColorAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igColorAttr_getMetaCall,(int)igColorAttr_className,32,(int)igColorAttr_vtableRead,(int)igColorAttr_fieldInit,0,0);
}
void *igColorAttr_getMetaCall(){return igColorAttr_getMeta();}
}
#pragma pop
