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
void igActor_registerNow();
void igObjectList_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igActorList_className[];
extern char igActorList_vtable[];
extern char lbl_804B5848[];
extern char lbl_80560A50[8];
extern void *lbl_805621F4;
extern void *igActorList_meta;
extern void *igActor_meta;
void *igActorList_getMeta();
void *igActorList_vtableRead();
void igActorList_registerNow();
void igActorList_register();
void *igActorList_getMetaCall();
}
struct UnknownGenObject801CDD70_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *igActorList_create(void *object){
 igActorList_registerNow();
 return meta_createInstance(igActorList_meta,object);
}
void *fn_801CDCF8(){
 if(!igActorList_meta) igActorList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igActorList_meta;
}
void *igActorList_getMeta(){
 if(!igActorList_meta || !(reinterpret_cast<unsigned int *>(igActorList_meta)[0x24/4]&4)) igActorList_registerNow();
 return igActorList_meta;
}
void *igActorList_vtableRead(){
 UnknownGenObject801CDD70_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804B5848;
 object.unknown00=igActorList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igActorList_registerNow(){
 meta_registerNow((int)igActorList_register);
}
void igActorList_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igActorList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igActorList_getMetaCall,(int)igActorList_className,20,(int)igActorList_vtableRead,0,0,(int)lbl_80560A50);
}
void *igActorList_getMetaCall(){return igActorList_getMeta();}
void *fn_801CDE94(){
 if(!igActor_meta) igActor_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igActor_meta;
}
void *igActor_getMeta(){
 if(!igActor_meta || !(reinterpret_cast<unsigned int *>(igActor_meta)[0x24/4]&4)) igActor_registerNow();
 return igActor_meta;
}
}
#pragma pop
