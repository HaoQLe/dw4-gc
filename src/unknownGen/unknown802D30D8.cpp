#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804D75B8[];
extern char lbl_804DCDF0[];
}
struct UnknownGenRoot802D30D8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802D30D8(){fn_8006665C(this);}
};
struct UnknownGenObject802D30D8_0 : UnknownGenRoot802D30D8 {
 char unknown04[36];
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject802D30D8_0(){unknown00=lbl_804DCDF0;}
};
struct UnknownGenObject802D30D8 : UnknownGenObject802D30D8_0 {
 char unknown2C[4];
 inline ~UnknownGenObject802D30D8(){unknown00=lbl_804D75B8;}
};
extern "C" {
void *fn_802D30D8(){
 UnknownGenObject802D30D8 object;
 object.unknown00=lbl_804DCDF0;
 object.unknown28.value=0;
 object.unknown00=lbl_804D75B8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
