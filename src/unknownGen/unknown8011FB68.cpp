#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8011D8BC();
void *fn_8011F6A4();
void *fn_8011FD6C();
void igPlane_fieldInit();
void igVolume_register();
extern char lbl_8049B800[];
extern char lbl_8049B9DC[];
extern char lbl_8055F3B8[8];
extern void *lbl_8056397C;
void *igPlane_getMeta();
void *igPlane_vtableRead();
void fn_8011FC28();
void igPlane_register();
void *igPlane_getMetaCall();
}
struct UnknownGenObject8011FBDC_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *fn_8011FB68(void *object){
 fn_8011FC28();
 return fn_8006546C(lbl_8056397C,object);
}
void *igPlane_getMeta(){
 if(!lbl_8056397C || !(reinterpret_cast<unsigned int *>(lbl_8056397C)[0x24/4]&4)) fn_8011FC28();
 return lbl_8056397C;
}
void *igPlane_vtableRead(){
 UnknownGenObject8011FBDC_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8049B9DC;
 object.unknown00=lbl_8049B800;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8011FC28(){
 fn_80066188((int)igPlane_register);
}
void igPlane_register(){
 fn_8011D8BC();
 fn_80066204(0,(int)&lbl_8056397C,(int)igVolume_register,(int)fn_8011F6A4,(int)igPlane_getMetaCall,(int)lbl_8055F3B8,28,(int)igPlane_vtableRead,(int)igPlane_fieldInit,(int)fn_8011FD6C,0);
}
void *igPlane_getMetaCall(){return igPlane_getMeta();}
}
#pragma pop
