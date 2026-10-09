#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804DC704[];
extern char lbl_804DCDF0[];
}
struct UnknownGenRoot802B41B0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802B41B0(){fn_8006665C(this);}
};
struct UnknownGenObject802B41B0_0 : UnknownGenRoot802B41B0 {
 char unknown04[36];
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject802B41B0_0(){unknown00=lbl_804DCDF0;}
};
struct UnknownGenObject802B41B0 : UnknownGenObject802B41B0_0 {
 char unknown2C[40];
 UnknownGenRefMember unknown54;
 UnknownGenRefMember unknown58;
 UnknownGenRefMember unknown5C;
 char unknown60[56];
 UnknownGenRefMember unknown98;
 char unknown9C[20];
 UnknownGenRefMember unknownB0;
 char unknownB4[12];
 inline ~UnknownGenObject802B41B0(){unknown00=lbl_804DC704;}
};
extern "C" {
void *beWaterPlainInfoRam_vtableRead(){
 UnknownGenObject802B41B0 object;
 object.unknown00=lbl_804DCDF0;
 object.unknown28.value=0;
 object.unknown00=lbl_804DC704;
 object.unknown54.value=0;
 object.unknown58.value=0;
 object.unknown5C.value=0;
 object.unknown98.value=0;
 object.unknownB0.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
