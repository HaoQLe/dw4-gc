#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804DB218[];
extern char lbl_804DB2EC[];
}
struct UnknownGenRoot802BC484 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802BC484(){fn_8006665C(this);}
};
struct UnknownGenObject802BC484_0 : UnknownGenRoot802BC484 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject802BC484_0(){unknown00=lbl_804DB2EC;}
};
struct UnknownGenObject802BC484 : UnknownGenObject802BC484_0 {
 char unknown10[20];
 UnknownGenRefMember unknown24;
 char unknown28[8];
 inline ~UnknownGenObject802BC484(){unknown00=lbl_804DB218;}
};
extern "C" {
void *fn_802BC484(){
 UnknownGenObject802BC484 object;
 object.unknown00=lbl_804DB2EC;
 object.unknown0C.value=0;
 object.unknown00=lbl_804DB218;
 object.unknown24.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
