#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80023FDC();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void igNonRefCountedObjectList_register();
void igObjectPool_register();
void igObject_register();
void igRenderPackage_fieldInit();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char igNonRefCountedObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igRenderPackageList_className[];
extern char igRenderPackagePool_className[];
extern char lbl_804AC740[];
extern char igRenderPackage_className[];
extern char igRenderPackage_vtable[];
extern char igRenderPackagePool_vtable[];
extern char lbl_804B9650[];
extern char igRenderPackageList_vtable[];
extern char lbl_804B9718[];
extern char igObjectPool_vtable[];
extern char lbl_80560204[8];
extern char lbl_8056020C[8];
extern void *lbl_805621F4;
extern void *igObjectPool_meta;
extern void *igRenderPackageList_meta;
extern void *igRenderPackagePool_meta;
extern void *igRenderPackage_meta;
void *igRenderPackageList_getMeta();
void *igRenderPackageList_vtableRead();
void igRenderPackageList_registerNow();
void igRenderPackageList_register();
void *igRenderPackageList_getMetaCall();
void *igRenderPackagePool_getMeta();
void *igRenderPackagePool_vtableRead();
void igRenderPackagePool_registerNow();
void igRenderPackagePool_register();
void *igRenderPackagePool_getMetaCall();
void *fn_801AF130();
void *igRenderPackage_getMeta();
void *igRenderPackage_vtableRead();
void igRenderPackage_registerNow();
void igRenderPackage_register();
void *igRenderPackage_getMetaCall();
}
struct UnknownGenObject801AEE64_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject801AF000_0 {
 void *unknown00;
 char unknown04[36];
};
struct UnknownGenRoot801AF1E8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801AF1E8(){fn_8006665C(this);}
};
struct UnknownGenObject801AF1E8 : UnknownGenRoot801AF1E8 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 UnknownGenRefMember unknown10;
 char unknown14[8];
 UnknownGenRefMember unknown1C;
 char unknown20[8];
 inline ~UnknownGenObject801AF1E8(){unknown00=igRenderPackage_vtable;}
};
extern "C" {
void *fn_801AEDEC(){
 if(!igRenderPackageList_meta) igRenderPackageList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igRenderPackageList_meta;
}
void *igRenderPackageList_getMeta(){
 if(!igRenderPackageList_meta || !(reinterpret_cast<unsigned int *>(igRenderPackageList_meta)[0x24/4]&4)) igRenderPackageList_registerNow();
 return igRenderPackageList_meta;
}
void *igRenderPackageList_vtableRead(){
 UnknownGenObject801AEE64_0 object;
 fn_8006665C(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igNonRefCountedObjectList_vtable;
 object.unknown00=lbl_804B9718;
 object.unknown00=igRenderPackageList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igRenderPackageList_registerNow(){
 meta_registerNow((int)igRenderPackageList_register);
}
void igRenderPackageList_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igRenderPackageList_meta,(int)igNonRefCountedObjectList_register,(int)fn_80023FDC,(int)igRenderPackageList_getMetaCall,(int)igRenderPackageList_className,20,(int)igRenderPackageList_vtableRead,0,0,(int)lbl_80560204);
}
void *igRenderPackageList_getMetaCall(){return igRenderPackageList_getMeta();}
void *fn_801AEF88(){
 if(!igRenderPackagePool_meta) igRenderPackagePool_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igRenderPackagePool_meta;
}
void *igRenderPackagePool_getMeta(){
 if(!igRenderPackagePool_meta || !(reinterpret_cast<unsigned int *>(igRenderPackagePool_meta)[0x24/4]&4)) igRenderPackagePool_registerNow();
 return igRenderPackagePool_meta;
}
void *igRenderPackagePool_vtableRead(){
 UnknownGenObject801AF000_0 object;
 fn_8006665C(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=igObjectPool_vtable;
 object.unknown00=lbl_804B9650;
 object.unknown00=igRenderPackagePool_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igRenderPackagePool_registerNow(){
 meta_registerNow((int)igRenderPackagePool_register);
}
void igRenderPackagePool_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igRenderPackagePool_meta,(int)igObjectPool_register,(int)fn_801AF130,(int)igRenderPackagePool_getMetaCall,(int)igRenderPackagePool_className,32,(int)igRenderPackagePool_vtableRead,0,0,(int)lbl_8056020C);
}
void *igRenderPackagePool_getMetaCall(){return igRenderPackagePool_getMeta();}
void *fn_801AF130(){return igObjectPool_meta;}
void *igRenderPackage_create(void *object){
 igRenderPackage_registerNow();
 return meta_createInstance(igRenderPackage_meta,object);
}
void *fn_801AF170(){
 if(!igRenderPackage_meta) igRenderPackage_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igRenderPackage_meta;
}
void *igRenderPackage_getMeta(){
 if(!igRenderPackage_meta || !(reinterpret_cast<unsigned int *>(igRenderPackage_meta)[0x24/4]&4)) igRenderPackage_registerNow();
 return igRenderPackage_meta;
}
void *igRenderPackage_vtableRead(){
 UnknownGenObject801AF1E8 object;
 object.unknown00=igRenderPackage_vtable;
 object.unknown08.value=0;
 object.unknown10.value=0;
 object.unknown1C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igRenderPackage_registerNow(){
 meta_registerNow((int)igRenderPackage_register);
}
void igRenderPackage_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igRenderPackage_meta,(int)igObject_register,(int)fn_800237D0,(int)igRenderPackage_getMetaCall,(int)igRenderPackage_className,32,(int)igRenderPackage_vtableRead,(int)igRenderPackage_fieldInit,0,(int)lbl_804AC740);
}
void *igRenderPackage_getMetaCall(){return igRenderPackage_getMeta();}
}
#pragma pop
