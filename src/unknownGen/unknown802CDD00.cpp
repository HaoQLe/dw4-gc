#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804CBA60[];
extern char lbl_804DD724[];
extern char lbl_804DEB08[];
}
struct UnknownGenRoot802CDD00 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802CDD00(){fn_8006665C(this);}
};
struct UnknownGenObject802CDD00_0 : UnknownGenRoot802CDD00 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802CDD00_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802CDD00_1 : UnknownGenObject802CDD00_0 {
 inline ~UnknownGenObject802CDD00_1(){unknown00=lbl_804CBA60;}
};
struct UnknownGenObject802CDD00_2 : UnknownGenObject802CDD00_1 {
 char unknown0C[12];
 UnknownGenRefMember unknown18;
 inline ~UnknownGenObject802CDD00_2(){unknown00=lbl_804DD724;}
};
struct UnknownGenObject802CDD00 : UnknownGenObject802CDD00_2 {
 char unknown1C[4];
 inline ~UnknownGenObject802CDD00(){unknown00=lbl_804DEB08;}
};
extern "C" {
void *beMeterCtrl_vtableRead(){
 UnknownGenObject802CDD00 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804CBA60;
 object.unknown00=lbl_804DD724;
 object.unknown18.value=0;
 object.unknown00=lbl_804DEB08;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
