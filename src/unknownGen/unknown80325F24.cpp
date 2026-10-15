#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char igInfo_vtable[];
extern char igNamedObject_vtable[];
extern char lbl_804DCD14[];
extern char beNDMWTitle2Info_vtable[];
}
struct UnknownGenRoot80325F24 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80325F24(){igObject_construct(this);}
};
struct UnknownGenObject80325F24_0 : UnknownGenRoot80325F24 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject80325F24_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject80325F24_1 : UnknownGenObject80325F24_0 {
 inline ~UnknownGenObject80325F24_1(){unknown00=igInfo_vtable;}
};
struct UnknownGenObject80325F24_2 : UnknownGenObject80325F24_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 inline ~UnknownGenObject80325F24_2(){unknown00=lbl_804DCD14;}
};
struct UnknownGenObject80325F24 : UnknownGenObject80325F24_2 {
 char unknown1C[12];
 inline ~UnknownGenObject80325F24(){unknown00=beNDMWTitle2Info_vtable;}
};
extern "C" {
void *beNDMWTitle2Info_vtableRead(){
 UnknownGenObject80325F24 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igInfo_vtable;
 object.unknown00=lbl_804DCD14;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown00=beNDMWTitle2Info_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
