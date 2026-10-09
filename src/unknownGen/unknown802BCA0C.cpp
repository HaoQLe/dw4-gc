#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804DB130[];
extern char lbl_804DB2EC[];
}
struct UnknownGenRoot802BCA0C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802BCA0C(){fn_8006665C(this);}
};
struct UnknownGenObject802BCA0C_0 : UnknownGenRoot802BCA0C {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject802BCA0C_0(){unknown00=lbl_804DB2EC;}
};
struct UnknownGenObject802BCA0C : UnknownGenObject802BCA0C_0 {
 char unknown10[8];
 UnknownGenString unknown18;
 UnknownGenString unknown1C;
 char unknown20[152];
 UnknownGenString unknownB8;
 UnknownGenString unknownBC;
 UnknownGenString unknownC0;
 char unknownC4[16];
 UnknownGenRefMember unknownD4;
 inline ~UnknownGenObject802BCA0C(){unknown00=lbl_804DB130;}
};
extern "C" {
void *beSvPlatDataPS2_vtableRead(){
 UnknownGenObject802BCA0C object;
 object.unknown00=lbl_804DB2EC;
 object.unknown0C.value=0;
 object.unknown00=lbl_804DB130;
 object.unknown18.value=0;
 object.unknown1C.value=0;
 object.unknownB8.value=0;
 object.unknownBC.value=0;
 object.unknownC0.value=0;
 object.unknownD4.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
