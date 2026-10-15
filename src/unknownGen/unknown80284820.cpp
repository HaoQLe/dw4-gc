#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_80284294();
void igMessenger_fieldInit();
void igObject_register();
extern char igMessenger_className[];
extern char igMessenger_dependencies[];
extern char igMessenger_vtable[];
extern void *igMessenger_meta;
extern void *lbl_805621F4;
void *igMessenger_getMeta();
void *igMessenger_vtableRead();
void igMessenger_arkRegister();
void igMessenger_register();
void *igMessenger_getMetaCall();
}
struct UnknownGenRoot802848C0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802848C0(){igObject_construct(this);}
};
struct UnknownGenObject802848C0 : UnknownGenRoot802848C0 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject802848C0(){unknown00=igMessenger_vtable;}
};
extern "C" {
void *igMessenger_metaObject(){
 if(!igMessenger_meta) igMessenger_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igMessenger_meta;
}
void *igMessenger_getMeta(){
 if(!igMessenger_meta || !(reinterpret_cast<unsigned int *>(igMessenger_meta)[0x24/4]&4)) igMessenger_arkRegister();
 return igMessenger_meta;
}
void *igMessenger_vtableRead(){
 UnknownGenObject802848C0 object;
 object.unknown00=igMessenger_vtable;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igMessenger_arkRegister(){
 meta_registerNow((int)igMessenger_register);
}
void igMessenger_register(){
 fn_80284294();
 meta_registerClass(0,(int)&igMessenger_meta,(int)igObject_register,(int)fn_800237D0,(int)igMessenger_getMetaCall,(int)igMessenger_className,12,(int)igMessenger_vtableRead,(int)igMessenger_fieldInit,0,(int)igMessenger_dependencies);
}
void *igMessenger_getMetaCall(){return igMessenger_getMeta();}
}
#pragma pop
