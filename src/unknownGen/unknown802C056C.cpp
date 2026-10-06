#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804DAC4C[];
}
struct UnknownGenRoot802C056C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802C056C(){fn_8006665C(this);}
};
struct UnknownGenObject802C056C : UnknownGenRoot802C056C {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 char unknown10[32];
 UnknownGenRefMember unknown30;
 UnknownGenRefMember unknown34;
 UnknownGenRefMember unknown38;
 UnknownGenRefMember unknown3C;
 UnknownGenRefMember unknown40;
 char unknown44[12];
 inline ~UnknownGenObject802C056C(){unknown00=lbl_804DAC4C;}
};
extern "C" {
void *fn_802C056C(){
 UnknownGenObject802C056C object;
 object.unknown00=lbl_804DAC4C;
 object.unknown0C.value=0;
 object.unknown30.value=0;
 object.unknown34.value=0;
 object.unknown38.value=0;
 object.unknown3C.value=0;
 object.unknown40.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
