#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804DB3F4[];
extern char lbl_804DCDF0[];
}
struct UnknownGenRoot802BB998 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802BB998(){fn_8006665C(this);}
};
struct UnknownGenObject802BB998_0 : UnknownGenRoot802BB998 {
 char unknown04[36];
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject802BB998_0(){unknown00=lbl_804DCDF0;}
};
struct UnknownGenObject802BB998 : UnknownGenObject802BB998_0 {
 char unknown2C[4];
 UnknownGenRefMember unknown30;
 char unknown34[12];
 inline ~UnknownGenObject802BB998(){unknown00=lbl_804DB3F4;}
};
extern "C" {
void *beSaveUtilInfoRam_vtableRead(){
 UnknownGenObject802BB998 object;
 object.unknown00=lbl_804DCDF0;
 object.unknown28.value=0;
 object.unknown00=lbl_804DB3F4;
 object.unknown30.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
