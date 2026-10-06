#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A2F08[];
}
struct UnknownGenRoot801314E4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801314E4(){fn_8006665C(this);}
};
struct UnknownGenObject801314E4 : UnknownGenRoot801314E4 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject801314E4(){unknown00=lbl_804A2F08;}
};
extern "C" {
void *fn_801314E4(){
 UnknownGenObject801314E4 object;
 object.unknown00=lbl_804A2F08;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
