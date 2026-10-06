#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804CBA60[];
extern char lbl_804DE9D8[];
}
struct UnknownGenRoot802CDFA4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802CDFA4(){fn_8006665C(this);}
};
struct UnknownGenObject802CDFA4_0 : UnknownGenRoot802CDFA4 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802CDFA4_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802CDFA4_1 : UnknownGenObject802CDFA4_0 {
 inline ~UnknownGenObject802CDFA4_1(){unknown00=lbl_804CBA60;}
};
struct UnknownGenObject802CDFA4 : UnknownGenObject802CDFA4_1 {
 char unknown0C[4];
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 UnknownGenRefMember unknown1C;
 UnknownGenRefMember unknown20;
 char unknown24[28];
 inline ~UnknownGenObject802CDFA4(){unknown00=lbl_804DE9D8;}
};
extern "C" {
void *fn_802CDFA4(){
 UnknownGenObject802CDFA4 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804CBA60;
 object.unknown00=lbl_804DE9D8;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown1C.value=0;
 object.unknown20.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
