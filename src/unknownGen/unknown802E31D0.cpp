#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804DCDF0[];
}
struct UnknownGenRoot802E31D0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802E31D0(){fn_8006665C(this);}
};
struct UnknownGenObject802E31D0 : UnknownGenRoot802E31D0 {
 char unknown04[36];
 UnknownGenRefMember unknown28;
 char unknown2C[4];
 inline ~UnknownGenObject802E31D0(){unknown00=lbl_804DCDF0;}
};
extern "C" {
void *fn_802E31D0(){
 UnknownGenObject802E31D0 object;
 object.unknown00=lbl_804DCDF0;
 object.unknown28.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
