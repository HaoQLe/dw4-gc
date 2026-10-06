#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804E6A60[];
extern char lbl_804EC5AC[];
extern char lbl_804EC720[];
}
struct UnknownGenRoot80327D78 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80327D78(){fn_8006665C(this);}
};
struct UnknownGenObject80327D78_0 : UnknownGenRoot80327D78 {
 char unknown04[48];
 UnknownGenRefMember unknown34;
 UnknownGenRefMember unknown38;
 UnknownGenRefMember unknown3C;
 UnknownGenRefMember unknown40;
 UnknownGenRefMember unknown44;
 UnknownGenRefMember unknown48;
 UnknownGenRefMember unknown4C;
 inline ~UnknownGenObject80327D78_0(){unknown00=lbl_804E6A60;}
};
struct UnknownGenObject80327D78_1 : UnknownGenObject80327D78_0 {
 inline ~UnknownGenObject80327D78_1(){unknown00=lbl_804EC720;}
};
struct UnknownGenObject80327D78 : UnknownGenObject80327D78_1 {
 char unknown50[8];
 inline ~UnknownGenObject80327D78(){unknown00=lbl_804EC5AC;}
};
extern "C" {
void *fn_80327D78(){
 UnknownGenObject80327D78 object;
 object.unknown00=lbl_804E6A60;
 object.unknown34.value=0;
 object.unknown38.value=0;
 object.unknown3C.value=0;
 object.unknown40.value=0;
 object.unknown44.value=0;
 object.unknown48.value=0;
 object.unknown4C.value=0;
 object.unknown00=lbl_804EC720;
 object.unknown00=lbl_804EC5AC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
