#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804B326C[];
extern char lbl_804B4474[];
}
struct UnknownGenRoot801BD744 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801BD744(){fn_8006665C(this);}
};
struct UnknownGenObject801BD744_0 : UnknownGenRoot801BD744 {
 char unknown04[24];
 UnknownGenRefMember unknown1C;
 inline ~UnknownGenObject801BD744_0(){unknown00=lbl_804B326C;}
};
struct UnknownGenObject801BD744 : UnknownGenObject801BD744_0 {
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 UnknownGenRefMember unknown28;
 char unknown2C[8];
 UnknownGenRefMember unknown34;
 UnknownGenRefMember unknown38;
 char unknown3C[4];
 inline ~UnknownGenObject801BD744(){unknown00=lbl_804B4474;}
};
extern "C" {
void *fn_801BD744(){
 UnknownGenObject801BD744 object;
 object.unknown00=lbl_804B326C;
 object.unknown1C.value=0;
 object.unknown00=lbl_804B4474;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown28.value=0;
 object.unknown34.value=0;
 object.unknown38.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
