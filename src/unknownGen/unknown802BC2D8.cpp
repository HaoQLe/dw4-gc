#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804DB290[];
extern char lbl_804DB2EC[];
}
struct UnknownGenRoot802BC2D8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802BC2D8(){fn_8006665C(this);}
};
struct UnknownGenObject802BC2D8_0 : UnknownGenRoot802BC2D8 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject802BC2D8_0(){unknown00=lbl_804DB2EC;}
};
struct UnknownGenObject802BC2D8 : UnknownGenObject802BC2D8_0 {
 char unknown10[16];
 inline ~UnknownGenObject802BC2D8(){unknown00=lbl_804DB290;}
};
extern "C" {
void *fn_802BC2D8(){
 UnknownGenObject802BC2D8 object;
 object.unknown00=lbl_804DB2EC;
 object.unknown0C.value=0;
 object.unknown00=lbl_804DB290;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
