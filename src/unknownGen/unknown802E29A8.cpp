#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80472460[];
extern char lbl_8047650C[];
extern char lbl_804D46D4[];
extern char lbl_804DCD14[];
}
struct UnknownGenRoot802E29A8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802E29A8(){fn_8006665C(this);}
};
struct UnknownGenObject802E29A8_0 : UnknownGenRoot802E29A8 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802E29A8_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802E29A8_1 : UnknownGenObject802E29A8_0 {
 inline ~UnknownGenObject802E29A8_1(){unknown00=lbl_80472460;}
};
struct UnknownGenObject802E29A8_2 : UnknownGenObject802E29A8_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 inline ~UnknownGenObject802E29A8_2(){unknown00=lbl_804DCD14;}
};
struct UnknownGenObject802E29A8 : UnknownGenObject802E29A8_2 {
 char unknown1C[28];
 inline ~UnknownGenObject802E29A8(){unknown00=lbl_804D46D4;}
};
extern "C" {
void *beBkColorInfo_vtableRead(){
 UnknownGenObject802E29A8 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80472460;
 object.unknown00=lbl_804DCD14;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown00=lbl_804D46D4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
