#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void *fn_801308D0();
void igEnbayaCompressAnimations_arkRegister();
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
void igExposeActorSkinGraphs_arkRegister();
void igExposeActorSkinGraphs_register();
void *igExposeActorSkinGraphs_getMetaCall();
}
struct UnknownGenRoot8014B7EC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8014B7EC(){igObject_construct(this);}
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
void *igEnbayaCompressAnimations_getMeta(){
 if(!igEnbayaCompressAnimations_meta || !(reinterpret_cast<unsigned int *>(igEnbayaCompressAnimations_meta)[0x24/4]&4)) igEnbayaCompressAnimations_arkRegister();
 return igEnbayaCompressAnimations_meta;
}
}
#pragma pop
