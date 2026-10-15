#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_801308D0();
void igEnbayaCompressAnimations_registerNow();
void igOptBase_register();
extern char igExposeActorSkinGraphs_className[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char igExposeActorSkinGraphs_vtable[];
extern char lbl_804AAF48[];
extern void *igExposeActorSkinGraphs_meta;
extern void *igEnbayaCompressAnimations_meta;
void *igExposeActorSkinGraphs_getMeta();
void *igExposeActorSkinGraphs_vtableRead();
void igExposeActorSkinGraphs_registerNow();
void igExposeActorSkinGraphs_register();
void *igExposeActorSkinGraphs_getMetaCall();
}
struct UnknownGenRoot8014B7EC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8014B7EC(){fn_8006665C(this);}
};
struct UnknownGenObject8014B7EC_0 : UnknownGenRoot8014B7EC {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8014B7EC_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject8014B7EC : UnknownGenObject8014B7EC_0 {
 char unknown28[8];
 inline ~UnknownGenObject8014B7EC(){unknown00=igExposeActorSkinGraphs_vtable;}
};
extern "C" {
void *igExposeActorSkinGraphs_getMeta(){
 if(!igExposeActorSkinGraphs_meta || !(reinterpret_cast<unsigned int *>(igExposeActorSkinGraphs_meta)[0x24/4]&4)) igExposeActorSkinGraphs_registerNow();
 return igExposeActorSkinGraphs_meta;
}
void *igExposeActorSkinGraphs_vtableRead(){
 UnknownGenObject8014B7EC object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=igExposeActorSkinGraphs_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igExposeActorSkinGraphs_registerNow(){
 meta_registerNow((int)igExposeActorSkinGraphs_register);
}
void igExposeActorSkinGraphs_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igExposeActorSkinGraphs_meta,(int)igOptBase_register,(int)fn_801308D0,(int)igExposeActorSkinGraphs_getMetaCall,(int)igExposeActorSkinGraphs_className,40,(int)igExposeActorSkinGraphs_vtableRead,0,0,0);
}
void *igExposeActorSkinGraphs_getMetaCall(){return igExposeActorSkinGraphs_getMeta();}
void *igEnbayaCompressAnimations_getMeta(){
 if(!igEnbayaCompressAnimations_meta || !(reinterpret_cast<unsigned int *>(igEnbayaCompressAnimations_meta)[0x24/4]&4)) igEnbayaCompressAnimations_registerNow();
 return igEnbayaCompressAnimations_meta;
}
}
#pragma pop
