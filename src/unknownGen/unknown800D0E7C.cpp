#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800CE2F8();
void fn_800D1124();
void igObject_register();
extern char lbl_804890B0[];
extern char lbl_804890C8[];
extern char lbl_80492640[];
extern void *lbl_805621F4;
extern void *lbl_80562E9C;
void *igParticleArray_getMeta();
void *igParticleArray_vtableRead();
void fn_800D1064();
void igParticleArray_register();
void *igParticleArray_getMetaCall();
}
struct UnknownGenRoot800D0EF4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800D0EF4(){fn_8006665C(this);}
};
struct UnknownGenObject800D0EF4 : UnknownGenRoot800D0EF4 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[28];
 UnknownGenRefMember unknown28;
 UnknownGenRefMember unknown2C;
 UnknownGenRefMember unknown30;
 char unknown34[16];
 UnknownGenRefMember unknown44;
 char unknown48[24];
 inline ~UnknownGenObject800D0EF4(){unknown00=lbl_80492640;}
};
extern "C" {
void *fn_800D0E7C(){
 if(!lbl_80562E9C) lbl_80562E9C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562E9C;
}
void *igParticleArray_getMeta(){
 if(!lbl_80562E9C || !(reinterpret_cast<unsigned int *>(lbl_80562E9C)[0x24/4]&4)) fn_800D1064();
 return lbl_80562E9C;
}
void *igParticleArray_vtableRead(){
 UnknownGenObject800D0EF4 object;
 object.unknown00=lbl_80492640;
 object.unknown08.value=0;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 object.unknown30.value=0;
 object.unknown44.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800D1064(){
 fn_80066188((int)igParticleArray_register);
}
void igParticleArray_register(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80562E9C,(int)igObject_register,(int)fn_800237D0,(int)igParticleArray_getMetaCall,(int)lbl_804890C8,92,(int)igParticleArray_vtableRead,(int)fn_800D1124,0,(int)lbl_804890B0);
}
void *igParticleArray_getMetaCall(){return igParticleArray_getMeta();}
}
#pragma pop
