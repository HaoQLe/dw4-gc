#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_801AA6DC();
void igGeometry_registerNow();
void igObjectList_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igGeometryList_className[];
extern char igGeometryList_vtable[];
extern char lbl_804B7370[];
extern char lbl_80560648[8];
extern void *lbl_805621F4;
extern void *igGeometryList_meta;
extern void *igGeometry_meta;
void *igGeometryList_getMeta();
void *igGeometryList_vtableRead();
void igGeometryList_registerNow();
void igGeometryList_register();
void *igGeometryList_getMetaCall();
}
struct UnknownGenObject801BFFB0_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *igGeometryList_create(void *object){
 igGeometryList_registerNow();
 return meta_createInstance(igGeometryList_meta,object);
}
void *fn_801BFF38(){
 if(!igGeometryList_meta) igGeometryList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igGeometryList_meta;
}
void *igGeometryList_getMeta(){
 if(!igGeometryList_meta || !(reinterpret_cast<unsigned int *>(igGeometryList_meta)[0x24/4]&4)) igGeometryList_registerNow();
 return igGeometryList_meta;
}
void *igGeometryList_vtableRead(){
 UnknownGenObject801BFFB0_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804B7370;
 object.unknown00=igGeometryList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igGeometryList_registerNow(){
 meta_registerNow((int)igGeometryList_register);
}
void igGeometryList_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igGeometryList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igGeometryList_getMetaCall,(int)igGeometryList_className,20,(int)igGeometryList_vtableRead,0,0,(int)lbl_80560648);
}
void *igGeometryList_getMetaCall(){return igGeometryList_getMeta();}
void *igGeometry_create(void *object){
 igGeometry_registerNow();
 return meta_createInstance(igGeometry_meta,object);
}
void *fn_801C010C(){
 if(!igGeometry_meta) igGeometry_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igGeometry_meta;
}
void *igGeometry_getMeta(){
 if(!igGeometry_meta || !(reinterpret_cast<unsigned int *>(igGeometry_meta)[0x24/4]&4)) igGeometry_registerNow();
 return igGeometry_meta;
}
}
#pragma pop
