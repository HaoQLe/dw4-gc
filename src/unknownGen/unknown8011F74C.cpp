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
void igObject_construct(void *);
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
extern char igRayList_dependencies[8];
extern char lbl_8055F398[6];
extern void *lbl_805621F4;
extern void *igRayList_meta;
extern void *igRay_meta;
void *igRayList_getMeta();
void *igRayList_vtableRead();
void igRayList_arkRegister();
void igRayList_register();
void *igRayList_getMetaCall();
void *igRay_getMeta();
void *igRay_vtableRead();
void igRay_arkRegister();
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
}
#pragma pop
