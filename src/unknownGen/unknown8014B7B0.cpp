#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_801308D0();
void fn_8014BDA8();
void igOptBase_register();
extern char lbl_8049F24C[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804A6DEC[];
extern char lbl_804AAF48[];
extern void *lbl_8056432C;
extern void *lbl_80564330;
void *igExposeActorSkinGraphs_getMeta();
void *igExposeActorSkinGraphs_vtableRead();
void fn_8014B8DC();
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
 inline ~UnknownGenObject8014B7EC(){unknown00=lbl_804A6DEC;}
};
extern "C" {
void *igExposeActorSkinGraphs_getMeta(){
 if(!lbl_8056432C || !(reinterpret_cast<unsigned int *>(lbl_8056432C)[0x24/4]&4)) fn_8014B8DC();
 return lbl_8056432C;
}
void *igExposeActorSkinGraphs_vtableRead(){
 UnknownGenObject8014B7EC object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A6DEC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8014B8DC(){
 fn_80066188((int)igExposeActorSkinGraphs_register);
}
void igExposeActorSkinGraphs_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_8056432C,(int)igOptBase_register,(int)fn_801308D0,(int)igExposeActorSkinGraphs_getMetaCall,(int)lbl_8049F24C,40,(int)igExposeActorSkinGraphs_vtableRead,0,0,0);
}
void *igExposeActorSkinGraphs_getMetaCall(){return igExposeActorSkinGraphs_getMeta();}
void *igEnbayaCompressAnimations_getMeta(){
 if(!lbl_80564330 || !(reinterpret_cast<unsigned int *>(lbl_80564330)[0x24/4]&4)) fn_8014BDA8();
 return lbl_80564330;
}
}
#pragma pop
