#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804DAA8C[];
extern char lbl_804DCDF0[];
}
struct UnknownGenRoot802C1400 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802C1400(){fn_8006665C(this);}
};
struct UnknownGenObject802C1400_0 : UnknownGenRoot802C1400 {
 char unknown04[36];
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject802C1400_0(){unknown00=lbl_804DCDF0;}
};
struct UnknownGenObject802C1400 : UnknownGenObject802C1400_0 {
 UnknownGenRefMember unknown2C;
 UnknownGenRefMember unknown30;
 UnknownGenRefMember unknown34;
 inline ~UnknownGenObject802C1400(){unknown00=lbl_804DAA8C;}
};
extern "C" {
void *beParticleCtrl2InfoRam_vtableRead(){
 UnknownGenObject802C1400 object;
 object.unknown00=lbl_804DCDF0;
 object.unknown28.value=0;
 object.unknown00=lbl_804DAA8C;
 object.unknown2C.value=0;
 object.unknown30.value=0;
 object.unknown34.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
