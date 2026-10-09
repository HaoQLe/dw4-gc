#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80472460[];
extern char lbl_8047650C[];
extern char lbl_804E4468[];
}
struct UnknownGenRoot80344E40 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80344E40(){fn_8006665C(this);}
};
struct UnknownGenObject80344E40_0 : UnknownGenRoot80344E40 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject80344E40_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject80344E40_1 : UnknownGenObject80344E40_0 {
 inline ~UnknownGenObject80344E40_1(){unknown00=lbl_80472460;}
};
struct UnknownGenObject80344E40 : UnknownGenObject80344E40_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 char unknown1C[12];
 inline ~UnknownGenObject80344E40(){unknown00=lbl_804E4468;}
};
extern "C" {
void *beNDMWAfsSetupInfo_vtableRead(){
 UnknownGenObject80344E40 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80472460;
 object.unknown00=lbl_804E4468;
 object.unknown14.value=0;
 object.unknown18.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
