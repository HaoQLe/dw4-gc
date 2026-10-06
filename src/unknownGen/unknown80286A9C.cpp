#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80475764[];
extern char lbl_804CB3A4[];
extern char lbl_804CB400[];
}
struct UnknownGenRoot80286A9C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80286A9C(){fn_8006665C(this);}
};
struct UnknownGenObject80286A9C_0 : UnknownGenRoot80286A9C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject80286A9C_0(){unknown00=lbl_80475764;}
};
struct UnknownGenObject80286A9C_1 : UnknownGenObject80286A9C_0 {
 inline ~UnknownGenObject80286A9C_1(){unknown00=lbl_804CB400;}
};
struct UnknownGenObject80286A9C : UnknownGenObject80286A9C_1 {
 char unknown18[16];
 inline ~UnknownGenObject80286A9C(){unknown00=lbl_804CB3A4;}
};
extern "C" {
void *fn_80286A9C(){
 UnknownGenObject80286A9C object;
 object.unknown00=lbl_80475764;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown00=lbl_804CB400;
 object.unknown00=lbl_804CB3A4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
