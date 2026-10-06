#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804A8194[];
extern char lbl_804AAF48[];
}
struct UnknownGenRoot801515BC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801515BC(){fn_8006665C(this);}
};
struct UnknownGenObject801515BC_0 : UnknownGenRoot801515BC {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject801515BC_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject801515BC : UnknownGenObject801515BC_0 {
 char unknown28[16];
 UnknownGenString unknown38;
 char unknown3C[12];
 inline ~UnknownGenObject801515BC(){unknown00=lbl_804A8194;}
};
extern "C" {
void *fn_801515BC(){
 UnknownGenObject801515BC object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A8194;
 object.unknown38.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
