#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800CAEE0();
void igDefaultInterfaceManager_fieldInit();
void igInterfaceManager_register();
void igObjectList_register();
void igObject_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igEventProducerList_className[];
extern char igEventProducer_className[];
extern char igControllerList_className[];
extern char igDefaultInterfaceManager_className[];
extern char lbl_80480440[];
extern char igDefaultInterfaceManager_vtable[];
extern char igControllerList_vtable[];
extern char lbl_8048084C[];
extern char igEventProducerList_vtable[];
extern char lbl_80480C1C[];
extern char igEventProducerList_dependencies[8];
extern char igControllerList_dependencies[8];
extern void *lbl_805621F4;
extern void *igInterfaceManager_meta;
extern void *igEventProducerList_meta;
extern void *igEventProducer_meta;
extern void *igControllerList_meta;
extern void *igDefaultInterfaceManager_meta;
extern void *igNonRefCountedObjectStack_meta;
void *igDefaultInterfaceManager_getMetaCall();
void *igEventProducerList_getMeta();
void *igEventProducerList_vtableRead();
void igEventProducerList_arkRegister();
void igEventProducerList_register();
void *igEventProducerList_getMetaCall();
void *igEventProducer_getMeta();
void igEventProducer_arkRegister();
void igEventProducer_register();
void *igEventProducer_getMetaCall();
void *igControllerList_getMeta();
void *igControllerList_vtableRead();
void igControllerList_arkRegister();
void igControllerList_register();
void *igControllerList_getMetaCall();
void *igDefaultInterfaceManager_getMeta();
void *igDefaultInterfaceManager_vtableRead();
void igDefaultInterfaceManager_arkRegister();
void igDefaultInterfaceManager_register();
void *fn_800CB840();
}
struct UnknownGenObject800CB324_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800CB5B0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800CB710 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800CB710(){igObject_construct(this);}
};
struct UnknownGenObject800CB710_0 : UnknownGenRoot800CB710 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject800CB710_0(){unknown00=lbl_80480440;}
};
struct UnknownGenObject800CB710 : UnknownGenObject800CB710_0 {
 char unknown0C[68];
 inline ~UnknownGenObject800CB710(){unknown00=igDefaultInterfaceManager_vtable;}
};
extern "C" {
void *fn_800CB530(){return igNonRefCountedObjectStack_meta;}
void *fn_800CB538(){
 if(!igControllerList_meta) igControllerList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igControllerList_meta;
}
}
#pragma pop
