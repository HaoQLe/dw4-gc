#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80472460[];
extern char lbl_8047650C[];
extern char lbl_804D7EF8[];
extern char lbl_804DCD14[];
}
struct UnknownGenRoot802D04A0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802D04A0(){fn_8006665C(this);}
};
struct UnknownGenObject802D04A0_0 : UnknownGenRoot802D04A0 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802D04A0_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802D04A0_1 : UnknownGenObject802D04A0_0 {
 inline ~UnknownGenObject802D04A0_1(){unknown00=lbl_80472460;}
};
struct UnknownGenObject802D04A0_2 : UnknownGenObject802D04A0_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 inline ~UnknownGenObject802D04A0_2(){unknown00=lbl_804DCD14;}
};
struct UnknownGenObject802D04A0 : UnknownGenObject802D04A0_2 {
 UnknownGenRefMember unknown1C;
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 char unknown28[8];
 inline ~UnknownGenObject802D04A0(){unknown00=lbl_804D7EF8;}
};
extern "C" {
void *beMatCtrlInfo_vtableRead(){
 UnknownGenObject802D04A0 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80472460;
 object.unknown00=lbl_804DCD14;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown00=lbl_804D7EF8;
 object.unknown1C.value=0;
 object.unknown20.value=0;
 object.unknown24.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
