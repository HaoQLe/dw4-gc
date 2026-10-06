#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8046F87C[];
extern char lbl_8047156C[];
}
struct UnknownGenRoot8003AB24 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8003AB24(){fn_8006665C(this);}
};
struct UnknownGenObject8003AB24_0 : UnknownGenRoot8003AB24 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject8003AB24_0(){unknown00=lbl_8047156C;}
};
struct UnknownGenObject8003AB24 : UnknownGenObject8003AB24_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 char unknown18[32];
 inline ~UnknownGenObject8003AB24(){unknown00=lbl_8046F87C;}
};
extern "C" {
void *fn_8003AB24(){
 UnknownGenObject8003AB24 object;
 object.unknown00=lbl_8047156C;
 object.unknown08.value=0;
 object.unknown00=lbl_8046F87C;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
