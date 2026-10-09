#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80472460[];
extern char lbl_8047650C[];
extern char lbl_804DBDF8[];
extern char lbl_804DCD14[];
}
struct UnknownGenRoot802B7A18 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802B7A18(){fn_8006665C(this);}
};
struct UnknownGenObject802B7A18_0 : UnknownGenRoot802B7A18 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802B7A18_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802B7A18_1 : UnknownGenObject802B7A18_0 {
 inline ~UnknownGenObject802B7A18_1(){unknown00=lbl_80472460;}
};
struct UnknownGenObject802B7A18_2 : UnknownGenObject802B7A18_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 inline ~UnknownGenObject802B7A18_2(){unknown00=lbl_804DCD14;}
};
struct UnknownGenObject802B7A18 : UnknownGenObject802B7A18_2 {
 UnknownGenRefMember unknown1C;
 char unknown20[8];
 inline ~UnknownGenObject802B7A18(){unknown00=lbl_804DBDF8;}
};
extern "C" {
void *beSwitchCtrlInfo_vtableRead(){
 UnknownGenObject802B7A18 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80472460;
 object.unknown00=lbl_804DCD14;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown00=lbl_804DBDF8;
 object.unknown1C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
