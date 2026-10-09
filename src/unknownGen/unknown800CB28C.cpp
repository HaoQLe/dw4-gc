#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800CAEE0();
void igDefaultInterfaceManager_fieldInit();
void igInterfaceManager_register();
void igObjectList_register();
void igObject_register();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_8047F370[];
extern char lbl_8047F384[];
extern char lbl_8047F3C8[];
extern char lbl_8047F3DC[];
extern char lbl_80480440[];
extern char lbl_804804E8[];
extern char lbl_804807E8[];
extern char lbl_8048084C[];
extern char lbl_80480BB8[];
extern char lbl_80480C1C[];
extern char lbl_8055E960[8];
extern char lbl_8055E968[8];
extern void *lbl_805621F4;
extern void *lbl_80562BA4;
extern void *lbl_80562BAC;
extern void *lbl_80562BB0;
extern void *lbl_80562BC0;
extern void *lbl_80562BC4;
extern void *lbl_80565A28;
void *igDefaultInterfaceManager_getMetaCall();
void *igEventProducerList_getMeta();
void *igEventProducerList_vtableRead();
void fn_800CB394();
void igEventProducerList_register();
void *igEventProducerList_getMetaCall();
void *igEventProducer_getMeta();
void fn_800CB484();
void igEventProducer_register();
void *igEventProducer_getMetaCall();
void *igControllerList_getMeta();
void *igControllerList_vtableRead();
void fn_800CB620();
void igControllerList_register();
void *igControllerList_getMetaCall();
void *igDefaultInterfaceManager_getMeta();
void *igDefaultInterfaceManager_vtableRead();
void fn_800CB7A8();
void igDefaultInterfaceManager_register();
void *fn_800CB840();
}
struct UnknownGenObject800CB324_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800CB5B0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800CB710 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800CB710(){fn_8006665C(this);}
};
struct UnknownGenObject800CB710_0 : UnknownGenRoot800CB710 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject800CB710_0(){unknown00=lbl_80480440;}
};
struct UnknownGenObject800CB710 : UnknownGenObject800CB710_0 {
 char unknown0C[68];
 inline ~UnknownGenObject800CB710(){unknown00=lbl_804804E8;}
};
extern "C" {
void *igDefaultInterfaceManager_getMetaCall(){return igDefaultInterfaceManager_getMeta();}
void *fn_800CB2AC(){
 if(!lbl_80562BAC) lbl_80562BAC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562BAC;
}
void *igEventProducerList_getMeta(){
 if(!lbl_80562BAC || !(reinterpret_cast<unsigned int *>(lbl_80562BAC)[0x24/4]&4)) fn_800CB394();
 return lbl_80562BAC;
}
void *igEventProducerList_vtableRead(){
 UnknownGenObject800CB324_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_80480C1C;
 object.unknown00=lbl_80480BB8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800CB394(){
 fn_80066188((int)igEventProducerList_register);
}
void igEventProducerList_register(){
 fn_800CAEE0();
 fn_80066204(0,(int)&lbl_80562BAC,(int)igObjectList_register,(int)fn_80024180,(int)igEventProducerList_getMetaCall,(int)lbl_8047F370,20,(int)igEventProducerList_vtableRead,0,0,(int)lbl_8055E960);
}
void *igEventProducerList_getMetaCall(){return igEventProducerList_getMeta();}
void *igEventProducer_getMeta(){
 if(!lbl_80562BB0 || !(reinterpret_cast<unsigned int *>(lbl_80562BB0)[0x24/4]&4)) fn_800CB484();
 return lbl_80562BB0;
}
void fn_800CB484(){
 fn_80066188((int)igEventProducer_register);
}
void igEventProducer_register(){
 fn_800CAEE0();
 fn_80066204(1,(int)&lbl_80562BB0,(int)igObject_register,(int)fn_800237D0,(int)igEventProducer_getMetaCall,(int)lbl_8047F384,8,0,0,0,0);
}
void *igEventProducer_getMetaCall(){return igEventProducer_getMeta();}
void *fn_800CB530(){return lbl_80565A28;}
void *fn_800CB538(){
 if(!lbl_80562BC0) lbl_80562BC0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562BC0;
}
void *igControllerList_getMeta(){
 if(!lbl_80562BC0 || !(reinterpret_cast<unsigned int *>(lbl_80562BC0)[0x24/4]&4)) fn_800CB620();
 return lbl_80562BC0;
}
void *igControllerList_vtableRead(){
 UnknownGenObject800CB5B0_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_8048084C;
 object.unknown00=lbl_804807E8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800CB620(){
 fn_80066188((int)igControllerList_register);
}
void igControllerList_register(){
 fn_800CAEE0();
 fn_80066204(0,(int)&lbl_80562BC0,(int)igObjectList_register,(int)fn_80024180,(int)igControllerList_getMetaCall,(int)lbl_8047F3C8,20,(int)igControllerList_vtableRead,0,0,(int)lbl_8055E968);
}
void *igControllerList_getMetaCall(){return igControllerList_getMeta();}
void *igDefaultInterfaceManager_getMeta(){
 if(!lbl_80562BC4 || !(reinterpret_cast<unsigned int *>(lbl_80562BC4)[0x24/4]&4)) fn_800CB7A8();
 return lbl_80562BC4;
}
void *igDefaultInterfaceManager_vtableRead(){
 UnknownGenObject800CB710 object;
 object.unknown00=lbl_80480440;
 object.unknown08.value=0;
 object.unknown00=lbl_804804E8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800CB7A8(){
 fn_80066188((int)igDefaultInterfaceManager_register);
}
void igDefaultInterfaceManager_register(){
 fn_800CAEE0();
 fn_80066204(0,(int)&lbl_80562BC4,(int)igInterfaceManager_register,(int)fn_800CB840,(int)igDefaultInterfaceManager_getMetaCall,(int)lbl_8047F3DC,76,(int)igDefaultInterfaceManager_vtableRead,(int)igDefaultInterfaceManager_fieldInit,0,0);
}
void *fn_800CB840(){return lbl_80562BA4;}
}
#pragma pop
