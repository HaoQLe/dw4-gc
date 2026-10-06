#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804E0C74[];
extern char lbl_804E0F88[];
}
struct UnknownGenRoot802BE144 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802BE144(){fn_8006665C(this);}
};
struct UnknownGenObject802BE144_0 : UnknownGenRoot802BE144 {
 char unknown04[44];
 UnknownGenRefMember unknown30;
 UnknownGenRefMember unknown34;
 UnknownGenRefMember unknown38;
 inline ~UnknownGenObject802BE144_0(){unknown00=lbl_804E0F88;}
};
struct UnknownGenObject802BE144 : UnknownGenObject802BE144_0 {
 char unknown3C[152];
 UnknownGenRefMember unknownD4;
 UnknownGenRefMember unknownD8;
 char unknownDC[4];
 inline ~UnknownGenObject802BE144(){unknown00=lbl_804E0C74;}
};
extern "C" {
void *fn_802BE144(){
 UnknownGenObject802BE144 object;
 object.unknown00=lbl_804E0F88;
 object.unknown30.value=0;
 object.unknown34.value=0;
 object.unknown38.value=0;
 object.unknown00=lbl_804E0C74;
 object.unknownD4.value=0;
 object.unknownD8.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
