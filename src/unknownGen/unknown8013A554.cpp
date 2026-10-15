#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_801308D0();
void igOptBase_register();
void igOptimizeActorAnimations_fieldInit();
extern char igOptimizeActorAnimations_className[];
extern char igOptimizeActorAnimations_vtable[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern void *igOptimizeActorAnimations_meta;
void *igOptimizeActorAnimations_getMeta();
void *igOptimizeActorAnimations_vtableRead();
void igOptimizeActorAnimations_registerNow();
void igOptimizeActorAnimations_register();
void *igOptimizeActorAnimations_getMetaCall();
}
struct UnknownGenRoot8013A590 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013A590(){fn_8006665C(this);}
};
struct UnknownGenObject8013A590_0 : UnknownGenRoot8013A590 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8013A590_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject8013A590 : UnknownGenObject8013A590_0 {
 char unknown28[24];
 inline ~UnknownGenObject8013A590(){unknown00=igOptimizeActorAnimations_vtable;}
};
extern "C" {
void *igOptimizeActorAnimations_getMeta(){
 if(!igOptimizeActorAnimations_meta || !(reinterpret_cast<unsigned int *>(igOptimizeActorAnimations_meta)[0x24/4]&4)) igOptimizeActorAnimations_registerNow();
 return igOptimizeActorAnimations_meta;
}
void *igOptimizeActorAnimations_vtableRead(){
 UnknownGenObject8013A590 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=igOptimizeActorAnimations_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igOptimizeActorAnimations_registerNow(){
 meta_registerNow((int)igOptimizeActorAnimations_register);
}
void igOptimizeActorAnimations_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igOptimizeActorAnimations_meta,(int)igOptBase_register,(int)fn_801308D0,(int)igOptimizeActorAnimations_getMetaCall,(int)igOptimizeActorAnimations_className,64,(int)igOptimizeActorAnimations_vtableRead,(int)igOptimizeActorAnimations_fieldInit,0,0);
}
void *igOptimizeActorAnimations_getMetaCall(){return igOptimizeActorAnimations_getMeta();}
}
#pragma pop
