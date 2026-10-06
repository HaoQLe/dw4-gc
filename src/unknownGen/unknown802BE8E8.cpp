#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804E0D84[];
extern char lbl_804E0F88[];
}
struct UnknownGenRoot802BE8E8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802BE8E8(){fn_8006665C(this);}
};
struct UnknownGenObject802BE8E8_0 : UnknownGenRoot802BE8E8 {
 char unknown04[44];
 UnknownGenRefMember unknown30;
 UnknownGenRefMember unknown34;
 UnknownGenRefMember unknown38;
 inline ~UnknownGenObject802BE8E8_0(){unknown00=lbl_804E0F88;}
};
struct UnknownGenObject802BE8E8 : UnknownGenObject802BE8E8_0 {
 char unknown3C[156];
 inline ~UnknownGenObject802BE8E8(){unknown00=lbl_804E0D84;}
};
extern "C" {
void *fn_802BE8E8(){
 UnknownGenObject802BE8E8 object;
 object.unknown00=lbl_804E0F88;
 object.unknown30.value=0;
 object.unknown34.value=0;
 object.unknown38.value=0;
 object.unknown00=lbl_804E0D84;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
