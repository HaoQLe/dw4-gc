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
void *igDefaultInterfaceManager_getMetaCall(){return igDefaultInterfaceManager_getMeta();}
void *fn_800CB2AC(){
 if(!igEventProducerList_meta) igEventProducerList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igEventProducerList_meta;
}
void *igEventProducerList_getMeta(){
 if(!igEventProducerList_meta || !(reinterpret_cast<unsigned int *>(igEventProducerList_meta)[0x24/4]&4)) igEventProducerList_arkRegister();
 return igEventProducerList_meta;
}
void *igEventProducerList_vtableRead(){
 UnknownGenObject800CB324_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_80480C1C;
 object.unknown00=igEventProducerList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igEventProducerList_arkRegister(){
 meta_registerNow((int)igEventProducerList_register);
}
void igEventProducerList_register(){
 fn_800CAEE0();
 meta_registerClass(0,(int)&igEventProducerList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igEventProducerList_getMetaCall,(int)igEventProducerList_className,20,(int)igEventProducerList_vtableRead,0,0,(int)igEventProducerList_dependencies);
}
void *igEventProducerList_getMetaCall(){return igEventProducerList_getMeta();}
void *igEventProducer_getMeta(){
 if(!igEventProducer_meta || !(reinterpret_cast<unsigned int *>(igEventProducer_meta)[0x24/4]&4)) igEventProducer_arkRegister();
 return igEventProducer_meta;
}
void igEventProducer_arkRegister(){
 meta_registerNow((int)igEventProducer_register);
}
void igEventProducer_register(){
 fn_800CAEE0();
 meta_registerClass(1,(int)&igEventProducer_meta,(int)igObject_register,(int)fn_800237D0,(int)igEventProducer_getMetaCall,(int)igEventProducer_className,8,0,0,0,0);
}
void *igEventProducer_getMetaCall(){return igEventProducer_getMeta();}
void *fn_800CB530(){return igNonRefCountedObjectStack_meta;}
void *fn_800CB538(){
 if(!igControllerList_meta) igControllerList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igControllerList_meta;
}
void *igControllerList_getMeta(){
 if(!igControllerList_meta || !(reinterpret_cast<unsigned int *>(igControllerList_meta)[0x24/4]&4)) igControllerList_arkRegister();
 return igControllerList_meta;
}
void *igControllerList_vtableRead(){
 UnknownGenObject800CB5B0_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_8048084C;
 object.unknown00=igControllerList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igControllerList_arkRegister(){
 meta_registerNow((int)igControllerList_register);
}
void igControllerList_register(){
 fn_800CAEE0();
 meta_registerClass(0,(int)&igControllerList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igControllerList_getMetaCall,(int)igControllerList_className,20,(int)igControllerList_vtableRead,0,0,(int)igControllerList_dependencies);
}
void *igControllerList_getMetaCall(){return igControllerList_getMeta();}
void *igDefaultInterfaceManager_getMeta(){
 if(!igDefaultInterfaceManager_meta || !(reinterpret_cast<unsigned int *>(igDefaultInterfaceManager_meta)[0x24/4]&4)) igDefaultInterfaceManager_arkRegister();
 return igDefaultInterfaceManager_meta;
}
void *igDefaultInterfaceManager_vtableRead(){
 UnknownGenObject800CB710 object;
 object.unknown00=lbl_80480440;
 object.unknown08.value=0;
 object.unknown00=igDefaultInterfaceManager_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igDefaultInterfaceManager_arkRegister(){
 meta_registerNow((int)igDefaultInterfaceManager_register);
}
void igDefaultInterfaceManager_register(){
 fn_800CAEE0();
 meta_registerClass(0,(int)&igDefaultInterfaceManager_meta,(int)igInterfaceManager_register,(int)fn_800CB840,(int)igDefaultInterfaceManager_getMetaCall,(int)igDefaultInterfaceManager_className,76,(int)igDefaultInterfaceManager_vtableRead,(int)igDefaultInterfaceManager_fieldInit,0,0);
}
void *fn_800CB840(){return igInterfaceManager_meta;}
}
#pragma pop
