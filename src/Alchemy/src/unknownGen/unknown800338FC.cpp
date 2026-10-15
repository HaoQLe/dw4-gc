#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void igDataList_fieldInit();
void igObject_register();
extern char igDataList_className[];
extern char igDataList_vtable[];
extern void *igDataList_meta;
extern void *lbl_805621F4;
void *igDataList_getMeta();
void *igDataList_vtableRead();
void igDataList_registerNow();
void igDataList_register();
void *igDataList_getMetaCall();
}
struct UnknownGenObject800339AC_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *igDataList_create(void *object){
 igDataList_registerNow();
 return meta_createInstance(igDataList_meta,object);
}
void *fn_80033934(){
 if(!igDataList_meta) igDataList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igDataList_meta;
}
void *igDataList_getMeta(){
 if(!igDataList_meta || !(reinterpret_cast<unsigned int *>(igDataList_meta)[0x24/4]&4)) igDataList_registerNow();
 return igDataList_meta;
}
void *igDataList_vtableRead(){
 UnknownGenObject800339AC_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igDataList_registerNow(){
 meta_registerNow((int)igDataList_register);
}
void igDataList_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igDataList_meta,(int)igObject_register,(int)fn_800237D0,(int)igDataList_getMetaCall,(int)igDataList_className,20,(int)igDataList_vtableRead,(int)igDataList_fieldInit,0,0);
}
void *igDataList_getMetaCall(){return igDataList_getMeta();}
}
#pragma pop
