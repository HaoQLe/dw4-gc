#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804DBF60[];
}
struct UnknownGenRoot802B640C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802B640C(){fn_8006665C(this);}
};
struct UnknownGenObject802B640C_0 : UnknownGenRoot802B640C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802B640C_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802B640C : UnknownGenObject802B640C_0 {
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject802B640C(){unknown00=lbl_804DBF60;}
};
extern "C" {
void *fn_802B640C(){
 UnknownGenObject802B640C object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804DBF60;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
