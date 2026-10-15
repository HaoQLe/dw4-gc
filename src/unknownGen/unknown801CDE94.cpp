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
void igActor_arkRegister();
void igObjectList_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igActorList_className[];
extern char igActorList_vtable[];
extern char lbl_804B5848[];
extern char igActorList_dependencies[8];
extern void *lbl_805621F4;
extern void *igActorList_meta;
extern void *igActor_meta;
void *igActorList_getMeta();
void *igActorList_vtableRead();
void igActorList_arkRegister();
void igActorList_register();
void *igActorList_getMetaCall();
}
struct UnknownGenObject801CDD70_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_801CDE94(){
 if(!igActor_meta) igActor_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igActor_meta;
}
void *igActor_getMeta(){
 if(!igActor_meta || !(reinterpret_cast<unsigned int *>(igActor_meta)[0x24/4]&4)) igActor_arkRegister();
 return igActor_meta;
}
}
#pragma pop
