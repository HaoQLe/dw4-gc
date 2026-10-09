#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804CBA60[];
extern char lbl_804DD724[];
extern char lbl_804E1460[];
}
struct UnknownGenRoot802B69C8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802B69C8(){fn_8006665C(this);}
};
struct UnknownGenObject802B69C8_0 : UnknownGenRoot802B69C8 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802B69C8_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802B69C8_1 : UnknownGenObject802B69C8_0 {
 inline ~UnknownGenObject802B69C8_1(){unknown00=lbl_804CBA60;}
};
struct UnknownGenObject802B69C8_2 : UnknownGenObject802B69C8_1 {
 char unknown0C[12];
 UnknownGenRefMember unknown18;
 inline ~UnknownGenObject802B69C8_2(){unknown00=lbl_804DD724;}
};
struct UnknownGenObject802B69C8 : UnknownGenObject802B69C8_2 {
 char unknown1C[8];
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject802B69C8(){unknown00=lbl_804E1460;}
};
extern "C" {
void *beTextureCtrl_vtableRead(){
 UnknownGenObject802B69C8 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804CBA60;
 object.unknown00=lbl_804DD724;
 object.unknown18.value=0;
 object.unknown00=lbl_804E1460;
 object.unknown24.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
