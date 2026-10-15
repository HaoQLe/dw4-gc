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
void *igGenerateMacroTexture_getMeta(){
 if(!igGenerateMacroTexture_meta || !(reinterpret_cast<unsigned int *>(igGenerateMacroTexture_meta)[0x24/4]&4)) igGenerateMacroTexture_arkRegister();
 return igGenerateMacroTexture_meta;
}
}
#pragma pop
