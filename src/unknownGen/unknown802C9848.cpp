#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804D96A8[];
extern char lbl_804DBC50[];
}
struct UnknownGenRoot802C9848 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802C9848(){fn_8006665C(this);}
};
struct UnknownGenObject802C9848_0 : UnknownGenRoot802C9848 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802C9848_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802C9848_1 : UnknownGenObject802C9848_0 {
 inline ~UnknownGenObject802C9848_1(){unknown00=lbl_804DBC50;}
};
struct UnknownGenObject802C9848 : UnknownGenObject802C9848_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 char unknown18[8];
 inline ~UnknownGenObject802C9848(){unknown00=lbl_804D96A8;}
};
extern "C" {
void *beModelCtrlInfoDataHit_vtableRead(){
 UnknownGenObject802C9848 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804DBC50;
 object.unknown00=lbl_804D96A8;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
