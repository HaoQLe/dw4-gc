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
void fn_800ABC8C();
void fn_800BB148();
void igAttrPool_fieldInit();
void igObjectList_register();
void igObject_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igTextureList_className[];
extern char igGeometryAttrList_className[];
extern char lbl_80479FFC[];
extern char igAttrPool_className[];
extern char igAttrPool_vtable[];
extern char igGeometryAttrList_vtable[];
extern char lbl_8047DA24[];
extern char igTextureList_vtable[];
extern char lbl_8047DAEC[];
extern char lbl_8055E6C8[8];
extern char lbl_8055E6D0[8];
extern void *lbl_805621F4;
extern void *igTextureList_meta;
extern void *igGeometryAttrList_meta;
extern void *igAttrPool_meta;
void *igTextureList_getMeta();
void *igTextureList_vtableRead();
void igTextureList_registerNow();
void igTextureList_register();
void *igTextureList_getMetaCall();
void *igGeometryAttrList_getMeta();
void *igGeometryAttrList_vtableRead();
void igGeometryAttrList_registerNow();
void igGeometryAttrList_register();
void *igGeometryAttrList_getMetaCall();
void *igAttrPool_getMeta();
void *igAttrPool_vtableRead();
void igAttrPool_registerNow();
void igAttrPool_register();
void *igAttrPool_getMetaCall();
}
struct UnknownGenObject800BAB3C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BAD10_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800BAEA8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800BAEA8(){fn_8006665C(this);}
};
struct UnknownGenObject800BAEA8 : UnknownGenRoot800BAEA8 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[4];
 inline ~UnknownGenObject800BAEA8(){unknown00=igAttrPool_vtable;}
};
extern "C" {
void *igTextureList_create(void *object){
 igTextureList_registerNow();
 return meta_createInstance(igTextureList_meta,object);
}
void *fn_800BAAC4(){
 if(!igTextureList_meta) igTextureList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igTextureList_meta;
}
void *igTextureList_getMeta(){
 if(!igTextureList_meta || !(reinterpret_cast<unsigned int *>(igTextureList_meta)[0x24/4]&4)) igTextureList_registerNow();
 return igTextureList_meta;
}
void *igTextureList_vtableRead(){
 UnknownGenObject800BAB3C_0 object;
 fn_8006665C(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_8047DAEC;
 object.unknown00=igTextureList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igTextureList_registerNow(){
 meta_registerNow((int)igTextureList_register);
}
void igTextureList_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igTextureList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igTextureList_getMetaCall,(int)igTextureList_className,20,(int)igTextureList_vtableRead,0,0,(int)lbl_8055E6C8);
}
void *igTextureList_getMetaCall(){return igTextureList_getMeta();}
void *igGeometryAttrList_create(void *object){
 igGeometryAttrList_registerNow();
 return meta_createInstance(igGeometryAttrList_meta,object);
}
void *fn_800BAC98(){
 if(!igGeometryAttrList_meta) igGeometryAttrList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igGeometryAttrList_meta;
}
void *igGeometryAttrList_getMeta(){
 if(!igGeometryAttrList_meta || !(reinterpret_cast<unsigned int *>(igGeometryAttrList_meta)[0x24/4]&4)) igGeometryAttrList_registerNow();
 return igGeometryAttrList_meta;
}
void *igGeometryAttrList_vtableRead(){
 UnknownGenObject800BAD10_0 object;
 fn_8006665C(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_8047DA24;
 object.unknown00=igGeometryAttrList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igGeometryAttrList_registerNow(){
 meta_registerNow((int)igGeometryAttrList_register);
}
void igGeometryAttrList_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igGeometryAttrList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igGeometryAttrList_getMetaCall,(int)igGeometryAttrList_className,20,(int)igGeometryAttrList_vtableRead,0,0,(int)lbl_8055E6D0);
}
void *igGeometryAttrList_getMetaCall(){return igGeometryAttrList_getMeta();}
void *igAttrPool_create(void *object){
 igAttrPool_registerNow();
 return meta_createInstance(igAttrPool_meta,object);
}
void *igAttrPool_getMeta(){
 if(!igAttrPool_meta || !(reinterpret_cast<unsigned int *>(igAttrPool_meta)[0x24/4]&4)) igAttrPool_registerNow();
 return igAttrPool_meta;
}
void *igAttrPool_vtableRead(){
 UnknownGenObject800BAEA8 object;
 object.unknown00=igAttrPool_vtable;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igAttrPool_registerNow(){
 meta_registerNow((int)igAttrPool_register);
}
void igAttrPool_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igAttrPool_meta,(int)igObject_register,(int)fn_800237D0,(int)igAttrPool_getMetaCall,(int)igAttrPool_className,20,(int)igAttrPool_vtableRead,(int)igAttrPool_fieldInit,(int)fn_800BB148,(int)lbl_80479FFC);
}
void *igAttrPool_getMetaCall(){return igAttrPool_getMeta();}
}
#pragma pop
