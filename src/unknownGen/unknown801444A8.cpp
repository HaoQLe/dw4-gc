#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A9B30[];
extern char lbl_804A9C44[];
}
struct UnknownGenRoot801444A8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801444A8(){fn_8006665C(this);}
};
struct UnknownGenObject801444A8 : UnknownGenRoot801444A8 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject801444A8(){unknown00=lbl_804A9B30;}
};
extern "C" {
void *fn_801444A8(){
 UnknownGenObject801444A8 object;
 object.unknown00=lbl_804A9C44;
 object.unknown00=lbl_804A9B30;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
