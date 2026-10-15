#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void igBoundingBoxesMaker_fieldInit();
void igObject_register();
extern char lbl_804B1294[];
extern char igBoundingBoxesMaker_className[];
extern char igBoundingBoxesMaker_vtable[];
extern void *lbl_805621F4;
extern void *igBoundingBoxesMaker_meta;
void *igBoundingBoxesMaker_getMeta();
void *igBoundingBoxesMaker_vtableRead();
void igBoundingBoxesMaker_registerNow();
void igBoundingBoxesMaker_register();
void *igBoundingBoxesMaker_getMetaCall();
}
struct UnknownGenRoot801C6BE0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801C6BE0(){fn_8006665C(this);}
};
struct UnknownGenObject801C6BE0 : UnknownGenRoot801C6BE0 {
 char unknown04[16];
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 char unknown1C[4];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject801C6BE0(){unknown00=igBoundingBoxesMaker_vtable;}
};
extern "C" {
void *igBoundingBoxesMaker_create(void *object){
 igBoundingBoxesMaker_registerNow();
 return meta_createInstance(igBoundingBoxesMaker_meta,object);
}
void *fn_801C6B68(){
 if(!igBoundingBoxesMaker_meta) igBoundingBoxesMaker_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igBoundingBoxesMaker_meta;
}
void *igBoundingBoxesMaker_getMeta(){
 if(!igBoundingBoxesMaker_meta || !(reinterpret_cast<unsigned int *>(igBoundingBoxesMaker_meta)[0x24/4]&4)) igBoundingBoxesMaker_registerNow();
 return igBoundingBoxesMaker_meta;
}
void *igBoundingBoxesMaker_vtableRead(){
 UnknownGenObject801C6BE0 object;
 object.unknown00=igBoundingBoxesMaker_vtable;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown20.value=0;
 object.unknown24.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igBoundingBoxesMaker_registerNow(){
 meta_registerNow((int)igBoundingBoxesMaker_register);
}
void igBoundingBoxesMaker_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igBoundingBoxesMaker_meta,(int)igObject_register,(int)fn_800237D0,(int)igBoundingBoxesMaker_getMetaCall,(int)igBoundingBoxesMaker_className,40,(int)igBoundingBoxesMaker_vtableRead,(int)igBoundingBoxesMaker_fieldInit,0,(int)lbl_804B1294);
}
void *igBoundingBoxesMaker_getMetaCall(){return igBoundingBoxesMaker_getMeta();}
}
#pragma pop
