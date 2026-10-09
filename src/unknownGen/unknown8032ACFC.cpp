#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804DCDF0[];
extern char lbl_804E6974[];
}
struct UnknownGenRoot8032ACFC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8032ACFC(){fn_8006665C(this);}
};
struct UnknownGenObject8032ACFC_0 : UnknownGenRoot8032ACFC {
 char unknown04[36];
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject8032ACFC_0(){unknown00=lbl_804DCDF0;}
};
struct UnknownGenObject8032ACFC : UnknownGenObject8032ACFC_0 {
 UnknownGenRefMember unknown2C;
 inline ~UnknownGenObject8032ACFC(){unknown00=lbl_804E6974;}
};
extern "C" {
void *beNDMWStatusInfoRam_vtableRead(){
 UnknownGenObject8032ACFC object;
 object.unknown00=lbl_804DCDF0;
 object.unknown28.value=0;
 object.unknown00=lbl_804E6974;
 object.unknown2C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
