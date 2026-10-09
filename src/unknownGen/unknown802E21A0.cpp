#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804D475C[];
extern char lbl_804DBC50[];
}
struct UnknownGenRoot802E21A0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802E21A0(){fn_8006665C(this);}
};
struct UnknownGenObject802E21A0_0 : UnknownGenRoot802E21A0 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802E21A0_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802E21A0_1 : UnknownGenObject802E21A0_0 {
 inline ~UnknownGenObject802E21A0_1(){unknown00=lbl_804DBC50;}
};
struct UnknownGenObject802E21A0 : UnknownGenObject802E21A0_1 {
 char unknown0C[32];
 UnknownGenString unknown2C;
 char unknown30[16];
 inline ~UnknownGenObject802E21A0(){unknown00=lbl_804D475C;}
};
extern "C" {
void *beCameraCtrlInfoRamShake_vtableRead(){
 UnknownGenObject802E21A0 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804DBC50;
 object.unknown00=lbl_804D475C;
 object.unknown2C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
