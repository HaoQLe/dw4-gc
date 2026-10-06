#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_80493840[];
extern char lbl_804938A4[];
}
struct UnknownGenRoot800D357C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800D357C(){fn_8006665C(this);}
};
struct UnknownGenObject800D357C : UnknownGenRoot800D357C {
 char unknown04[16];
 UnknownGenString unknown14;
 char unknown18[8];
 inline ~UnknownGenObject800D357C(){unknown00=lbl_80493840;}
};
extern "C" {
void *fn_800D357C(){
 UnknownGenObject800D357C object;
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804938A4;
 object.unknown00=lbl_80493840;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
