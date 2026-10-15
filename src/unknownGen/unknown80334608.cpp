#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char igInfo_vtable[];
extern char igNamedObject_vtable[];
extern char lbl_804DCD14[];
extern char beNDMWStageCtlInfo_vtable[];
}
struct UnknownGenRoot80334608 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80334608(){igObject_construct(this);}
};
struct UnknownGenObject80334608_0 : UnknownGenRoot80334608 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject80334608_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject80334608_1 : UnknownGenObject80334608_0 {
 inline ~UnknownGenObject80334608_1(){unknown00=igInfo_vtable;}
};
struct UnknownGenObject80334608_2 : UnknownGenObject80334608_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 inline ~UnknownGenObject80334608_2(){unknown00=lbl_804DCD14;}
};
struct UnknownGenObject80334608 : UnknownGenObject80334608_2 {
 char unknown1C[12];
 inline ~UnknownGenObject80334608(){unknown00=beNDMWStageCtlInfo_vtable;}
};
extern "C" {
void *beNDMWStageCtlInfo_vtableRead(){
 UnknownGenObject80334608 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igInfo_vtable;
 object.unknown00=lbl_804DCD14;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown00=beNDMWStageCtlInfo_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
