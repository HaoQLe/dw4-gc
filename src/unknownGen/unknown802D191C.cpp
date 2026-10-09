#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80472460[];
extern char lbl_8047650C[];
extern char lbl_804D7B30[];
extern char lbl_804DCD14[];
}
struct UnknownGenRoot802D191C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802D191C(){fn_8006665C(this);}
};
struct UnknownGenObject802D191C_0 : UnknownGenRoot802D191C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802D191C_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802D191C_1 : UnknownGenObject802D191C_0 {
 inline ~UnknownGenObject802D191C_1(){unknown00=lbl_80472460;}
};
struct UnknownGenObject802D191C_2 : UnknownGenObject802D191C_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 inline ~UnknownGenObject802D191C_2(){unknown00=lbl_804DCD14;}
};
struct UnknownGenObject802D191C : UnknownGenObject802D191C_2 {
 UnknownGenRefMember unknown1C;
 char unknown20[8];
 inline ~UnknownGenObject802D191C(){unknown00=lbl_804D7B30;}
};
extern "C" {
void *beLuaInfo_vtableRead(){
 UnknownGenObject802D191C object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80472460;
 object.unknown00=lbl_804DCD14;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown00=lbl_804D7B30;
 object.unknown1C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
