#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800C6F28();
void igAudioContext_register();
void igGamecubeAudioContext_fieldInit();
extern char lbl_8047E87C[];
extern char lbl_8047E88C[];
extern char lbl_8047E978[];
extern char lbl_8047EA3C[];
extern void *lbl_80562B24;
extern void *lbl_80562B40;
void *igGamecubeAudioContext_getMetaCall();
void *igGamecubeAudioContext_getMeta();
void *igGamecubeAudioContext_vtableRead();
void fn_800C72B4();
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
 inline ~UnknownGenObject800C71A8(){unknown00=lbl_8047E978;}
};
extern "C" {
void *igGamecubeAudioContext_getMetaCall(){return igGamecubeAudioContext_getMeta();}
void *igGamecubeAudioContext_getMeta(){
 if(!lbl_80562B40 || !(reinterpret_cast<unsigned int *>(lbl_80562B40)[0x24/4]&4)) fn_800C72B4();
 return lbl_80562B40;
}
void *igGamecubeAudioContext_vtableRead(){
 UnknownGenObject800C71A8 object;
 object.unknown00=lbl_8047EA3C;
 object.unknown00=lbl_8047E978;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800C72B4(){
 fn_80066188((int)igGamecubeAudioContext_register);
}
void igGamecubeAudioContext_register(){
 fn_800C6F28();
 fn_80066204(0,(int)&lbl_80562B40,(int)igAudioContext_register,(int)igGamecubeAudioContext_parentMeta,(int)igGamecubeAudioContext_getMetaCall,(int)lbl_8047E88C,40,(int)igGamecubeAudioContext_vtableRead,(int)igGamecubeAudioContext_fieldInit,0,(int)lbl_8047E87C);
}
void *igGamecubeAudioContext_parentMeta(){return lbl_80562B24;}
}
#pragma pop
