#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804CBA60[];
extern char lbl_804DD724[];
extern char lbl_804DFD40[];
}
struct UnknownGenRoot802B34B0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802B34B0(){fn_8006665C(this);}
};
struct UnknownGenObject802B34B0_0 : UnknownGenRoot802B34B0 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802B34B0_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802B34B0_1 : UnknownGenObject802B34B0_0 {
 inline ~UnknownGenObject802B34B0_1(){unknown00=lbl_804CBA60;}
};
struct UnknownGenObject802B34B0_2 : UnknownGenObject802B34B0_1 {
 char unknown0C[12];
 UnknownGenRefMember unknown18;
 inline ~UnknownGenObject802B34B0_2(){unknown00=lbl_804DD724;}
};
struct UnknownGenObject802B34B0 : UnknownGenObject802B34B0_2 {
 char unknown1C[4];
 UnknownGenRefMember unknown20;
 char unknown24[4];
 inline ~UnknownGenObject802B34B0(){unknown00=lbl_804DFD40;}
};
extern "C" {
void *beWeapon_vtableRead(){
 UnknownGenObject802B34B0 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804CBA60;
 object.unknown00=lbl_804DD724;
 object.unknown18.value=0;
 object.unknown00=lbl_804DFD40;
 object.unknown20.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
