#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80472460[];
extern char lbl_8047650C[];
extern char lbl_804DA99C[];
extern char lbl_804DCD14[];
}
struct UnknownGenRoot802C1AFC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802C1AFC(){fn_8006665C(this);}
};
struct UnknownGenObject802C1AFC_0 : UnknownGenRoot802C1AFC {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802C1AFC_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802C1AFC_1 : UnknownGenObject802C1AFC_0 {
 inline ~UnknownGenObject802C1AFC_1(){unknown00=lbl_80472460;}
};
struct UnknownGenObject802C1AFC_2 : UnknownGenObject802C1AFC_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 inline ~UnknownGenObject802C1AFC_2(){unknown00=lbl_804DCD14;}
};
struct UnknownGenObject802C1AFC : UnknownGenObject802C1AFC_2 {
 UnknownGenRefMember unknown1C;
 UnknownGenRefMember unknown20;
 char unknown24[12];
 inline ~UnknownGenObject802C1AFC(){unknown00=lbl_804DA99C;}
};
extern "C" {
void *beParticleCtrl2Info_vtableRead(){
 UnknownGenObject802C1AFC object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80472460;
 object.unknown00=lbl_804DCD14;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown00=lbl_804DA99C;
 object.unknown1C.value=0;
 object.unknown20.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
