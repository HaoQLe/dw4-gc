#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80472460[];
extern char lbl_8047650C[];
extern char lbl_804DBFE8[];
extern char lbl_804DCD14[];
}
struct UnknownGenRoot802B60BC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802B60BC(){fn_8006665C(this);}
};
struct UnknownGenObject802B60BC_0 : UnknownGenRoot802B60BC {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802B60BC_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802B60BC_1 : UnknownGenObject802B60BC_0 {
 inline ~UnknownGenObject802B60BC_1(){unknown00=lbl_80472460;}
};
struct UnknownGenObject802B60BC_2 : UnknownGenObject802B60BC_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 inline ~UnknownGenObject802B60BC_2(){unknown00=lbl_804DCD14;}
};
struct UnknownGenObject802B60BC : UnknownGenObject802B60BC_2 {
 char unknown1C[4];
 UnknownGenRefMember unknown20;
 char unknown24[4];
 inline ~UnknownGenObject802B60BC(){unknown00=lbl_804DBFE8;}
};
extern "C" {
void *beTextureCtrlInfo_vtableRead(){
 UnknownGenObject802B60BC object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80472460;
 object.unknown00=lbl_804DCD14;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown00=lbl_804DBFE8;
 object.unknown20.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
