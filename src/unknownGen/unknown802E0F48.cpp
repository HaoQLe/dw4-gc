#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char igInfo_vtable[];
extern char igNamedObject_vtable[];
extern char beChangePosTransformInfo_vtable[];
extern char lbl_804DCD14[];
}
struct UnknownGenRoot802E0F48 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802E0F48(){fn_8006665C(this);}
};
struct UnknownGenObject802E0F48_0 : UnknownGenRoot802E0F48 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802E0F48_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802E0F48_1 : UnknownGenObject802E0F48_0 {
 inline ~UnknownGenObject802E0F48_1(){unknown00=igInfo_vtable;}
};
struct UnknownGenObject802E0F48_2 : UnknownGenObject802E0F48_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 inline ~UnknownGenObject802E0F48_2(){unknown00=lbl_804DCD14;}
};
struct UnknownGenObject802E0F48 : UnknownGenObject802E0F48_2 {
 char unknown1C[12];
 inline ~UnknownGenObject802E0F48(){unknown00=beChangePosTransformInfo_vtable;}
};
extern "C" {
void *beChangePosTransformInfo_vtableRead(){
 UnknownGenObject802E0F48 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igInfo_vtable;
 object.unknown00=lbl_804DCD14;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown00=beChangePosTransformInfo_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
