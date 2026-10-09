#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804DC68C[];
}
struct UnknownGenRoot802B45E8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802B45E8(){fn_8006665C(this);}
};
struct UnknownGenObject802B45E8 : UnknownGenRoot802B45E8 {
 char unknown04[32];
 UnknownGenRefMember unknown24;
 char unknown28[8];
 inline ~UnknownGenObject802B45E8(){unknown00=lbl_804DC68C;}
};
extern "C" {
void *beWaterMove_vtableRead(){
 UnknownGenObject802B45E8 object;
 object.unknown00=lbl_804DC68C;
 object.unknown24.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
