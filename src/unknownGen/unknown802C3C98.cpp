#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char igInfo_vtable[];
extern char igNamedObject_vtable[];
extern char beNumberCtrlInfo_vtable[];
extern char lbl_804DCD14[];
}
struct UnknownGenRoot802C3C98 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802C3C98(){fn_8006665C(this);}
};
struct UnknownGenObject802C3C98_0 : UnknownGenRoot802C3C98 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802C3C98_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802C3C98_1 : UnknownGenObject802C3C98_0 {
 inline ~UnknownGenObject802C3C98_1(){unknown00=igInfo_vtable;}
};
struct UnknownGenObject802C3C98_2 : UnknownGenObject802C3C98_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 inline ~UnknownGenObject802C3C98_2(){unknown00=lbl_804DCD14;}
};
struct UnknownGenObject802C3C98 : UnknownGenObject802C3C98_2 {
 char unknown1C[12];
 inline ~UnknownGenObject802C3C98(){unknown00=beNumberCtrlInfo_vtable;}
};
extern "C" {
void *beNumberCtrlInfo_vtableRead(){
 UnknownGenObject802C3C98 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igInfo_vtable;
 object.unknown00=lbl_804DCD14;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown00=beNumberCtrlInfo_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
