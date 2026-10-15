#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *fn_8010EE6C();
void fn_80402E28();
void igActorManagerParams_fieldInit();
void igModel_register();
extern char igActorManagerParams_className[];
extern char igModel_vtable[];
extern char igActorManagerParams_vtable[];
extern void *igActorManagerParams_meta;
extern void *lbl_805621F4;
void *igActorManagerParams_getMeta();
void *igActorManagerParams_vtableRead();
void igActorManagerParams_arkRegister();
void igActorManagerParams_register();
void *igActorManagerParams_getMetaCall();
}
struct UnknownGenRoot80409890 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80409890(){igObject_construct(this);}
};
struct UnknownGenObject80409890_0 : UnknownGenRoot80409890 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject80409890_0(){unknown00=igModel_vtable;}
};
struct UnknownGenObject80409890 : UnknownGenObject80409890_0 {
 char unknown0C[4];
 inline ~UnknownGenObject80409890(){unknown00=igActorManagerParams_vtable;}
};
extern "C" {
void *igActorManagerParams_metaObject(){
 if(!igActorManagerParams_meta) igActorManagerParams_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igActorManagerParams_meta;
}
void *igActorManagerParams_getMeta(){
 if(!igActorManagerParams_meta || !(reinterpret_cast<unsigned int *>(igActorManagerParams_meta)[0x24/4]&4)) igActorManagerParams_arkRegister();
 return igActorManagerParams_meta;
}
void *igActorManagerParams_vtableRead(){
 UnknownGenObject80409890 object;
 object.unknown00=igModel_vtable;
 object.unknown08.value=0;
 object.unknown00=igActorManagerParams_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igActorManagerParams_arkRegister(){
 meta_registerNow((int)igActorManagerParams_register);
}
void igActorManagerParams_register(){
 fn_80402E28();
 meta_registerClass(0,(int)&igActorManagerParams_meta,(int)igModel_register,(int)fn_8010EE6C,(int)igActorManagerParams_getMetaCall,(int)igActorManagerParams_className,16,(int)igActorManagerParams_vtableRead,(int)igActorManagerParams_fieldInit,0,0);
}
void *igActorManagerParams_getMetaCall(){return igActorManagerParams_getMeta();}
}
#pragma pop
