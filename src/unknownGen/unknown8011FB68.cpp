#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8011D8BC();
void *fn_8011F6A4();
void *fn_8011FD6C();
void igPlane_fieldInit();
void igVolume_register();
extern char igPlane_vtable[];
extern char lbl_8049B9DC[];
extern char lbl_8055F3B8[8];
extern void *igPlane_meta;
void *igPlane_getMeta();
void *igPlane_vtableRead();
void igPlane_registerNow();
void igPlane_register();
void *igPlane_getMetaCall();
}
struct UnknownGenObject8011FBDC_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *igPlane_create(void *object){
 igPlane_registerNow();
 return meta_createInstance(igPlane_meta,object);
}
void *igPlane_getMeta(){
 if(!igPlane_meta || !(reinterpret_cast<unsigned int *>(igPlane_meta)[0x24/4]&4)) igPlane_registerNow();
 return igPlane_meta;
}
void *igPlane_vtableRead(){
 UnknownGenObject8011FBDC_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8049B9DC;
 object.unknown00=igPlane_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igPlane_registerNow(){
 meta_registerNow((int)igPlane_register);
}
void igPlane_register(){
 fn_8011D8BC();
 meta_registerClass(0,(int)&igPlane_meta,(int)igVolume_register,(int)fn_8011F6A4,(int)igPlane_getMetaCall,(int)lbl_8055F3B8,28,(int)igPlane_vtableRead,(int)igPlane_fieldInit,(int)fn_8011FD6C,0);
}
void *igPlane_getMetaCall(){return igPlane_getMeta();}
}
#pragma pop
