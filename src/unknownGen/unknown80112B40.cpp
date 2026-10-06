#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80475764[];
extern char lbl_804971DC[];
extern char lbl_80497238[];
}
struct UnknownGenRoot80112B40 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80112B40(){fn_8006665C(this);}
};
struct UnknownGenObject80112B40_0 : UnknownGenRoot80112B40 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject80112B40_0(){unknown00=lbl_80475764;}
};
struct UnknownGenObject80112B40_1 : UnknownGenObject80112B40_0 {
 inline ~UnknownGenObject80112B40_1(){unknown00=lbl_80497238;}
};
struct UnknownGenObject80112B40 : UnknownGenObject80112B40_1 {
 char unknown18[16];
 inline ~UnknownGenObject80112B40(){unknown00=lbl_804971DC;}
};
extern "C" {
void *fn_80112B40(){
 UnknownGenObject80112B40 object;
 object.unknown00=lbl_80475764;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown00=lbl_80497238;
 object.unknown00=lbl_804971DC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
