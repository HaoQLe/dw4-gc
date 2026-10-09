#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804E6888[];
extern char lbl_804E6A60[];
extern char lbl_804EC074[];
}
struct UnknownGenRoot8033398C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8033398C(){fn_8006665C(this);}
};
struct UnknownGenObject8033398C_0 : UnknownGenRoot8033398C {
 char unknown04[48];
 UnknownGenRefMember unknown34;
 UnknownGenRefMember unknown38;
 UnknownGenRefMember unknown3C;
 UnknownGenRefMember unknown40;
 UnknownGenRefMember unknown44;
 UnknownGenRefMember unknown48;
 UnknownGenRefMember unknown4C;
 inline ~UnknownGenObject8033398C_0(){unknown00=lbl_804E6A60;}
};
struct UnknownGenObject8033398C_1 : UnknownGenObject8033398C_0 {
 inline ~UnknownGenObject8033398C_1(){unknown00=lbl_804E6888;}
};
struct UnknownGenObject8033398C : UnknownGenObject8033398C_1 {
 char unknown50[8];
 inline ~UnknownGenObject8033398C(){unknown00=lbl_804EC074;}
};
extern "C" {
void *beNDMWStatusCtrl00_vtableRead(){
 UnknownGenObject8033398C object;
 object.unknown00=lbl_804E6A60;
 object.unknown34.value=0;
 object.unknown38.value=0;
 object.unknown3C.value=0;
 object.unknown40.value=0;
 object.unknown44.value=0;
 object.unknown48.value=0;
 object.unknown4C.value=0;
 object.unknown00=lbl_804E6888;
 object.unknown00=lbl_804EC074;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
