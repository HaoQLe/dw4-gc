#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80495B3C[];
extern char lbl_80497ED4[];
}
struct UnknownGenRoot8010D130 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010D130(){fn_8006665C(this);}
};
struct UnknownGenObject8010D130_0 : UnknownGenRoot8010D130 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[28];
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject8010D130_0(){unknown00=lbl_80497ED4;}
};
struct UnknownGenObject8010D130 : UnknownGenObject8010D130_0 {
 UnknownGenRefMember unknown2C;
 UnknownGenRefMember unknown30;
 UnknownGenString unknown34;
 char unknown38[8];
 inline ~UnknownGenObject8010D130(){unknown00=lbl_80495B3C;}
};
extern "C" {
void *fn_8010D130(){
 UnknownGenObject8010D130 object;
 object.unknown00=lbl_80497ED4;
 object.unknown08.value=0;
 object.unknown28.value=0;
 object.unknown00=lbl_80495B3C;
 object.unknown2C.value=0;
 object.unknown30.value=0;
 object.unknown34.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
