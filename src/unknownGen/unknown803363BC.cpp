#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804CBA60[];
extern char lbl_804DD724[];
extern char lbl_804EB3E0[];
}
struct UnknownGenRoot803363BC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot803363BC(){fn_8006665C(this);}
};
struct UnknownGenObject803363BC_0 : UnknownGenRoot803363BC {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject803363BC_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject803363BC_1 : UnknownGenObject803363BC_0 {
 inline ~UnknownGenObject803363BC_1(){unknown00=lbl_804CBA60;}
};
struct UnknownGenObject803363BC_2 : UnknownGenObject803363BC_1 {
 char unknown0C[12];
 UnknownGenRefMember unknown18;
 inline ~UnknownGenObject803363BC_2(){unknown00=lbl_804DD724;}
};
struct UnknownGenObject803363BC : UnknownGenObject803363BC_2 {
 char unknown1C[4];
 UnknownGenRefMember unknown20;
 char unknown24[4];
 inline ~UnknownGenObject803363BC(){unknown00=lbl_804EB3E0;}
};
extern "C" {
void *beNDMWSaveCtrl_vtableRead(){
 UnknownGenObject803363BC object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804CBA60;
 object.unknown00=lbl_804DD724;
 object.unknown18.value=0;
 object.unknown00=lbl_804EB3E0;
 object.unknown20.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
