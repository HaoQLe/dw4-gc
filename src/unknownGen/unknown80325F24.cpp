#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80472460[];
extern char lbl_8047650C[];
extern char lbl_804DCD14[];
extern char lbl_804E6BEC[];
}
struct UnknownGenRoot80325F24 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80325F24(){fn_8006665C(this);}
};
struct UnknownGenObject80325F24_0 : UnknownGenRoot80325F24 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject80325F24_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject80325F24_1 : UnknownGenObject80325F24_0 {
 inline ~UnknownGenObject80325F24_1(){unknown00=lbl_80472460;}
};
struct UnknownGenObject80325F24_2 : UnknownGenObject80325F24_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 inline ~UnknownGenObject80325F24_2(){unknown00=lbl_804DCD14;}
};
struct UnknownGenObject80325F24 : UnknownGenObject80325F24_2 {
 char unknown1C[12];
 inline ~UnknownGenObject80325F24(){unknown00=lbl_804E6BEC;}
};
extern "C" {
void *fn_80325F24(){
 UnknownGenObject80325F24 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80472460;
 object.unknown00=lbl_804DCD14;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown00=lbl_804E6BEC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
