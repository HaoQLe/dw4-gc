#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800C6F28();
void igAudioContext_register();
void igGamecubeAudioContext_fieldInit();
extern char lbl_8047E87C[];
extern char igGamecubeAudioContext_className[];
extern char igGamecubeAudioContext_vtable[];
extern char lbl_8047EA3C[];
extern void *igAudioContext_meta;
extern void *igGamecubeAudioContext_meta;
void *igGamecubeAudioContext_getMetaCall();
void *igGamecubeAudioContext_getMeta();
void *igGamecubeAudioContext_vtableRead();
void igGamecubeAudioContext_registerNow();
void igGamecubeAudioContext_register();
void *igGamecubeAudioContext_parentMeta();
}
struct UnknownGenRoot800C71A8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800C71A8(){fn_8006665C(this);}
};
struct UnknownGenObject800C71A8 : UnknownGenRoot800C71A8 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 char unknown18[16];
 inline ~UnknownGenObject800C71A8(){unknown00=igGamecubeAudioContext_vtable;}
};
extern "C" {
void *igGamecubeAudioContext_getMetaCall(){return igGamecubeAudioContext_getMeta();}
void *igGamecubeAudioContext_getMeta(){
 if(!igGamecubeAudioContext_meta || !(reinterpret_cast<unsigned int *>(igGamecubeAudioContext_meta)[0x24/4]&4)) igGamecubeAudioContext_registerNow();
 return igGamecubeAudioContext_meta;
}
void *igGamecubeAudioContext_vtableRead(){
 UnknownGenObject800C71A8 object;
 object.unknown00=lbl_8047EA3C;
 object.unknown00=igGamecubeAudioContext_vtable;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igGamecubeAudioContext_registerNow(){
 meta_registerNow((int)igGamecubeAudioContext_register);
}
void igGamecubeAudioContext_register(){
 fn_800C6F28();
 meta_registerClass(0,(int)&igGamecubeAudioContext_meta,(int)igAudioContext_register,(int)igGamecubeAudioContext_parentMeta,(int)igGamecubeAudioContext_getMetaCall,(int)igGamecubeAudioContext_className,40,(int)igGamecubeAudioContext_vtableRead,(int)igGamecubeAudioContext_fieldInit,0,(int)lbl_8047E87C);
}
void *igGamecubeAudioContext_parentMeta(){return igAudioContext_meta;}
}
#pragma pop
