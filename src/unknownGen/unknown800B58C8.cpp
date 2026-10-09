#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800ABC8C();
void *fn_800AC294();
void igLightAttr_fieldInit();
void igObjectList_register();
void igVisualAttribute_register();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804792F4[];
extern char lbl_80479300[];
extern char lbl_8047C2C0[];
extern char lbl_8047D578[];
extern char lbl_8047DC18[];
extern char lbl_8047DC7C[];
extern char lbl_8047E50C[];
extern char lbl_8055E40C[8];
extern char lbl_8055E414[8];
extern void *lbl_805621F4;
extern void *lbl_805627F0;
extern void *lbl_805627F4;
void *igLightList_getMeta();
void *igLightList_vtableRead();
void fn_800B59B0();
void igLightList_register();
void *igLightList_getMetaCall();
void *igLightAttr_getMeta();
void *igLightAttr_vtableRead();
void fn_800B5B7C();
void igLightAttr_register();
void *igLightAttr_getMetaCall();
}
struct UnknownGenObject800B5940_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800B5ADC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B5ADC(){fn_8006665C(this);}
};
struct UnknownGenObject800B5ADC : UnknownGenRoot800B5ADC {
 char unknown04[136];
 UnknownGenRefMember unknown8C;
 char unknown90[16];
 inline ~UnknownGenObject800B5ADC(){unknown00=lbl_8047C2C0;}
};
extern "C" {
void *fn_800B58C8(){
 if(!lbl_805627F0) lbl_805627F0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805627F0;
}
void *igLightList_getMeta(){
 if(!lbl_805627F0 || !(reinterpret_cast<unsigned int *>(lbl_805627F0)[0x24/4]&4)) fn_800B59B0();
 return lbl_805627F0;
}
void *igLightList_vtableRead(){
 UnknownGenObject800B5940_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_8047DC7C;
 object.unknown00=lbl_8047DC18;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B59B0(){
 fn_80066188((int)igLightList_register);
}
void igLightList_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805627F0,(int)igObjectList_register,(int)fn_80024180,(int)igLightList_getMetaCall,(int)lbl_804792F4,20,(int)igLightList_vtableRead,0,0,(int)lbl_8055E40C);
}
void *igLightList_getMetaCall(){return igLightList_getMeta();}
void *fn_800B5A64(){
 if(!lbl_805627F4) lbl_805627F4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805627F4;
}
void *igLightAttr_getMeta(){
 if(!lbl_805627F4 || !(reinterpret_cast<unsigned int *>(lbl_805627F4)[0x24/4]&4)) fn_800B5B7C();
 return lbl_805627F4;
}
void *igLightAttr_vtableRead(){
 UnknownGenObject800B5ADC object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047C2C0;
 object.unknown8C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B5B7C(){
 fn_80066188((int)igLightAttr_register);
}
void igLightAttr_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805627F4,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igLightAttr_getMetaCall,(int)lbl_80479300,148,(int)igLightAttr_vtableRead,(int)igLightAttr_fieldInit,0,(int)lbl_8055E414);
}
void *igLightAttr_getMetaCall(){return igLightAttr_getMeta();}
}
#pragma pop
