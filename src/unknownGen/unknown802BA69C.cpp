#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804DB714[];
}
struct UnknownGenRoot802BA69C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802BA69C(){fn_8006665C(this);}
};
struct UnknownGenObject802BA69C : UnknownGenRoot802BA69C {
 char unknown04[24];
 UnknownGenString unknown1C;
 UnknownGenRefMember unknown20;
 char unknown24[12];
 inline ~UnknownGenObject802BA69C(){unknown00=lbl_804DB714;}
};
extern "C" {
void *beSelectCtrlInfoWork_vtableRead(){
 UnknownGenObject802BA69C object;
 object.unknown00=lbl_804DB714;
 object.unknown1C.value=0;
 object.unknown20.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
