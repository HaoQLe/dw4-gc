#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80475764[];
}
struct UnknownGenRoot80032F48 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80032F48(){fn_8006665C(this);}
};
struct UnknownGenObject80032F48 : UnknownGenRoot80032F48 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 char unknown18[16];
 inline ~UnknownGenObject80032F48(){unknown00=lbl_80475764;}
};
extern "C" {
void *fn_80032F48(){
 UnknownGenObject80032F48 object;
 object.unknown00=lbl_80475764;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
