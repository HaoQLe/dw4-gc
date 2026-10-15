#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void *fn_8013B2B0();
void *fn_8013B680();
void *fn_8013BA10();
void *fn_801420C0();
void igBase_register();
void igInterface_register();
void igInterfaced_register();
void igListenerInterface_fieldInit();
void igManager_register();
void igObjectList_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igLockBaseList_className[];
extern char igLockBase_className[];
extern char igListenerProducerBase_className[];
extern char igListenerManager_className[];
extern char lbl_8049E370[];
extern char igListenerInterface_className[];
extern char igListenerInterface_vtable[];
extern char lbl_804A6460[];
extern char igListenerManager_vtable[];
extern char igLockBaseList_vtable[];
extern char lbl_804A9F00[];
extern char igInterface_vtable[];
extern char igManager_vtable[];
extern char lbl_8055F9A0[8];
extern void *lbl_805621F4;
extern void *igLockBaseList_meta;
extern void *igLockBase_meta;
extern void *igListenerProducerBase_meta;
extern void *igListenerManager_meta;
extern void *igListenerInterface_meta;
void *igLockBaseList_getMeta();
void *igLockBaseList_vtableRead();
void igLockBaseList_registerNow();
void igLockBaseList_register();
void *igLockBaseList_getMetaCall();
void *igLockBase_getMeta();
void igLockBase_registerNow();
void igLockBase_register();
void *igLockBase_getMetaCall();
void *igListenerProducerBase_getMeta();
void igListenerProducerBase_registerNow();
void igListenerProducerBase_register();
void *igListenerProducerBase_getMetaCall();
void *igListenerManager_getMeta();
void *igListenerManager_vtableRead();
void igListenerManager_registerNow();
void igListenerManager_register();
void *igListenerManager_getMetaCall();
void *igListenerInterface_getMeta();
void *igListenerInterface_vtableRead();
void igListenerInterface_registerNow();
void igListenerInterface_register();
void *igListenerInterface_getMetaCall();
}
struct UnknownGenObject80142D20_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8014308C_0 {
 void *unknown00;
 char unknown04[36];
};
struct UnknownGenRoot8014320C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8014320C(){igObject_construct(this);}
};
struct UnknownGenObject8014320C : UnknownGenRoot8014320C {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 UnknownGenRefMember unknown28;
 UnknownGenRefMember unknown2C;
 char unknown30[8];
 inline ~UnknownGenObject8014320C(){unknown00=igListenerInterface_vtable;}
};
extern "C" {
void *igLockBaseList_getMeta(){
 if(!igLockBaseList_meta || !(reinterpret_cast<unsigned int *>(igLockBaseList_meta)[0x24/4]&4)) igLockBaseList_registerNow();
 return igLockBaseList_meta;
}
void *igLockBaseList_vtableRead(){
 UnknownGenObject80142D20_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804A9F00;
 object.unknown00=igLockBaseList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igLockBaseList_registerNow(){
 meta_registerNow((int)igLockBaseList_register);
}
void igLockBaseList_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igLockBaseList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igLockBaseList_getMetaCall,(int)igLockBaseList_className,20,(int)igLockBaseList_vtableRead,0,0,(int)lbl_8055F9A0);
}
void *igLockBaseList_getMetaCall(){return igLockBaseList_getMeta();}
void *igLockBase_getMeta(){
 if(!igLockBase_meta || !(reinterpret_cast<unsigned int *>(igLockBase_meta)[0x24/4]&4)) igLockBase_registerNow();
 return igLockBase_meta;
}
void igLockBase_registerNow(){
 meta_registerNow((int)igLockBase_register);
}
void igLockBase_register(){
 fn_8012FC48();
 meta_registerClass(1,(int)&igLockBase_meta,(int)igInterfaced_register,(int)fn_801420C0,(int)igLockBase_getMetaCall,(int)igLockBase_className,32,0,0,0,0);
}
void *igLockBase_getMetaCall(){return igLockBase_getMeta();}
void *igListenerProducerBase_getMeta(){
 if(!igListenerProducerBase_meta || !(reinterpret_cast<unsigned int *>(igListenerProducerBase_meta)[0x24/4]&4)) igListenerProducerBase_registerNow();
 return igListenerProducerBase_meta;
}
void igListenerProducerBase_registerNow(){
 meta_registerNow((int)igListenerProducerBase_register);
}
void igListenerProducerBase_register(){
 fn_8012FC48();
 meta_registerClass(1,(int)&igListenerProducerBase_meta,(int)igBase_register,(int)fn_8013BA10,(int)igListenerProducerBase_getMetaCall,(int)igListenerProducerBase_className,32,0,0,0,0);
}
void *igListenerProducerBase_getMetaCall(){return igListenerProducerBase_getMeta();}
void *fn_80143014(){
 if(!igListenerManager_meta) igListenerManager_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igListenerManager_meta;
}
void *igListenerManager_getMeta(){
 if(!igListenerManager_meta || !(reinterpret_cast<unsigned int *>(igListenerManager_meta)[0x24/4]&4)) igListenerManager_registerNow();
 return igListenerManager_meta;
}
void *igListenerManager_vtableRead(){
 UnknownGenObject8014308C_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_804A6460;
 object.unknown00=igManager_vtable;
 object.unknown00=igListenerManager_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igListenerManager_registerNow(){
 meta_registerNow((int)igListenerManager_register);
}
void igListenerManager_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igListenerManager_meta,(int)igManager_register,(int)fn_8013B2B0,(int)igListenerManager_getMetaCall,(int)igListenerManager_className,32,(int)igListenerManager_vtableRead,0,0,0);
}
void *igListenerManager_getMetaCall(){return igListenerManager_getMeta();}
void *fn_80143194(){
 if(!igListenerInterface_meta) igListenerInterface_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igListenerInterface_meta;
}
void *igListenerInterface_getMeta(){
 if(!igListenerInterface_meta || !(reinterpret_cast<unsigned int *>(igListenerInterface_meta)[0x24/4]&4)) igListenerInterface_registerNow();
 return igListenerInterface_meta;
}
void *igListenerInterface_vtableRead(){
 UnknownGenObject8014320C object;
 object.unknown00=lbl_804A6460;
 object.unknown00=igInterface_vtable;
 object.unknown00=igListenerInterface_vtable;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igListenerInterface_registerNow(){
 meta_registerNow((int)igListenerInterface_register);
}
void igListenerInterface_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igListenerInterface_meta,(int)igInterface_register,(int)fn_8013B680,(int)igListenerInterface_getMetaCall,(int)igListenerInterface_className,48,(int)igListenerInterface_vtableRead,(int)igListenerInterface_fieldInit,0,(int)lbl_8049E370);
}
void *igListenerInterface_getMetaCall(){return igListenerInterface_getMeta();}
}
#pragma pop
