#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80472460[];
extern char lbl_8047650C[];
extern char lbl_804DCD14[];
extern char lbl_804E69FC[];
}
struct UnknownGenRoot8032AAAC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8032AAAC(){fn_8006665C(this);}
};
struct UnknownGenObject8032AAAC_0 : UnknownGenRoot8032AAAC {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8032AAAC_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject8032AAAC_1 : UnknownGenObject8032AAAC_0 {
 inline ~UnknownGenObject8032AAAC_1(){unknown00=lbl_80472460;}
};
struct UnknownGenObject8032AAAC_2 : UnknownGenObject8032AAAC_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 inline ~UnknownGenObject8032AAAC_2(){unknown00=lbl_804DCD14;}
};
struct UnknownGenObject8032AAAC : UnknownGenObject8032AAAC_2 {
 char unknown1C[12];
 inline ~UnknownGenObject8032AAAC(){unknown00=lbl_804E69FC;}
};
extern "C" {
void *beNDMWStatusInfo_vtableRead(){
 UnknownGenObject8032AAAC object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80472460;
 object.unknown00=lbl_804DCD14;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown00=lbl_804E69FC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
