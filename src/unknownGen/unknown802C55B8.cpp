#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804D9E80[];
extern char lbl_804DEF48[];
}
struct UnknownGenRoot802C55B8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802C55B8(){fn_8006665C(this);}
};
struct UnknownGenObject802C55B8 : UnknownGenRoot802C55B8 {
 char unknown04[16];
 UnknownGenString unknown14;
 char unknown18[8];
 inline ~UnknownGenObject802C55B8(){unknown00=lbl_804DEF48;}
};
extern "C" {
void *fn_802C55B8(){
 UnknownGenObject802C55B8 object;
 object.unknown00=lbl_804D9E80;
 object.unknown00=lbl_804DEF48;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
