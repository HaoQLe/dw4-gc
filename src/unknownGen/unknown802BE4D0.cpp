#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804E0CFC[];
extern char lbl_804E0F88[];
}
struct UnknownGenRoot802BE4D0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802BE4D0(){fn_8006665C(this);}
};
struct UnknownGenObject802BE4D0_0 : UnknownGenRoot802BE4D0 {
 char unknown04[44];
 UnknownGenRefMember unknown30;
 UnknownGenRefMember unknown34;
 UnknownGenRefMember unknown38;
 inline ~UnknownGenObject802BE4D0_0(){unknown00=lbl_804E0F88;}
};
struct UnknownGenObject802BE4D0 : UnknownGenObject802BE4D0_0 {
 char unknown3C[156];
 UnknownGenRefMember unknownD8;
 char unknownDC[4];
 UnknownGenRefMember unknownE0;
 UnknownGenRefMember unknownE4;
 char unknownE8[8];
 inline ~UnknownGenObject802BE4D0(){unknown00=lbl_804E0CFC;}
};
extern "C" {
void *beSvReadMediaApi_vtableRead(){
 UnknownGenObject802BE4D0 object;
 object.unknown00=lbl_804E0F88;
 object.unknown30.value=0;
 object.unknown34.value=0;
 object.unknown38.value=0;
 object.unknown00=lbl_804E0CFC;
 object.unknownD8.value=0;
 object.unknownE0.value=0;
 object.unknownE4.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
