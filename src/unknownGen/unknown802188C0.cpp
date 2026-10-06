#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804BBD38[];
extern char lbl_804BBD94[];
extern char lbl_804BCA64[];
}
struct UnknownGenRoot802188C0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802188C0(){fn_8006665C(this);}
};
struct UnknownGenObject802188C0_0 : UnknownGenRoot802188C0 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject802188C0_0(){unknown00=lbl_804BCA64;}
};
struct UnknownGenObject802188C0_1 : UnknownGenObject802188C0_0 {
 inline ~UnknownGenObject802188C0_1(){unknown00=lbl_804BBD94;}
};
struct UnknownGenObject802188C0 : UnknownGenObject802188C0_1 {
 char unknown0C[36];
 inline ~UnknownGenObject802188C0(){unknown00=lbl_804BBD38;}
};
extern "C" {
void *fn_802188C0(){
 UnknownGenObject802188C0 object;
 object.unknown00=lbl_804BCA64;
 object.unknown08.value=0;
 object.unknown00=lbl_804BBD94;
 object.unknown00=lbl_804BBD38;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
