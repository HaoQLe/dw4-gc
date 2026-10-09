#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void *fn_801AD7BC();
void igPlanarShadowProcessor_fieldInit();
void igShaderProcessor_register();
extern char lbl_804ADBC4[];
extern char lbl_804ADBD4[];
extern char lbl_804B39E8[];
extern char lbl_804B3F6C[];
extern void *lbl_80564B74;
void *igPlanarShadowProcessor_getMeta();
void *igPlanarShadowProcessor_vtableRead();
void fn_801B659C();
void igPlanarShadowProcessor_register();
void *igPlanarShadowProcessor_getMetaCall();
}
struct UnknownGenRoot801B6490 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801B6490(){fn_8006665C(this);}
};
struct UnknownGenObject801B6490 : UnknownGenRoot801B6490 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 char unknown10[44];
 UnknownGenRefMember unknown3C;
 char unknown40[8];
 inline ~UnknownGenObject801B6490(){unknown00=lbl_804B3F6C;}
};
extern "C" {
void *igPlanarShadowProcessor_getMeta(){
 if(!lbl_80564B74 || !(reinterpret_cast<unsigned int *>(lbl_80564B74)[0x24/4]&4)) fn_801B659C();
 return lbl_80564B74;
}
void *igPlanarShadowProcessor_vtableRead(){
 UnknownGenObject801B6490 object;
 object.unknown00=lbl_804B39E8;
 object.unknown00=lbl_804B3F6C;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown3C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801B659C(){
 fn_80066188((int)igPlanarShadowProcessor_register);
}
void igPlanarShadowProcessor_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564B74,(int)igShaderProcessor_register,(int)fn_801AD7BC,(int)igPlanarShadowProcessor_getMetaCall,(int)lbl_804ADBD4,64,(int)igPlanarShadowProcessor_vtableRead,(int)igPlanarShadowProcessor_fieldInit,0,(int)lbl_804ADBC4);
}
void *igPlanarShadowProcessor_getMetaCall(){return igPlanarShadowProcessor_getMeta();}
}
#pragma pop
