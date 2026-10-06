#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804B7ED8[];
}
struct UnknownGenRoot801B8560 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801B8560(){fn_8006665C(this);}
};
struct UnknownGenObject801B8560 : UnknownGenRoot801B8560 {
 char unknown04[44];
 UnknownGenRefMember unknown30;
 UnknownGenRefMember unknown34;
 UnknownGenRefMember unknown38;
 UnknownGenRefMember unknown3C;
 UnknownGenRefMember unknown40;
 UnknownGenRefMember unknown44;
 char unknown48[24];
 inline ~UnknownGenObject801B8560(){unknown00=lbl_804B7ED8;}
};
extern "C" {
void *fn_801B8560(){
 UnknownGenObject801B8560 object;
 object.unknown00=lbl_804B7ED8;
 object.unknown30.value=0;
 object.unknown34.value=0;
 object.unknown38.value=0;
 object.unknown3C.value=0;
 object.unknown40.value=0;
 object.unknown44.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
