#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80475764[];
extern char lbl_80497B88[];
extern char lbl_80497BE4[];
}
struct UnknownGenRoot8010E074 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010E074(){fn_8006665C(this);}
};
struct UnknownGenObject8010E074_0 : UnknownGenRoot8010E074 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject8010E074_0(){unknown00=lbl_80475764;}
};
struct UnknownGenObject8010E074_1 : UnknownGenObject8010E074_0 {
 inline ~UnknownGenObject8010E074_1(){unknown00=lbl_80497BE4;}
};
struct UnknownGenObject8010E074 : UnknownGenObject8010E074_1 {
 char unknown18[16];
 inline ~UnknownGenObject8010E074(){unknown00=lbl_80497B88;}
};
extern "C" {
void *fn_8010E074(){
 UnknownGenObject8010E074 object;
 object.unknown00=lbl_80475764;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown00=lbl_80497BE4;
 object.unknown00=lbl_80497B88;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
