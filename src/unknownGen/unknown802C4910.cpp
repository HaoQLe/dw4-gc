#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80472460[];
extern char lbl_8047650C[];
extern char lbl_804DA004[];
extern char lbl_804DCD14[];
}
struct UnknownGenRoot802C4910 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802C4910(){fn_8006665C(this);}
};
struct UnknownGenObject802C4910_0 : UnknownGenRoot802C4910 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802C4910_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802C4910_1 : UnknownGenObject802C4910_0 {
 inline ~UnknownGenObject802C4910_1(){unknown00=lbl_80472460;}
};
struct UnknownGenObject802C4910_2 : UnknownGenObject802C4910_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 inline ~UnknownGenObject802C4910_2(){unknown00=lbl_804DCD14;}
};
struct UnknownGenObject802C4910 : UnknownGenObject802C4910_2 {
 char unknown1C[12];
 inline ~UnknownGenObject802C4910(){unknown00=lbl_804DA004;}
};
extern "C" {
void *fn_802C4910(){
 UnknownGenObject802C4910 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80472460;
 object.unknown00=lbl_804DCD14;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown00=lbl_804DA004;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
