#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A2EAC[];
}
struct UnknownGenRoot801312A0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801312A0(){fn_8006665C(this);}
};
struct UnknownGenObject801312A0 : UnknownGenRoot801312A0 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject801312A0(){unknown00=lbl_804A2EAC;}
};
extern "C" {
void *fn_801312A0(){
 UnknownGenObject801312A0 object;
 object.unknown00=lbl_804A2EAC;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
