#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80470EF4[];
}
struct UnknownGenRoot8002492C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8002492C(){fn_8006665C(this);}
};
struct UnknownGenObject8002492C : UnknownGenRoot8002492C {
 char unknown04[12];
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 char unknown18[8];
 inline ~UnknownGenObject8002492C(){unknown00=lbl_80470EF4;}
};
extern "C" {
void *fn_8002492C(){
 UnknownGenObject8002492C object;
 object.unknown00=lbl_80470EF4;
 object.unknown10.value=0;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
