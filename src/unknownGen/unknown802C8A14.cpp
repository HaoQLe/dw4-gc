#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80472460[];
extern char lbl_8047650C[];
extern char lbl_804D98B0[];
extern char lbl_804DCD14[];
}
struct UnknownGenRoot802C8A14 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802C8A14(){fn_8006665C(this);}
};
struct UnknownGenObject802C8A14_0 : UnknownGenRoot802C8A14 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802C8A14_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802C8A14_1 : UnknownGenObject802C8A14_0 {
 inline ~UnknownGenObject802C8A14_1(){unknown00=lbl_80472460;}
};
struct UnknownGenObject802C8A14_2 : UnknownGenObject802C8A14_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 inline ~UnknownGenObject802C8A14_2(){unknown00=lbl_804DCD14;}
};
struct UnknownGenObject802C8A14 : UnknownGenObject802C8A14_2 {
 UnknownGenString unknown1C;
 char unknown20[8];
 inline ~UnknownGenObject802C8A14(){unknown00=lbl_804D98B0;}
};
extern "C" {
void *fn_802C8A14(){
 UnknownGenObject802C8A14 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80472460;
 object.unknown00=lbl_804DCD14;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown00=lbl_804D98B0;
 object.unknown1C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
