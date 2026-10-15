#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8011D8BC();
void *fn_80125430();
void igObjectList_register();
void igObject_register();
void igRay_fieldInit();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igRayList_className[];
extern char igRay_vtable[];
extern char igRayList_vtable[];
extern char lbl_8049B91C[];
extern char lbl_8055F390[8];
extern char lbl_8055F398[6];
extern void *lbl_805621F4;
extern void *igRayList_meta;
extern void *igRay_meta;
void *igRayList_getMeta();
void *igRayList_vtableRead();
void igRayList_registerNow();
void igRayList_register();
void *igRayList_getMetaCall();
void *igRay_getMeta();
void *igRay_vtableRead();
void igRay_registerNow();
void igRay_register();
void *igRay_getMetaCall();
}
struct UnknownGenObject8011F7E4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8011F9B8_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *fn_8011F74C(){return fn_80125430();}
void *fn_8011F76C(){
 if(!igRayList_meta) igRayList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igRayList_meta;
}
void *igRayList_getMeta(){
 if(!igRayList_meta || !(reinterpret_cast<unsigned int *>(igRayList_meta)[0x24/4]&4)) igRayList_registerNow();
 return igRayList_meta;
}
void *igRayList_vtableRead(){
 UnknownGenObject8011F7E4_0 object;
 fn_8006665C(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_8049B91C;
 object.unknown00=igRayList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igRayList_registerNow(){
 meta_registerNow((int)igRayList_register);
}
void igRayList_register(){
 fn_8011D8BC();
 meta_registerClass(0,(int)&igRayList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igRayList_getMetaCall,(int)igRayList_className,20,(int)igRayList_vtableRead,0,0,(int)lbl_8055F390);
}
void *igRayList_getMetaCall(){return igRayList_getMeta();}
void *igRay_create(void *object){
 igRay_registerNow();
 return meta_createInstance(igRay_meta,object);
}
void *fn_8011F940(){
 if(!igRay_meta) igRay_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igRay_meta;
}
void *igRay_getMeta(){
 if(!igRay_meta || !(reinterpret_cast<unsigned int *>(igRay_meta)[0x24/4]&4)) igRay_registerNow();
 return igRay_meta;
}
void *igRay_vtableRead(){
 UnknownGenObject8011F9B8_0 object;
 fn_8006665C(&object);
 object.unknown00=igRay_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igRay_registerNow(){
 meta_registerNow((int)igRay_register);
}
void igRay_register(){
 fn_8011D8BC();
 meta_registerClass(0,(int)&igRay_meta,(int)igObject_register,(int)fn_800237D0,(int)igRay_getMetaCall,(int)lbl_8055F398,36,(int)igRay_vtableRead,(int)igRay_fieldInit,0,0);
}
void *igRay_getMetaCall(){return igRay_getMeta();}
}
#pragma pop
