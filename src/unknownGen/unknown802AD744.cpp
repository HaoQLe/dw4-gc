#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804CDE20[];
extern char lbl_804CEA18[];
}
struct UnknownGenRoot802AD744 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802AD744(){fn_8006665C(this);}
};
struct UnknownGenObject802AD744 : UnknownGenRoot802AD744 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject802AD744(){unknown00=lbl_804CEA18;}
};
extern "C" {
void *igMoviePlugin_vtableRead(){
 UnknownGenObject802AD744 object;
 object.unknown00=lbl_804CDE20;
 object.unknown00=lbl_804CEA18;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
