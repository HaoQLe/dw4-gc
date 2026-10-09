#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800CAEE0();
void *igGamecubeController_getMeta();
void *igGamecubeWindow_fieldInit();
void *igGamecubeWindow_getMetaCall();
void igWindow_register();
extern char lbl_8047FE90[];
extern char lbl_80480288[];
extern char lbl_80480690[];
extern char lbl_80480E60[];
extern char lbl_8055E9B0[8];
extern void *lbl_80562B74;
extern void *lbl_80562C24;
void *igGamecubeWindow_vtableRead();
void fn_800CBDB8();
void igGamecubeWindow_register();
void *igGamecubeWindow_parentMeta();
}
struct UnknownGenRoot800CBCD8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800CBCD8(){fn_8006665C(this);}
};
struct UnknownGenObject800CBCD8 : UnknownGenRoot800CBCD8 {
 char unknown04[20];
 UnknownGenRefMember unknown18;
 char unknown1C[8];
 UnknownGenString unknown24;
 char unknown28[8];
 inline ~UnknownGenObject800CBCD8(){unknown00=lbl_80480288;}
};
extern "C" {
void *igGamecubeController_getMetaCall(){return igGamecubeController_getMeta();}
void *igGamecubeWindow_getMeta(){
 if(!lbl_80562C24 || !(reinterpret_cast<unsigned int *>(lbl_80562C24)[0x24/4]&4)) fn_800CBDB8();
 return lbl_80562C24;
}
void *igGamecubeWindow_vtableRead(){
 UnknownGenObject800CBCD8 object;
 object.unknown00=lbl_80480E60;
 object.unknown00=lbl_80480690;
 object.unknown00=lbl_80480288;
 object.unknown18.value=0;
 object.unknown24.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800CBDB8(){
 fn_80066188((int)igGamecubeWindow_register);
}
void igGamecubeWindow_register(){
 fn_800CAEE0();
 fn_80066204(0,(int)&lbl_80562C24,(int)igWindow_register,(int)igGamecubeWindow_parentMeta,(int)igGamecubeWindow_getMetaCall,(int)lbl_8047FE90,48,(int)igGamecubeWindow_vtableRead,(int)igGamecubeWindow_fieldInit,0,(int)lbl_8055E9B0);
}
void *igGamecubeWindow_parentMeta(){return lbl_80562B74;}
}
#pragma pop
