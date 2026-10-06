#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804D5650[];
}
struct UnknownGenRoot802DCB2C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802DCB2C(){fn_8006665C(this);}
};
struct UnknownGenObject802DCB2C_0 : UnknownGenRoot802DCB2C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802DCB2C_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802DCB2C : UnknownGenObject802DCB2C_0 {
 UnknownGenString unknown0C;
 inline ~UnknownGenObject802DCB2C(){unknown00=lbl_804D5650;}
};
extern "C" {
void *fn_802DCB2C(){
 UnknownGenObject802DCB2C object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804D5650;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
