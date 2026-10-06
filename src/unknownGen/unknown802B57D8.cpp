#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804CBA60[];
extern char lbl_804E0264[];
}
struct UnknownGenRoot802B57D8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802B57D8(){fn_8006665C(this);}
};
struct UnknownGenObject802B57D8_0 : UnknownGenRoot802B57D8 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802B57D8_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802B57D8_1 : UnknownGenObject802B57D8_0 {
 inline ~UnknownGenObject802B57D8_1(){unknown00=lbl_804CBA60;}
};
struct UnknownGenObject802B57D8 : UnknownGenObject802B57D8_1 {
 char unknown0C[16];
 UnknownGenRefMember unknown1C;
 char unknown20[16];
 inline ~UnknownGenObject802B57D8(){unknown00=lbl_804E0264;}
};
extern "C" {
void *fn_802B57D8(){
 UnknownGenObject802B57D8 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804CBA60;
 object.unknown00=lbl_804E0264;
 object.unknown1C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
