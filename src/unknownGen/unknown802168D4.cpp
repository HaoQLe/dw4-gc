#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804BCA64[];
}
struct UnknownGenRoot802168D4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802168D4(){fn_8006665C(this);}
};
struct UnknownGenObject802168D4 : UnknownGenRoot802168D4 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject802168D4(){unknown00=lbl_804BCA64;}
};
extern "C" {
void *fn_802168D4(){
 UnknownGenObject802168D4 object;
 object.unknown00=lbl_804BCA64;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
