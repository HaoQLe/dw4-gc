#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void *fn_8013001C();
void *fn_801301D4();
void *fn_801308D0();
void *fn_80140C3C();
void igGenerateMacroTexture_arkRegister();
void igLockBase_register();
void igMessageBase_register();
void igObjectChangedListener_register();
void igOptBase_register();
extern char igInstanceLock_className[];
extern char igInstanceChangedListener_className[];
extern char igHierarchyChangedEvent_className[];
extern char igHideActorSkinGraphs_className[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char igHideActorSkinGraphs_vtable[];
extern char igInstanceChangedListener_vtable[];
extern char igHierarchyChangedEvent_vtable[];
extern char igMessageBase_vtable[];
extern char igObjectChangedListener_vtable[];
extern char igListenerBase_vtable[];
extern char lbl_804AAF48[];
extern void *igInstanceLock_meta;
extern void *igInstanceChangedListener_meta;
extern void *igHierarchyChangedEvent_meta;
extern void *igHideActorSkinGraphs_meta;
extern void *igGenerateMacroTexture_meta;
void *igInstanceLock_getMeta();
void igInstanceLock_arkRegister();
void igInstanceLock_register();
void *igInstanceLock_getMetaCall();
void *igInstanceChangedListener_getMeta();
void *igInstanceChangedListener_vtableRead();
void igInstanceChangedListener_arkRegister();
void igInstanceChangedListener_register();
void *igInstanceChangedListener_getMetaCall();
void *igHierarchyChangedEvent_getMeta();
void *igHierarchyChangedEvent_vtableRead();
void igHierarchyChangedEvent_arkRegister();
void igHierarchyChangedEvent_register();
void *igHierarchyChangedEvent_getMetaCall();
void *igHideActorSkinGraphs_getMeta();
void *igHideActorSkinGraphs_vtableRead();
void igHideActorSkinGraphs_arkRegister();
void igHideActorSkinGraphs_register();
void *igHideActorSkinGraphs_getMetaCall();
}
struct UnknownGenObject80146FA0_0 {
 void *unknown00;
 char unknown04[36];
};
struct UnknownGenObject801470FC_0 {
 void *unknown00;
 char unknown04[36];
};
struct UnknownGenRoot8014724C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8014724C(){igObject_construct(this);}
};
struct UnknownGenObject8014724C_0 : UnknownGenRoot8014724C {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8014724C_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject8014724C : UnknownGenObject8014724C_0 {
 char unknown28[8];
 inline ~UnknownGenObject8014724C(){unknown00=igHideActorSkinGraphs_vtable;}
};
extern "C" {
void *igInstanceLock_getMeta(){
 if(!igInstanceLock_meta || !(reinterpret_cast<unsigned int *>(igInstanceLock_meta)[0x24/4]&4)) igInstanceLock_arkRegister();
 return igInstanceLock_meta;
}
void igInstanceLock_arkRegister(){
 meta_registerNow((int)igInstanceLock_register);
}
void igInstanceLock_register(){
 fn_8012FC48();
 meta_registerClass(1,(int)&igInstanceLock_meta,(int)igLockBase_register,(int)fn_8013001C,(int)igInstanceLock_getMetaCall,(int)igInstanceLock_className,32,0,0,0,0);
}
void *igInstanceLock_getMetaCall(){return igInstanceLock_getMeta();}
void *igInstanceChangedListener_getMeta(){
 if(!igInstanceChangedListener_meta || !(reinterpret_cast<unsigned int *>(igInstanceChangedListener_meta)[0x24/4]&4)) igInstanceChangedListener_arkRegister();
 return igInstanceChangedListener_meta;
}
void *igInstanceChangedListener_vtableRead(){
 UnknownGenObject80146FA0_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=igListenerBase_vtable;
 object.unknown00=igObjectChangedListener_vtable;
 object.unknown00=igInstanceChangedListener_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igInstanceChangedListener_arkRegister(){
 meta_registerNow((int)igInstanceChangedListener_register);
}
void igInstanceChangedListener_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igInstanceChangedListener_meta,(int)igObjectChangedListener_register,(int)fn_801301D4,(int)igInstanceChangedListener_getMetaCall,(int)igInstanceChangedListener_className,32,(int)igInstanceChangedListener_vtableRead,0,0,0);
}
void *igInstanceChangedListener_getMetaCall(){return igInstanceChangedListener_getMeta();}
void *igHierarchyChangedEvent_getMeta(){
 if(!igHierarchyChangedEvent_meta || !(reinterpret_cast<unsigned int *>(igHierarchyChangedEvent_meta)[0x24/4]&4)) igHierarchyChangedEvent_arkRegister();
 return igHierarchyChangedEvent_meta;
}
void *igHierarchyChangedEvent_vtableRead(){
 UnknownGenObject801470FC_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=igMessageBase_vtable;
 object.unknown00=igHierarchyChangedEvent_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igHierarchyChangedEvent_arkRegister(){
 meta_registerNow((int)igHierarchyChangedEvent_register);
}
void igHierarchyChangedEvent_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igHierarchyChangedEvent_meta,(int)igMessageBase_register,(int)fn_80140C3C,(int)igHierarchyChangedEvent_getMetaCall,(int)igHierarchyChangedEvent_className,32,(int)igHierarchyChangedEvent_vtableRead,0,0,0);
}
void *igHierarchyChangedEvent_getMetaCall(){return igHierarchyChangedEvent_getMeta();}
void *igHideActorSkinGraphs_getMeta(){
 if(!igHideActorSkinGraphs_meta || !(reinterpret_cast<unsigned int *>(igHideActorSkinGraphs_meta)[0x24/4]&4)) igHideActorSkinGraphs_arkRegister();
 return igHideActorSkinGraphs_meta;
}
void *igHideActorSkinGraphs_vtableRead(){
 UnknownGenObject8014724C object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=igHideActorSkinGraphs_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igHideActorSkinGraphs_arkRegister(){
 meta_registerNow((int)igHideActorSkinGraphs_register);
}
void igHideActorSkinGraphs_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igHideActorSkinGraphs_meta,(int)igOptBase_register,(int)fn_801308D0,(int)igHideActorSkinGraphs_getMetaCall,(int)igHideActorSkinGraphs_className,40,(int)igHideActorSkinGraphs_vtableRead,0,0,0);
}
void *igHideActorSkinGraphs_getMetaCall(){return igHideActorSkinGraphs_getMeta();}
void *igGenerateMacroTexture_getMeta(){
 if(!igGenerateMacroTexture_meta || !(reinterpret_cast<unsigned int *>(igGenerateMacroTexture_meta)[0x24/4]&4)) igGenerateMacroTexture_arkRegister();
 return igGenerateMacroTexture_meta;
}
}
#pragma pop
