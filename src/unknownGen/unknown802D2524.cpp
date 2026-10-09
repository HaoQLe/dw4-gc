#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804CBA60[];
extern char lbl_804DE70C[];
}
struct UnknownGenRoot802D2524 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802D2524(){fn_8006665C(this);}
};
struct UnknownGenObject802D2524_0 : UnknownGenRoot802D2524 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802D2524_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802D2524_1 : UnknownGenObject802D2524_0 {
 inline ~UnknownGenObject802D2524_1(){unknown00=lbl_804CBA60;}
};
struct UnknownGenObject802D2524 : UnknownGenObject802D2524_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 UnknownGenRefMember unknown1C;
 char unknown20[8];
 inline ~UnknownGenObject802D2524(){unknown00=lbl_804DE70C;}
};
extern "C" {
void *beLua_vtableRead(){
 UnknownGenObject802D2524 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804CBA60;
 object.unknown00=lbl_804DE70C;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown1C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
