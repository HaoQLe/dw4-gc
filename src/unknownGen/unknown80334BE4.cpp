#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80472460[];
extern char lbl_8047650C[];
extern char lbl_804DCD14[];
extern char lbl_804E66EC[];
}
struct UnknownGenRoot80334BE4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80334BE4(){fn_8006665C(this);}
};
struct UnknownGenObject80334BE4_0 : UnknownGenRoot80334BE4 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject80334BE4_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject80334BE4_1 : UnknownGenObject80334BE4_0 {
 inline ~UnknownGenObject80334BE4_1(){unknown00=lbl_80472460;}
};
struct UnknownGenObject80334BE4_2 : UnknownGenObject80334BE4_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 inline ~UnknownGenObject80334BE4_2(){unknown00=lbl_804DCD14;}
};
struct UnknownGenObject80334BE4 : UnknownGenObject80334BE4_2 {
 char unknown1C[12];
 inline ~UnknownGenObject80334BE4(){unknown00=lbl_804E66EC;}
};
extern "C" {
void *fn_80334BE4(){
 UnknownGenObject80334BE4 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80472460;
 object.unknown00=lbl_804DCD14;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown00=lbl_804E66EC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
