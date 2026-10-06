#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A4304[];
}
struct UnknownGenRoot801392D8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801392D8(){fn_8006665C(this);}
};
struct UnknownGenObject801392D8 : UnknownGenRoot801392D8 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 char unknown1C[12];
 inline ~UnknownGenObject801392D8(){unknown00=lbl_804A4304;}
};
extern "C" {
void *fn_801392D8(){
 UnknownGenObject801392D8 object;
 object.unknown00=lbl_804A4304;
 object.unknown08.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown18.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
