#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804D7D48[];
}
struct UnknownGenRoot802D0AA4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802D0AA4(){fn_8006665C(this);}
};
struct UnknownGenObject802D0AA4 : UnknownGenRoot802D0AA4 {
 char unknown04[20];
 UnknownGenRefMember unknown18;
 char unknown1C[4];
 inline ~UnknownGenObject802D0AA4(){unknown00=lbl_804D7D48;}
};
extern "C" {
void *beMatCtrlSearch_vtableRead(){
 UnknownGenObject802D0AA4 object;
 object.unknown00=lbl_804D7D48;
 object.unknown18.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
