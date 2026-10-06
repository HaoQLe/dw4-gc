#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804DB794[];
extern char lbl_804DBC50[];
}
struct UnknownGenRoot802BA24C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802BA24C(){fn_8006665C(this);}
};
struct UnknownGenObject802BA24C_0 : UnknownGenRoot802BA24C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802BA24C_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802BA24C_1 : UnknownGenObject802BA24C_0 {
 inline ~UnknownGenObject802BA24C_1(){unknown00=lbl_804DBC50;}
};
struct UnknownGenObject802BA24C : UnknownGenObject802BA24C_1 {
 char unknown0C[16];
 UnknownGenRefMember unknown1C;
 inline ~UnknownGenObject802BA24C(){unknown00=lbl_804DB794;}
};
extern "C" {
void *fn_802BA24C(){
 UnknownGenObject802BA24C object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804DBC50;
 object.unknown00=lbl_804DB794;
 object.unknown1C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
