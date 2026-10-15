#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char beNumberCtrlInfoRam_vtable[];
extern char beBaseInfoRam_vtable[];
}
struct UnknownGenRoot802C2F3C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802C2F3C(){fn_8006665C(this);}
};
struct UnknownGenObject802C2F3C_0 : UnknownGenRoot802C2F3C {
 char unknown04[36];
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject802C2F3C_0(){unknown00=beBaseInfoRam_vtable;}
};
struct UnknownGenObject802C2F3C : UnknownGenObject802C2F3C_0 {
 UnknownGenRefMember unknown2C;
 char unknown30[12];
 UnknownGenRefMember unknown3C;
 UnknownGenRefMember unknown40;
 char unknown44[4];
 inline ~UnknownGenObject802C2F3C(){unknown00=beNumberCtrlInfoRam_vtable;}
};
extern "C" {
void *beNumberCtrlInfoRam_vtableRead(){
 UnknownGenObject802C2F3C object;
 object.unknown00=beBaseInfoRam_vtable;
 object.unknown28.value=0;
 object.unknown00=beNumberCtrlInfoRam_vtable;
 object.unknown2C.value=0;
 object.unknown3C.value=0;
 object.unknown40.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
