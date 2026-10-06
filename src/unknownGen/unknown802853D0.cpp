#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804CB728[];
extern char lbl_804CBFA0[];
}
struct UnknownGenRoot802853D0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802853D0(){fn_8006665C(this);}
};
struct UnknownGenObject802853D0 : UnknownGenRoot802853D0 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject802853D0(){unknown00=lbl_804CBFA0;}
};
extern "C" {
void *fn_802853D0(){
 UnknownGenObject802853D0 object;
 object.unknown00=lbl_804CB728;
 object.unknown00=lbl_804CBFA0;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
