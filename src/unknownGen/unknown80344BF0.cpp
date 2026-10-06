#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80472460[];
extern char lbl_8047650C[];
extern char lbl_804DCD14[];
extern char lbl_804E451C[];
}
struct UnknownGenRoot80344BF0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80344BF0(){fn_8006665C(this);}
};
struct UnknownGenObject80344BF0_0 : UnknownGenRoot80344BF0 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject80344BF0_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject80344BF0_1 : UnknownGenObject80344BF0_0 {
 inline ~UnknownGenObject80344BF0_1(){unknown00=lbl_80472460;}
};
struct UnknownGenObject80344BF0_2 : UnknownGenObject80344BF0_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 inline ~UnknownGenObject80344BF0_2(){unknown00=lbl_804DCD14;}
};
struct UnknownGenObject80344BF0 : UnknownGenObject80344BF0_2 {
 char unknown1C[12];
 inline ~UnknownGenObject80344BF0(){unknown00=lbl_804E451C;}
};
extern "C" {
void *fn_80344BF0(){
 UnknownGenObject80344BF0 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80472460;
 object.unknown00=lbl_804DCD14;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown00=lbl_804E451C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
