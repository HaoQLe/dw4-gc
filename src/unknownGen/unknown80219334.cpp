#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804BB680[];
}
struct UnknownGenRoot80219334 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80219334(){fn_8006665C(this);}
};
struct UnknownGenObject80219334 : UnknownGenRoot80219334 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenString unknown10;
 UnknownGenString unknown14;
 UnknownGenRefMember unknown18;
 char unknown1C[4];
 inline ~UnknownGenObject80219334(){unknown00=lbl_804BB680;}
};
extern "C" {
void *fn_80219334(){
 UnknownGenObject80219334 object;
 object.unknown00=lbl_804BB680;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown18.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
