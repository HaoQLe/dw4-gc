#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804D7980[];
}
struct UnknownGenRoot802D1E3C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802D1E3C(){fn_8006665C(this);}
};
struct UnknownGenObject802D1E3C_0 : UnknownGenRoot802D1E3C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802D1E3C_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802D1E3C : UnknownGenObject802D1E3C_0 {
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject802D1E3C(){unknown00=lbl_804D7980;}
};
extern "C" {
void *fn_802D1E3C(){
 UnknownGenObject802D1E3C object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804D7980;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
