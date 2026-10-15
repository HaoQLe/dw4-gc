#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800CE2F8();
void *igGamecubeVertexStream_getMeta();
void igNamedObject_register();
void igObjectList_register();
void igVertexData_fieldInit();
extern char igDataList_vtable[];
extern char igNamedObject_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char lbl_80480EC0[];
extern char igVertexDataList_className[];
extern char igVertexData_className[];
extern char igVertexData_vtable[];
extern char igVertexDataList_vtable[];
extern char lbl_804940EC[];
extern char lbl_8055EAA8[8];
extern char lbl_8055EAB0[8];
extern void *lbl_805621F4;
extern void *igVertexDataList_meta;
extern void *lbl_80562DBC;
extern void *igVertexData_meta;
void *igVertexDataList_getMeta();
void *igVertexDataList_vtableRead();
void igVertexDataList_registerNow();
void igVertexDataList_register();
void *igVertexDataList_getMetaCall();
void *igVertexData_getMeta();
void *igVertexData_vtableRead();
void igVertexData_registerNow();
void igVertexData_register();
void *igVertexData_getMetaCall();
}
struct UnknownGenObject800CF750_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800CF970 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800CF970(){igObject_construct(this);}
};
struct UnknownGenObject800CF970_0 : UnknownGenRoot800CF970 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800CF970_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject800CF970 : UnknownGenObject800CF970_0 {
 UnknownGenRefMember unknown0C;
 char unknown10[32];
 inline ~UnknownGenObject800CF970(){unknown00=igVertexData_vtable;}
};
extern "C" {
void *igGamecubeVertexStream_getMetaCall(){return igGamecubeVertexStream_getMeta();}
void *igVertexDataList_create(void *object){
 igVertexDataList_registerNow();
 return meta_createInstance(igVertexDataList_meta,object);
}
void *fn_800CF6D8(){
 if(!igVertexDataList_meta) igVertexDataList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igVertexDataList_meta;
}
void *igVertexDataList_getMeta(){
 if(!igVertexDataList_meta || !(reinterpret_cast<unsigned int *>(igVertexDataList_meta)[0x24/4]&4)) igVertexDataList_registerNow();
 return igVertexDataList_meta;
}
void *igVertexDataList_vtableRead(){
 UnknownGenObject800CF750_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804940EC;
 object.unknown00=igVertexDataList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igVertexDataList_registerNow(){
 meta_registerNow((int)igVertexDataList_register);
}
void igVertexDataList_register(){
 fn_800CE2F8();
 meta_registerClass(0,(int)&igVertexDataList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igVertexDataList_getMetaCall,(int)igVertexDataList_className,20,(int)igVertexDataList_vtableRead,0,0,(int)lbl_8055EAA8);
}
void *igVertexDataList_getMetaCall(){return igVertexDataList_getMeta();}
void *fn_800CF874(){
 char *data=lbl_80480EC0;
 if(!lbl_80562DBC) lbl_80562DBC=fn_800635C8(data+0x7968,data+0x7910,data+0x793C,0xB);
 return lbl_80562DBC;
}
void *igVertexData_create(void *object){
 igVertexData_registerNow();
 return meta_createInstance(igVertexData_meta,object);
}
void *fn_800CF8F8(){
 if(!igVertexData_meta) igVertexData_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igVertexData_meta;
}
void *igVertexData_getMeta(){
 if(!igVertexData_meta || !(reinterpret_cast<unsigned int *>(igVertexData_meta)[0x24/4]&4)) igVertexData_registerNow();
 return igVertexData_meta;
}
void *igVertexData_vtableRead(){
 UnknownGenObject800CF970 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igVertexData_vtable;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igVertexData_registerNow(){
 meta_registerNow((int)igVertexData_register);
}
void igVertexData_register(){
 fn_800CE2F8();
 meta_registerClass(0,(int)&igVertexData_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)igVertexData_getMetaCall,(int)igVertexData_className,36,(int)igVertexData_vtableRead,(int)igVertexData_fieldInit,0,(int)lbl_8055EAB0);
}
void *igVertexData_getMetaCall(){return igVertexData_getMeta();}
}
#pragma pop
