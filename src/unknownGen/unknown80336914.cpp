#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804DCDF0[];
extern char lbl_804E622C[];
}
struct UnknownGenRoot80336914 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80336914(){fn_8006665C(this);}
};
struct UnknownGenObject80336914_0 : UnknownGenRoot80336914 {
 char unknown04[36];
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject80336914_0(){unknown00=lbl_804DCDF0;}
};
struct UnknownGenObject80336914 : UnknownGenObject80336914_0 {
 UnknownGenRefMember unknown2C;
 inline ~UnknownGenObject80336914(){unknown00=lbl_804E622C;}
};
extern "C" {
void *fn_80336914(){
 UnknownGenObject80336914 object;
 object.unknown00=lbl_804DCDF0;
 object.unknown28.value=0;
 object.unknown00=lbl_804E622C;
 object.unknown2C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
