#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80497724[];
extern char lbl_804DE500[];
}
struct UnknownGenRoot802D42F8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802D42F8(){fn_8006665C(this);}
};
struct UnknownGenObject802D42F8 : UnknownGenRoot802D42F8 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject802D42F8(){unknown00=lbl_804DE500;}
};
extern "C" {
void *beKeyboardReceiver_vtableRead(){
 UnknownGenObject802D42F8 object;
 object.unknown00=lbl_80497724;
 object.unknown00=lbl_804DE500;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
