#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804CBA60[];
extern char lbl_804DD724[];
extern char lbl_804DD840[];
}
struct UnknownGenRoot802E2D14 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802E2D14(){fn_8006665C(this);}
};
struct UnknownGenObject802E2D14_0 : UnknownGenRoot802E2D14 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802E2D14_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802E2D14_1 : UnknownGenObject802E2D14_0 {
 inline ~UnknownGenObject802E2D14_1(){unknown00=lbl_804CBA60;}
};
struct UnknownGenObject802E2D14_2 : UnknownGenObject802E2D14_1 {
 char unknown0C[12];
 UnknownGenRefMember unknown18;
 inline ~UnknownGenObject802E2D14_2(){unknown00=lbl_804DD724;}
};
struct UnknownGenObject802E2D14 : UnknownGenObject802E2D14_2 {
 char unknown1C[20];
 inline ~UnknownGenObject802E2D14(){unknown00=lbl_804DD840;}
};
extern "C" {
void *fn_802E2D14(){
 UnknownGenObject802E2D14 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804CBA60;
 object.unknown00=lbl_804DD724;
 object.unknown18.value=0;
 object.unknown00=lbl_804DD840;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
