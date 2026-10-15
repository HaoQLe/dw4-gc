#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void fn_80065DBC(int);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void fn_801F5C1C(int);
void fn_801F5CE8();
void *fn_801F5D14();
void igObject_register();
void igProbe_fieldInit();
extern char lbl_804AF2A0[];
extern char igProbe_vtable[];
extern char lbl_8056055C[8];
extern void *lbl_805621F4;
extern void *igProbe_meta;
void *igProbe_getMeta();
void *igProbe_vtableRead();
void igProbe_registerNow();
void igProbe_register();
void *igProbe_getMetaCall();
}
struct UnknownGenRoot801BDC18 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801BDC18(){fn_8006665C(this);}
};
struct UnknownGenObject801BDC18 : UnknownGenRoot801BDC18 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[4];
 inline ~UnknownGenObject801BDC18(){unknown00=igProbe_vtable;}
};
extern "C" {
void fn_801BDB1C(){
 fn_801F5CE8();
 fn_80065DBC((int)fn_801F5C1C);
}
void *fn_801BDB48(){return fn_801F5D14();}
void *igProbe_create(void *object){
 igProbe_registerNow();
 return meta_createInstance(igProbe_meta,object);
}
void *fn_801BDBA0(){
 if(!igProbe_meta) igProbe_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igProbe_meta;
}
void *igProbe_getMeta(){
 if(!igProbe_meta || !(reinterpret_cast<unsigned int *>(igProbe_meta)[0x24/4]&4)) igProbe_registerNow();
 return igProbe_meta;
}
void *igProbe_vtableRead(){
 UnknownGenObject801BDC18 object;
 object.unknown00=igProbe_vtable;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igProbe_registerNow(){
 meta_registerNow((int)igProbe_register);
}
void igProbe_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igProbe_meta,(int)igObject_register,(int)fn_800237D0,(int)igProbe_getMetaCall,(int)lbl_8056055C,20,(int)igProbe_vtableRead,(int)igProbe_fieldInit,0,(int)lbl_804AF2A0);
}
void *igProbe_getMetaCall(){return igProbe_getMeta();}
}
#pragma pop
