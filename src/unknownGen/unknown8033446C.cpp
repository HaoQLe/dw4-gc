#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char beBaseInfoRam_vtable[];
extern char beNDMWStageCtlInfoRam_vtable[];
}
struct UnknownGenRoot8033446C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8033446C(){fn_8006665C(this);}
};
struct UnknownGenObject8033446C_0 : UnknownGenRoot8033446C {
 char unknown04[36];
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject8033446C_0(){unknown00=beBaseInfoRam_vtable;}
};
struct UnknownGenObject8033446C : UnknownGenObject8033446C_0 {
 char unknown2C[4];
 inline ~UnknownGenObject8033446C(){unknown00=beNDMWStageCtlInfoRam_vtable;}
};
extern "C" {
void *beNDMWStageCtlInfoRam_vtableRead(){
 UnknownGenObject8033446C object;
 object.unknown00=beBaseInfoRam_vtable;
 object.unknown28.value=0;
 object.unknown00=beNDMWStageCtlInfoRam_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
