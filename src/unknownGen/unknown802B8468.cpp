#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80472460[];
extern char lbl_8047650C[];
extern char lbl_804DBD68[];
extern char lbl_804DCD14[];
}
struct UnknownGenRoot802B8468 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802B8468(){fn_8006665C(this);}
};
struct UnknownGenObject802B8468_0 : UnknownGenRoot802B8468 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802B8468_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802B8468_1 : UnknownGenObject802B8468_0 {
 inline ~UnknownGenObject802B8468_1(){unknown00=lbl_80472460;}
};
struct UnknownGenObject802B8468_2 : UnknownGenObject802B8468_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 inline ~UnknownGenObject802B8468_2(){unknown00=lbl_804DCD14;}
};
struct UnknownGenObject802B8468 : UnknownGenObject802B8468_2 {
 char unknown1C[12];
 inline ~UnknownGenObject802B8468(){unknown00=lbl_804DBD68;}
};
extern "C" {
void *fn_802B8468(){
 UnknownGenObject802B8468 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80472460;
 object.unknown00=lbl_804DCD14;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown00=lbl_804DBD68;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
