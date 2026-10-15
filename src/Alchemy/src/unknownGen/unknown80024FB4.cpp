#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void arkRegister__Q33Gap4Core11igStringObjFv();
void fn_80021B94();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void igObjectList_register();
void *igStringObjList_getMeta();
void igStringObjList_vtableRead();
extern char igStringObjList_className[];
extern char igStringObj_vtable[];
extern char igStringObjList_dependencies[8];
extern void *igStringObjList_meta;
extern void *igStringObj_meta;
extern void *lbl_805621F4;
void *igStringObjList_getMetaCall();
}
struct UnknownGenObject80025064_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *igStringObj_create(void *object){
 arkRegister__Q33Gap4Core11igStringObjFv();
 return meta_createInstance(igStringObj_meta,object);
}
void *fn_80024FEC(){
 if(!igStringObj_meta) igStringObj_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igStringObj_meta;
}
void *igStringObj_getMeta(){
 if(!igStringObj_meta || !(reinterpret_cast<unsigned int *>(igStringObj_meta)[0x24/4]&4)) arkRegister__Q33Gap4Core11igStringObjFv();
 return igStringObj_meta;
}
void *igStringObj_vtableRead(){
 UnknownGenObject80025064_0 object;
 igObject_construct(&object);
 object.unknown00=igStringObj_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
