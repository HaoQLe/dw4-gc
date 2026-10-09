#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024D1C();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800C6F28();
void igDataList_register();
extern char lbl_80472FA0[];
extern char lbl_8047E95C[];
extern char lbl_8047EAF8[];
extern char lbl_8047EB58[];
extern void *lbl_805621F4;
extern void *lbl_80562B60;
void *igGamecubeAudioSourceList_getMeta();
void *igGamecubeAudioSourceList_vtableRead();
void fn_800C74F4();
void igGamecubeAudioSourceList_register();
void *igGamecubeAudioSourceList_getMetaCall();
}
struct UnknownGenObject800C749C_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800C7424(){
 if(!lbl_80562B60) lbl_80562B60=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562B60;
}
void *igGamecubeAudioSourceList_getMeta(){
 if(!lbl_80562B60 || !(reinterpret_cast<unsigned int *>(lbl_80562B60)[0x24/4]&4)) fn_800C74F4();
 return lbl_80562B60;
}
void *igGamecubeAudioSourceList_vtableRead(){
 UnknownGenObject800C749C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_8047EB58;
 object.unknown00=lbl_8047EAF8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800C74F4(){
 fn_80066188((int)igGamecubeAudioSourceList_register);
}
void igGamecubeAudioSourceList_register(){
 fn_800C6F28();
 fn_80066204(0,(int)&lbl_80562B60,(int)igDataList_register,(int)fn_80024D1C,(int)igGamecubeAudioSourceList_getMetaCall,(int)lbl_8047E95C,20,(int)igGamecubeAudioSourceList_vtableRead,0,0,0);
}
void *igGamecubeAudioSourceList_getMetaCall(){return igGamecubeAudioSourceList_getMeta();}
}
#pragma pop
