#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804DA6F4[];
extern char lbl_804DCDF0[];
}
struct UnknownGenRoot802C2F3C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802C2F3C(){fn_8006665C(this);}
};
struct UnknownGenObject802C2F3C_0 : UnknownGenRoot802C2F3C {
 char unknown04[36];
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject802C2F3C_0(){unknown00=lbl_804DCDF0;}
};
struct UnknownGenObject802C2F3C : UnknownGenObject802C2F3C_0 {
 UnknownGenRefMember unknown2C;
 char unknown30[12];
 UnknownGenRefMember unknown3C;
 UnknownGenRefMember unknown40;
 char unknown44[4];
 inline ~UnknownGenObject802C2F3C(){unknown00=lbl_804DA6F4;}
};
extern "C" {
void *fn_802C2F3C(){
 UnknownGenObject802C2F3C object;
 object.unknown00=lbl_804DCDF0;
 object.unknown28.value=0;
 object.unknown00=lbl_804DA6F4;
 object.unknown2C.value=0;
 object.unknown3C.value=0;
 object.unknown40.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
