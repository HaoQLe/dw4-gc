#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804D483C[];
}
struct UnknownGenRoot802E1B84 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802E1B84(){fn_8006665C(this);}
};
struct UnknownGenObject802E1B84 : UnknownGenRoot802E1B84 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[20];
 inline ~UnknownGenObject802E1B84(){unknown00=lbl_804D483C;}
};
extern "C" {
void *fn_802E1B84(){
 UnknownGenObject802E1B84 object;
 object.unknown00=lbl_804D483C;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
