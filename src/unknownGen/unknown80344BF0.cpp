#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char igInfo_vtable[];
extern char igNamedObject_vtable[];
extern char lbl_804DCD14[];
extern char beNDMWGameRamInfo_vtable[];
}
struct UnknownGenRoot80344BF0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80344BF0(){igObject_construct(this);}
};
struct UnknownGenObject80344BF0_0 : UnknownGenRoot80344BF0 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject80344BF0_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject80344BF0_1 : UnknownGenObject80344BF0_0 {
 inline ~UnknownGenObject80344BF0_1(){unknown00=igInfo_vtable;}
};
struct UnknownGenObject80344BF0_2 : UnknownGenObject80344BF0_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 inline ~UnknownGenObject80344BF0_2(){unknown00=lbl_804DCD14;}
};
struct UnknownGenObject80344BF0 : UnknownGenObject80344BF0_2 {
 char unknown1C[12];
 inline ~UnknownGenObject80344BF0(){unknown00=beNDMWGameRamInfo_vtable;}
};
extern "C" {
void *beNDMWGameRamInfo_vtableRead(){
 UnknownGenObject80344BF0 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igInfo_vtable;
 object.unknown00=lbl_804DCD14;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown00=beNDMWGameRamInfo_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
