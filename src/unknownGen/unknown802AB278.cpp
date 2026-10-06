#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804727A4[];
extern char lbl_8047650C[];
extern char lbl_804CD89C[];
}
struct UnknownGenRoot802AB278 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802AB278(){fn_8006665C(this);}
};
struct UnknownGenObject802AB278_0 : UnknownGenRoot802AB278 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802AB278_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802AB278_1 : UnknownGenObject802AB278_0 {
 UnknownGenString unknown0C;
 char unknown10[24];
 UnknownGenString unknown28;
 inline ~UnknownGenObject802AB278_1(){unknown00=lbl_804727A4;}
};
struct UnknownGenObject802AB278 : UnknownGenObject802AB278_1 {
 char unknown2C[60];
 inline ~UnknownGenObject802AB278(){unknown00=lbl_804CD89C;}
};
extern "C" {
void *fn_802AB278(){
 UnknownGenObject802AB278 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804727A4;
 object.unknown0C.value=0;
 object.unknown28.value=0;
 object.unknown00=lbl_804CD89C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
