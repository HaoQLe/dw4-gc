#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_8013001C();
void *fn_801301D4();
void *fn_801308D0();
void *fn_80140C3C();
void fn_80147848();
void igLockBase_register();
void igMessageBase_register();
void igObjectChangedListener_register();
void igOptBase_register();
extern char lbl_8049EAFC[];
extern char lbl_8049EB0C[];
extern char lbl_8049EB28[];
extern char lbl_8049EB40[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804A65D8[];
extern char lbl_804A94AC[];
extern char lbl_804AA80C[];
extern char lbl_804AA878[];
extern char lbl_804AAE58[];
extern char lbl_804AAED0[];
extern char lbl_804AAF48[];
extern void *lbl_805641E8;
extern void *lbl_805641EC;
extern void *lbl_805641F0;
extern void *lbl_805641F4;
extern void *lbl_805641F8;
void *igInstanceLock_getMeta();
void fn_80146EB8();
void igInstanceLock_register();
void *igInstanceLock_getMetaCall();
void *igInstanceChangedListener_getMeta();
void *igInstanceChangedListener_vtableRead();
void fn_80147010();
void igInstanceChangedListener_register();
void *igInstanceChangedListener_getMetaCall();
void *igHierarchyChangedEvent_getMeta();
void *igHierarchyChangedEvent_vtableRead();
void fn_80147160();
void igHierarchyChangedEvent_register();
void *igHierarchyChangedEvent_getMetaCall();
void *igHideActorSkinGraphs_getMeta();
void *igHideActorSkinGraphs_vtableRead();
void fn_8014733C();
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
 inline UnknownGenRoot8014724C(){fn_8006665C(this);}
};
struct UnknownGenObject8014724C_0 : UnknownGenRoot8014724C {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8014724C_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject8014724C : UnknownGenObject8014724C_0 {
 char unknown28[8];
 inline ~UnknownGenObject8014724C(){unknown00=lbl_804A65D8;}
};
extern "C" {
void *igInstanceLock_getMeta(){
 if(!lbl_805641E8 || !(reinterpret_cast<unsigned int *>(lbl_805641E8)[0x24/4]&4)) fn_80146EB8();
 return lbl_805641E8;
}
void fn_80146EB8(){
 fn_80066188((int)igInstanceLock_register);
}
void igInstanceLock_register(){
 fn_8012FC48();
 fn_80066204(1,(int)&lbl_805641E8,(int)igLockBase_register,(int)fn_8013001C,(int)igInstanceLock_getMetaCall,(int)lbl_8049EAFC,32,0,0,0,0);
}
void *igInstanceLock_getMetaCall(){return igInstanceLock_getMeta();}
void *igInstanceChangedListener_getMeta(){
 if(!lbl_805641EC || !(reinterpret_cast<unsigned int *>(lbl_805641EC)[0x24/4]&4)) fn_80147010();
 return lbl_805641EC;
}
void *igInstanceChangedListener_vtableRead(){
 UnknownGenObject80146FA0_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804AAED0;
 object.unknown00=lbl_804AAE58;
 object.unknown00=lbl_804A94AC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80147010(){
 fn_80066188((int)igInstanceChangedListener_register);
}
void igInstanceChangedListener_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805641EC,(int)igObjectChangedListener_register,(int)fn_801301D4,(int)igInstanceChangedListener_getMetaCall,(int)lbl_8049EB0C,32,(int)igInstanceChangedListener_vtableRead,0,0,0);
}
void *igInstanceChangedListener_getMetaCall(){return igInstanceChangedListener_getMeta();}
void *igHierarchyChangedEvent_getMeta(){
 if(!lbl_805641F0 || !(reinterpret_cast<unsigned int *>(lbl_805641F0)[0x24/4]&4)) fn_80147160();
 return lbl_805641F0;
}
void *igHierarchyChangedEvent_vtableRead(){
 UnknownGenObject801470FC_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804AA878;
 object.unknown00=lbl_804AA80C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80147160(){
 fn_80066188((int)igHierarchyChangedEvent_register);
}
void igHierarchyChangedEvent_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805641F0,(int)igMessageBase_register,(int)fn_80140C3C,(int)igHierarchyChangedEvent_getMetaCall,(int)lbl_8049EB28,32,(int)igHierarchyChangedEvent_vtableRead,0,0,0);
}
void *igHierarchyChangedEvent_getMetaCall(){return igHierarchyChangedEvent_getMeta();}
void *igHideActorSkinGraphs_getMeta(){
 if(!lbl_805641F4 || !(reinterpret_cast<unsigned int *>(lbl_805641F4)[0x24/4]&4)) fn_8014733C();
 return lbl_805641F4;
}
void *igHideActorSkinGraphs_vtableRead(){
 UnknownGenObject8014724C object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A65D8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8014733C(){
 fn_80066188((int)igHideActorSkinGraphs_register);
}
void igHideActorSkinGraphs_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805641F4,(int)igOptBase_register,(int)fn_801308D0,(int)igHideActorSkinGraphs_getMetaCall,(int)lbl_8049EB40,40,(int)igHideActorSkinGraphs_vtableRead,0,0,0);
}
void *igHideActorSkinGraphs_getMetaCall(){return igHideActorSkinGraphs_getMeta();}
void *igGenerateMacroTexture_getMeta(){
 if(!lbl_805641F8 || !(reinterpret_cast<unsigned int *>(lbl_805641F8)[0x24/4]&4)) fn_80147848();
 return lbl_805641F8;
}
}
#pragma pop
