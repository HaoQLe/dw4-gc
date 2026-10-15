#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char igInfo_vtable[];
extern char igNamedObject_vtable[];
extern char beNDMWAfsSetupInfo_vtable[];
}
struct UnknownGenRoot80344E40 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80344E40(){igObject_construct(this);}
};
struct UnknownGenObject80344E40_0 : UnknownGenRoot80344E40 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject80344E40_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject80344E40_1 : UnknownGenObject80344E40_0 {
 inline ~UnknownGenObject80344E40_1(){unknown00=igInfo_vtable;}
};
struct UnknownGenObject80344E40 : UnknownGenObject80344E40_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 char unknown1C[12];
 inline ~UnknownGenObject80344E40(){unknown00=beNDMWAfsSetupInfo_vtable;}
};
extern "C" {
void *beNDMWAfsSetupInfo_vtableRead(){
 UnknownGenObject80344E40 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igInfo_vtable;
 object.unknown00=beNDMWAfsSetupInfo_vtable;
 object.unknown14.value=0;
 object.unknown18.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
