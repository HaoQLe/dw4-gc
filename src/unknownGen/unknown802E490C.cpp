#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804D3EE0[];
}
struct UnknownGenRoot802E490C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802E490C(){fn_8006665C(this);}
};
struct UnknownGenObject802E490C_0 : UnknownGenRoot802E490C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802E490C_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802E490C : UnknownGenObject802E490C_0 {
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject802E490C(){unknown00=lbl_804D3EE0;}
};
extern "C" {
void *fn_802E490C(){
 UnknownGenObject802E490C object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804D3EE0;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
