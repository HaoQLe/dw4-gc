#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804DCD94[];
extern char lbl_804DCDF0[];
}
struct UnknownGenRoot802B2968 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802B2968(){fn_8006665C(this);}
};
struct UnknownGenObject802B2968_0 : UnknownGenRoot802B2968 {
 char unknown04[36];
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject802B2968_0(){unknown00=lbl_804DCDF0;}
};
struct UnknownGenObject802B2968 : UnknownGenObject802B2968_0 {
 char unknown2C[4];
 inline ~UnknownGenObject802B2968(){unknown00=lbl_804DCD94;}
};
extern "C" {
void *fn_802B2968(){
 UnknownGenObject802B2968 object;
 object.unknown00=lbl_804DCDF0;
 object.unknown28.value=0;
 object.unknown00=lbl_804DCD94;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
